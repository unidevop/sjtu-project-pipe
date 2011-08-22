

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGaussianCubeReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkGaussianCubeReader.h"
#include "vtkImageData.h"
#include "vtkObject.h"
#include "vtkTransform.h"

using namespace System;

namespace vtk {

System::String^ vtkGaussianCubeReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGaussianCubeReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGaussianCubeReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGaussianCubeReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGaussianCubeReader^ vtkGaussianCubeReader::NewInstance()
{
  ::vtkGaussianCubeReader* retVal = static_cast<::vtkGaussianCubeReader*>(vtk::ConvertManagedToNative<::vtkGaussianCubeReader>(m_instance)->NewInstance());
  return gcnew vtkGaussianCubeReader(IntPtr(retVal), false);
}



vtkGaussianCubeReader^ vtkGaussianCubeReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGaussianCubeReader* retVal = static_cast<::vtkGaussianCubeReader*>(::vtkGaussianCubeReader::SafeDownCast(oWrap));
  return gcnew vtkGaussianCubeReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGaussianCubeReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGaussianCubeReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGaussianCubeReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGaussianCubeReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkTransform^ vtkGaussianCubeReader::GetTransform()
{
  ::vtkTransform* retVal = static_cast<::vtkTransform*>(vtk::ConvertManagedToNative<::vtkGaussianCubeReader>(m_instance)->GetTransform());
  return gcnew vtkTransform(IntPtr(retVal), false);
}



void vtkGaussianCubeReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkGaussianCubeReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkGaussianCubeReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGaussianCubeReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



vtkImageData^ vtkGaussianCubeReader::GetGridOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkGaussianCubeReader>(m_instance)->GetGridOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkGaussianCubeReader::vtkGaussianCubeReader(System::IntPtr native, bool bConst) : vtkMoleculeReaderBase(native, bConst) {}



  vtkGaussianCubeReader::vtkGaussianCubeReader(bool donothing) : vtkMoleculeReaderBase(donothing) {}



  vtkGaussianCubeReader::vtkGaussianCubeReader() : vtkMoleculeReaderBase(false) {
  this->SetNativePointer(IntPtr(::vtkGaussianCubeReader::New()));
}



  vtkGaussianCubeReader::~vtkGaussianCubeReader() { }





} // end namespace vtkIO
