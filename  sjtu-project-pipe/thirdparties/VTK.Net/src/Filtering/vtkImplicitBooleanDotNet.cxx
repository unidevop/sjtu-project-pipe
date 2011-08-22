

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitBooleanDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitBoolean.h"
#include "vtkImplicitFunctionCollection.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitBoolean::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitBoolean::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitBoolean^ vtkImplicitBoolean::NewInstance()
{
  ::vtkImplicitBoolean* retVal = static_cast<::vtkImplicitBoolean*>(vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->NewInstance());
  return gcnew vtkImplicitBoolean(IntPtr(retVal), false);
}



vtkImplicitBoolean^ vtkImplicitBoolean::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImplicitBoolean* retVal = static_cast<::vtkImplicitBoolean*>(::vtkImplicitBoolean::SafeDownCast(oWrap));
  return gcnew vtkImplicitBoolean(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImplicitBoolean::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImplicitBoolean::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkImplicitBoolean::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkImplicitBoolean::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkImplicitBoolean::EvaluateGradient(array<double>^ x, array<double>^ g)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> gPin = &g[0];
  double* nativegPin = gPin;
  vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->EvaluateGradient(nativexPin, nativegPin);
}



unsigned long vtkImplicitBoolean::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->GetMTime();
  return retVal;
}



void vtkImplicitBoolean::AddFunction(vtkImplicitFunction^ in)
{
  ::vtkImplicitFunction* inWrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->AddFunction(inWrap);
}



void vtkImplicitBoolean::RemoveFunction(vtkImplicitFunction^ in)
{
  ::vtkImplicitFunction* inWrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->RemoveFunction(inWrap);
}



vtkImplicitFunctionCollection^ vtkImplicitBoolean::GetFunction()
{
  ::vtkImplicitFunctionCollection* retVal = static_cast<::vtkImplicitFunctionCollection*>(vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->GetFunction());
  return gcnew vtkImplicitFunctionCollection(IntPtr(retVal), false);
}



void vtkImplicitBoolean::SetOperationType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->SetOperationType(arg0);
}



int vtkImplicitBoolean::GetOperationTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->GetOperationTypeMinValue();
  return retVal;
}



int vtkImplicitBoolean::GetOperationTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->GetOperationTypeMaxValue();
  return retVal;
}



int vtkImplicitBoolean::GetOperationType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->GetOperationType();
  return retVal;
}



void vtkImplicitBoolean::SetOperationTypeToUnion()
{
  vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->SetOperationTypeToUnion();
}



void vtkImplicitBoolean::SetOperationTypeToIntersection()
{
  vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->SetOperationTypeToIntersection();
}



void vtkImplicitBoolean::SetOperationTypeToDifference()
{
  vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->SetOperationTypeToDifference();
}



void vtkImplicitBoolean::SetOperationTypeToUnionOfMagnitudes()
{
  vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->SetOperationTypeToUnionOfMagnitudes();
}



System::String^ vtkImplicitBoolean::GetOperationTypeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitBoolean>(m_instance)->GetOperationTypeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkImplicitBoolean::vtkImplicitBoolean(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkImplicitBoolean::vtkImplicitBoolean(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkImplicitBoolean::vtkImplicitBoolean() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitBoolean::New()));
}



  vtkImplicitBoolean::~vtkImplicitBoolean() { }





} // end namespace vtkFiltering
