

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageReader2FactoryDotNet.h"
#include "vtkImageReader2DotNet.h"
#include "vtkImageReader2CollectionDotNet.h"

// native includes
#include "strstream"
#include "vtkImageReader2Factory.h"
#include "vtkImageReader2.h"
#include "vtkImageReader2Collection.h"

using namespace System;

namespace vtk {

System::String^ vtkImageReader2Factory::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader2Factory>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageReader2Factory::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2Factory>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageReader2Factory^ vtkImageReader2Factory::NewInstance()
{
  ::vtkImageReader2Factory* retVal = static_cast<::vtkImageReader2Factory*>(vtk::ConvertManagedToNative<::vtkImageReader2Factory>(m_instance)->NewInstance());
  return gcnew vtkImageReader2Factory(IntPtr(retVal), false);
}



vtkImageReader2Factory^ vtkImageReader2Factory::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageReader2Factory* retVal = static_cast<::vtkImageReader2Factory*>(::vtkImageReader2Factory::SafeDownCast(oWrap));
  return gcnew vtkImageReader2Factory(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageReader2Factory::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageReader2Factory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageReader2Factory::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageReader2Factory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageReader2Factory::RegisterReader(vtkImageReader2^ r)
{
  ::vtkImageReader2* rWrap = vtk::ConvertManagedToNative<::vtkImageReader2>(r->GetNativePointer());
  ::vtkImageReader2Factory::RegisterReader(rWrap);
}



vtkImageReader2^ vtkImageReader2Factory::CreateImageReader2(System::String^ path)
{
  char* pathWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(path).ToPointer());
  ::vtkImageReader2* retVal = static_cast<::vtkImageReader2*>(::vtkImageReader2Factory::CreateImageReader2(pathWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(pathWrap));
  return gcnew vtkImageReader2(IntPtr(retVal), false);
}



void vtkImageReader2Factory::GetRegisteredReaders(vtkImageReader2Collection^ arg0)
{
  ::vtkImageReader2Collection* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageReader2Collection>(arg0->GetNativePointer());
  ::vtkImageReader2Factory::GetRegisteredReaders(arg0Wrap);
}



  vtkImageReader2Factory::vtkImageReader2Factory(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkImageReader2Factory::vtkImageReader2Factory(bool donothing) : vtkObject(donothing) {}



  vtkImageReader2Factory::vtkImageReader2Factory() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkImageReader2Factory::New()));
}



  vtkImageReader2Factory::~vtkImageReader2Factory() { }





} // end namespace vtkIO
