

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCullerCollectionDotNet.h"
#include "vtkCullerDotNet.h"

// native includes
#include "strstream"
#include "vtkCullerCollection.h"
#include "vtkCuller.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCullerCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCullerCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCullerCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCullerCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCullerCollection^ vtkCullerCollection::NewInstance()
{
  ::vtkCullerCollection* retVal = static_cast<::vtkCullerCollection*>(vtk::ConvertManagedToNative<::vtkCullerCollection>(m_instance)->NewInstance());
  return gcnew vtkCullerCollection(IntPtr(retVal), false);
}



vtkCullerCollection^ vtkCullerCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCullerCollection* retVal = static_cast<::vtkCullerCollection*>(::vtkCullerCollection::SafeDownCast(oWrap));
  return gcnew vtkCullerCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCullerCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCullerCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCullerCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCullerCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCullerCollection::AddItem(vtkCuller^ a)
{
  ::vtkCuller* aWrap = vtk::ConvertManagedToNative<::vtkCuller>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCullerCollection>(m_instance)->AddItem(aWrap);
}



vtkCuller^ vtkCullerCollection::GetNextItem()
{
  ::vtkCuller* retVal = static_cast<::vtkCuller*>(vtk::ConvertManagedToNative<::vtkCullerCollection>(m_instance)->GetNextItem());
  return gcnew vtkCuller(IntPtr(retVal), false);
}



vtkCuller^ vtkCullerCollection::GetLastItem()
{
  ::vtkCuller* retVal = static_cast<::vtkCuller*>(vtk::ConvertManagedToNative<::vtkCullerCollection>(m_instance)->GetLastItem());
  return gcnew vtkCuller(IntPtr(retVal), false);
}



  vtkCullerCollection::vtkCullerCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkCullerCollection::vtkCullerCollection(bool donothing) : vtkCollection(donothing) {}



  vtkCullerCollection::vtkCullerCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkCullerCollection::New()));
}



  vtkCullerCollection::~vtkCullerCollection() { }





} // end namespace vtkRendering
