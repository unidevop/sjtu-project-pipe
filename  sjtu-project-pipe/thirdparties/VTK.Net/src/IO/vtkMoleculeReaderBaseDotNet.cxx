

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMoleculeReaderBaseDotNet.h"

// native includes
#include "strstream"
#include "vtkMoleculeReaderBase.h"

using namespace System;

namespace vtk {

System::String^ vtkMoleculeReaderBase::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMoleculeReaderBase::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMoleculeReaderBase^ vtkMoleculeReaderBase::NewInstance()
{
  ::vtkMoleculeReaderBase* retVal = static_cast<::vtkMoleculeReaderBase*>(vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->NewInstance());
  return gcnew vtkMoleculeReaderBase(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMoleculeReaderBase::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMoleculeReaderBase::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMoleculeReaderBase::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMoleculeReaderBase::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMoleculeReaderBase::SetBScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->SetBScale(arg0);
}



double vtkMoleculeReaderBase::GetBScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->GetBScale();
  return retVal;
}



void vtkMoleculeReaderBase::SetHBScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->SetHBScale(arg0);
}



double vtkMoleculeReaderBase::GetHBScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->GetHBScale();
  return retVal;
}



int vtkMoleculeReaderBase::GetNumberOfAtoms()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMoleculeReaderBase>(m_instance)->GetNumberOfAtoms();
  return retVal;
}



  vtkMoleculeReaderBase::vtkMoleculeReaderBase(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkMoleculeReaderBase::vtkMoleculeReaderBase(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkMoleculeReaderBase::vtkMoleculeReaderBase() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMoleculeReaderBase::New()));
}



  vtkMoleculeReaderBase::~vtkMoleculeReaderBase() { }





} // end namespace vtkIO
