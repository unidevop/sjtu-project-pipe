

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWarpToDotNet.h"

// native includes
#include "strstream"
#include "vtkWarpTo.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWarpTo::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWarpTo::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWarpTo^ vtkWarpTo::NewInstance()
{
  ::vtkWarpTo* retVal = static_cast<::vtkWarpTo*>(vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->NewInstance());
  return gcnew vtkWarpTo(IntPtr(retVal), false);
}



vtkWarpTo^ vtkWarpTo::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWarpTo* retVal = static_cast<::vtkWarpTo*>(::vtkWarpTo::SafeDownCast(oWrap));
  return gcnew vtkWarpTo(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWarpTo::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWarpTo::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWarpTo::SetScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->SetScaleFactor(arg0);
}



double vtkWarpTo::GetScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->GetScaleFactor();
  return retVal;
}



array<double>^ vtkWarpTo::GetPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->GetPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkWarpTo::SetPosition(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->SetPosition(arg0, arg1, arg2);
}



void vtkWarpTo::SetPosition(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->SetPosition(nativeaPin);
}



void vtkWarpTo::SetAbsolute(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->SetAbsolute(arg0);
}



int vtkWarpTo::GetAbsolute()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->GetAbsolute();
  return retVal;
}



void vtkWarpTo::AbsoluteOn()
{
  vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->AbsoluteOn();
}



void vtkWarpTo::AbsoluteOff()
{
  vtk::ConvertManagedToNative<::vtkWarpTo>(m_instance)->AbsoluteOff();
}



  vtkWarpTo::vtkWarpTo(System::IntPtr native, bool bConst) : vtkPointSetAlgorithm(native, bConst) {}



  vtkWarpTo::vtkWarpTo(bool donothing) : vtkPointSetAlgorithm(donothing) {}



  vtkWarpTo::vtkWarpTo() : vtkPointSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkWarpTo::New()));
}



  vtkWarpTo::~vtkWarpTo() { }





} // end namespace vtkGraphics
