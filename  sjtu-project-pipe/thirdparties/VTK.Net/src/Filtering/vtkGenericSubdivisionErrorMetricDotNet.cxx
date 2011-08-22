

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericSubdivisionErrorMetricDotNet.h"
#include "vtkGenericAdaptorCellDotNet.h"
#include "vtkGenericDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericSubdivisionErrorMetric.h"
#include "vtkGenericAdaptorCell.h"
#include "vtkGenericDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericSubdivisionErrorMetric::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericSubdivisionErrorMetric>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericSubdivisionErrorMetric::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericSubdivisionErrorMetric>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericSubdivisionErrorMetric^ vtkGenericSubdivisionErrorMetric::NewInstance()
{
  ::vtkGenericSubdivisionErrorMetric* retVal = static_cast<::vtkGenericSubdivisionErrorMetric*>(vtk::ConvertManagedToNative<::vtkGenericSubdivisionErrorMetric>(m_instance)->NewInstance());
  return gcnew vtkGenericSubdivisionErrorMetric(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericSubdivisionErrorMetric::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericSubdivisionErrorMetric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericSubdivisionErrorMetric::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericSubdivisionErrorMetric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkGenericSubdivisionErrorMetric::RequiresEdgeSubdivision(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha)
{
  pin_ptr<double> leftPointPin = &leftPoint[0];
  double* nativeleftPointPin = leftPointPin;
  pin_ptr<double> midPointPin = &midPoint[0];
  double* nativemidPointPin = midPointPin;
  pin_ptr<double> rightPointPin = &rightPoint[0];
  double* nativerightPointPin = rightPointPin;
  int retVal = vtk::ConvertManagedToNative<::vtkGenericSubdivisionErrorMetric>(m_instance)->RequiresEdgeSubdivision(nativeleftPointPin, nativemidPointPin, nativerightPointPin, alpha);
  return retVal;
}



double vtkGenericSubdivisionErrorMetric::GetError(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha)
{
  pin_ptr<double> leftPointPin = &leftPoint[0];
  double* nativeleftPointPin = leftPointPin;
  pin_ptr<double> midPointPin = &midPoint[0];
  double* nativemidPointPin = midPointPin;
  pin_ptr<double> rightPointPin = &rightPoint[0];
  double* nativerightPointPin = rightPointPin;
  double retVal = vtk::ConvertManagedToNative<::vtkGenericSubdivisionErrorMetric>(m_instance)->GetError(nativeleftPointPin, nativemidPointPin, nativerightPointPin, alpha);
  return retVal;
}



void vtkGenericSubdivisionErrorMetric::SetGenericCell(vtkGenericAdaptorCell^ cell)
{
  ::vtkGenericAdaptorCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(cell->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericSubdivisionErrorMetric>(m_instance)->SetGenericCell(cellWrap);
}



vtkGenericAdaptorCell^ vtkGenericSubdivisionErrorMetric::GetGenericCell()
{
  ::vtkGenericAdaptorCell* retVal = static_cast<::vtkGenericAdaptorCell*>(vtk::ConvertManagedToNative<::vtkGenericSubdivisionErrorMetric>(m_instance)->GetGenericCell());
  return gcnew vtkGenericAdaptorCell(IntPtr(retVal), false);
}



void vtkGenericSubdivisionErrorMetric::SetDataSet(vtkGenericDataSet^ ds)
{
  ::vtkGenericDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkGenericDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericSubdivisionErrorMetric>(m_instance)->SetDataSet(dsWrap);
}



vtkGenericDataSet^ vtkGenericSubdivisionErrorMetric::GetDataSet()
{
  ::vtkGenericDataSet* retVal = static_cast<::vtkGenericDataSet*>(vtk::ConvertManagedToNative<::vtkGenericSubdivisionErrorMetric>(m_instance)->GetDataSet());
  return gcnew vtkGenericDataSet(IntPtr(retVal), false);
}



  vtkGenericSubdivisionErrorMetric::vtkGenericSubdivisionErrorMetric(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkGenericSubdivisionErrorMetric::vtkGenericSubdivisionErrorMetric(bool donothing) : vtkObject(donothing) {}



  vtkGenericSubdivisionErrorMetric::vtkGenericSubdivisionErrorMetric() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkGenericSubdivisionErrorMetric::New()));
}



  vtkGenericSubdivisionErrorMetric::~vtkGenericSubdivisionErrorMetric() { }





} // end namespace vtkFiltering
