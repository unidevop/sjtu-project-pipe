

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkThresholdPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkThresholdPoints.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkThresholdPoints::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkThresholdPoints>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkThresholdPoints::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkThresholdPoints>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkThresholdPoints^ vtkThresholdPoints::NewInstance()
{
  ::vtkThresholdPoints* retVal = static_cast<::vtkThresholdPoints*>(vtk::ConvertManagedToNative<::vtkThresholdPoints>(m_instance)->NewInstance());
  return gcnew vtkThresholdPoints(IntPtr(retVal), false);
}



vtkThresholdPoints^ vtkThresholdPoints::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkThresholdPoints* retVal = static_cast<::vtkThresholdPoints*>(::vtkThresholdPoints::SafeDownCast(oWrap));
  return gcnew vtkThresholdPoints(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkThresholdPoints::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkThresholdPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkThresholdPoints::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkThresholdPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkThresholdPoints::ThresholdByLower(double lower)
{
  vtk::ConvertManagedToNative<::vtkThresholdPoints>(m_instance)->ThresholdByLower(lower);
}



void vtkThresholdPoints::ThresholdByUpper(double upper)
{
  vtk::ConvertManagedToNative<::vtkThresholdPoints>(m_instance)->ThresholdByUpper(upper);
}



void vtkThresholdPoints::ThresholdBetween(double lower, double upper)
{
  vtk::ConvertManagedToNative<::vtkThresholdPoints>(m_instance)->ThresholdBetween(lower, upper);
}



double vtkThresholdPoints::GetUpperThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkThresholdPoints>(m_instance)->GetUpperThreshold();
  return retVal;
}



double vtkThresholdPoints::GetLowerThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkThresholdPoints>(m_instance)->GetLowerThreshold();
  return retVal;
}



  vtkThresholdPoints::vtkThresholdPoints(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkThresholdPoints::vtkThresholdPoints(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkThresholdPoints::vtkThresholdPoints() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkThresholdPoints::New()));
}



  vtkThresholdPoints::~vtkThresholdPoints() { }





} // end namespace vtkGraphics
