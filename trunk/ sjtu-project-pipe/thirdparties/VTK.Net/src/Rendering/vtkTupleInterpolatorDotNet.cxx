

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTupleInterpolatorDotNet.h"

// native includes
#include "strstream"
#include "vtkTupleInterpolator.h"
#include "vtkSpline.h"

using namespace System;

namespace vtk {

System::String^ vtkTupleInterpolator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTupleInterpolator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTupleInterpolator^ vtkTupleInterpolator::NewInstance()
{
  ::vtkTupleInterpolator* retVal = static_cast<::vtkTupleInterpolator*>(vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->NewInstance());
  return gcnew vtkTupleInterpolator(IntPtr(retVal), false);
}



vtkTupleInterpolator^ vtkTupleInterpolator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTupleInterpolator* retVal = static_cast<::vtkTupleInterpolator*>(::vtkTupleInterpolator::SafeDownCast(oWrap));
  return gcnew vtkTupleInterpolator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTupleInterpolator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTupleInterpolator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTupleInterpolator::SetNumberOfComponents(int numComp)
{
  vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->SetNumberOfComponents(numComp);
}



int vtkTupleInterpolator::GetNumberOfComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->GetNumberOfComponents();
  return retVal;
}



int vtkTupleInterpolator::GetNumberOfTuples()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->GetNumberOfTuples();
  return retVal;
}



double vtkTupleInterpolator::GetMinimumT()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->GetMinimumT();
  return retVal;
}



double vtkTupleInterpolator::GetMaximumT()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->GetMaximumT();
  return retVal;
}



void vtkTupleInterpolator::Initialize()
{
  vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->Initialize();
}



void vtkTupleInterpolator::AddTuple(double t, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->AddTuple(t, nativetuplePin);
}



void vtkTupleInterpolator::RemoveTuple(double t)
{
  vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->RemoveTuple(t);
}



void vtkTupleInterpolator::InterpolateTuple(double t, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->InterpolateTuple(t, nativetuplePin);
}



void vtkTupleInterpolator::SetInterpolationType(int type)
{
  vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->SetInterpolationType(type);
}



int vtkTupleInterpolator::GetInterpolationType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->GetInterpolationType();
  return retVal;
}



void vtkTupleInterpolator::SetInterpolationTypeToLinear()
{
  vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->SetInterpolationTypeToLinear();
}



void vtkTupleInterpolator::SetInterpolationTypeToSpline()
{
  vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->SetInterpolationTypeToSpline();
}



void vtkTupleInterpolator::SetInterpolatingSpline(vtkSpline^ arg0)
{
  ::vtkSpline* arg0Wrap = vtk::ConvertManagedToNative<::vtkSpline>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->SetInterpolatingSpline(arg0Wrap);
}



vtkSpline^ vtkTupleInterpolator::GetInterpolatingSpline()
{
  ::vtkSpline* retVal = static_cast<::vtkSpline*>(vtk::ConvertManagedToNative<::vtkTupleInterpolator>(m_instance)->GetInterpolatingSpline());
  return gcnew vtkSpline(IntPtr(retVal), false);
}



  vtkTupleInterpolator::vtkTupleInterpolator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkTupleInterpolator::vtkTupleInterpolator(bool donothing) : vtkObject(donothing) {}



  vtkTupleInterpolator::vtkTupleInterpolator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkTupleInterpolator::New()));
}



  vtkTupleInterpolator::~vtkTupleInterpolator() { }





} // end namespace vtkRendering
