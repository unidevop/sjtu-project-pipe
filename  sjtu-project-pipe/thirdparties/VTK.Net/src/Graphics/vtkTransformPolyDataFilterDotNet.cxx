

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTransformPolyDataFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkTransformPolyDataFilter.h"
#include "vtkAbstractTransform.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTransformPolyDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTransformPolyDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTransformPolyDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTransformPolyDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTransformPolyDataFilter^ vtkTransformPolyDataFilter::NewInstance()
{
  ::vtkTransformPolyDataFilter* retVal = static_cast<::vtkTransformPolyDataFilter*>(vtk::ConvertManagedToNative<::vtkTransformPolyDataFilter>(m_instance)->NewInstance());
  return gcnew vtkTransformPolyDataFilter(IntPtr(retVal), false);
}



vtkTransformPolyDataFilter^ vtkTransformPolyDataFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTransformPolyDataFilter* retVal = static_cast<::vtkTransformPolyDataFilter*>(::vtkTransformPolyDataFilter::SafeDownCast(oWrap));
  return gcnew vtkTransformPolyDataFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTransformPolyDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTransformPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTransformPolyDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTransformPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkTransformPolyDataFilter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkTransformPolyDataFilter>(m_instance)->GetMTime();
  return retVal;
}



void vtkTransformPolyDataFilter::SetTransform(vtkAbstractTransform^ arg0)
{
  ::vtkAbstractTransform* arg0Wrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransformPolyDataFilter>(m_instance)->SetTransform(arg0Wrap);
}



vtkAbstractTransform^ vtkTransformPolyDataFilter::GetTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkTransformPolyDataFilter>(m_instance)->GetTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



  vtkTransformPolyDataFilter::vtkTransformPolyDataFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkTransformPolyDataFilter::vtkTransformPolyDataFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkTransformPolyDataFilter::vtkTransformPolyDataFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTransformPolyDataFilter::New()));
}



  vtkTransformPolyDataFilter::~vtkTransformPolyDataFilter() { }





} // end namespace vtkGraphics
