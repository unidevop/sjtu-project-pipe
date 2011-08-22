

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBrownianPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkBrownianPoints.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBrownianPoints::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBrownianPoints::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBrownianPoints^ vtkBrownianPoints::NewInstance()
{
  ::vtkBrownianPoints* retVal = static_cast<::vtkBrownianPoints*>(vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->NewInstance());
  return gcnew vtkBrownianPoints(IntPtr(retVal), false);
}



vtkBrownianPoints^ vtkBrownianPoints::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBrownianPoints* retVal = static_cast<::vtkBrownianPoints*>(::vtkBrownianPoints::SafeDownCast(oWrap));
  return gcnew vtkBrownianPoints(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBrownianPoints::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBrownianPoints::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBrownianPoints::SetMinimumSpeed(double arg0)
{
  vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->SetMinimumSpeed(arg0);
}



double vtkBrownianPoints::GetMinimumSpeedMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->GetMinimumSpeedMinValue();
  return retVal;
}



double vtkBrownianPoints::GetMinimumSpeedMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->GetMinimumSpeedMaxValue();
  return retVal;
}



double vtkBrownianPoints::GetMinimumSpeed()
{
  double retVal = vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->GetMinimumSpeed();
  return retVal;
}



void vtkBrownianPoints::SetMaximumSpeed(double arg0)
{
  vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->SetMaximumSpeed(arg0);
}



double vtkBrownianPoints::GetMaximumSpeedMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->GetMaximumSpeedMinValue();
  return retVal;
}



double vtkBrownianPoints::GetMaximumSpeedMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->GetMaximumSpeedMaxValue();
  return retVal;
}



double vtkBrownianPoints::GetMaximumSpeed()
{
  double retVal = vtk::ConvertManagedToNative<::vtkBrownianPoints>(m_instance)->GetMaximumSpeed();
  return retVal;
}



  vtkBrownianPoints::vtkBrownianPoints(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkBrownianPoints::vtkBrownianPoints(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkBrownianPoints::vtkBrownianPoints() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkBrownianPoints::New()));
}



  vtkBrownianPoints::~vtkBrownianPoints() { }





} // end namespace vtkGraphics
