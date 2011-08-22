

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProgrammableSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkProgrammableSource.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkRectilinearGrid.h"
#include "vtkStructuredGrid.h"
#include "vtkStructuredPoints.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkProgrammableSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProgrammableSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProgrammableSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProgrammableSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProgrammableSource^ vtkProgrammableSource::NewInstance()
{
  ::vtkProgrammableSource* retVal = static_cast<::vtkProgrammableSource*>(vtk::ConvertManagedToNative<::vtkProgrammableSource>(m_instance)->NewInstance());
  return gcnew vtkProgrammableSource(IntPtr(retVal), false);
}



vtkProgrammableSource^ vtkProgrammableSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProgrammableSource* retVal = static_cast<::vtkProgrammableSource*>(::vtkProgrammableSource::SafeDownCast(oWrap));
  return gcnew vtkProgrammableSource(IntPtr(retVal), false);
}



vtkPolyData^ vtkProgrammableSource::GetPolyDataOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkProgrammableSource>(m_instance)->GetPolyDataOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkStructuredPoints^ vtkProgrammableSource::GetStructuredPointsOutput()
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkProgrammableSource>(m_instance)->GetStructuredPointsOutput());
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkProgrammableSource::GetStructuredGridOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkProgrammableSource>(m_instance)->GetStructuredGridOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkProgrammableSource::GetUnstructuredGridOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkProgrammableSource>(m_instance)->GetUnstructuredGridOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkProgrammableSource::GetRectilinearGridOutput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkProgrammableSource>(m_instance)->GetRectilinearGridOutput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



  vtkProgrammableSource::vtkProgrammableSource(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkProgrammableSource::vtkProgrammableSource(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkProgrammableSource::vtkProgrammableSource() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkProgrammableSource::New()));
}



  vtkProgrammableSource::~vtkProgrammableSource() { }





} // end namespace vtkGraphics
