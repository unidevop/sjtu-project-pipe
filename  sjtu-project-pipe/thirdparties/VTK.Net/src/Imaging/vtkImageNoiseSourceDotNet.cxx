

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageNoiseSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkImageNoiseSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageNoiseSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageNoiseSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageNoiseSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageNoiseSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageNoiseSource^ vtkImageNoiseSource::NewInstance()
{
  ::vtkImageNoiseSource* retVal = static_cast<::vtkImageNoiseSource*>(vtk::ConvertManagedToNative<::vtkImageNoiseSource>(m_instance)->NewInstance());
  return gcnew vtkImageNoiseSource(IntPtr(retVal), false);
}



vtkImageNoiseSource^ vtkImageNoiseSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageNoiseSource* retVal = static_cast<::vtkImageNoiseSource*>(::vtkImageNoiseSource::SafeDownCast(oWrap));
  return gcnew vtkImageNoiseSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageNoiseSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageNoiseSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageNoiseSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageNoiseSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageNoiseSource::SetMinimum(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageNoiseSource>(m_instance)->SetMinimum(arg0);
}



double vtkImageNoiseSource::GetMinimum()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageNoiseSource>(m_instance)->GetMinimum();
  return retVal;
}



void vtkImageNoiseSource::SetMaximum(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageNoiseSource>(m_instance)->SetMaximum(arg0);
}



double vtkImageNoiseSource::GetMaximum()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageNoiseSource>(m_instance)->GetMaximum();
  return retVal;
}



void vtkImageNoiseSource::SetWholeExtent(int xMinx, int xMax, int yMin, int yMax, int zMin, int zMax)
{
  vtk::ConvertManagedToNative<::vtkImageNoiseSource>(m_instance)->SetWholeExtent(xMinx, xMax, yMin, yMax, zMin, zMax);
}



  vtkImageNoiseSource::vtkImageNoiseSource(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageNoiseSource::vtkImageNoiseSource(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageNoiseSource::vtkImageNoiseSource() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageNoiseSource::New()));
}



  vtkImageNoiseSource::~vtkImageNoiseSource() { }





} // end namespace vtkImaging
