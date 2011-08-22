

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTransformToGridDotNet.h"

// native includes
#include "strstream"
#include "vtkTransformToGrid.h"
#include "vtkAbstractTransform.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTransformToGrid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTransformToGrid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTransformToGrid^ vtkTransformToGrid::NewInstance()
{
  ::vtkTransformToGrid* retVal = static_cast<::vtkTransformToGrid*>(vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->NewInstance());
  return gcnew vtkTransformToGrid(IntPtr(retVal), false);
}



vtkTransformToGrid^ vtkTransformToGrid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTransformToGrid* retVal = static_cast<::vtkTransformToGrid*>(::vtkTransformToGrid::SafeDownCast(oWrap));
  return gcnew vtkTransformToGrid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTransformToGrid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTransformToGrid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTransformToGrid::SetInput(vtkAbstractTransform^ arg0)
{
  ::vtkAbstractTransform* arg0Wrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetInput(arg0Wrap);
}



vtkAbstractTransform^ vtkTransformToGrid::GetInput()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->GetInput());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



void vtkTransformToGrid::SetGridExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridExtent(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkTransformToGrid::SetGridExtent(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridExtent(nativeaPin);
}



array<int>^ vtkTransformToGrid::GetGridExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->GetGridExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTransformToGrid::SetGridOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridOrigin(arg0, arg1, arg2);
}



void vtkTransformToGrid::SetGridOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridOrigin(nativeaPin);
}



array<double>^ vtkTransformToGrid::GetGridOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->GetGridOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTransformToGrid::SetGridSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridSpacing(arg0, arg1, arg2);
}



void vtkTransformToGrid::SetGridSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridSpacing(nativeaPin);
}



array<double>^ vtkTransformToGrid::GetGridSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->GetGridSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTransformToGrid::SetGridScalarType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridScalarType(arg0);
}



int vtkTransformToGrid::GetGridScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->GetGridScalarType();
  return retVal;
}



void vtkTransformToGrid::SetGridScalarTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridScalarTypeToFloat();
}



void vtkTransformToGrid::SetGridScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridScalarTypeToShort();
}



void vtkTransformToGrid::SetGridScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridScalarTypeToUnsignedShort();
}



void vtkTransformToGrid::SetGridScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridScalarTypeToUnsignedChar();
}



void vtkTransformToGrid::SetGridScalarTypeToChar()
{
  vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->SetGridScalarTypeToChar();
}



double vtkTransformToGrid::GetDisplacementScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->GetDisplacementScale();
  return retVal;
}



double vtkTransformToGrid::GetDisplacementShift()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->GetDisplacementShift();
  return retVal;
}



vtkImageData^ vtkTransformToGrid::GetOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkTransformToGrid>(m_instance)->GetOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkTransformToGrid::vtkTransformToGrid(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkTransformToGrid::vtkTransformToGrid(bool donothing) : vtkAlgorithm(donothing) {}



  vtkTransformToGrid::vtkTransformToGrid() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTransformToGrid::New()));
}



  vtkTransformToGrid::~vtkTransformToGrid() { }





} // end namespace vtkHybrid
