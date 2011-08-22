

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkPointSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPointSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointSource^ vtkPointSource::NewInstance()
{
  ::vtkPointSource* retVal = static_cast<::vtkPointSource*>(vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->NewInstance());
  return gcnew vtkPointSource(IntPtr(retVal), false);
}



vtkPointSource^ vtkPointSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPointSource* retVal = static_cast<::vtkPointSource*>(::vtkPointSource::SafeDownCast(oWrap));
  return gcnew vtkPointSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPointSource::SetNumberOfPoints(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->SetNumberOfPoints(arg0);
}



int vtkPointSource::GetNumberOfPointsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->GetNumberOfPointsMinValue();
  return retVal;
}



int vtkPointSource::GetNumberOfPointsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->GetNumberOfPointsMaxValue();
  return retVal;
}



int vtkPointSource::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->GetNumberOfPoints();
  return retVal;
}



void vtkPointSource::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkPointSource::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkPointSource::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPointSource::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->SetRadius(arg0);
}



double vtkPointSource::GetRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->GetRadiusMinValue();
  return retVal;
}



double vtkPointSource::GetRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->GetRadiusMaxValue();
  return retVal;
}



double vtkPointSource::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->GetRadius();
  return retVal;
}



void vtkPointSource::SetDistribution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->SetDistribution(arg0);
}



void vtkPointSource::SetDistributionToUniform()
{
  vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->SetDistributionToUniform();
}



void vtkPointSource::SetDistributionToShell()
{
  vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->SetDistributionToShell();
}



int vtkPointSource::GetDistribution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointSource>(m_instance)->GetDistribution();
  return retVal;
}



  vtkPointSource::vtkPointSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkPointSource::vtkPointSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkPointSource::vtkPointSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPointSource::New()));
}



  vtkPointSource::~vtkPointSource() { }





} // end namespace vtkGraphics
