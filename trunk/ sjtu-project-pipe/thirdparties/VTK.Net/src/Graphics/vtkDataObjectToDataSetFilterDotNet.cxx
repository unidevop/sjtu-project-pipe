

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataObjectToDataSetFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkDataObjectToDataSetFilter.h"
#include "vtkDataObject.h"
#include "vtkDataSet.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkRectilinearGrid.h"
#include "vtkStructuredGrid.h"
#include "vtkStructuredPoints.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkDataObjectToDataSetFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectToDataSetFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataObjectToDataSetFilter^ vtkDataObjectToDataSetFilter::NewInstance()
{
  ::vtkDataObjectToDataSetFilter* retVal = static_cast<::vtkDataObjectToDataSetFilter*>(vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->NewInstance());
  return gcnew vtkDataObjectToDataSetFilter(IntPtr(retVal), false);
}



vtkDataObjectToDataSetFilter^ vtkDataObjectToDataSetFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataObjectToDataSetFilter* retVal = static_cast<::vtkDataObjectToDataSetFilter*>(::vtkDataObjectToDataSetFilter::SafeDownCast(oWrap));
  return gcnew vtkDataObjectToDataSetFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataObjectToDataSetFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataObjectToDataSetFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkDataObject^ vtkDataObjectToDataSetFilter::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkDataObjectToDataSetFilter::SetDataSetType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetDataSetType(arg0);
}



int vtkDataObjectToDataSetFilter::GetDataSetType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetDataSetType();
  return retVal;
}



void vtkDataObjectToDataSetFilter::SetDataSetTypeToPolyData()
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetDataSetTypeToPolyData();
}



void vtkDataObjectToDataSetFilter::SetDataSetTypeToStructuredPoints()
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetDataSetTypeToStructuredPoints();
}



void vtkDataObjectToDataSetFilter::SetDataSetTypeToStructuredGrid()
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetDataSetTypeToStructuredGrid();
}



void vtkDataObjectToDataSetFilter::SetDataSetTypeToRectilinearGrid()
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetDataSetTypeToRectilinearGrid();
}



void vtkDataObjectToDataSetFilter::SetDataSetTypeToUnstructuredGrid()
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetDataSetTypeToUnstructuredGrid();
}



vtkDataSet^ vtkDataObjectToDataSetFilter::GetOutput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetOutput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkDataObjectToDataSetFilter::GetOutput(int idx)
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetOutput(idx));
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkPolyData^ vtkDataObjectToDataSetFilter::GetPolyDataOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetPolyDataOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkStructuredPoints^ vtkDataObjectToDataSetFilter::GetStructuredPointsOutput()
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetStructuredPointsOutput());
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkDataObjectToDataSetFilter::GetStructuredGridOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetStructuredGridOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkDataObjectToDataSetFilter::GetUnstructuredGridOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetUnstructuredGridOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkDataObjectToDataSetFilter::GetRectilinearGridOutput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetRectilinearGridOutput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



void vtkDataObjectToDataSetFilter::SetPointComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetPointComponent(comp, arrayNameWrap, arrayComp, min, max, normalize);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetPointComponent(int comp, System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetPointComponent(comp, arrayNameWrap, arrayComp);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkDataObjectToDataSetFilter::GetPointComponentArrayName(int comp)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetPointComponentArrayName(comp);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectToDataSetFilter::GetPointComponentArrayComponent(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetPointComponentArrayComponent(comp);
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetPointComponentMinRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetPointComponentMinRange(comp);
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetPointComponentMaxRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetPointComponentMaxRange(comp);
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetPointComponentNormailzeFlag(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetPointComponentNormailzeFlag(comp);
  return retVal;
}



void vtkDataObjectToDataSetFilter::SetVertsComponent(System::String^ arrayName, int arrayComp, int min, int max)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetVertsComponent(arrayNameWrap, arrayComp, min, max);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetVertsComponent(System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetVertsComponent(arrayNameWrap, arrayComp);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkDataObjectToDataSetFilter::GetVertsComponentArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetVertsComponentArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectToDataSetFilter::GetVertsComponentArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetVertsComponentArrayComponent();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetVertsComponentMinRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetVertsComponentMinRange();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetVertsComponentMaxRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetVertsComponentMaxRange();
  return retVal;
}



void vtkDataObjectToDataSetFilter::SetLinesComponent(System::String^ arrayName, int arrayComp, int min, int max)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetLinesComponent(arrayNameWrap, arrayComp, min, max);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetLinesComponent(System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetLinesComponent(arrayNameWrap, arrayComp);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkDataObjectToDataSetFilter::GetLinesComponentArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetLinesComponentArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectToDataSetFilter::GetLinesComponentArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetLinesComponentArrayComponent();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetLinesComponentMinRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetLinesComponentMinRange();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetLinesComponentMaxRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetLinesComponentMaxRange();
  return retVal;
}



void vtkDataObjectToDataSetFilter::SetPolysComponent(System::String^ arrayName, int arrayComp, int min, int max)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetPolysComponent(arrayNameWrap, arrayComp, min, max);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetPolysComponent(System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetPolysComponent(arrayNameWrap, arrayComp);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkDataObjectToDataSetFilter::GetPolysComponentArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetPolysComponentArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectToDataSetFilter::GetPolysComponentArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetPolysComponentArrayComponent();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetPolysComponentMinRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetPolysComponentMinRange();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetPolysComponentMaxRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetPolysComponentMaxRange();
  return retVal;
}



void vtkDataObjectToDataSetFilter::SetStripsComponent(System::String^ arrayName, int arrayComp, int min, int max)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetStripsComponent(arrayNameWrap, arrayComp, min, max);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetStripsComponent(System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetStripsComponent(arrayNameWrap, arrayComp);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkDataObjectToDataSetFilter::GetStripsComponentArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetStripsComponentArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectToDataSetFilter::GetStripsComponentArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetStripsComponentArrayComponent();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetStripsComponentMinRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetStripsComponentMinRange();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetStripsComponentMaxRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetStripsComponentMaxRange();
  return retVal;
}



void vtkDataObjectToDataSetFilter::SetCellTypeComponent(System::String^ arrayName, int arrayComp, int min, int max)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetCellTypeComponent(arrayNameWrap, arrayComp, min, max);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetCellTypeComponent(System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetCellTypeComponent(arrayNameWrap, arrayComp);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkDataObjectToDataSetFilter::GetCellTypeComponentArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetCellTypeComponentArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectToDataSetFilter::GetCellTypeComponentArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetCellTypeComponentArrayComponent();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetCellTypeComponentMinRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetCellTypeComponentMinRange();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetCellTypeComponentMaxRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetCellTypeComponentMaxRange();
  return retVal;
}



void vtkDataObjectToDataSetFilter::SetCellConnectivityComponent(System::String^ arrayName, int arrayComp, int min, int max)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetCellConnectivityComponent(arrayNameWrap, arrayComp, min, max);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetCellConnectivityComponent(System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetCellConnectivityComponent(arrayNameWrap, arrayComp);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkDataObjectToDataSetFilter::GetCellConnectivityComponentArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetCellConnectivityComponentArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectToDataSetFilter::GetCellConnectivityComponentArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetCellConnectivityComponentArrayComponent();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetCellConnectivityComponentMinRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetCellConnectivityComponentMinRange();
  return retVal;
}



int vtkDataObjectToDataSetFilter::GetCellConnectivityComponentMaxRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetCellConnectivityComponentMaxRange();
  return retVal;
}



void vtkDataObjectToDataSetFilter::SetDefaultNormalize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetDefaultNormalize(arg0);
}



int vtkDataObjectToDataSetFilter::GetDefaultNormalize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetDefaultNormalize();
  return retVal;
}



void vtkDataObjectToDataSetFilter::DefaultNormalizeOn()
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->DefaultNormalizeOn();
}



void vtkDataObjectToDataSetFilter::DefaultNormalizeOff()
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->DefaultNormalizeOff();
}



void vtkDataObjectToDataSetFilter::SetDimensions(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetDimensions(arg0, arg1, arg2);
}



void vtkDataObjectToDataSetFilter::SetDimensions(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetDimensions(nativeaPin);
}



array<int>^ vtkDataObjectToDataSetFilter::GetDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDataObjectToDataSetFilter::SetOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetOrigin(arg0, arg1, arg2);
}



void vtkDataObjectToDataSetFilter::SetOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetOrigin(nativeaPin);
}



array<double>^ vtkDataObjectToDataSetFilter::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDataObjectToDataSetFilter::SetSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetSpacing(arg0, arg1, arg2);
}



void vtkDataObjectToDataSetFilter::SetSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetSpacing(nativeaPin);
}



array<double>^ vtkDataObjectToDataSetFilter::GetSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->GetSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDataObjectToDataSetFilter::SetDimensionsComponent(System::String^ arrayName, int arrayComp, int min, int max)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetDimensionsComponent(arrayNameWrap, arrayComp, min, max);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetDimensionsComponent(System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetDimensionsComponent(arrayNameWrap, arrayComp);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetSpacingComponent(System::String^ arrayName, int arrayComp, int min, int max)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetSpacingComponent(arrayNameWrap, arrayComp, min, max);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetSpacingComponent(System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetSpacingComponent(arrayNameWrap, arrayComp);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetOriginComponent(System::String^ arrayName, int arrayComp, int min, int max)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetOriginComponent(arrayNameWrap, arrayComp, min, max);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkDataObjectToDataSetFilter::SetOriginComponent(System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectToDataSetFilter>(m_instance)->SetOriginComponent(arrayNameWrap, arrayComp);
  arrayName->Remove(0,arrayName->Length);
  arrayName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arrayNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



  vtkDataObjectToDataSetFilter::vtkDataObjectToDataSetFilter(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkDataObjectToDataSetFilter::vtkDataObjectToDataSetFilter(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkDataObjectToDataSetFilter::vtkDataObjectToDataSetFilter() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDataObjectToDataSetFilter::New()));
}



  vtkDataObjectToDataSetFilter::~vtkDataObjectToDataSetFilter() { }





} // end namespace vtkGraphics
