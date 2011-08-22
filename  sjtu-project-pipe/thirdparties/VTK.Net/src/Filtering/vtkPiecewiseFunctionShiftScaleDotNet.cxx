

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPiecewiseFunctionShiftScaleDotNet.h"

// native includes
#include "strstream"
#include "vtkPiecewiseFunctionShiftScale.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPiecewiseFunctionShiftScale::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPiecewiseFunctionShiftScale::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPiecewiseFunctionShiftScale^ vtkPiecewiseFunctionShiftScale::NewInstance()
{
  ::vtkPiecewiseFunctionShiftScale* retVal = static_cast<::vtkPiecewiseFunctionShiftScale*>(vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->NewInstance());
  return gcnew vtkPiecewiseFunctionShiftScale(IntPtr(retVal), false);
}



vtkPiecewiseFunctionShiftScale^ vtkPiecewiseFunctionShiftScale::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPiecewiseFunctionShiftScale* retVal = static_cast<::vtkPiecewiseFunctionShiftScale*>(::vtkPiecewiseFunctionShiftScale::SafeDownCast(oWrap));
  return gcnew vtkPiecewiseFunctionShiftScale(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPiecewiseFunctionShiftScale::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPiecewiseFunctionShiftScale::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPiecewiseFunctionShiftScale::SetPositionShift(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->SetPositionShift(arg0);
}



void vtkPiecewiseFunctionShiftScale::SetPositionScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->SetPositionScale(arg0);
}



void vtkPiecewiseFunctionShiftScale::SetValueShift(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->SetValueShift(arg0);
}



void vtkPiecewiseFunctionShiftScale::SetValueScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->SetValueScale(arg0);
}



double vtkPiecewiseFunctionShiftScale::GetPositionShift()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->GetPositionShift();
  return retVal;
}



double vtkPiecewiseFunctionShiftScale::GetPositionScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->GetPositionScale();
  return retVal;
}



double vtkPiecewiseFunctionShiftScale::GetValueShift()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->GetValueShift();
  return retVal;
}



double vtkPiecewiseFunctionShiftScale::GetValueScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunctionShiftScale>(m_instance)->GetValueScale();
  return retVal;
}



  vtkPiecewiseFunctionShiftScale::vtkPiecewiseFunctionShiftScale(System::IntPtr native, bool bConst) : vtkPiecewiseFunctionAlgorithm(native, bConst) {}



  vtkPiecewiseFunctionShiftScale::vtkPiecewiseFunctionShiftScale(bool donothing) : vtkPiecewiseFunctionAlgorithm(donothing) {}



  vtkPiecewiseFunctionShiftScale::vtkPiecewiseFunctionShiftScale() : vtkPiecewiseFunctionAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPiecewiseFunctionShiftScale::New()));
}



  vtkPiecewiseFunctionShiftScale::~vtkPiecewiseFunctionShiftScale() { }





} // end namespace vtkFiltering
