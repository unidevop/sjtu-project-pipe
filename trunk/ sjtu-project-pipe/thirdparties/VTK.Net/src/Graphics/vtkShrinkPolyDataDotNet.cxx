

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkShrinkPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkShrinkPolyData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkShrinkPolyData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkShrinkPolyData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkShrinkPolyData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkShrinkPolyData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkShrinkPolyData^ vtkShrinkPolyData::NewInstance()
{
  ::vtkShrinkPolyData* retVal = static_cast<::vtkShrinkPolyData*>(vtk::ConvertManagedToNative<::vtkShrinkPolyData>(m_instance)->NewInstance());
  return gcnew vtkShrinkPolyData(IntPtr(retVal), false);
}



vtkShrinkPolyData^ vtkShrinkPolyData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkShrinkPolyData* retVal = static_cast<::vtkShrinkPolyData*>(::vtkShrinkPolyData::SafeDownCast(oWrap));
  return gcnew vtkShrinkPolyData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkShrinkPolyData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkShrinkPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkShrinkPolyData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkShrinkPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkShrinkPolyData::SetShrinkFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkShrinkPolyData>(m_instance)->SetShrinkFactor(arg0);
}



double vtkShrinkPolyData::GetShrinkFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkShrinkPolyData>(m_instance)->GetShrinkFactorMinValue();
  return retVal;
}



double vtkShrinkPolyData::GetShrinkFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkShrinkPolyData>(m_instance)->GetShrinkFactorMaxValue();
  return retVal;
}



double vtkShrinkPolyData::GetShrinkFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkShrinkPolyData>(m_instance)->GetShrinkFactor();
  return retVal;
}



  vtkShrinkPolyData::vtkShrinkPolyData(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkShrinkPolyData::vtkShrinkPolyData(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkShrinkPolyData::vtkShrinkPolyData() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkShrinkPolyData::New()));
}



  vtkShrinkPolyData::~vtkShrinkPolyData() { }





} // end namespace vtkGraphics
