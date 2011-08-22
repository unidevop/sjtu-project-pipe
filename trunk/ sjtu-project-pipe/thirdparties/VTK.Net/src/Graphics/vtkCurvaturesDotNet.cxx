

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCurvaturesDotNet.h"

// native includes
#include "strstream"
#include "vtkCurvatures.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCurvatures::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCurvatures::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCurvatures^ vtkCurvatures::NewInstance()
{
  ::vtkCurvatures* retVal = static_cast<::vtkCurvatures*>(vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->NewInstance());
  return gcnew vtkCurvatures(IntPtr(retVal), false);
}



vtkCurvatures^ vtkCurvatures::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCurvatures* retVal = static_cast<::vtkCurvatures*>(::vtkCurvatures::SafeDownCast(oWrap));
  return gcnew vtkCurvatures(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCurvatures::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCurvatures::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCurvatures::SetCurvatureType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->SetCurvatureType(arg0);
}



int vtkCurvatures::GetCurvatureType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->GetCurvatureType();
  return retVal;
}



void vtkCurvatures::SetCurvatureTypeToGaussian()
{
  vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->SetCurvatureTypeToGaussian();
}



void vtkCurvatures::SetCurvatureTypeToMean()
{
  vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->SetCurvatureTypeToMean();
}



void vtkCurvatures::SetCurvatureTypeToMaximum()
{
  vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->SetCurvatureTypeToMaximum();
}



void vtkCurvatures::SetCurvatureTypeToMinimum()
{
  vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->SetCurvatureTypeToMinimum();
}



void vtkCurvatures::SetInvertMeanCurvature(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->SetInvertMeanCurvature(arg0);
}



int vtkCurvatures::GetInvertMeanCurvature()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->GetInvertMeanCurvature();
  return retVal;
}



void vtkCurvatures::InvertMeanCurvatureOn()
{
  vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->InvertMeanCurvatureOn();
}



void vtkCurvatures::InvertMeanCurvatureOff()
{
  vtk::ConvertManagedToNative<::vtkCurvatures>(m_instance)->InvertMeanCurvatureOff();
}



  vtkCurvatures::vtkCurvatures(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkCurvatures::vtkCurvatures(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkCurvatures::vtkCurvatures() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkCurvatures::New()));
}



  vtkCurvatures::~vtkCurvatures() { }





} // end namespace vtkGraphics
