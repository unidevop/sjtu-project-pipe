

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAmoebaMinimizerDotNet.h"

// native includes
#include "strstream"
#include "vtkAmoebaMinimizer.h"

using namespace System;

namespace vtk {

System::String^ vtkAmoebaMinimizer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAmoebaMinimizer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAmoebaMinimizer^ vtkAmoebaMinimizer::NewInstance()
{
  ::vtkAmoebaMinimizer* retVal = static_cast<::vtkAmoebaMinimizer*>(vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->NewInstance());
  return gcnew vtkAmoebaMinimizer(IntPtr(retVal), false);
}



vtkAmoebaMinimizer^ vtkAmoebaMinimizer::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAmoebaMinimizer* retVal = static_cast<::vtkAmoebaMinimizer*>(::vtkAmoebaMinimizer::SafeDownCast(oWrap));
  return gcnew vtkAmoebaMinimizer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAmoebaMinimizer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAmoebaMinimizer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAmoebaMinimizer::SetParameterValue(System::String^ name, double value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->SetParameterValue(nameWrap, value);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkAmoebaMinimizer::SetParameterValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->SetParameterValue(i, value);
}



void vtkAmoebaMinimizer::SetParameterScale(System::String^ name, double scale)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->SetParameterScale(nameWrap, scale);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



double vtkAmoebaMinimizer::GetParameterScale(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  double retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetParameterScale(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkAmoebaMinimizer::SetParameterScale(int i, double scale)
{
  vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->SetParameterScale(i, scale);
}



double vtkAmoebaMinimizer::GetParameterScale(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetParameterScale(i);
  return retVal;
}



double vtkAmoebaMinimizer::GetParameterValue(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  double retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetParameterValue(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



double vtkAmoebaMinimizer::GetParameterValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetParameterValue(i);
  return retVal;
}



System::String^ vtkAmoebaMinimizer::GetParameterName(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetParameterName(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAmoebaMinimizer::GetNumberOfParameters()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetNumberOfParameters();
  return retVal;
}



void vtkAmoebaMinimizer::Initialize()
{
  vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->Initialize();
}



void vtkAmoebaMinimizer::Minimize()
{
  vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->Minimize();
}



int vtkAmoebaMinimizer::Iterate()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->Iterate();
  return retVal;
}



void vtkAmoebaMinimizer::SetFunctionValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->SetFunctionValue(arg0);
}



double vtkAmoebaMinimizer::GetFunctionValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetFunctionValue();
  return retVal;
}



void vtkAmoebaMinimizer::SetTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->SetTolerance(arg0);
}



double vtkAmoebaMinimizer::GetTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetTolerance();
  return retVal;
}



void vtkAmoebaMinimizer::SetMaxIterations(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->SetMaxIterations(arg0);
}



int vtkAmoebaMinimizer::GetMaxIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetMaxIterations();
  return retVal;
}



int vtkAmoebaMinimizer::GetIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetIterations();
  return retVal;
}



int vtkAmoebaMinimizer::GetFunctionEvaluations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->GetFunctionEvaluations();
  return retVal;
}



void vtkAmoebaMinimizer::EvaluateFunction()
{
  vtk::ConvertManagedToNative<::vtkAmoebaMinimizer>(m_instance)->EvaluateFunction();
}



  vtkAmoebaMinimizer::vtkAmoebaMinimizer(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkAmoebaMinimizer::vtkAmoebaMinimizer(bool donothing) : vtkObject(donothing) {}



  vtkAmoebaMinimizer::vtkAmoebaMinimizer() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkAmoebaMinimizer::New()));
}



  vtkAmoebaMinimizer::~vtkAmoebaMinimizer() { }





} // end namespace vtkCommon
