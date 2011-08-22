

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLegendBoxActorDotNet.h"

// native includes
#include "strstream"
#include "vtkLegendBoxActor.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkProp.h"
#include "vtkProperty2D.h"
#include "vtkTextProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkLegendBoxActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLegendBoxActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLegendBoxActor^ vtkLegendBoxActor::NewInstance()
{
  ::vtkLegendBoxActor* retVal = static_cast<::vtkLegendBoxActor*>(vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->NewInstance());
  return gcnew vtkLegendBoxActor(IntPtr(retVal), false);
}



vtkLegendBoxActor^ vtkLegendBoxActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLegendBoxActor* retVal = static_cast<::vtkLegendBoxActor*>(::vtkLegendBoxActor::SafeDownCast(oWrap));
  return gcnew vtkLegendBoxActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLegendBoxActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLegendBoxActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLegendBoxActor::SetNumberOfEntries(int num)
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetNumberOfEntries(num);
}



int vtkLegendBoxActor::GetNumberOfEntries()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetNumberOfEntries();
  return retVal;
}



void vtkLegendBoxActor::SetEntry(int i, vtkPolyData^ symbol, System::String^ string, array<double>^ color)
{
  ::vtkPolyData* symbolWrap = vtk::ConvertManagedToNative<::vtkPolyData>(symbol->GetNativePointer());
  char* stringWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(string).ToPointer());
  pin_ptr<double> colorPin = &color[0];
  double* nativecolorPin = colorPin;
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetEntry(i, symbolWrap, stringWrap, nativecolorPin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(stringWrap));
}



void vtkLegendBoxActor::SetEntrySymbol(int i, vtkPolyData^ symbol)
{
  ::vtkPolyData* symbolWrap = vtk::ConvertManagedToNative<::vtkPolyData>(symbol->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetEntrySymbol(i, symbolWrap);
}



void vtkLegendBoxActor::SetEntryString(int i, System::String^ string)
{
  char* stringWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(string).ToPointer());
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetEntryString(i, stringWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(stringWrap));
}



void vtkLegendBoxActor::SetEntryColor(int i, array<double>^ color)
{
  pin_ptr<double> colorPin = &color[0];
  double* nativecolorPin = colorPin;
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetEntryColor(i, nativecolorPin);
}



void vtkLegendBoxActor::SetEntryColor(int i, double r, double g, double b)
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetEntryColor(i, r, g, b);
}



vtkPolyData^ vtkLegendBoxActor::GetEntrySymbol(int i)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetEntrySymbol(i));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



System::String^ vtkLegendBoxActor::GetEntryString(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetEntryString(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



array<double>^ vtkLegendBoxActor::GetEntryColor(int i)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetEntryColor(i);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLegendBoxActor::SetEntryTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetEntryTextProperty(pWrap);
}



vtkTextProperty^ vtkLegendBoxActor::GetEntryTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetEntryTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkLegendBoxActor::SetBorder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetBorder(arg0);
}



int vtkLegendBoxActor::GetBorder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetBorder();
  return retVal;
}



void vtkLegendBoxActor::BorderOn()
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->BorderOn();
}



void vtkLegendBoxActor::BorderOff()
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->BorderOff();
}



void vtkLegendBoxActor::SetLockBorder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetLockBorder(arg0);
}



int vtkLegendBoxActor::GetLockBorder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetLockBorder();
  return retVal;
}



void vtkLegendBoxActor::LockBorderOn()
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->LockBorderOn();
}



void vtkLegendBoxActor::LockBorderOff()
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->LockBorderOff();
}



void vtkLegendBoxActor::SetBox(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetBox(arg0);
}



int vtkLegendBoxActor::GetBox()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetBox();
  return retVal;
}



void vtkLegendBoxActor::BoxOn()
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->BoxOn();
}



void vtkLegendBoxActor::BoxOff()
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->BoxOff();
}



vtkProperty2D^ vtkLegendBoxActor::GetBoxProperty()
{
  ::vtkProperty2D* retVal = static_cast<::vtkProperty2D*>(vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetBoxProperty());
  return gcnew vtkProperty2D(IntPtr(retVal), false);
}



void vtkLegendBoxActor::SetPadding(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetPadding(arg0);
}



int vtkLegendBoxActor::GetPaddingMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetPaddingMinValue();
  return retVal;
}



int vtkLegendBoxActor::GetPaddingMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetPaddingMaxValue();
  return retVal;
}



int vtkLegendBoxActor::GetPadding()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetPadding();
  return retVal;
}



void vtkLegendBoxActor::SetScalarVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->SetScalarVisibility(arg0);
}



int vtkLegendBoxActor::GetScalarVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->GetScalarVisibility();
  return retVal;
}



void vtkLegendBoxActor::ScalarVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->ScalarVisibilityOn();
}



void vtkLegendBoxActor::ScalarVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->ScalarVisibilityOff();
}



void vtkLegendBoxActor::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLegendBoxActor>(m_instance)->ShallowCopy(propWrap);
}



  vtkLegendBoxActor::vtkLegendBoxActor(System::IntPtr native, bool bConst) : vtkActor2D(native, bConst) {}



  vtkLegendBoxActor::vtkLegendBoxActor(bool donothing) : vtkActor2D(donothing) {}



  vtkLegendBoxActor::vtkLegendBoxActor() : vtkActor2D(false) {
  this->SetNativePointer(IntPtr(::vtkLegendBoxActor::New()));
}



  vtkLegendBoxActor::~vtkLegendBoxActor() { }





} // end namespace vtkHybrid
