

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericGlyph3DFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericGlyph3DFilter.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericGlyph3DFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericGlyph3DFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericGlyph3DFilter^ vtkGenericGlyph3DFilter::NewInstance()
{
  ::vtkGenericGlyph3DFilter* retVal = static_cast<::vtkGenericGlyph3DFilter*>(vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->NewInstance());
  return gcnew vtkGenericGlyph3DFilter(IntPtr(retVal), false);
}



vtkGenericGlyph3DFilter^ vtkGenericGlyph3DFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericGlyph3DFilter* retVal = static_cast<::vtkGenericGlyph3DFilter*>(::vtkGenericGlyph3DFilter::SafeDownCast(oWrap));
  return gcnew vtkGenericGlyph3DFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericGlyph3DFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericGlyph3DFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericGlyph3DFilter::SetSource(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetSource(pdWrap);
}



void vtkGenericGlyph3DFilter::SetSource(int id, vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetSource(id, pdWrap);
}



vtkPolyData^ vtkGenericGlyph3DFilter::GetSource(int id)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetSource(id));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkGenericGlyph3DFilter::SetScaling(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetScaling(arg0);
}



void vtkGenericGlyph3DFilter::ScalingOn()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->ScalingOn();
}



void vtkGenericGlyph3DFilter::ScalingOff()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->ScalingOff();
}



int vtkGenericGlyph3DFilter::GetScaling()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetScaling();
  return retVal;
}



void vtkGenericGlyph3DFilter::SetScaleMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetScaleMode(arg0);
}



int vtkGenericGlyph3DFilter::GetScaleMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetScaleMode();
  return retVal;
}



void vtkGenericGlyph3DFilter::SetScaleModeToScaleByScalar()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetScaleModeToScaleByScalar();
}



void vtkGenericGlyph3DFilter::SetScaleModeToScaleByVector()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetScaleModeToScaleByVector();
}



void vtkGenericGlyph3DFilter::SetScaleModeToScaleByVectorComponents()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetScaleModeToScaleByVectorComponents();
}



void vtkGenericGlyph3DFilter::SetScaleModeToDataScalingOff()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetScaleModeToDataScalingOff();
}



System::String^ vtkGenericGlyph3DFilter::GetScaleModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetScaleModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericGlyph3DFilter::SetColorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetColorMode(arg0);
}



int vtkGenericGlyph3DFilter::GetColorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetColorMode();
  return retVal;
}



void vtkGenericGlyph3DFilter::SetColorModeToColorByScale()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetColorModeToColorByScale();
}



void vtkGenericGlyph3DFilter::SetColorModeToColorByScalar()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetColorModeToColorByScalar();
}



void vtkGenericGlyph3DFilter::SetColorModeToColorByVector()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetColorModeToColorByVector();
}



System::String^ vtkGenericGlyph3DFilter::GetColorModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetColorModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericGlyph3DFilter::SetScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetScaleFactor(arg0);
}



double vtkGenericGlyph3DFilter::GetScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetScaleFactor();
  return retVal;
}



void vtkGenericGlyph3DFilter::SetRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetRange(arg0, arg1);
}



void vtkGenericGlyph3DFilter::SetRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetRange(nativeaPin);
}



array<double>^ vtkGenericGlyph3DFilter::GetRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkGenericGlyph3DFilter::SetOrient(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetOrient(arg0);
}



void vtkGenericGlyph3DFilter::OrientOn()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->OrientOn();
}



void vtkGenericGlyph3DFilter::OrientOff()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->OrientOff();
}



int vtkGenericGlyph3DFilter::GetOrient()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetOrient();
  return retVal;
}



void vtkGenericGlyph3DFilter::SetClamping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetClamping(arg0);
}



void vtkGenericGlyph3DFilter::ClampingOn()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->ClampingOn();
}



void vtkGenericGlyph3DFilter::ClampingOff()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->ClampingOff();
}



int vtkGenericGlyph3DFilter::GetClamping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetClamping();
  return retVal;
}



void vtkGenericGlyph3DFilter::SetVectorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetVectorMode(arg0);
}



int vtkGenericGlyph3DFilter::GetVectorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetVectorMode();
  return retVal;
}



void vtkGenericGlyph3DFilter::SetVectorModeToUseVector()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetVectorModeToUseVector();
}



void vtkGenericGlyph3DFilter::SetVectorModeToUseNormal()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetVectorModeToUseNormal();
}



void vtkGenericGlyph3DFilter::SetVectorModeToVectorRotationOff()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetVectorModeToVectorRotationOff();
}



System::String^ vtkGenericGlyph3DFilter::GetVectorModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetVectorModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericGlyph3DFilter::SetIndexMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetIndexMode(arg0);
}



int vtkGenericGlyph3DFilter::GetIndexMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetIndexMode();
  return retVal;
}



void vtkGenericGlyph3DFilter::SetIndexModeToScalar()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetIndexModeToScalar();
}



void vtkGenericGlyph3DFilter::SetIndexModeToVector()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetIndexModeToVector();
}



void vtkGenericGlyph3DFilter::SetIndexModeToOff()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetIndexModeToOff();
}



System::String^ vtkGenericGlyph3DFilter::GetIndexModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetIndexModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericGlyph3DFilter::SetGeneratePointIds(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetGeneratePointIds(arg0);
}



int vtkGenericGlyph3DFilter::GetGeneratePointIds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetGeneratePointIds();
  return retVal;
}



void vtkGenericGlyph3DFilter::GeneratePointIdsOn()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GeneratePointIdsOn();
}



void vtkGenericGlyph3DFilter::GeneratePointIdsOff()
{
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GeneratePointIdsOff();
}



void vtkGenericGlyph3DFilter::SetPointIdsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SetPointIdsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkGenericGlyph3DFilter::GetPointIdsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetPointIdsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkGenericGlyph3DFilter::GetInputScalarsSelection()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetInputScalarsSelection();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericGlyph3DFilter::SelectInputScalars(System::String^ fieldName)
{
  char* fieldNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldName).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SelectInputScalars(fieldNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldNameWrap));
}



System::String^ vtkGenericGlyph3DFilter::GetInputVectorsSelection()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetInputVectorsSelection();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericGlyph3DFilter::SelectInputVectors(System::String^ fieldName)
{
  char* fieldNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldName).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SelectInputVectors(fieldNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldNameWrap));
}



System::String^ vtkGenericGlyph3DFilter::GetInputNormalsSelection()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->GetInputNormalsSelection();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericGlyph3DFilter::SelectInputNormals(System::String^ fieldName)
{
  char* fieldNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldName).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericGlyph3DFilter>(m_instance)->SelectInputNormals(fieldNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldNameWrap));
}



  vtkGenericGlyph3DFilter::vtkGenericGlyph3DFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGenericGlyph3DFilter::vtkGenericGlyph3DFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGenericGlyph3DFilter::vtkGenericGlyph3DFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGenericGlyph3DFilter::New()));
}



  vtkGenericGlyph3DFilter::~vtkGenericGlyph3DFilter() { }





} // end namespace vtkGenericFiltering
