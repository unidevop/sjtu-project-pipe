

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGlyph3DDotNet.h"

// native includes
#include "strstream"
#include "vtkGlyph3D.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataSet.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkGlyph3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGlyph3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGlyph3D^ vtkGlyph3D::NewInstance()
{
  ::vtkGlyph3D* retVal = static_cast<::vtkGlyph3D*>(vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->NewInstance());
  return gcnew vtkGlyph3D(IntPtr(retVal), false);
}



vtkGlyph3D^ vtkGlyph3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGlyph3D* retVal = static_cast<::vtkGlyph3D*>(::vtkGlyph3D::SafeDownCast(oWrap));
  return gcnew vtkGlyph3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGlyph3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGlyph3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGlyph3D::SetSource(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetSource(pdWrap);
}



void vtkGlyph3D::SetSource(int id, vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetSource(id, pdWrap);
}



void vtkGlyph3D::SetSourceConnection(int id, vtkAlgorithmOutput^ algOutput)
{
  ::vtkAlgorithmOutput* algOutputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(algOutput->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetSourceConnection(id, algOutputWrap);
}



void vtkGlyph3D::SetSourceConnection(vtkAlgorithmOutput^ algOutput)
{
  ::vtkAlgorithmOutput* algOutputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(algOutput->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetSourceConnection(algOutputWrap);
}



vtkPolyData^ vtkGlyph3D::GetSource(int id)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetSource(id));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkGlyph3D::SetScaling(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetScaling(arg0);
}



void vtkGlyph3D::ScalingOn()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->ScalingOn();
}



void vtkGlyph3D::ScalingOff()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->ScalingOff();
}



int vtkGlyph3D::GetScaling()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetScaling();
  return retVal;
}



void vtkGlyph3D::SetScaleMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetScaleMode(arg0);
}



int vtkGlyph3D::GetScaleMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetScaleMode();
  return retVal;
}



void vtkGlyph3D::SetScaleModeToScaleByScalar()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetScaleModeToScaleByScalar();
}



void vtkGlyph3D::SetScaleModeToScaleByVector()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetScaleModeToScaleByVector();
}



void vtkGlyph3D::SetScaleModeToScaleByVectorComponents()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetScaleModeToScaleByVectorComponents();
}



void vtkGlyph3D::SetScaleModeToDataScalingOff()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetScaleModeToDataScalingOff();
}



System::String^ vtkGlyph3D::GetScaleModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetScaleModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGlyph3D::SetColorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetColorMode(arg0);
}



int vtkGlyph3D::GetColorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetColorMode();
  return retVal;
}



void vtkGlyph3D::SetColorModeToColorByScale()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetColorModeToColorByScale();
}



void vtkGlyph3D::SetColorModeToColorByScalar()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetColorModeToColorByScalar();
}



void vtkGlyph3D::SetColorModeToColorByVector()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetColorModeToColorByVector();
}



System::String^ vtkGlyph3D::GetColorModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetColorModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGlyph3D::SetScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetScaleFactor(arg0);
}



double vtkGlyph3D::GetScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetScaleFactor();
  return retVal;
}



void vtkGlyph3D::SetRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetRange(arg0, arg1);
}



void vtkGlyph3D::SetRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetRange(nativeaPin);
}



array<double>^ vtkGlyph3D::GetRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkGlyph3D::SetOrient(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetOrient(arg0);
}



void vtkGlyph3D::OrientOn()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->OrientOn();
}



void vtkGlyph3D::OrientOff()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->OrientOff();
}



int vtkGlyph3D::GetOrient()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetOrient();
  return retVal;
}



void vtkGlyph3D::SetClamping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetClamping(arg0);
}



void vtkGlyph3D::ClampingOn()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->ClampingOn();
}



void vtkGlyph3D::ClampingOff()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->ClampingOff();
}



int vtkGlyph3D::GetClamping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetClamping();
  return retVal;
}



void vtkGlyph3D::SetVectorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetVectorMode(arg0);
}



int vtkGlyph3D::GetVectorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetVectorMode();
  return retVal;
}



void vtkGlyph3D::SetVectorModeToUseVector()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetVectorModeToUseVector();
}



void vtkGlyph3D::SetVectorModeToUseNormal()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetVectorModeToUseNormal();
}



void vtkGlyph3D::SetVectorModeToVectorRotationOff()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetVectorModeToVectorRotationOff();
}



System::String^ vtkGlyph3D::GetVectorModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetVectorModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGlyph3D::SetIndexMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetIndexMode(arg0);
}



int vtkGlyph3D::GetIndexMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetIndexMode();
  return retVal;
}



void vtkGlyph3D::SetIndexModeToScalar()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetIndexModeToScalar();
}



void vtkGlyph3D::SetIndexModeToVector()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetIndexModeToVector();
}



void vtkGlyph3D::SetIndexModeToOff()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetIndexModeToOff();
}



System::String^ vtkGlyph3D::GetIndexModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetIndexModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGlyph3D::SetGeneratePointIds(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetGeneratePointIds(arg0);
}



int vtkGlyph3D::GetGeneratePointIds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetGeneratePointIds();
  return retVal;
}



void vtkGlyph3D::GeneratePointIdsOn()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GeneratePointIdsOn();
}



void vtkGlyph3D::GeneratePointIdsOff()
{
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GeneratePointIdsOff();
}



void vtkGlyph3D::SetPointIdsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->SetPointIdsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkGlyph3D::GetPointIdsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->GetPointIdsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGlyph3D::IsPointVisible(vtkDataSet^ arg0, int arg1)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGlyph3D>(m_instance)->IsPointVisible(arg0Wrap, arg1);
  return retVal;
}



  vtkGlyph3D::vtkGlyph3D(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGlyph3D::vtkGlyph3D(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGlyph3D::vtkGlyph3D() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGlyph3D::New()));
}



  vtkGlyph3D::~vtkGlyph3D() { }





} // end namespace vtkGraphics
