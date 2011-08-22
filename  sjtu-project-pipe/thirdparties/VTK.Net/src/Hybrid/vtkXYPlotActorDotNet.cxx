

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXYPlotActorDotNet.h"
#include "vtkLegendBoxActorDotNet.h"

// native includes
#include "strstream"
#include "vtkXYPlotActor.h"
#include "vtkAxisActor2D.h"
#include "vtkDataObject.h"
#include "vtkDataObjectCollection.h"
#include "vtkDataSet.h"
#include "vtkDataSetCollection.h"
#include "vtkGlyphSource2D.h"
#include "vtkLegendBoxActor.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"

using namespace System;

namespace vtk {

System::String^ vtkXYPlotActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXYPlotActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXYPlotActor^ vtkXYPlotActor::NewInstance()
{
  ::vtkXYPlotActor* retVal = static_cast<::vtkXYPlotActor*>(vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->NewInstance());
  return gcnew vtkXYPlotActor(IntPtr(retVal), false);
}



vtkXYPlotActor^ vtkXYPlotActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXYPlotActor* retVal = static_cast<::vtkXYPlotActor*>(::vtkXYPlotActor::SafeDownCast(oWrap));
  return gcnew vtkXYPlotActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXYPlotActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXYPlotActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXYPlotActor::AddInput(vtkDataSet^ in, System::String^ arrayName, int component)
{
  ::vtkDataSet* inWrap = vtk::ConvertManagedToNative<::vtkDataSet>(in->GetNativePointer());
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->AddInput(inWrap, arrayNameWrap, component);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkXYPlotActor::AddInput(vtkDataSet^ in)
{
  ::vtkDataSet* inWrap = vtk::ConvertManagedToNative<::vtkDataSet>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->AddInput(inWrap);
}



void vtkXYPlotActor::RemoveInput(vtkDataSet^ in, System::String^ arrayName, int component)
{
  ::vtkDataSet* inWrap = vtk::ConvertManagedToNative<::vtkDataSet>(in->GetNativePointer());
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->RemoveInput(inWrap, arrayNameWrap, component);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkXYPlotActor::RemoveInput(vtkDataSet^ in)
{
  ::vtkDataSet* inWrap = vtk::ConvertManagedToNative<::vtkDataSet>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->RemoveInput(inWrap);
}



void vtkXYPlotActor::RemoveAllInputs()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->RemoveAllInputs();
}



vtkDataSetCollection^ vtkXYPlotActor::GetInputList()
{
  ::vtkDataSetCollection* retVal = static_cast<::vtkDataSetCollection*>(vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetInputList());
  return gcnew vtkDataSetCollection(IntPtr(retVal), false);
}



void vtkXYPlotActor::SetPointComponent(int i, int comp)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPointComponent(i, comp);
}



int vtkXYPlotActor::GetPointComponent(int i)
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetPointComponent(i);
  return retVal;
}



void vtkXYPlotActor::SetXValues(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetXValues(arg0);
}



int vtkXYPlotActor::GetXValuesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetXValuesMinValue();
  return retVal;
}



int vtkXYPlotActor::GetXValuesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetXValuesMaxValue();
  return retVal;
}



int vtkXYPlotActor::GetXValues()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetXValues();
  return retVal;
}



void vtkXYPlotActor::SetXValuesToIndex()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetXValuesToIndex();
}



void vtkXYPlotActor::SetXValuesToArcLength()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetXValuesToArcLength();
}



void vtkXYPlotActor::SetXValuesToNormalizedArcLength()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetXValuesToNormalizedArcLength();
}



void vtkXYPlotActor::SetXValuesToValue()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetXValuesToValue();
}



System::String^ vtkXYPlotActor::GetXValuesAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetXValuesAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkXYPlotActor::AddDataObjectInput(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->AddDataObjectInput(inWrap);
}



void vtkXYPlotActor::RemoveDataObjectInput(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->RemoveDataObjectInput(inWrap);
}



vtkDataObjectCollection^ vtkXYPlotActor::GetDataObjectInputList()
{
  ::vtkDataObjectCollection* retVal = static_cast<::vtkDataObjectCollection*>(vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetDataObjectInputList());
  return gcnew vtkDataObjectCollection(IntPtr(retVal), false);
}



void vtkXYPlotActor::SetDataObjectPlotMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetDataObjectPlotMode(arg0);
}



int vtkXYPlotActor::GetDataObjectPlotModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetDataObjectPlotModeMinValue();
  return retVal;
}



int vtkXYPlotActor::GetDataObjectPlotModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetDataObjectPlotModeMaxValue();
  return retVal;
}



int vtkXYPlotActor::GetDataObjectPlotMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetDataObjectPlotMode();
  return retVal;
}



void vtkXYPlotActor::SetDataObjectPlotModeToRows()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetDataObjectPlotModeToRows();
}



void vtkXYPlotActor::SetDataObjectPlotModeToColumns()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetDataObjectPlotModeToColumns();
}



System::String^ vtkXYPlotActor::GetDataObjectPlotModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetDataObjectPlotModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkXYPlotActor::SetDataObjectXComponent(int i, int comp)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetDataObjectXComponent(i, comp);
}



int vtkXYPlotActor::GetDataObjectXComponent(int i)
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetDataObjectXComponent(i);
  return retVal;
}



void vtkXYPlotActor::SetDataObjectYComponent(int i, int comp)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetDataObjectYComponent(i, comp);
}



int vtkXYPlotActor::GetDataObjectYComponent(int i)
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetDataObjectYComponent(i);
  return retVal;
}



void vtkXYPlotActor::SetPlotColor(int i, double r, double g, double b)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotColor(i, r, g, b);
}



void vtkXYPlotActor::SetPlotColor(int i, array<double>^ color)
{
  pin_ptr<double> colorPin = &color[0];
  double* nativecolorPin = colorPin;
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotColor(i, nativecolorPin);
}



array<double>^ vtkXYPlotActor::GetPlotColor(int i)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetPlotColor(i);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkXYPlotActor::SetPlotSymbol(int i, vtkPolyData^ input)
{
  ::vtkPolyData* inputWrap = vtk::ConvertManagedToNative<::vtkPolyData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotSymbol(i, inputWrap);
}



vtkPolyData^ vtkXYPlotActor::GetPlotSymbol(int i)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetPlotSymbol(i));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkXYPlotActor::SetPlotLabel(int i, System::String^ label)
{
  char* labelWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(label).ToPointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotLabel(i, labelWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(labelWrap));
}



System::String^ vtkXYPlotActor::GetPlotLabel(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetPlotLabel(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXYPlotActor::GetPlotCurvePoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetPlotCurvePoints();
  return retVal;
}



void vtkXYPlotActor::SetPlotCurvePoints(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotCurvePoints(arg0);
}



void vtkXYPlotActor::PlotCurvePointsOn()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PlotCurvePointsOn();
}



void vtkXYPlotActor::PlotCurvePointsOff()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PlotCurvePointsOff();
}



int vtkXYPlotActor::GetPlotCurveLines()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetPlotCurveLines();
  return retVal;
}



void vtkXYPlotActor::SetPlotCurveLines(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotCurveLines(arg0);
}



void vtkXYPlotActor::PlotCurveLinesOn()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PlotCurveLinesOn();
}



void vtkXYPlotActor::PlotCurveLinesOff()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PlotCurveLinesOff();
}



void vtkXYPlotActor::SetPlotLines(int i, int arg1)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotLines(i, arg1);
}



int vtkXYPlotActor::GetPlotLines(int i)
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetPlotLines(i);
  return retVal;
}



void vtkXYPlotActor::SetPlotPoints(int i, int arg1)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotPoints(i, arg1);
}



int vtkXYPlotActor::GetPlotPoints(int i)
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetPlotPoints(i);
  return retVal;
}



void vtkXYPlotActor::SetExchangeAxes(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetExchangeAxes(arg0);
}



int vtkXYPlotActor::GetExchangeAxes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetExchangeAxes();
  return retVal;
}



void vtkXYPlotActor::ExchangeAxesOn()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->ExchangeAxesOn();
}



void vtkXYPlotActor::ExchangeAxesOff()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->ExchangeAxesOff();
}



void vtkXYPlotActor::SetReverseXAxis(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetReverseXAxis(arg0);
}



int vtkXYPlotActor::GetReverseXAxis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetReverseXAxis();
  return retVal;
}



void vtkXYPlotActor::ReverseXAxisOn()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->ReverseXAxisOn();
}



void vtkXYPlotActor::ReverseXAxisOff()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->ReverseXAxisOff();
}



void vtkXYPlotActor::SetReverseYAxis(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetReverseYAxis(arg0);
}



int vtkXYPlotActor::GetReverseYAxis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetReverseYAxis();
  return retVal;
}



void vtkXYPlotActor::ReverseYAxisOn()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->ReverseYAxisOn();
}



void vtkXYPlotActor::ReverseYAxisOff()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->ReverseYAxisOff();
}



vtkLegendBoxActor^ vtkXYPlotActor::GetLegendActor()
{
  ::vtkLegendBoxActor* retVal = static_cast<::vtkLegendBoxActor*>(vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetLegendActor());
  return gcnew vtkLegendBoxActor(IntPtr(retVal), false);
}



vtkGlyphSource2D^ vtkXYPlotActor::GetGlyphSource()
{
  ::vtkGlyphSource2D* retVal = static_cast<::vtkGlyphSource2D*>(vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetGlyphSource());
  return gcnew vtkGlyphSource2D(IntPtr(retVal), false);
}



void vtkXYPlotActor::SetTitle(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetTitle(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkXYPlotActor::GetTitle()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetTitle();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkXYPlotActor::SetXTitle(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetXTitle(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkXYPlotActor::GetXTitle()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetXTitle();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkXYPlotActor::SetYTitle(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetYTitle(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkXYPlotActor::GetYTitle()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetYTitle();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



vtkAxisActor2D^ vtkXYPlotActor::GetXAxisActor2D()
{
  ::vtkAxisActor2D* retVal = static_cast<::vtkAxisActor2D*>(vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetXAxisActor2D());
  return gcnew vtkAxisActor2D(IntPtr(retVal), false);
}



vtkAxisActor2D^ vtkXYPlotActor::GetYAxisActor2D()
{
  ::vtkAxisActor2D* retVal = static_cast<::vtkAxisActor2D*>(vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetYAxisActor2D());
  return gcnew vtkAxisActor2D(IntPtr(retVal), false);
}



void vtkXYPlotActor::SetXRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetXRange(arg0, arg1);
}



void vtkXYPlotActor::SetXRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetXRange(nativeaPin);
}



array<double>^ vtkXYPlotActor::GetXRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetXRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkXYPlotActor::SetYRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetYRange(arg0, arg1);
}



void vtkXYPlotActor::SetYRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetYRange(nativeaPin);
}



array<double>^ vtkXYPlotActor::GetYRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetYRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkXYPlotActor::SetPlotRange(double xmin, double ymin, double xmax, double ymax)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotRange(xmin, ymin, xmax, ymax);
}



void vtkXYPlotActor::SetNumberOfXLabels(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetNumberOfXLabels(arg0);
}



int vtkXYPlotActor::GetNumberOfXLabelsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetNumberOfXLabelsMinValue();
  return retVal;
}



int vtkXYPlotActor::GetNumberOfXLabelsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetNumberOfXLabelsMaxValue();
  return retVal;
}



int vtkXYPlotActor::GetNumberOfXLabels()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetNumberOfXLabels();
  return retVal;
}



void vtkXYPlotActor::SetNumberOfYLabels(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetNumberOfYLabels(arg0);
}



int vtkXYPlotActor::GetNumberOfYLabelsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetNumberOfYLabelsMinValue();
  return retVal;
}



int vtkXYPlotActor::GetNumberOfYLabelsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetNumberOfYLabelsMaxValue();
  return retVal;
}



int vtkXYPlotActor::GetNumberOfYLabels()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetNumberOfYLabels();
  return retVal;
}



void vtkXYPlotActor::SetNumberOfLabels(int num)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetNumberOfLabels(num);
}



void vtkXYPlotActor::SetLegend(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetLegend(arg0);
}



int vtkXYPlotActor::GetLegend()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetLegend();
  return retVal;
}



void vtkXYPlotActor::LegendOn()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->LegendOn();
}



void vtkXYPlotActor::LegendOff()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->LegendOff();
}



void vtkXYPlotActor::SetLegendPosition(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetLegendPosition(arg0, arg1);
}



void vtkXYPlotActor::SetLegendPosition(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetLegendPosition(nativeaPin);
}



array<double>^ vtkXYPlotActor::GetLegendPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetLegendPosition();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkXYPlotActor::SetLegendPosition2(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetLegendPosition2(arg0, arg1);
}



void vtkXYPlotActor::SetLegendPosition2(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetLegendPosition2(nativeaPin);
}



array<double>^ vtkXYPlotActor::GetLegendPosition2()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetLegendPosition2();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkXYPlotActor::SetTitleTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetTitleTextProperty(pWrap);
}



vtkTextProperty^ vtkXYPlotActor::GetTitleTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetTitleTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkXYPlotActor::SetAxisTitleTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetAxisTitleTextProperty(pWrap);
}



vtkTextProperty^ vtkXYPlotActor::GetAxisTitleTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetAxisTitleTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkXYPlotActor::SetAxisLabelTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetAxisLabelTextProperty(pWrap);
}



vtkTextProperty^ vtkXYPlotActor::GetAxisLabelTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetAxisLabelTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkXYPlotActor::SetLogx(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetLogx(arg0);
}



int vtkXYPlotActor::GetLogx()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetLogx();
  return retVal;
}



void vtkXYPlotActor::LogxOn()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->LogxOn();
}



void vtkXYPlotActor::LogxOff()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->LogxOff();
}



void vtkXYPlotActor::SetLabelFormat(System::String^ _arg)
{
  char* _argWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(_arg).ToPointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetLabelFormat(_argWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(_argWrap));
}



System::String^ vtkXYPlotActor::GetLabelFormat()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetLabelFormat();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkXYPlotActor::SetBorder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetBorder(arg0);
}



int vtkXYPlotActor::GetBorderMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetBorderMinValue();
  return retVal;
}



int vtkXYPlotActor::GetBorderMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetBorderMaxValue();
  return retVal;
}



int vtkXYPlotActor::GetBorder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetBorder();
  return retVal;
}



int vtkXYPlotActor::GetPlotPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetPlotPoints();
  return retVal;
}



void vtkXYPlotActor::SetPlotPoints(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotPoints(arg0);
}



void vtkXYPlotActor::PlotPointsOn()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PlotPointsOn();
}



void vtkXYPlotActor::PlotPointsOff()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PlotPointsOff();
}



int vtkXYPlotActor::GetPlotLines()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetPlotLines();
  return retVal;
}



void vtkXYPlotActor::SetPlotLines(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotLines(arg0);
}



void vtkXYPlotActor::PlotLinesOn()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PlotLinesOn();
}



void vtkXYPlotActor::PlotLinesOff()
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PlotLinesOff();
}



void vtkXYPlotActor::SetGlyphSize(double arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetGlyphSize(arg0);
}



double vtkXYPlotActor::GetGlyphSizeMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetGlyphSizeMinValue();
  return retVal;
}



double vtkXYPlotActor::GetGlyphSizeMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetGlyphSizeMaxValue();
  return retVal;
}



double vtkXYPlotActor::GetGlyphSize()
{
  double retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetGlyphSize();
  return retVal;
}



void vtkXYPlotActor::ViewportToPlotCoordinate(vtkViewport^ viewport, double% u, double% v)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  pin_ptr<double> uPin = &u;
  pin_ptr<double> vPin = &v;
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->ViewportToPlotCoordinate(viewportWrap, *uPin, *vPin);
}



void vtkXYPlotActor::ViewportToPlotCoordinate(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->ViewportToPlotCoordinate(viewportWrap);
}



void vtkXYPlotActor::SetPlotCoordinate(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotCoordinate(arg0, arg1);
}



void vtkXYPlotActor::SetPlotCoordinate(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetPlotCoordinate(nativeaPin);
}



array<double>^ vtkXYPlotActor::GetPlotCoordinate()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetPlotCoordinate();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkXYPlotActor::PlotToViewportCoordinate(vtkViewport^ viewport, double% u, double% v)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  pin_ptr<double> uPin = &u;
  pin_ptr<double> vPin = &v;
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PlotToViewportCoordinate(viewportWrap, *uPin, *vPin);
}



void vtkXYPlotActor::PlotToViewportCoordinate(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->PlotToViewportCoordinate(viewportWrap);
}



void vtkXYPlotActor::SetViewportCoordinate(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetViewportCoordinate(arg0, arg1);
}



void vtkXYPlotActor::SetViewportCoordinate(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->SetViewportCoordinate(nativeaPin);
}



array<double>^ vtkXYPlotActor::GetViewportCoordinate()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetViewportCoordinate();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkXYPlotActor::IsInPlot(vtkViewport^ viewport, double u, double v)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->IsInPlot(viewportWrap, u, v);
  return retVal;
}



unsigned long vtkXYPlotActor::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkXYPlotActor>(m_instance)->GetMTime();
  return retVal;
}



  vtkXYPlotActor::vtkXYPlotActor(System::IntPtr native, bool bConst) : vtkActor2D(native, bConst) {}



  vtkXYPlotActor::vtkXYPlotActor(bool donothing) : vtkActor2D(donothing) {}



  vtkXYPlotActor::vtkXYPlotActor() : vtkActor2D(false) {
  this->SetNativePointer(IntPtr(::vtkXYPlotActor::New()));
}



  vtkXYPlotActor::~vtkXYPlotActor() { }





} // end namespace vtkHybrid
