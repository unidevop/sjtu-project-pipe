

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFacetReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkFacetReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkFacetReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFacetReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFacetReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFacetReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFacetReader^ vtkFacetReader::NewInstance()
{
  ::vtkFacetReader* retVal = static_cast<::vtkFacetReader*>(vtk::ConvertManagedToNative<::vtkFacetReader>(m_instance)->NewInstance());
  return gcnew vtkFacetReader(IntPtr(retVal), false);
}



vtkFacetReader^ vtkFacetReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFacetReader* retVal = static_cast<::vtkFacetReader*>(::vtkFacetReader::SafeDownCast(oWrap));
  return gcnew vtkFacetReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFacetReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFacetReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFacetReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFacetReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFacetReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkFacetReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkFacetReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFacetReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkFacetReader::vtkFacetReader(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkFacetReader::vtkFacetReader(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkFacetReader::vtkFacetReader() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkFacetReader::New()));
}



  vtkFacetReader::~vtkFacetReader() { }





} // end namespace vtkHybrid
