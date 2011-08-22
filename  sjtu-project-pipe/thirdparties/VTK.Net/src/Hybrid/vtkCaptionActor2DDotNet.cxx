

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCaptionActor2DDotNet.h"

// native includes
#include "strstream"
#include "vtkCaptionActor2D.h"
#include "vtkCoordinate.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkProp.h"
#include "vtkTextActor.h"
#include "vtkTextProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkCaptionActor2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCaptionActor2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCaptionActor2D^ vtkCaptionActor2D::NewInstance()
{
  ::vtkCaptionActor2D* retVal = static_cast<::vtkCaptionActor2D*>(vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->NewInstance());
  return gcnew vtkCaptionActor2D(IntPtr(retVal), false);
}



vtkCaptionActor2D^ vtkCaptionActor2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCaptionActor2D* retVal = static_cast<::vtkCaptionActor2D*>(::vtkCaptionActor2D::SafeDownCast(oWrap));
  return gcnew vtkCaptionActor2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCaptionActor2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCaptionActor2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCaptionActor2D::SetCaption(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->SetCaption(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkCaptionActor2D::GetCaption()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetCaption();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



vtkCoordinate^ vtkCaptionActor2D::GetAttachmentPointCoordinate()
{
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetAttachmentPointCoordinate());
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



void vtkCaptionActor2D::SetAttachmentPoint(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->SetAttachmentPoint(arg0, arg1, arg2);
}



void vtkCaptionActor2D::SetAttachmentPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->SetAttachmentPoint(nativeaPin);
}



array<double>^ vtkCaptionActor2D::GetAttachmentPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetAttachmentPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCaptionActor2D::SetBorder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->SetBorder(arg0);
}



int vtkCaptionActor2D::GetBorder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetBorder();
  return retVal;
}



void vtkCaptionActor2D::BorderOn()
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->BorderOn();
}



void vtkCaptionActor2D::BorderOff()
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->BorderOff();
}



void vtkCaptionActor2D::SetLeader(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->SetLeader(arg0);
}



int vtkCaptionActor2D::GetLeader()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetLeader();
  return retVal;
}



void vtkCaptionActor2D::LeaderOn()
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->LeaderOn();
}



void vtkCaptionActor2D::LeaderOff()
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->LeaderOff();
}



void vtkCaptionActor2D::SetThreeDimensionalLeader(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->SetThreeDimensionalLeader(arg0);
}



int vtkCaptionActor2D::GetThreeDimensionalLeader()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetThreeDimensionalLeader();
  return retVal;
}



void vtkCaptionActor2D::ThreeDimensionalLeaderOn()
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->ThreeDimensionalLeaderOn();
}



void vtkCaptionActor2D::ThreeDimensionalLeaderOff()
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->ThreeDimensionalLeaderOff();
}



void vtkCaptionActor2D::SetLeaderGlyph(vtkPolyData^ arg0)
{
  ::vtkPolyData* arg0Wrap = vtk::ConvertManagedToNative<::vtkPolyData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->SetLeaderGlyph(arg0Wrap);
}



vtkPolyData^ vtkCaptionActor2D::GetLeaderGlyph()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetLeaderGlyph());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkCaptionActor2D::SetLeaderGlyphSize(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->SetLeaderGlyphSize(arg0);
}



double vtkCaptionActor2D::GetLeaderGlyphSizeMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetLeaderGlyphSizeMinValue();
  return retVal;
}



double vtkCaptionActor2D::GetLeaderGlyphSizeMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetLeaderGlyphSizeMaxValue();
  return retVal;
}



double vtkCaptionActor2D::GetLeaderGlyphSize()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetLeaderGlyphSize();
  return retVal;
}



void vtkCaptionActor2D::SetMaximumLeaderGlyphSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->SetMaximumLeaderGlyphSize(arg0);
}



int vtkCaptionActor2D::GetMaximumLeaderGlyphSizeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetMaximumLeaderGlyphSizeMinValue();
  return retVal;
}



int vtkCaptionActor2D::GetMaximumLeaderGlyphSizeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetMaximumLeaderGlyphSizeMaxValue();
  return retVal;
}



int vtkCaptionActor2D::GetMaximumLeaderGlyphSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetMaximumLeaderGlyphSize();
  return retVal;
}



void vtkCaptionActor2D::SetPadding(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->SetPadding(arg0);
}



int vtkCaptionActor2D::GetPaddingMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetPaddingMinValue();
  return retVal;
}



int vtkCaptionActor2D::GetPaddingMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetPaddingMaxValue();
  return retVal;
}



int vtkCaptionActor2D::GetPadding()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetPadding();
  return retVal;
}



vtkTextActor^ vtkCaptionActor2D::GetTextActor()
{
  ::vtkTextActor* retVal = static_cast<::vtkTextActor*>(vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetTextActor());
  return gcnew vtkTextActor(IntPtr(retVal), false);
}



void vtkCaptionActor2D::SetCaptionTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->SetCaptionTextProperty(pWrap);
}



vtkTextProperty^ vtkCaptionActor2D::GetCaptionTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->GetCaptionTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkCaptionActor2D::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCaptionActor2D>(m_instance)->ShallowCopy(propWrap);
}



  vtkCaptionActor2D::vtkCaptionActor2D(System::IntPtr native, bool bConst) : vtkActor2D(native, bConst) {}



  vtkCaptionActor2D::vtkCaptionActor2D(bool donothing) : vtkActor2D(donothing) {}



  vtkCaptionActor2D::vtkCaptionActor2D() : vtkActor2D(false) {
  this->SetNativePointer(IntPtr(::vtkCaptionActor2D::New()));
}



  vtkCaptionActor2D::~vtkCaptionActor2D() { }





} // end namespace vtkHybrid
