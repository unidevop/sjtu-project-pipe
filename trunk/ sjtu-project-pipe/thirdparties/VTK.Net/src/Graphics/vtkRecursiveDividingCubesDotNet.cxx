

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRecursiveDividingCubesDotNet.h"

// native includes
#include "strstream"
#include "vtkRecursiveDividingCubes.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRecursiveDividingCubes::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRecursiveDividingCubes::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRecursiveDividingCubes^ vtkRecursiveDividingCubes::NewInstance()
{
  ::vtkRecursiveDividingCubes* retVal = static_cast<::vtkRecursiveDividingCubes*>(vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->NewInstance());
  return gcnew vtkRecursiveDividingCubes(IntPtr(retVal), false);
}



vtkRecursiveDividingCubes^ vtkRecursiveDividingCubes::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRecursiveDividingCubes* retVal = static_cast<::vtkRecursiveDividingCubes*>(::vtkRecursiveDividingCubes::SafeDownCast(oWrap));
  return gcnew vtkRecursiveDividingCubes(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRecursiveDividingCubes::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRecursiveDividingCubes::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRecursiveDividingCubes::SetValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->SetValue(arg0);
}



double vtkRecursiveDividingCubes::GetValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->GetValue();
  return retVal;
}



void vtkRecursiveDividingCubes::SetDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->SetDistance(arg0);
}



double vtkRecursiveDividingCubes::GetDistanceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->GetDistanceMinValue();
  return retVal;
}



double vtkRecursiveDividingCubes::GetDistanceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->GetDistanceMaxValue();
  return retVal;
}



double vtkRecursiveDividingCubes::GetDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->GetDistance();
  return retVal;
}



void vtkRecursiveDividingCubes::SetIncrement(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->SetIncrement(arg0);
}



int vtkRecursiveDividingCubes::GetIncrementMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->GetIncrementMinValue();
  return retVal;
}



int vtkRecursiveDividingCubes::GetIncrementMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->GetIncrementMaxValue();
  return retVal;
}



int vtkRecursiveDividingCubes::GetIncrement()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRecursiveDividingCubes>(m_instance)->GetIncrement();
  return retVal;
}



  vtkRecursiveDividingCubes::vtkRecursiveDividingCubes(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkRecursiveDividingCubes::vtkRecursiveDividingCubes(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkRecursiveDividingCubes::vtkRecursiveDividingCubes() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRecursiveDividingCubes::New()));
}



  vtkRecursiveDividingCubes::~vtkRecursiveDividingCubes() { }





} // end namespace vtkGraphics
