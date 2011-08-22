

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSubPixelPositionEdgelsDotNet.h"

// native includes
#include "strstream"
#include "vtkSubPixelPositionEdgels.h"
#include "vtkObject.h"
#include "vtkStructuredPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkSubPixelPositionEdgels::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSubPixelPositionEdgels::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSubPixelPositionEdgels^ vtkSubPixelPositionEdgels::NewInstance()
{
  ::vtkSubPixelPositionEdgels* retVal = static_cast<::vtkSubPixelPositionEdgels*>(vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->NewInstance());
  return gcnew vtkSubPixelPositionEdgels(IntPtr(retVal), false);
}



vtkSubPixelPositionEdgels^ vtkSubPixelPositionEdgels::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSubPixelPositionEdgels* retVal = static_cast<::vtkSubPixelPositionEdgels*>(::vtkSubPixelPositionEdgels::SafeDownCast(oWrap));
  return gcnew vtkSubPixelPositionEdgels(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSubPixelPositionEdgels::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSubPixelPositionEdgels::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSubPixelPositionEdgels::SetGradMaps(vtkStructuredPoints^ gm)
{
  ::vtkStructuredPoints* gmWrap = vtk::ConvertManagedToNative<::vtkStructuredPoints>(gm->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->SetGradMaps(gmWrap);
}



vtkStructuredPoints^ vtkSubPixelPositionEdgels::GetGradMaps()
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->GetGradMaps());
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



void vtkSubPixelPositionEdgels::SetTargetFlag(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->SetTargetFlag(arg0);
}



int vtkSubPixelPositionEdgels::GetTargetFlag()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->GetTargetFlag();
  return retVal;
}



void vtkSubPixelPositionEdgels::TargetFlagOn()
{
  vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->TargetFlagOn();
}



void vtkSubPixelPositionEdgels::TargetFlagOff()
{
  vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->TargetFlagOff();
}



void vtkSubPixelPositionEdgels::SetTargetValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->SetTargetValue(arg0);
}



double vtkSubPixelPositionEdgels::GetTargetValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSubPixelPositionEdgels>(m_instance)->GetTargetValue();
  return retVal;
}



  vtkSubPixelPositionEdgels::vtkSubPixelPositionEdgels(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSubPixelPositionEdgels::vtkSubPixelPositionEdgels(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSubPixelPositionEdgels::vtkSubPixelPositionEdgels() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSubPixelPositionEdgels::New()));
}



  vtkSubPixelPositionEdgels::~vtkSubPixelPositionEdgels() { }





} // end namespace vtkGraphics
