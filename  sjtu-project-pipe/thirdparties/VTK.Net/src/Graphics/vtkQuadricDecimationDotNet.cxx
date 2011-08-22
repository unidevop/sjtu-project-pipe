

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkQuadricDecimationDotNet.h"

// native includes
#include "strstream"
#include "vtkQuadricDecimation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkQuadricDecimation::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkQuadricDecimation::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkQuadricDecimation^ vtkQuadricDecimation::NewInstance()
{
  ::vtkQuadricDecimation* retVal = static_cast<::vtkQuadricDecimation*>(vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->NewInstance());
  return gcnew vtkQuadricDecimation(IntPtr(retVal), false);
}



vtkQuadricDecimation^ vtkQuadricDecimation::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkQuadricDecimation* retVal = static_cast<::vtkQuadricDecimation*>(::vtkQuadricDecimation::SafeDownCast(oWrap));
  return gcnew vtkQuadricDecimation(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkQuadricDecimation::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkQuadricDecimation::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkQuadricDecimation::SetTargetReduction(double arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetTargetReduction(arg0);
}



double vtkQuadricDecimation::GetTargetReductionMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetTargetReductionMinValue();
  return retVal;
}



double vtkQuadricDecimation::GetTargetReductionMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetTargetReductionMaxValue();
  return retVal;
}



double vtkQuadricDecimation::GetTargetReduction()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetTargetReduction();
  return retVal;
}



void vtkQuadricDecimation::SetAttributeErrorMetric(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetAttributeErrorMetric(arg0);
}



int vtkQuadricDecimation::GetAttributeErrorMetric()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetAttributeErrorMetric();
  return retVal;
}



void vtkQuadricDecimation::AttributeErrorMetricOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->AttributeErrorMetricOn();
}



void vtkQuadricDecimation::AttributeErrorMetricOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->AttributeErrorMetricOff();
}



void vtkQuadricDecimation::SetScalarsAttribute(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetScalarsAttribute(arg0);
}



int vtkQuadricDecimation::GetScalarsAttribute()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetScalarsAttribute();
  return retVal;
}



void vtkQuadricDecimation::ScalarsAttributeOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->ScalarsAttributeOn();
}



void vtkQuadricDecimation::ScalarsAttributeOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->ScalarsAttributeOff();
}



void vtkQuadricDecimation::SetVectorsAttribute(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetVectorsAttribute(arg0);
}



int vtkQuadricDecimation::GetVectorsAttribute()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetVectorsAttribute();
  return retVal;
}



void vtkQuadricDecimation::VectorsAttributeOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->VectorsAttributeOn();
}



void vtkQuadricDecimation::VectorsAttributeOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->VectorsAttributeOff();
}



void vtkQuadricDecimation::SetNormalsAttribute(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetNormalsAttribute(arg0);
}



int vtkQuadricDecimation::GetNormalsAttribute()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetNormalsAttribute();
  return retVal;
}



void vtkQuadricDecimation::NormalsAttributeOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->NormalsAttributeOn();
}



void vtkQuadricDecimation::NormalsAttributeOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->NormalsAttributeOff();
}



void vtkQuadricDecimation::SetTCoordsAttribute(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetTCoordsAttribute(arg0);
}



int vtkQuadricDecimation::GetTCoordsAttribute()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetTCoordsAttribute();
  return retVal;
}



void vtkQuadricDecimation::TCoordsAttributeOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->TCoordsAttributeOn();
}



void vtkQuadricDecimation::TCoordsAttributeOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->TCoordsAttributeOff();
}



void vtkQuadricDecimation::SetTensorsAttribute(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetTensorsAttribute(arg0);
}



int vtkQuadricDecimation::GetTensorsAttribute()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetTensorsAttribute();
  return retVal;
}



void vtkQuadricDecimation::TensorsAttributeOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->TensorsAttributeOn();
}



void vtkQuadricDecimation::TensorsAttributeOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->TensorsAttributeOff();
}



void vtkQuadricDecimation::SetScalarsWeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetScalarsWeight(arg0);
}



void vtkQuadricDecimation::SetVectorsWeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetVectorsWeight(arg0);
}



void vtkQuadricDecimation::SetNormalsWeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetNormalsWeight(arg0);
}



void vtkQuadricDecimation::SetTCoordsWeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetTCoordsWeight(arg0);
}



void vtkQuadricDecimation::SetTensorsWeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->SetTensorsWeight(arg0);
}



double vtkQuadricDecimation::GetScalarsWeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetScalarsWeight();
  return retVal;
}



double vtkQuadricDecimation::GetVectorsWeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetVectorsWeight();
  return retVal;
}



double vtkQuadricDecimation::GetNormalsWeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetNormalsWeight();
  return retVal;
}



double vtkQuadricDecimation::GetTCoordsWeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetTCoordsWeight();
  return retVal;
}



double vtkQuadricDecimation::GetTensorsWeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetTensorsWeight();
  return retVal;
}



double vtkQuadricDecimation::GetActualReduction()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricDecimation>(m_instance)->GetActualReduction();
  return retVal;
}



  vtkQuadricDecimation::vtkQuadricDecimation(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkQuadricDecimation::vtkQuadricDecimation(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkQuadricDecimation::vtkQuadricDecimation() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkQuadricDecimation::New()));
}



  vtkQuadricDecimation::~vtkQuadricDecimation() { }





} // end namespace vtkGraphics
