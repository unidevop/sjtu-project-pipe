

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkQuadricClusteringDotNet.h"
#include "vtkFeatureEdgesDotNet.h"

// native includes
#include "strstream"
#include "vtkQuadricClustering.h"
#include "vtkFeatureEdges.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkQuadricClustering::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkQuadricClustering::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkQuadricClustering^ vtkQuadricClustering::NewInstance()
{
  ::vtkQuadricClustering* retVal = static_cast<::vtkQuadricClustering*>(vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->NewInstance());
  return gcnew vtkQuadricClustering(IntPtr(retVal), false);
}



vtkQuadricClustering^ vtkQuadricClustering::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkQuadricClustering* retVal = static_cast<::vtkQuadricClustering*>(::vtkQuadricClustering::SafeDownCast(oWrap));
  return gcnew vtkQuadricClustering(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkQuadricClustering::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkQuadricClustering::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkQuadricClustering::SetNumberOfXDivisions(int num)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetNumberOfXDivisions(num);
}



void vtkQuadricClustering::SetNumberOfYDivisions(int num)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetNumberOfYDivisions(num);
}



void vtkQuadricClustering::SetNumberOfZDivisions(int num)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetNumberOfZDivisions(num);
}



int vtkQuadricClustering::GetNumberOfXDivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetNumberOfXDivisions();
  return retVal;
}



int vtkQuadricClustering::GetNumberOfYDivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetNumberOfYDivisions();
  return retVal;
}



int vtkQuadricClustering::GetNumberOfZDivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetNumberOfZDivisions();
  return retVal;
}



void vtkQuadricClustering::SetNumberOfDivisions(array<int>^ div)
{
  pin_ptr<int> divPin = &div[0];
  int* nativedivPin = divPin;
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetNumberOfDivisions(nativedivPin);
}



void vtkQuadricClustering::SetNumberOfDivisions(int div0, int div1, int div2)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetNumberOfDivisions(div0, div1, div2);
}



array<int>^ vtkQuadricClustering::GetNumberOfDivisions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetNumberOfDivisions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkQuadricClustering::GetNumberOfDivisions(array<int>^ div)
{
  pin_ptr<int> divPin = &div[0];
  int* nativedivPin = divPin;
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetNumberOfDivisions(nativedivPin);
}



void vtkQuadricClustering::SetAutoAdjustNumberOfDivisions(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetAutoAdjustNumberOfDivisions(arg0);
}



int vtkQuadricClustering::GetAutoAdjustNumberOfDivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetAutoAdjustNumberOfDivisions();
  return retVal;
}



void vtkQuadricClustering::AutoAdjustNumberOfDivisionsOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->AutoAdjustNumberOfDivisionsOn();
}



void vtkQuadricClustering::AutoAdjustNumberOfDivisionsOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->AutoAdjustNumberOfDivisionsOff();
}



void vtkQuadricClustering::SetDivisionOrigin(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetDivisionOrigin(x, y, z);
}



void vtkQuadricClustering::SetDivisionOrigin(array<double>^ o)
{
  pin_ptr<double> oPin = &o[0];
  double* nativeoPin = oPin;
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetDivisionOrigin(nativeoPin);
}



array<double>^ vtkQuadricClustering::GetDivisionOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetDivisionOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkQuadricClustering::SetDivisionSpacing(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetDivisionSpacing(x, y, z);
}



void vtkQuadricClustering::SetDivisionSpacing(array<double>^ s)
{
  pin_ptr<double> sPin = &s[0];
  double* nativesPin = sPin;
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetDivisionSpacing(nativesPin);
}



array<double>^ vtkQuadricClustering::GetDivisionSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetDivisionSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkQuadricClustering::SetUseInputPoints(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetUseInputPoints(arg0);
}



int vtkQuadricClustering::GetUseInputPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetUseInputPoints();
  return retVal;
}



void vtkQuadricClustering::UseInputPointsOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->UseInputPointsOn();
}



void vtkQuadricClustering::UseInputPointsOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->UseInputPointsOff();
}



void vtkQuadricClustering::SetUseFeatureEdges(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetUseFeatureEdges(arg0);
}



int vtkQuadricClustering::GetUseFeatureEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetUseFeatureEdges();
  return retVal;
}



void vtkQuadricClustering::UseFeatureEdgesOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->UseFeatureEdgesOn();
}



void vtkQuadricClustering::UseFeatureEdgesOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->UseFeatureEdgesOff();
}



vtkFeatureEdges^ vtkQuadricClustering::GetFeatureEdges()
{
  ::vtkFeatureEdges* retVal = static_cast<::vtkFeatureEdges*>(vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetFeatureEdges());
  return gcnew vtkFeatureEdges(IntPtr(retVal), false);
}



void vtkQuadricClustering::SetUseFeaturePoints(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetUseFeaturePoints(arg0);
}



int vtkQuadricClustering::GetUseFeaturePoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetUseFeaturePoints();
  return retVal;
}



void vtkQuadricClustering::UseFeaturePointsOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->UseFeaturePointsOn();
}



void vtkQuadricClustering::UseFeaturePointsOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->UseFeaturePointsOff();
}



void vtkQuadricClustering::SetFeaturePointsAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetFeaturePointsAngle(arg0);
}



double vtkQuadricClustering::GetFeaturePointsAngleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetFeaturePointsAngleMinValue();
  return retVal;
}



double vtkQuadricClustering::GetFeaturePointsAngleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetFeaturePointsAngleMaxValue();
  return retVal;
}



double vtkQuadricClustering::GetFeaturePointsAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetFeaturePointsAngle();
  return retVal;
}



void vtkQuadricClustering::SetUseInternalTriangles(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetUseInternalTriangles(arg0);
}



int vtkQuadricClustering::GetUseInternalTriangles()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetUseInternalTriangles();
  return retVal;
}



void vtkQuadricClustering::UseInternalTrianglesOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->UseInternalTrianglesOn();
}



void vtkQuadricClustering::UseInternalTrianglesOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->UseInternalTrianglesOff();
}



void vtkQuadricClustering::StartAppend(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->StartAppend(nativeboundsPin);
}



void vtkQuadricClustering::StartAppend(double x0, double x1, double y0, double y1, double z0, double z1)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->StartAppend(x0, x1, y0, y1, z0, z1);
}



void vtkQuadricClustering::Append(vtkPolyData^ piece)
{
  ::vtkPolyData* pieceWrap = vtk::ConvertManagedToNative<::vtkPolyData>(piece->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->Append(pieceWrap);
}



void vtkQuadricClustering::EndAppend()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->EndAppend();
}



void vtkQuadricClustering::SetCopyCellData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->SetCopyCellData(arg0);
}



int vtkQuadricClustering::GetCopyCellData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->GetCopyCellData();
  return retVal;
}



void vtkQuadricClustering::CopyCellDataOn()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->CopyCellDataOn();
}



void vtkQuadricClustering::CopyCellDataOff()
{
  vtk::ConvertManagedToNative<::vtkQuadricClustering>(m_instance)->CopyCellDataOff();
}



  vtkQuadricClustering::vtkQuadricClustering(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkQuadricClustering::vtkQuadricClustering(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkQuadricClustering::vtkQuadricClustering() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkQuadricClustering::New()));
}



  vtkQuadricClustering::~vtkQuadricClustering() { }





} // end namespace vtkGraphics
