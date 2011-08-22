

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOutlineSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkOutlineSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkOutlineSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOutlineSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOutlineSource^ vtkOutlineSource::NewInstance()
{
  ::vtkOutlineSource* retVal = static_cast<::vtkOutlineSource*>(vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->NewInstance());
  return gcnew vtkOutlineSource(IntPtr(retVal), false);
}



vtkOutlineSource^ vtkOutlineSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOutlineSource* retVal = static_cast<::vtkOutlineSource*>(::vtkOutlineSource::SafeDownCast(oWrap));
  return gcnew vtkOutlineSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOutlineSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOutlineSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOutlineSource::SetBoxType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->SetBoxType(arg0);
}



int vtkOutlineSource::GetBoxType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->GetBoxType();
  return retVal;
}



void vtkOutlineSource::SetBoxTypeToAxisAligned()
{
  vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->SetBoxTypeToAxisAligned();
}



void vtkOutlineSource::SetBoxTypeToOriented()
{
  vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->SetBoxTypeToOriented();
}



void vtkOutlineSource::SetBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5)
{
  vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->SetBounds(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkOutlineSource::SetBounds(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->SetBounds(nativeaPin);
}



array<double>^ vtkOutlineSource::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkOutlineSource::SetCorners(array<double>^ arg0)
{
  pin_ptr<double> arg0Pin = &arg0[0];
  double* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->SetCorners(nativearg0Pin);
}



array<double>^ vtkOutlineSource::GetCorners()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkOutlineSource>(m_instance)->GetCorners();
  array<double>^ mRetVal = gcnew array<double>(24);
  for (size_t cprIdx=0; cprIdx<24; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkOutlineSource::vtkOutlineSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkOutlineSource::vtkOutlineSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkOutlineSource::vtkOutlineSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkOutlineSource::New()));
}



  vtkOutlineSource::~vtkOutlineSource() { }





} // end namespace vtkGraphics
