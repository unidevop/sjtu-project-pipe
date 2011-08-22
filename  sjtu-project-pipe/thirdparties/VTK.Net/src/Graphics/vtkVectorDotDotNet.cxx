

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVectorDotDotNet.h"

// native includes
#include "strstream"
#include "vtkVectorDot.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkVectorDot::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVectorDot>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVectorDot::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVectorDot>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVectorDot^ vtkVectorDot::NewInstance()
{
  ::vtkVectorDot* retVal = static_cast<::vtkVectorDot*>(vtk::ConvertManagedToNative<::vtkVectorDot>(m_instance)->NewInstance());
  return gcnew vtkVectorDot(IntPtr(retVal), false);
}



vtkVectorDot^ vtkVectorDot::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVectorDot* retVal = static_cast<::vtkVectorDot*>(::vtkVectorDot::SafeDownCast(oWrap));
  return gcnew vtkVectorDot(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVectorDot::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVectorDot>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVectorDot::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVectorDot>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVectorDot::SetScalarRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkVectorDot>(m_instance)->SetScalarRange(arg0, arg1);
}



void vtkVectorDot::SetScalarRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkVectorDot>(m_instance)->SetScalarRange(nativeaPin);
}



array<double>^ vtkVectorDot::GetScalarRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkVectorDot>(m_instance)->GetScalarRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkVectorDot::vtkVectorDot(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkVectorDot::vtkVectorDot(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkVectorDot::vtkVectorDot() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkVectorDot::New()));
}



  vtkVectorDot::~vtkVectorDot() { }





} // end namespace vtkGraphics
