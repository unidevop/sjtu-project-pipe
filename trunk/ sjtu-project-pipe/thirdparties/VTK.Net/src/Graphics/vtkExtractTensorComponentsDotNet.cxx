

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtractTensorComponentsDotNet.h"

// native includes
#include "strstream"
#include "vtkExtractTensorComponents.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkExtractTensorComponents::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtractTensorComponents::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtractTensorComponents^ vtkExtractTensorComponents::NewInstance()
{
  ::vtkExtractTensorComponents* retVal = static_cast<::vtkExtractTensorComponents*>(vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->NewInstance());
  return gcnew vtkExtractTensorComponents(IntPtr(retVal), false);
}



vtkExtractTensorComponents^ vtkExtractTensorComponents::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtractTensorComponents* retVal = static_cast<::vtkExtractTensorComponents*>(::vtkExtractTensorComponents::SafeDownCast(oWrap));
  return gcnew vtkExtractTensorComponents(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtractTensorComponents::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtractTensorComponents::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExtractTensorComponents::SetPassTensorsToOutput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetPassTensorsToOutput(arg0);
}



int vtkExtractTensorComponents::GetPassTensorsToOutput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetPassTensorsToOutput();
  return retVal;
}



void vtkExtractTensorComponents::PassTensorsToOutputOn()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->PassTensorsToOutputOn();
}



void vtkExtractTensorComponents::PassTensorsToOutputOff()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->PassTensorsToOutputOff();
}



void vtkExtractTensorComponents::SetExtractScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetExtractScalars(arg0);
}



int vtkExtractTensorComponents::GetExtractScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetExtractScalars();
  return retVal;
}



void vtkExtractTensorComponents::ExtractScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->ExtractScalarsOn();
}



void vtkExtractTensorComponents::ExtractScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->ExtractScalarsOff();
}



void vtkExtractTensorComponents::SetScalarComponents(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetScalarComponents(arg0, arg1);
}



void vtkExtractTensorComponents::SetScalarComponents(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetScalarComponents(nativeaPin);
}



array<int>^ vtkExtractTensorComponents::GetScalarComponents()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetScalarComponents();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtractTensorComponents::SetScalarMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetScalarMode(arg0);
}



int vtkExtractTensorComponents::GetScalarMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetScalarMode();
  return retVal;
}



void vtkExtractTensorComponents::SetScalarModeToComponent()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetScalarModeToComponent();
}



void vtkExtractTensorComponents::SetScalarModeToEffectiveStress()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetScalarModeToEffectiveStress();
}



void vtkExtractTensorComponents::SetScalarModeToDeterminant()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetScalarModeToDeterminant();
}



void vtkExtractTensorComponents::ScalarIsComponent()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->ScalarIsComponent();
}



void vtkExtractTensorComponents::ScalarIsEffectiveStress()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->ScalarIsEffectiveStress();
}



void vtkExtractTensorComponents::ScalarIsDeterminant()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->ScalarIsDeterminant();
}



void vtkExtractTensorComponents::SetExtractVectors(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetExtractVectors(arg0);
}



int vtkExtractTensorComponents::GetExtractVectors()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetExtractVectors();
  return retVal;
}



void vtkExtractTensorComponents::ExtractVectorsOn()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->ExtractVectorsOn();
}



void vtkExtractTensorComponents::ExtractVectorsOff()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->ExtractVectorsOff();
}



void vtkExtractTensorComponents::SetVectorComponents(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetVectorComponents(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkExtractTensorComponents::SetVectorComponents(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetVectorComponents(nativeaPin);
}



array<int>^ vtkExtractTensorComponents::GetVectorComponents()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetVectorComponents();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtractTensorComponents::SetExtractNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetExtractNormals(arg0);
}



int vtkExtractTensorComponents::GetExtractNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetExtractNormals();
  return retVal;
}



void vtkExtractTensorComponents::ExtractNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->ExtractNormalsOn();
}



void vtkExtractTensorComponents::ExtractNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->ExtractNormalsOff();
}



void vtkExtractTensorComponents::SetNormalizeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetNormalizeNormals(arg0);
}



int vtkExtractTensorComponents::GetNormalizeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetNormalizeNormals();
  return retVal;
}



void vtkExtractTensorComponents::NormalizeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->NormalizeNormalsOn();
}



void vtkExtractTensorComponents::NormalizeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->NormalizeNormalsOff();
}



void vtkExtractTensorComponents::SetNormalComponents(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetNormalComponents(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkExtractTensorComponents::SetNormalComponents(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetNormalComponents(nativeaPin);
}



array<int>^ vtkExtractTensorComponents::GetNormalComponents()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetNormalComponents();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtractTensorComponents::SetExtractTCoords(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetExtractTCoords(arg0);
}



int vtkExtractTensorComponents::GetExtractTCoords()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetExtractTCoords();
  return retVal;
}



void vtkExtractTensorComponents::ExtractTCoordsOn()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->ExtractTCoordsOn();
}



void vtkExtractTensorComponents::ExtractTCoordsOff()
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->ExtractTCoordsOff();
}



void vtkExtractTensorComponents::SetNumberOfTCoords(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetNumberOfTCoords(arg0);
}



int vtkExtractTensorComponents::GetNumberOfTCoordsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetNumberOfTCoordsMinValue();
  return retVal;
}



int vtkExtractTensorComponents::GetNumberOfTCoordsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetNumberOfTCoordsMaxValue();
  return retVal;
}



int vtkExtractTensorComponents::GetNumberOfTCoords()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetNumberOfTCoords();
  return retVal;
}



void vtkExtractTensorComponents::SetTCoordComponents(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetTCoordComponents(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkExtractTensorComponents::SetTCoordComponents(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->SetTCoordComponents(nativeaPin);
}



array<int>^ vtkExtractTensorComponents::GetTCoordComponents()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtractTensorComponents>(m_instance)->GetTCoordComponents();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkExtractTensorComponents::vtkExtractTensorComponents(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkExtractTensorComponents::vtkExtractTensorComponents(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkExtractTensorComponents::vtkExtractTensorComponents() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExtractTensorComponents::New()));
}



  vtkExtractTensorComponents::~vtkExtractTensorComponents() { }





} // end namespace vtkGraphics
