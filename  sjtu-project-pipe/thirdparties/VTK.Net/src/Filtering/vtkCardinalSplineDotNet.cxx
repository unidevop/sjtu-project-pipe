

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCardinalSplineDotNet.h"

// native includes
#include "strstream"
#include "vtkCardinalSpline.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCardinalSpline::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCardinalSpline>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCardinalSpline::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCardinalSpline>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCardinalSpline^ vtkCardinalSpline::NewInstance()
{
  ::vtkCardinalSpline* retVal = static_cast<::vtkCardinalSpline*>(vtk::ConvertManagedToNative<::vtkCardinalSpline>(m_instance)->NewInstance());
  return gcnew vtkCardinalSpline(IntPtr(retVal), false);
}



vtkCardinalSpline^ vtkCardinalSpline::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCardinalSpline* retVal = static_cast<::vtkCardinalSpline*>(::vtkCardinalSpline::SafeDownCast(oWrap));
  return gcnew vtkCardinalSpline(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCardinalSpline::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCardinalSpline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCardinalSpline::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCardinalSpline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCardinalSpline::Compute()
{
  vtk::ConvertManagedToNative<::vtkCardinalSpline>(m_instance)->Compute();
}



double vtkCardinalSpline::Evaluate(double t)
{
  double retVal = vtk::ConvertManagedToNative<::vtkCardinalSpline>(m_instance)->Evaluate(t);
  return retVal;
}



void vtkCardinalSpline::DeepCopy(vtkSpline^ s)
{
  ::vtkSpline* sWrap = vtk::ConvertManagedToNative<::vtkSpline>(s->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCardinalSpline>(m_instance)->DeepCopy(sWrap);
}



  vtkCardinalSpline::vtkCardinalSpline(System::IntPtr native, bool bConst) : vtkSpline(native, bConst) {}



  vtkCardinalSpline::vtkCardinalSpline(bool donothing) : vtkSpline(donothing) {}



  vtkCardinalSpline::vtkCardinalSpline() : vtkSpline(false) {
  this->SetNativePointer(IntPtr(::vtkCardinalSpline::New()));
}



  vtkCardinalSpline::~vtkCardinalSpline() { }





} // end namespace vtkFiltering
