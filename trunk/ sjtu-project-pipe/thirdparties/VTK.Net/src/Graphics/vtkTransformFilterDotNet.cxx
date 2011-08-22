

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTransformFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkTransformFilter.h"
#include "vtkAbstractTransform.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTransformFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTransformFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTransformFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTransformFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTransformFilter^ vtkTransformFilter::NewInstance()
{
  ::vtkTransformFilter* retVal = static_cast<::vtkTransformFilter*>(vtk::ConvertManagedToNative<::vtkTransformFilter>(m_instance)->NewInstance());
  return gcnew vtkTransformFilter(IntPtr(retVal), false);
}



vtkTransformFilter^ vtkTransformFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTransformFilter* retVal = static_cast<::vtkTransformFilter*>(::vtkTransformFilter::SafeDownCast(oWrap));
  return gcnew vtkTransformFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTransformFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTransformFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTransformFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTransformFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkTransformFilter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkTransformFilter>(m_instance)->GetMTime();
  return retVal;
}



void vtkTransformFilter::SetTransform(vtkAbstractTransform^ arg0)
{
  ::vtkAbstractTransform* arg0Wrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransformFilter>(m_instance)->SetTransform(arg0Wrap);
}



vtkAbstractTransform^ vtkTransformFilter::GetTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkTransformFilter>(m_instance)->GetTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



  vtkTransformFilter::vtkTransformFilter(System::IntPtr native, bool bConst) : vtkPointSetAlgorithm(native, bConst) {}



  vtkTransformFilter::vtkTransformFilter(bool donothing) : vtkPointSetAlgorithm(donothing) {}



  vtkTransformFilter::vtkTransformFilter() : vtkPointSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTransformFilter::New()));
}



  vtkTransformFilter::~vtkTransformFilter() { }





} // end namespace vtkGraphics
