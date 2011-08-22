

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWarpScalarDotNet.h"

// native includes
#include "strstream"
#include "vtkWarpScalar.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWarpScalar::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWarpScalar::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWarpScalar^ vtkWarpScalar::NewInstance()
{
  ::vtkWarpScalar* retVal = static_cast<::vtkWarpScalar*>(vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->NewInstance());
  return gcnew vtkWarpScalar(IntPtr(retVal), false);
}



vtkWarpScalar^ vtkWarpScalar::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWarpScalar* retVal = static_cast<::vtkWarpScalar*>(::vtkWarpScalar::SafeDownCast(oWrap));
  return gcnew vtkWarpScalar(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWarpScalar::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWarpScalar::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWarpScalar::SetScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->SetScaleFactor(arg0);
}



double vtkWarpScalar::GetScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->GetScaleFactor();
  return retVal;
}



void vtkWarpScalar::SetUseNormal(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->SetUseNormal(arg0);
}



int vtkWarpScalar::GetUseNormal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->GetUseNormal();
  return retVal;
}



void vtkWarpScalar::UseNormalOn()
{
  vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->UseNormalOn();
}



void vtkWarpScalar::UseNormalOff()
{
  vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->UseNormalOff();
}



void vtkWarpScalar::SetNormal(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->SetNormal(arg0, arg1, arg2);
}



void vtkWarpScalar::SetNormal(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->SetNormal(nativeaPin);
}



array<double>^ vtkWarpScalar::GetNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->GetNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkWarpScalar::SetXYPlane(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->SetXYPlane(arg0);
}



int vtkWarpScalar::GetXYPlane()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->GetXYPlane();
  return retVal;
}



void vtkWarpScalar::XYPlaneOn()
{
  vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->XYPlaneOn();
}



void vtkWarpScalar::XYPlaneOff()
{
  vtk::ConvertManagedToNative<::vtkWarpScalar>(m_instance)->XYPlaneOff();
}



  vtkWarpScalar::vtkWarpScalar(System::IntPtr native, bool bConst) : vtkPointSetAlgorithm(native, bConst) {}



  vtkWarpScalar::vtkWarpScalar(bool donothing) : vtkPointSetAlgorithm(donothing) {}



  vtkWarpScalar::vtkWarpScalar() : vtkPointSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkWarpScalar::New()));
}



  vtkWarpScalar::~vtkWarpScalar() { }





} // end namespace vtkGraphics
