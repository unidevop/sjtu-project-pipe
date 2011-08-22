

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTextPropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkTextProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkTextProperty::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTextProperty::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTextProperty^ vtkTextProperty::NewInstance()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->NewInstance());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



vtkTextProperty^ vtkTextProperty::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(::vtkTextProperty::SafeDownCast(oWrap));
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTextProperty::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTextProperty::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTextProperty::SetColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetColor(arg0, arg1, arg2);
}



void vtkTextProperty::SetColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetColor(nativeaPin);
}



array<double>^ vtkTextProperty::GetColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextProperty::SetOpacity(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetOpacity(arg0);
}



double vtkTextProperty::GetOpacity()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetOpacity();
  return retVal;
}



void vtkTextProperty::SetFontFamily(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetFontFamily(arg0);
}



int vtkTextProperty::GetFontFamilyMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetFontFamilyMinValue();
  return retVal;
}



int vtkTextProperty::GetFontFamilyMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetFontFamilyMaxValue();
  return retVal;
}



int vtkTextProperty::GetFontFamily()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetFontFamily();
  return retVal;
}



void vtkTextProperty::SetFontFamilyToArial()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetFontFamilyToArial();
}



void vtkTextProperty::SetFontFamilyToCourier()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetFontFamilyToCourier();
}



void vtkTextProperty::SetFontFamilyToTimes()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetFontFamilyToTimes();
}



System::String^ vtkTextProperty::GetFontFamilyAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetFontFamilyAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkTextProperty::GetFontFamilyAsString(int f)
{
  const char* retVal = ::vtkTextProperty::GetFontFamilyAsString(f);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTextProperty::SetFontSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetFontSize(arg0);
}



int vtkTextProperty::GetFontSizeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetFontSizeMinValue();
  return retVal;
}



int vtkTextProperty::GetFontSizeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetFontSizeMaxValue();
  return retVal;
}



int vtkTextProperty::GetFontSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetFontSize();
  return retVal;
}



void vtkTextProperty::SetBold(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetBold(arg0);
}



int vtkTextProperty::GetBold()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetBold();
  return retVal;
}



void vtkTextProperty::BoldOn()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->BoldOn();
}



void vtkTextProperty::BoldOff()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->BoldOff();
}



void vtkTextProperty::SetItalic(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetItalic(arg0);
}



int vtkTextProperty::GetItalic()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetItalic();
  return retVal;
}



void vtkTextProperty::ItalicOn()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->ItalicOn();
}



void vtkTextProperty::ItalicOff()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->ItalicOff();
}



void vtkTextProperty::SetShadow(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetShadow(arg0);
}



int vtkTextProperty::GetShadow()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetShadow();
  return retVal;
}



void vtkTextProperty::ShadowOn()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->ShadowOn();
}



void vtkTextProperty::ShadowOff()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->ShadowOff();
}



void vtkTextProperty::SetShadowOffset(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetShadowOffset(arg0, arg1);
}



void vtkTextProperty::SetShadowOffset(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetShadowOffset(nativeaPin);
}



array<int>^ vtkTextProperty::GetShadowOffset()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetShadowOffset();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextProperty::GetShadowColor(array<double>^ color)
{
  pin_ptr<double> colorPin = &color[0];
  double* nativecolorPin = colorPin;
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetShadowColor(nativecolorPin);
}



void vtkTextProperty::SetJustification(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetJustification(arg0);
}



int vtkTextProperty::GetJustificationMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetJustificationMinValue();
  return retVal;
}



int vtkTextProperty::GetJustificationMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetJustificationMaxValue();
  return retVal;
}



int vtkTextProperty::GetJustification()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetJustification();
  return retVal;
}



void vtkTextProperty::SetJustificationToLeft()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetJustificationToLeft();
}



void vtkTextProperty::SetJustificationToCentered()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetJustificationToCentered();
}



void vtkTextProperty::SetJustificationToRight()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetJustificationToRight();
}



System::String^ vtkTextProperty::GetJustificationAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetJustificationAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTextProperty::SetVerticalJustification(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetVerticalJustification(arg0);
}



int vtkTextProperty::GetVerticalJustificationMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetVerticalJustificationMinValue();
  return retVal;
}



int vtkTextProperty::GetVerticalJustificationMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetVerticalJustificationMaxValue();
  return retVal;
}



int vtkTextProperty::GetVerticalJustification()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetVerticalJustification();
  return retVal;
}



void vtkTextProperty::SetVerticalJustificationToBottom()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetVerticalJustificationToBottom();
}



void vtkTextProperty::SetVerticalJustificationToCentered()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetVerticalJustificationToCentered();
}



void vtkTextProperty::SetVerticalJustificationToTop()
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetVerticalJustificationToTop();
}



System::String^ vtkTextProperty::GetVerticalJustificationAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetVerticalJustificationAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTextProperty::SetOrientation(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetOrientation(arg0);
}



double vtkTextProperty::GetOrientation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetOrientation();
  return retVal;
}



void vtkTextProperty::SetLineSpacing(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetLineSpacing(arg0);
}



double vtkTextProperty::GetLineSpacing()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetLineSpacing();
  return retVal;
}



void vtkTextProperty::SetLineOffset(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->SetLineOffset(arg0);
}



double vtkTextProperty::GetLineOffset()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->GetLineOffset();
  return retVal;
}



void vtkTextProperty::ShallowCopy(vtkTextProperty^ tprop)
{
  ::vtkTextProperty* tpropWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(tprop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTextProperty>(m_instance)->ShallowCopy(tpropWrap);
}



  vtkTextProperty::vtkTextProperty(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkTextProperty::vtkTextProperty(bool donothing) : vtkObject(donothing) {}



  vtkTextProperty::vtkTextProperty() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkTextProperty::New()));
}



  vtkTextProperty::~vtkTextProperty() { }





} // end namespace vtkRendering
