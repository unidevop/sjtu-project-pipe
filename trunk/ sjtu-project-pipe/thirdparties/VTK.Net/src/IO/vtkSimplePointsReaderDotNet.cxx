

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSimplePointsReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkSimplePointsReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSimplePointsReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSimplePointsReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSimplePointsReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSimplePointsReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSimplePointsReader^ vtkSimplePointsReader::NewInstance()
{
  ::vtkSimplePointsReader* retVal = static_cast<::vtkSimplePointsReader*>(vtk::ConvertManagedToNative<::vtkSimplePointsReader>(m_instance)->NewInstance());
  return gcnew vtkSimplePointsReader(IntPtr(retVal), false);
}



vtkSimplePointsReader^ vtkSimplePointsReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSimplePointsReader* retVal = static_cast<::vtkSimplePointsReader*>(::vtkSimplePointsReader::SafeDownCast(oWrap));
  return gcnew vtkSimplePointsReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSimplePointsReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSimplePointsReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSimplePointsReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSimplePointsReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSimplePointsReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkSimplePointsReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkSimplePointsReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSimplePointsReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkSimplePointsReader::vtkSimplePointsReader(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSimplePointsReader::vtkSimplePointsReader(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSimplePointsReader::vtkSimplePointsReader() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSimplePointsReader::New()));
}



  vtkSimplePointsReader::~vtkSimplePointsReader() { }





} // end namespace vtkIO
