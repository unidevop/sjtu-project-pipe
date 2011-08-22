

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricFunctionSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricFunctionSource.h"
#include "vtkObject.h"
#include "vtkParametricFunction.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricFunctionSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricFunctionSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricFunctionSource^ vtkParametricFunctionSource::NewInstance()
{
  ::vtkParametricFunctionSource* retVal = static_cast<::vtkParametricFunctionSource*>(vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->NewInstance());
  return gcnew vtkParametricFunctionSource(IntPtr(retVal), false);
}



vtkParametricFunctionSource^ vtkParametricFunctionSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricFunctionSource* retVal = static_cast<::vtkParametricFunctionSource*>(::vtkParametricFunctionSource::SafeDownCast(oWrap));
  return gcnew vtkParametricFunctionSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricFunctionSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricFunctionSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkParametricFunctionSource::SetParametricFunction(vtkParametricFunction^ arg0)
{
  ::vtkParametricFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkParametricFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetParametricFunction(arg0Wrap);
}



vtkParametricFunction^ vtkParametricFunctionSource::GetParametricFunction()
{
  ::vtkParametricFunction* retVal = static_cast<::vtkParametricFunction*>(vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GetParametricFunction());
  return gcnew vtkParametricFunction(IntPtr(retVal), false);
}



void vtkParametricFunctionSource::SetUResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetUResolution(arg0);
}



int vtkParametricFunctionSource::GetUResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GetUResolution();
  return retVal;
}



void vtkParametricFunctionSource::SetVResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetVResolution(arg0);
}



int vtkParametricFunctionSource::GetVResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GetVResolution();
  return retVal;
}



void vtkParametricFunctionSource::SetWResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetWResolution(arg0);
}



int vtkParametricFunctionSource::GetWResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GetWResolution();
  return retVal;
}



void vtkParametricFunctionSource::GenerateTextureCoordinatesOn()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GenerateTextureCoordinatesOn();
}



void vtkParametricFunctionSource::GenerateTextureCoordinatesOff()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GenerateTextureCoordinatesOff();
}



void vtkParametricFunctionSource::SetGenerateTextureCoordinates(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetGenerateTextureCoordinates(arg0);
}



int vtkParametricFunctionSource::GetGenerateTextureCoordinates()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GetGenerateTextureCoordinates();
  return retVal;
}



void vtkParametricFunctionSource::SetScalarMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarMode(arg0);
}



int vtkParametricFunctionSource::GetScalarModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GetScalarModeMinValue();
  return retVal;
}



int vtkParametricFunctionSource::GetScalarModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GetScalarModeMaxValue();
  return retVal;
}



int vtkParametricFunctionSource::GetScalarMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GetScalarMode();
  return retVal;
}



void vtkParametricFunctionSource::SetScalarModeToNone()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToNone();
}



void vtkParametricFunctionSource::SetScalarModeToU()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToU();
}



void vtkParametricFunctionSource::SetScalarModeToV()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToV();
}



void vtkParametricFunctionSource::SetScalarModeToU0()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToU0();
}



void vtkParametricFunctionSource::SetScalarModeToV0()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToV0();
}



void vtkParametricFunctionSource::SetScalarModeToU0V0()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToU0V0();
}



void vtkParametricFunctionSource::SetScalarModeToModulus()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToModulus();
}



void vtkParametricFunctionSource::SetScalarModeToPhase()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToPhase();
}



void vtkParametricFunctionSource::SetScalarModeToQuadrant()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToQuadrant();
}



void vtkParametricFunctionSource::SetScalarModeToX()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToX();
}



void vtkParametricFunctionSource::SetScalarModeToY()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToY();
}



void vtkParametricFunctionSource::SetScalarModeToZ()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToZ();
}



void vtkParametricFunctionSource::SetScalarModeToDistance()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToDistance();
}



void vtkParametricFunctionSource::SetScalarModeToFunctionDefined()
{
  vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->SetScalarModeToFunctionDefined();
}



unsigned long vtkParametricFunctionSource::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkParametricFunctionSource>(m_instance)->GetMTime();
  return retVal;
}



  vtkParametricFunctionSource::vtkParametricFunctionSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkParametricFunctionSource::vtkParametricFunctionSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkParametricFunctionSource::vtkParametricFunctionSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkParametricFunctionSource::New()));
}



  vtkParametricFunctionSource::~vtkParametricFunctionSource() { }





} // end namespace vtkGraphics
