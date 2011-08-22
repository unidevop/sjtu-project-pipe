

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTextActorDotNet.h"
#include "vtkTextMapperDotNet.h"
#include "vtkTextPropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkTextActor.h"
#include "vtkCoordinate.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkTextMapper.h"
#include "vtkTextProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkTextActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTextActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTextActor^ vtkTextActor::NewInstance()
{
  ::vtkTextActor* retVal = static_cast<::vtkTextActor*>(vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->NewInstance());
  return gcnew vtkTextActor(IntPtr(retVal), false);
}



vtkTextActor^ vtkTextActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTextActor* retVal = static_cast<::vtkTextActor*>(::vtkTextActor::SafeDownCast(oWrap));
  return gcnew vtkTextActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTextActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTextActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTextActor::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->ShallowCopy(propWrap);
}



void vtkTextActor::SetMapper(vtkTextMapper^ mapper)
{
  ::vtkTextMapper* mapperWrap = vtk::ConvertManagedToNative<::vtkTextMapper>(mapper->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->SetMapper(mapperWrap);
}



void vtkTextActor::SetInput(System::String^ inputString)
{
  char* inputStringWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(inputString).ToPointer());
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->SetInput(inputStringWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(inputStringWrap));
}



System::String^ vtkTextActor::GetInput()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->GetInput();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTextActor::SetMinimumSize(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->SetMinimumSize(arg0, arg1);
}



void vtkTextActor::SetMinimumSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->SetMinimumSize(nativeaPin);
}



array<int>^ vtkTextActor::GetMinimumSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->GetMinimumSize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextActor::SetMaximumLineHeight(float arg0)
{
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->SetMaximumLineHeight(arg0);
}



float vtkTextActor::GetMaximumLineHeight()
{
  float retVal = vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->GetMaximumLineHeight();
  return retVal;
}



void vtkTextActor::SetScaledText(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->SetScaledText(arg0);
}



int vtkTextActor::GetScaledText()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->GetScaledText();
  return retVal;
}



void vtkTextActor::ScaledTextOn()
{
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->ScaledTextOn();
}



void vtkTextActor::ScaledTextOff()
{
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->ScaledTextOff();
}



void vtkTextActor::SetAlignmentPoint(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->SetAlignmentPoint(arg0);
}



int vtkTextActor::GetAlignmentPointMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->GetAlignmentPointMinValue();
  return retVal;
}



int vtkTextActor::GetAlignmentPointMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->GetAlignmentPointMaxValue();
  return retVal;
}



int vtkTextActor::GetAlignmentPoint()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->GetAlignmentPoint();
  return retVal;
}



vtkCoordinate^ vtkTextActor::GetActualPositionCoordinate()
{
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->GetActualPositionCoordinate());
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



void vtkTextActor::SetTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->SetTextProperty(pWrap);
}



vtkTextProperty^ vtkTextActor::GetTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->GetTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkTextActor::SetNonLinearFontScale(double exponent, int target)
{
  vtk::ConvertManagedToNative<::vtkTextActor>(m_instance)->SetNonLinearFontScale(exponent, target);
}



  vtkTextActor::vtkTextActor(System::IntPtr native, bool bConst) : vtkActor2D(native, bConst) {}



  vtkTextActor::vtkTextActor(bool donothing) : vtkActor2D(donothing) {}



  vtkTextActor::vtkTextActor() : vtkActor2D(false) {
  this->SetNativePointer(IntPtr(::vtkTextActor::New()));
}



  vtkTextActor::~vtkTextActor() { }





} // end namespace vtkRendering
