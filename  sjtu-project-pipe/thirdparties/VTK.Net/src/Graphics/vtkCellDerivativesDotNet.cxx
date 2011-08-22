

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCellDerivativesDotNet.h"

// native includes
#include "strstream"
#include "vtkCellDerivatives.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCellDerivatives::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCellDerivatives::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCellDerivatives^ vtkCellDerivatives::NewInstance()
{
  ::vtkCellDerivatives* retVal = static_cast<::vtkCellDerivatives*>(vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->NewInstance());
  return gcnew vtkCellDerivatives(IntPtr(retVal), false);
}



vtkCellDerivatives^ vtkCellDerivatives::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCellDerivatives* retVal = static_cast<::vtkCellDerivatives*>(::vtkCellDerivatives::SafeDownCast(oWrap));
  return gcnew vtkCellDerivatives(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCellDerivatives::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCellDerivatives::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCellDerivatives::SetVectorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->SetVectorMode(arg0);
}



int vtkCellDerivatives::GetVectorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->GetVectorMode();
  return retVal;
}



void vtkCellDerivatives::SetVectorModeToPassVectors()
{
  vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->SetVectorModeToPassVectors();
}



void vtkCellDerivatives::SetVectorModeToComputeGradient()
{
  vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->SetVectorModeToComputeGradient();
}



void vtkCellDerivatives::SetVectorModeToComputeVorticity()
{
  vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->SetVectorModeToComputeVorticity();
}



System::String^ vtkCellDerivatives::GetVectorModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->GetVectorModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkCellDerivatives::SetTensorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->SetTensorMode(arg0);
}



int vtkCellDerivatives::GetTensorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->GetTensorMode();
  return retVal;
}



void vtkCellDerivatives::SetTensorModeToPassTensors()
{
  vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->SetTensorModeToPassTensors();
}



void vtkCellDerivatives::SetTensorModeToComputeGradient()
{
  vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->SetTensorModeToComputeGradient();
}



void vtkCellDerivatives::SetTensorModeToComputeStrain()
{
  vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->SetTensorModeToComputeStrain();
}



System::String^ vtkCellDerivatives::GetTensorModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellDerivatives>(m_instance)->GetTensorModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkCellDerivatives::vtkCellDerivatives(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkCellDerivatives::vtkCellDerivatives(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkCellDerivatives::vtkCellDerivatives() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkCellDerivatives::New()));
}



  vtkCellDerivatives::~vtkCellDerivatives() { }





} // end namespace vtkGraphics
