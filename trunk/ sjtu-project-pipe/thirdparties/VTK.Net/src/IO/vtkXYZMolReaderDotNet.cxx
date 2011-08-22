

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXYZMolReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXYZMolReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXYZMolReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXYZMolReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXYZMolReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXYZMolReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXYZMolReader^ vtkXYZMolReader::NewInstance()
{
  ::vtkXYZMolReader* retVal = static_cast<::vtkXYZMolReader*>(vtk::ConvertManagedToNative<::vtkXYZMolReader>(m_instance)->NewInstance());
  return gcnew vtkXYZMolReader(IntPtr(retVal), false);
}



vtkXYZMolReader^ vtkXYZMolReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXYZMolReader* retVal = static_cast<::vtkXYZMolReader*>(::vtkXYZMolReader::SafeDownCast(oWrap));
  return gcnew vtkXYZMolReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXYZMolReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXYZMolReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXYZMolReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXYZMolReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkXYZMolReader::CanReadFile(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXYZMolReader>(m_instance)->CanReadFile(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkXYZMolReader::SetTimeStep(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYZMolReader>(m_instance)->SetTimeStep(arg0);
}



int vtkXYZMolReader::GetTimeStep()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYZMolReader>(m_instance)->GetTimeStep();
  return retVal;
}



int vtkXYZMolReader::GetMaxTimeStep()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYZMolReader>(m_instance)->GetMaxTimeStep();
  return retVal;
}



  vtkXYZMolReader::vtkXYZMolReader(System::IntPtr native, bool bConst) : vtkMoleculeReaderBase(native, bConst) {}



  vtkXYZMolReader::vtkXYZMolReader(bool donothing) : vtkMoleculeReaderBase(donothing) {}



  vtkXYZMolReader::vtkXYZMolReader() : vtkMoleculeReaderBase(false) {
  this->SetNativePointer(IntPtr(::vtkXYZMolReader::New()));
}



  vtkXYZMolReader::~vtkXYZMolReader() { }





} // end namespace vtkIO
