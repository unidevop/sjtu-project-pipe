

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSimpleElevationFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkSimpleElevationFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSimpleElevationFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSimpleElevationFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSimpleElevationFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleElevationFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSimpleElevationFilter^ vtkSimpleElevationFilter::NewInstance()
{
  ::vtkSimpleElevationFilter* retVal = static_cast<::vtkSimpleElevationFilter*>(vtk::ConvertManagedToNative<::vtkSimpleElevationFilter>(m_instance)->NewInstance());
  return gcnew vtkSimpleElevationFilter(IntPtr(retVal), false);
}



vtkSimpleElevationFilter^ vtkSimpleElevationFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSimpleElevationFilter* retVal = static_cast<::vtkSimpleElevationFilter*>(::vtkSimpleElevationFilter::SafeDownCast(oWrap));
  return gcnew vtkSimpleElevationFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSimpleElevationFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSimpleElevationFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSimpleElevationFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSimpleElevationFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSimpleElevationFilter::SetVector(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkSimpleElevationFilter>(m_instance)->SetVector(arg0, arg1, arg2);
}



void vtkSimpleElevationFilter::SetVector(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkSimpleElevationFilter>(m_instance)->SetVector(nativeaPin);
}



array<double>^ vtkSimpleElevationFilter::GetVector()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSimpleElevationFilter>(m_instance)->GetVector();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkSimpleElevationFilter::vtkSimpleElevationFilter(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkSimpleElevationFilter::vtkSimpleElevationFilter(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkSimpleElevationFilter::vtkSimpleElevationFilter() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSimpleElevationFilter::New()));
}



  vtkSimpleElevationFilter::~vtkSimpleElevationFilter() { }





} // end namespace vtkGraphics
