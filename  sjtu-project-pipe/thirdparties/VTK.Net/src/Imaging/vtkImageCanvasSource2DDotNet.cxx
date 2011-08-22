

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageCanvasSource2DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageCanvasSource2D.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageCanvasSource2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageCanvasSource2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageCanvasSource2D^ vtkImageCanvasSource2D::NewInstance()
{
  ::vtkImageCanvasSource2D* retVal = static_cast<::vtkImageCanvasSource2D*>(vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->NewInstance());
  return gcnew vtkImageCanvasSource2D(IntPtr(retVal), false);
}



vtkImageCanvasSource2D^ vtkImageCanvasSource2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageCanvasSource2D* retVal = static_cast<::vtkImageCanvasSource2D*>(::vtkImageCanvasSource2D::SafeDownCast(oWrap));
  return gcnew vtkImageCanvasSource2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageCanvasSource2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageCanvasSource2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageCanvasSource2D::SetDrawColor(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetDrawColor(arg0, arg1, arg2, arg3);
}



void vtkImageCanvasSource2D::SetDrawColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetDrawColor(nativeaPin);
}



array<double>^ vtkImageCanvasSource2D::GetDrawColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->GetDrawColor();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageCanvasSource2D::SetDrawColor(double a)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetDrawColor(a);
}



void vtkImageCanvasSource2D::SetDrawColor(double a, double b)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetDrawColor(a, b);
}



void vtkImageCanvasSource2D::SetDrawColor(double a, double b, double c)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetDrawColor(a, b, c);
}



void vtkImageCanvasSource2D::FillBox(int min0, int max0, int min1, int max1)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->FillBox(min0, max0, min1, max1);
}



void vtkImageCanvasSource2D::FillTube(int x0, int y0, int x1, int y1, double radius)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->FillTube(x0, y0, x1, y1, radius);
}



void vtkImageCanvasSource2D::FillTriangle(int x0, int y0, int x1, int y1, int x2, int y2)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->FillTriangle(x0, y0, x1, y1, x2, y2);
}



void vtkImageCanvasSource2D::DrawCircle(int c0, int c1, double radius)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->DrawCircle(c0, c1, radius);
}



void vtkImageCanvasSource2D::DrawPoint(int p0, int p1)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->DrawPoint(p0, p1);
}



void vtkImageCanvasSource2D::DrawSegment(int x0, int y0, int x1, int y1)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->DrawSegment(x0, y0, x1, y1);
}



void vtkImageCanvasSource2D::DrawSegment3D(array<double>^ p0, array<double>^ p1)
{
  pin_ptr<double> p0Pin = &p0[0];
  double* nativep0Pin = p0Pin;
  pin_ptr<double> p1Pin = &p1[0];
  double* nativep1Pin = p1Pin;
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->DrawSegment3D(nativep0Pin, nativep1Pin);
}



void vtkImageCanvasSource2D::DrawSegment3D(double x1, double y1, double z1, double x2, double y2, double z2)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->DrawSegment3D(x1, y1, z1, x2, y2, z2);
}



void vtkImageCanvasSource2D::DrawImage(int x0, int y0, vtkImageData^ i)
{
  ::vtkImageData* iWrap = vtk::ConvertManagedToNative<::vtkImageData>(i->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->DrawImage(x0, y0, iWrap);
}



void vtkImageCanvasSource2D::DrawImage(int x0, int y0, vtkImageData^ arg2, int sx, int sy, int width, int height)
{
  ::vtkImageData* arg2Wrap = vtk::ConvertManagedToNative<::vtkImageData>(arg2->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->DrawImage(x0, y0, arg2Wrap, sx, sy, width, height);
}



void vtkImageCanvasSource2D::FillPixel(int x, int y)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->FillPixel(x, y);
}



void vtkImageCanvasSource2D::SetExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetExtent(nativeextentPin);
}



void vtkImageCanvasSource2D::SetExtent(int x1, int x2, int y1, int y2, int z1, int z2)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetExtent(x1, x2, y1, y2, z1, z2);
}



void vtkImageCanvasSource2D::SetDefaultZ(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetDefaultZ(arg0);
}



int vtkImageCanvasSource2D::GetDefaultZ()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->GetDefaultZ();
  return retVal;
}



void vtkImageCanvasSource2D::SetRatio(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetRatio(arg0, arg1, arg2);
}



void vtkImageCanvasSource2D::SetRatio(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetRatio(nativeaPin);
}



array<double>^ vtkImageCanvasSource2D::GetRatio()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->GetRatio();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageCanvasSource2D::SetNumberOfScalarComponents(int i)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetNumberOfScalarComponents(i);
}



void vtkImageCanvasSource2D::SetScalarTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetScalarTypeToFloat();
}



void vtkImageCanvasSource2D::SetScalarTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetScalarTypeToDouble();
}



void vtkImageCanvasSource2D::SetScalarTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetScalarTypeToInt();
}



void vtkImageCanvasSource2D::SetScalarTypeToUnsignedInt()
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetScalarTypeToUnsignedInt();
}



void vtkImageCanvasSource2D::SetScalarTypeToLong()
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetScalarTypeToLong();
}



void vtkImageCanvasSource2D::SetScalarTypeToUnsignedLong()
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetScalarTypeToUnsignedLong();
}



void vtkImageCanvasSource2D::SetScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetScalarTypeToShort();
}



void vtkImageCanvasSource2D::SetScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetScalarTypeToUnsignedShort();
}



void vtkImageCanvasSource2D::SetScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetScalarTypeToUnsignedChar();
}



void vtkImageCanvasSource2D::SetScalarTypeToChar()
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetScalarTypeToChar();
}



void vtkImageCanvasSource2D::SetScalarType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageCanvasSource2D>(m_instance)->SetScalarType(arg0);
}



  vtkImageCanvasSource2D::vtkImageCanvasSource2D(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageCanvasSource2D::vtkImageCanvasSource2D(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageCanvasSource2D::vtkImageCanvasSource2D() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageCanvasSource2D::New()));
}



  vtkImageCanvasSource2D::~vtkImageCanvasSource2D() { }





} // end namespace vtkImaging
