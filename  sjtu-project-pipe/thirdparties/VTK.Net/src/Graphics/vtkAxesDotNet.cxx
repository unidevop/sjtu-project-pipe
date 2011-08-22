

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAxesDotNet.h"

// native includes
#include "strstream"
#include "vtkAxes.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkAxes::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAxes::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAxes^ vtkAxes::NewInstance()
{
  ::vtkAxes* retVal = static_cast<::vtkAxes*>(vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->NewInstance());
  return gcnew vtkAxes(IntPtr(retVal), false);
}



vtkAxes^ vtkAxes::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAxes* retVal = static_cast<::vtkAxes*>(::vtkAxes::SafeDownCast(oWrap));
  return gcnew vtkAxes(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAxes::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAxes::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAxes::SetOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->SetOrigin(arg0, arg1, arg2);
}



void vtkAxes::SetOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->SetOrigin(nativeaPin);
}



array<double>^ vtkAxes::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkAxes::SetScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->SetScaleFactor(arg0);
}



double vtkAxes::GetScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->GetScaleFactor();
  return retVal;
}



void vtkAxes::SetSymmetric(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->SetSymmetric(arg0);
}



int vtkAxes::GetSymmetric()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->GetSymmetric();
  return retVal;
}



void vtkAxes::SymmetricOn()
{
  vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->SymmetricOn();
}



void vtkAxes::SymmetricOff()
{
  vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->SymmetricOff();
}



void vtkAxes::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->SetComputeNormals(arg0);
}



int vtkAxes::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkAxes::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->ComputeNormalsOn();
}



void vtkAxes::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkAxes>(m_instance)->ComputeNormalsOff();
}



  vtkAxes::vtkAxes(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkAxes::vtkAxes(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkAxes::vtkAxes() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkAxes::New()));
}



  vtkAxes::~vtkAxes() { }





} // end namespace vtkGraphics
