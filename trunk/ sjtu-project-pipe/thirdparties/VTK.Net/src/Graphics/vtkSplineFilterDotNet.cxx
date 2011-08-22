

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSplineFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkSplineFilter.h"
#include "vtkObject.h"
#include "vtkSpline.h"

using namespace System;

namespace vtk {

System::String^ vtkSplineFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSplineFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSplineFilter^ vtkSplineFilter::NewInstance()
{
  ::vtkSplineFilter* retVal = static_cast<::vtkSplineFilter*>(vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->NewInstance());
  return gcnew vtkSplineFilter(IntPtr(retVal), false);
}



vtkSplineFilter^ vtkSplineFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSplineFilter* retVal = static_cast<::vtkSplineFilter*>(::vtkSplineFilter::SafeDownCast(oWrap));
  return gcnew vtkSplineFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSplineFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSplineFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSplineFilter::SetMaximumNumberOfSubdivisions(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetMaximumNumberOfSubdivisions(arg0);
}



int vtkSplineFilter::GetMaximumNumberOfSubdivisionsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetMaximumNumberOfSubdivisionsMinValue();
  return retVal;
}



int vtkSplineFilter::GetMaximumNumberOfSubdivisionsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetMaximumNumberOfSubdivisionsMaxValue();
  return retVal;
}



int vtkSplineFilter::GetMaximumNumberOfSubdivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetMaximumNumberOfSubdivisions();
  return retVal;
}



void vtkSplineFilter::SetSubdivide(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetSubdivide(arg0);
}



int vtkSplineFilter::GetSubdivideMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetSubdivideMinValue();
  return retVal;
}



int vtkSplineFilter::GetSubdivideMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetSubdivideMaxValue();
  return retVal;
}



int vtkSplineFilter::GetSubdivide()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetSubdivide();
  return retVal;
}



void vtkSplineFilter::SetSubdivideToSpecified()
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetSubdivideToSpecified();
}



void vtkSplineFilter::SetSubdivideToLength()
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetSubdivideToLength();
}



System::String^ vtkSplineFilter::GetSubdivideAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetSubdivideAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkSplineFilter::SetNumberOfSubdivisions(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetNumberOfSubdivisions(arg0);
}



int vtkSplineFilter::GetNumberOfSubdivisionsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetNumberOfSubdivisionsMinValue();
  return retVal;
}



int vtkSplineFilter::GetNumberOfSubdivisionsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetNumberOfSubdivisionsMaxValue();
  return retVal;
}



int vtkSplineFilter::GetNumberOfSubdivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetNumberOfSubdivisions();
  return retVal;
}



void vtkSplineFilter::SetLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetLength(arg0);
}



double vtkSplineFilter::GetLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetLengthMinValue();
  return retVal;
}



double vtkSplineFilter::GetLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetLengthMaxValue();
  return retVal;
}



double vtkSplineFilter::GetLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetLength();
  return retVal;
}



void vtkSplineFilter::SetSpline(vtkSpline^ arg0)
{
  ::vtkSpline* arg0Wrap = vtk::ConvertManagedToNative<::vtkSpline>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetSpline(arg0Wrap);
}



vtkSpline^ vtkSplineFilter::GetSpline()
{
  ::vtkSpline* retVal = static_cast<::vtkSpline*>(vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetSpline());
  return gcnew vtkSpline(IntPtr(retVal), false);
}



void vtkSplineFilter::SetGenerateTCoords(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetGenerateTCoords(arg0);
}



int vtkSplineFilter::GetGenerateTCoordsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetGenerateTCoordsMinValue();
  return retVal;
}



int vtkSplineFilter::GetGenerateTCoordsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetGenerateTCoordsMaxValue();
  return retVal;
}



int vtkSplineFilter::GetGenerateTCoords()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetGenerateTCoords();
  return retVal;
}



void vtkSplineFilter::SetGenerateTCoordsToOff()
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetGenerateTCoordsToOff();
}



void vtkSplineFilter::SetGenerateTCoordsToNormalizedLength()
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetGenerateTCoordsToNormalizedLength();
}



void vtkSplineFilter::SetGenerateTCoordsToUseLength()
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetGenerateTCoordsToUseLength();
}



void vtkSplineFilter::SetGenerateTCoordsToUseScalars()
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetGenerateTCoordsToUseScalars();
}



System::String^ vtkSplineFilter::GetGenerateTCoordsAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetGenerateTCoordsAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkSplineFilter::SetTextureLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->SetTextureLength(arg0);
}



double vtkSplineFilter::GetTextureLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetTextureLengthMinValue();
  return retVal;
}



double vtkSplineFilter::GetTextureLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetTextureLengthMaxValue();
  return retVal;
}



double vtkSplineFilter::GetTextureLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSplineFilter>(m_instance)->GetTextureLength();
  return retVal;
}



  vtkSplineFilter::vtkSplineFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSplineFilter::vtkSplineFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSplineFilter::vtkSplineFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSplineFilter::New()));
}



  vtkSplineFilter::~vtkSplineFilter() { }





} // end namespace vtkGraphics
