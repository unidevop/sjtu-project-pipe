

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkNonLinearCellDotNet.h"
#include "vtkDataSetDotNet.h"
#include "vtkPointLocatorDotNet.h"
#include "vtkPolyDataDotNet.h"
#include "vtkUnstructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkNonLinearCell.h"
#include "vtkDataSet.h"
#include "vtkPointLocator.h"
#include "vtkPolyData.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkNonLinearCell::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkNonLinearCell::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkNonLinearCell^ vtkNonLinearCell::NewInstance()
{
  ::vtkNonLinearCell* retVal = static_cast<::vtkNonLinearCell*>(vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->NewInstance());
  return gcnew vtkNonLinearCell(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkNonLinearCell::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkNonLinearCell::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkNonLinearCell::SetError(double arg0)
{
  vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->SetError(arg0);
}



double vtkNonLinearCell::GetErrorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->GetErrorMinValue();
  return retVal;
}



double vtkNonLinearCell::GetErrorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->GetErrorMaxValue();
  return retVal;
}



double vtkNonLinearCell::GetError()
{
  double retVal = vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->GetError();
  return retVal;
}



int vtkNonLinearCell::IsLinear()
{
  int retVal = vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->IsLinear();
  return retVal;
}



void vtkNonLinearCell::Tessellate(int cellId, vtkDataSet^ input, vtkPolyData^ output, vtkPointLocator^ locatorNULL)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  ::vtkPolyData* outputWrap = vtk::ConvertManagedToNative<::vtkPolyData>(output->GetNativePointer());
  ::vtkPointLocator* locatorNULLWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locatorNULL->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->Tessellate(cellId, inputWrap, outputWrap, locatorNULLWrap);
}



void vtkNonLinearCell::Tessellate(int cellId, vtkDataSet^ input, vtkUnstructuredGrid^ output, vtkPointLocator^ locatorNULL)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  ::vtkUnstructuredGrid* outputWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(output->GetNativePointer());
  ::vtkPointLocator* locatorNULLWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locatorNULL->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkNonLinearCell>(m_instance)->Tessellate(cellId, inputWrap, outputWrap, locatorNULLWrap);
}



  vtkNonLinearCell::vtkNonLinearCell(System::IntPtr native, bool bConst) : vtkCell(native, bConst) {}



  vtkNonLinearCell::vtkNonLinearCell(bool donothing) : vtkCell(donothing) {}



  vtkNonLinearCell::vtkNonLinearCell() : vtkCell(false) {
  this->SetNativePointer(IntPtr(::vtkNonLinearCell::New()));
}



  vtkNonLinearCell::~vtkNonLinearCell() { }





} // end namespace vtkFiltering
