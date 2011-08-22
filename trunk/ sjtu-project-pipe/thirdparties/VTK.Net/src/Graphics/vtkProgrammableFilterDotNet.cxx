

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProgrammableFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkProgrammableFilter.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkRectilinearGrid.h"
#include "vtkStructuredGrid.h"
#include "vtkStructuredPoints.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkProgrammableFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProgrammableFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProgrammableFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProgrammableFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProgrammableFilter^ vtkProgrammableFilter::NewInstance()
{
  ::vtkProgrammableFilter* retVal = static_cast<::vtkProgrammableFilter*>(vtk::ConvertManagedToNative<::vtkProgrammableFilter>(m_instance)->NewInstance());
  return gcnew vtkProgrammableFilter(IntPtr(retVal), false);
}



vtkProgrammableFilter^ vtkProgrammableFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProgrammableFilter* retVal = static_cast<::vtkProgrammableFilter*>(::vtkProgrammableFilter::SafeDownCast(oWrap));
  return gcnew vtkProgrammableFilter(IntPtr(retVal), false);
}



vtkPolyData^ vtkProgrammableFilter::GetPolyDataInput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkProgrammableFilter>(m_instance)->GetPolyDataInput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkStructuredPoints^ vtkProgrammableFilter::GetStructuredPointsInput()
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkProgrammableFilter>(m_instance)->GetStructuredPointsInput());
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkProgrammableFilter::GetStructuredGridInput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkProgrammableFilter>(m_instance)->GetStructuredGridInput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkProgrammableFilter::GetUnstructuredGridInput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkProgrammableFilter>(m_instance)->GetUnstructuredGridInput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkProgrammableFilter::GetRectilinearGridInput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkProgrammableFilter>(m_instance)->GetRectilinearGridInput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



  vtkProgrammableFilter::vtkProgrammableFilter(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkProgrammableFilter::vtkProgrammableFilter(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkProgrammableFilter::vtkProgrammableFilter() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkProgrammableFilter::New()));
}



  vtkProgrammableFilter::~vtkProgrammableFilter() { }





} // end namespace vtkGraphics
