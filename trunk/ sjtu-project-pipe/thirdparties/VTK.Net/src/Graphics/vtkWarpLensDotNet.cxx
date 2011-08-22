

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWarpLensDotNet.h"

// native includes
#include "strstream"
#include "vtkWarpLens.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWarpLens::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWarpLens::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWarpLens^ vtkWarpLens::NewInstance()
{
  ::vtkWarpLens* retVal = static_cast<::vtkWarpLens*>(vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->NewInstance());
  return gcnew vtkWarpLens(IntPtr(retVal), false);
}



vtkWarpLens^ vtkWarpLens::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWarpLens* retVal = static_cast<::vtkWarpLens*>(::vtkWarpLens::SafeDownCast(oWrap));
  return gcnew vtkWarpLens(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWarpLens::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWarpLens::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWarpLens::SetKappa(double kappa)
{
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetKappa(kappa);
}



double vtkWarpLens::GetKappa()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetKappa();
  return retVal;
}



void vtkWarpLens::SetCenter(double centerX, double centerY)
{
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetCenter(centerX, centerY);
}



array<double>^ vtkWarpLens::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkWarpLens::SetPrincipalPoint(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetPrincipalPoint(arg0, arg1);
}



void vtkWarpLens::SetPrincipalPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetPrincipalPoint(nativeaPin);
}



array<double>^ vtkWarpLens::GetPrincipalPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetPrincipalPoint();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkWarpLens::SetK1(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetK1(arg0);
}



double vtkWarpLens::GetK1()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetK1();
  return retVal;
}



void vtkWarpLens::SetK2(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetK2(arg0);
}



double vtkWarpLens::GetK2()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetK2();
  return retVal;
}



void vtkWarpLens::SetP1(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetP1(arg0);
}



double vtkWarpLens::GetP1()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetP1();
  return retVal;
}



void vtkWarpLens::SetP2(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetP2(arg0);
}



double vtkWarpLens::GetP2()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetP2();
  return retVal;
}



void vtkWarpLens::SetFormatWidth(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetFormatWidth(arg0);
}



double vtkWarpLens::GetFormatWidth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetFormatWidth();
  return retVal;
}



void vtkWarpLens::SetFormatHeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetFormatHeight(arg0);
}



double vtkWarpLens::GetFormatHeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetFormatHeight();
  return retVal;
}



void vtkWarpLens::SetImageWidth(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetImageWidth(arg0);
}



int vtkWarpLens::GetImageWidth()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetImageWidth();
  return retVal;
}



void vtkWarpLens::SetImageHeight(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->SetImageHeight(arg0);
}



int vtkWarpLens::GetImageHeight()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWarpLens>(m_instance)->GetImageHeight();
  return retVal;
}



  vtkWarpLens::vtkWarpLens(System::IntPtr native, bool bConst) : vtkPointSetAlgorithm(native, bConst) {}



  vtkWarpLens::vtkWarpLens(bool donothing) : vtkPointSetAlgorithm(donothing) {}



  vtkWarpLens::vtkWarpLens() : vtkPointSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkWarpLens::New()));
}



  vtkWarpLens::~vtkWarpLens() { }





} // end namespace vtkGraphics
