

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataMapper2DDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataMapper2D.h"
#include "vtkAbstractMapper.h"
#include "vtkCoordinate.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkScalarsToColors.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataMapper2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataMapper2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataMapper2D^ vtkPolyDataMapper2D::NewInstance()
{
  ::vtkPolyDataMapper2D* retVal = static_cast<::vtkPolyDataMapper2D*>(vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->NewInstance());
  return gcnew vtkPolyDataMapper2D(IntPtr(retVal), false);
}



vtkPolyDataMapper2D^ vtkPolyDataMapper2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolyDataMapper2D* retVal = static_cast<::vtkPolyDataMapper2D*>(::vtkPolyDataMapper2D::SafeDownCast(oWrap));
  return gcnew vtkPolyDataMapper2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataMapper2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataMapper2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPolyDataMapper2D::SetInput(vtkPolyData^ in)
{
  ::vtkPolyData* inWrap = vtk::ConvertManagedToNative<::vtkPolyData>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetInput(inWrap);
}



vtkPolyData^ vtkPolyDataMapper2D::GetInput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetInput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkPolyDataMapper2D::SetLookupTable(vtkScalarsToColors^ lut)
{
  ::vtkScalarsToColors* lutWrap = vtk::ConvertManagedToNative<::vtkScalarsToColors>(lut->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetLookupTable(lutWrap);
}



vtkScalarsToColors^ vtkPolyDataMapper2D::GetLookupTable()
{
  ::vtkScalarsToColors* retVal = static_cast<::vtkScalarsToColors*>(vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetLookupTable());
  return gcnew vtkScalarsToColors(IntPtr(retVal), false);
}



void vtkPolyDataMapper2D::CreateDefaultLookupTable()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->CreateDefaultLookupTable();
}



void vtkPolyDataMapper2D::SetScalarVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetScalarVisibility(arg0);
}



int vtkPolyDataMapper2D::GetScalarVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetScalarVisibility();
  return retVal;
}



void vtkPolyDataMapper2D::ScalarVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->ScalarVisibilityOn();
}



void vtkPolyDataMapper2D::ScalarVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->ScalarVisibilityOff();
}



void vtkPolyDataMapper2D::SetColorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetColorMode(arg0);
}



int vtkPolyDataMapper2D::GetColorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetColorMode();
  return retVal;
}



void vtkPolyDataMapper2D::SetColorModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetColorModeToDefault();
}



void vtkPolyDataMapper2D::SetColorModeToMapScalars()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetColorModeToMapScalars();
}



System::String^ vtkPolyDataMapper2D::GetColorModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetColorModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkPolyDataMapper2D::SetUseLookupTableScalarRange(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetUseLookupTableScalarRange(arg0);
}



int vtkPolyDataMapper2D::GetUseLookupTableScalarRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetUseLookupTableScalarRange();
  return retVal;
}



void vtkPolyDataMapper2D::UseLookupTableScalarRangeOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->UseLookupTableScalarRangeOn();
}



void vtkPolyDataMapper2D::UseLookupTableScalarRangeOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->UseLookupTableScalarRangeOff();
}



void vtkPolyDataMapper2D::SetScalarRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetScalarRange(arg0, arg1);
}



void vtkPolyDataMapper2D::SetScalarRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetScalarRange(nativeaPin);
}



array<double>^ vtkPolyDataMapper2D::GetScalarRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetScalarRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPolyDataMapper2D::SetScalarMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetScalarMode(arg0);
}



int vtkPolyDataMapper2D::GetScalarMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetScalarMode();
  return retVal;
}



void vtkPolyDataMapper2D::SetScalarModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetScalarModeToDefault();
}



void vtkPolyDataMapper2D::SetScalarModeToUsePointData()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetScalarModeToUsePointData();
}



void vtkPolyDataMapper2D::SetScalarModeToUseCellData()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetScalarModeToUseCellData();
}



void vtkPolyDataMapper2D::SetScalarModeToUsePointFieldData()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetScalarModeToUsePointFieldData();
}



void vtkPolyDataMapper2D::SetScalarModeToUseCellFieldData()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetScalarModeToUseCellFieldData();
}



void vtkPolyDataMapper2D::ColorByArrayComponent(int arrayNum, int component)
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->ColorByArrayComponent(arrayNum, component);
}



void vtkPolyDataMapper2D::ColorByArrayComponent(System::String^ arrayName, int component)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->ColorByArrayComponent(arrayNameWrap, component);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkPolyDataMapper2D::GetArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataMapper2D::GetArrayId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetArrayId();
  return retVal;
}



int vtkPolyDataMapper2D::GetArrayAccessMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetArrayAccessMode();
  return retVal;
}



int vtkPolyDataMapper2D::GetArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetArrayComponent();
  return retVal;
}



unsigned long vtkPolyDataMapper2D::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetMTime();
  return retVal;
}



void vtkPolyDataMapper2D::SetTransformCoordinate(vtkCoordinate^ arg0)
{
  ::vtkCoordinate* arg0Wrap = vtk::ConvertManagedToNative<::vtkCoordinate>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->SetTransformCoordinate(arg0Wrap);
}



vtkCoordinate^ vtkPolyDataMapper2D::GetTransformCoordinate()
{
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->GetTransformCoordinate());
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



vtkUnsignedCharArray^ vtkPolyDataMapper2D::MapScalars(double alpha)
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->MapScalars(alpha));
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



void vtkPolyDataMapper2D::ShallowCopy(vtkAbstractMapper^ m)
{
  ::vtkAbstractMapper* mWrap = vtk::ConvertManagedToNative<::vtkAbstractMapper>(m->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataMapper2D>(m_instance)->ShallowCopy(mWrap);
}



  vtkPolyDataMapper2D::vtkPolyDataMapper2D(System::IntPtr native, bool bConst) : vtkMapper2D(native, bConst) {}



  vtkPolyDataMapper2D::vtkPolyDataMapper2D(bool donothing) : vtkMapper2D(donothing) {}



  vtkPolyDataMapper2D::vtkPolyDataMapper2D() : vtkMapper2D(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataMapper2D::New()));
}



  vtkPolyDataMapper2D::~vtkPolyDataMapper2D() { }





} // end namespace vtkRendering
