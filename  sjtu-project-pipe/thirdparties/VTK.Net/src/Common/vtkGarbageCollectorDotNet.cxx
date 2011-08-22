

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGarbageCollectorDotNet.h"
#include "vtkObjectBaseDotNet.h"

// native includes
#include "strstream"
#include "vtkGarbageCollector.h"
#include "vtkObjectBase.h"

using namespace System;

namespace vtk {

System::String^ vtkGarbageCollector::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGarbageCollector>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGarbageCollector::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGarbageCollector>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGarbageCollector^ vtkGarbageCollector::NewInstance()
{
  ::vtkGarbageCollector* retVal = static_cast<::vtkGarbageCollector*>(vtk::ConvertManagedToNative<::vtkGarbageCollector>(m_instance)->NewInstance());
  return gcnew vtkGarbageCollector(IntPtr(retVal), false);
}



vtkGarbageCollector^ vtkGarbageCollector::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGarbageCollector* retVal = static_cast<::vtkGarbageCollector*>(::vtkGarbageCollector::SafeDownCast(oWrap));
  return gcnew vtkGarbageCollector(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGarbageCollector::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGarbageCollector>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGarbageCollector::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGarbageCollector>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGarbageCollector::Collect()
{
  ::vtkGarbageCollector::Collect();
}



void vtkGarbageCollector::Collect(vtkObjectBase^ root)
{
  ::vtkObjectBase* rootWrap = static_cast<::vtkObjectBase*>(root->GetNativePointer().ToPointer());
  ::vtkGarbageCollector::Collect(rootWrap);
}



void vtkGarbageCollector::DeferredCollectionPush()
{
  ::vtkGarbageCollector::DeferredCollectionPush();
}



void vtkGarbageCollector::DeferredCollectionPop()
{
  ::vtkGarbageCollector::DeferredCollectionPop();
}



void vtkGarbageCollector::SetGlobalDebugFlag(int flag)
{
  ::vtkGarbageCollector::SetGlobalDebugFlag(flag);
}



int vtkGarbageCollector::GetGlobalDebugFlag()
{
  int retVal = ::vtkGarbageCollector::GetGlobalDebugFlag();
  return retVal;
}



  vtkGarbageCollector::vtkGarbageCollector(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkGarbageCollector::vtkGarbageCollector(bool donothing) : vtkObject(donothing) {}



  vtkGarbageCollector::vtkGarbageCollector() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkGarbageCollector::New()));
}



  vtkGarbageCollector::~vtkGarbageCollector() { }





} // end namespace vtkCommon
