

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProp3DCollectionDotNet.h"
#include "vtkProp3DDotNet.h"

// native includes
#include "strstream"
#include "vtkProp3DCollection.h"
#include "vtkObject.h"
#include "vtkProp3D.h"

using namespace System;

namespace vtk {

System::String^ vtkProp3DCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProp3DCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProp3DCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProp3DCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProp3DCollection^ vtkProp3DCollection::NewInstance()
{
  ::vtkProp3DCollection* retVal = static_cast<::vtkProp3DCollection*>(vtk::ConvertManagedToNative<::vtkProp3DCollection>(m_instance)->NewInstance());
  return gcnew vtkProp3DCollection(IntPtr(retVal), false);
}



vtkProp3DCollection^ vtkProp3DCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProp3DCollection* retVal = static_cast<::vtkProp3DCollection*>(::vtkProp3DCollection::SafeDownCast(oWrap));
  return gcnew vtkProp3DCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProp3DCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProp3DCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProp3DCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProp3DCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkProp3DCollection::AddItem(vtkProp3D^ p)
{
  ::vtkProp3D* pWrap = vtk::ConvertManagedToNative<::vtkProp3D>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProp3DCollection>(m_instance)->AddItem(pWrap);
}



vtkProp3D^ vtkProp3DCollection::GetNextProp3D()
{
  ::vtkProp3D* retVal = static_cast<::vtkProp3D*>(vtk::ConvertManagedToNative<::vtkProp3DCollection>(m_instance)->GetNextProp3D());
  return gcnew vtkProp3D(IntPtr(retVal), false);
}



vtkProp3D^ vtkProp3DCollection::GetLastProp3D()
{
  ::vtkProp3D* retVal = static_cast<::vtkProp3D*>(vtk::ConvertManagedToNative<::vtkProp3DCollection>(m_instance)->GetLastProp3D());
  return gcnew vtkProp3D(IntPtr(retVal), false);
}



  vtkProp3DCollection::vtkProp3DCollection(System::IntPtr native, bool bConst) : vtkPropCollection(native, bConst) {}



  vtkProp3DCollection::vtkProp3DCollection(bool donothing) : vtkPropCollection(donothing) {}



  vtkProp3DCollection::vtkProp3DCollection() : vtkPropCollection(false) {
  this->SetNativePointer(IntPtr(::vtkProp3DCollection::New()));
}



  vtkProp3DCollection::~vtkProp3DCollection() { }





} // end namespace vtkRendering
