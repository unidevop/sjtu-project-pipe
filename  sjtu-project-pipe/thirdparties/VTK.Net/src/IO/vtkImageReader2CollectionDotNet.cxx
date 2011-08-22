

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageReader2CollectionDotNet.h"
#include "vtkImageReader2DotNet.h"

// native includes
#include "strstream"
#include "vtkImageReader2Collection.h"
#include "vtkImageReader2.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageReader2Collection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader2Collection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageReader2Collection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2Collection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageReader2Collection^ vtkImageReader2Collection::NewInstance()
{
  ::vtkImageReader2Collection* retVal = static_cast<::vtkImageReader2Collection*>(vtk::ConvertManagedToNative<::vtkImageReader2Collection>(m_instance)->NewInstance());
  return gcnew vtkImageReader2Collection(IntPtr(retVal), false);
}



vtkImageReader2Collection^ vtkImageReader2Collection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageReader2Collection* retVal = static_cast<::vtkImageReader2Collection*>(::vtkImageReader2Collection::SafeDownCast(oWrap));
  return gcnew vtkImageReader2Collection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageReader2Collection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageReader2Collection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageReader2Collection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageReader2Collection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageReader2Collection::AddItem(vtkImageReader2^ arg0)
{
  ::vtkImageReader2* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageReader2>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageReader2Collection>(m_instance)->AddItem(arg0Wrap);
}



vtkImageReader2^ vtkImageReader2Collection::GetNextItem()
{
  ::vtkImageReader2* retVal = static_cast<::vtkImageReader2*>(vtk::ConvertManagedToNative<::vtkImageReader2Collection>(m_instance)->GetNextItem());
  return gcnew vtkImageReader2(IntPtr(retVal), false);
}



  vtkImageReader2Collection::vtkImageReader2Collection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkImageReader2Collection::vtkImageReader2Collection(bool donothing) : vtkCollection(donothing) {}



  vtkImageReader2Collection::vtkImageReader2Collection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkImageReader2Collection::New()));
}



  vtkImageReader2Collection::~vtkImageReader2Collection() { }





} // end namespace vtkIO
