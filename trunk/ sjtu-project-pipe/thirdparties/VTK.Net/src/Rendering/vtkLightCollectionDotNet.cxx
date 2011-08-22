

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLightCollectionDotNet.h"
#include "vtkLightDotNet.h"

// native includes
#include "strstream"
#include "vtkLightCollection.h"
#include "vtkLight.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkLightCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLightCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLightCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLightCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLightCollection^ vtkLightCollection::NewInstance()
{
  ::vtkLightCollection* retVal = static_cast<::vtkLightCollection*>(vtk::ConvertManagedToNative<::vtkLightCollection>(m_instance)->NewInstance());
  return gcnew vtkLightCollection(IntPtr(retVal), false);
}



vtkLightCollection^ vtkLightCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLightCollection* retVal = static_cast<::vtkLightCollection*>(::vtkLightCollection::SafeDownCast(oWrap));
  return gcnew vtkLightCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLightCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLightCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLightCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLightCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLightCollection::AddItem(vtkLight^ a)
{
  ::vtkLight* aWrap = vtk::ConvertManagedToNative<::vtkLight>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLightCollection>(m_instance)->AddItem(aWrap);
}



vtkLight^ vtkLightCollection::GetNextItem()
{
  ::vtkLight* retVal = static_cast<::vtkLight*>(vtk::ConvertManagedToNative<::vtkLightCollection>(m_instance)->GetNextItem());
  return gcnew vtkLight(IntPtr(retVal), false);
}



  vtkLightCollection::vtkLightCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkLightCollection::vtkLightCollection(bool donothing) : vtkCollection(donothing) {}



  vtkLightCollection::vtkLightCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkLightCollection::New()));
}



  vtkLightCollection::~vtkLightCollection() { }





} // end namespace vtkRendering
