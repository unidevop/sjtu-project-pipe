

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCGMWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkCGMWriter.h"
#include "vtkObject.h"
#include "vtkViewport.h"

using namespace System;

namespace vtk {

System::String^ vtkCGMWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCGMWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCGMWriter^ vtkCGMWriter::NewInstance()
{
  ::vtkCGMWriter* retVal = static_cast<::vtkCGMWriter*>(vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->NewInstance());
  return gcnew vtkCGMWriter(IntPtr(retVal), false);
}



vtkCGMWriter^ vtkCGMWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCGMWriter* retVal = static_cast<::vtkCGMWriter*>(::vtkCGMWriter::SafeDownCast(oWrap));
  return gcnew vtkCGMWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCGMWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCGMWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCGMWriter::SetViewport(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->SetViewport(arg0Wrap);
}



vtkViewport^ vtkCGMWriter::GetViewport()
{
  ::vtkViewport* retVal = static_cast<::vtkViewport*>(vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->GetViewport());
  return gcnew vtkViewport(IntPtr(retVal), false);
}



void vtkCGMWriter::SetSort(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->SetSort(arg0);
}



int vtkCGMWriter::GetSort()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->GetSort();
  return retVal;
}



void vtkCGMWriter::SetResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->SetResolution(arg0);
}



int vtkCGMWriter::GetResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->GetResolutionMinValue();
  return retVal;
}



int vtkCGMWriter::GetResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->GetResolutionMaxValue();
  return retVal;
}



int vtkCGMWriter::GetResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->GetResolution();
  return retVal;
}



void vtkCGMWriter::SetColorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->SetColorMode(arg0);
}



int vtkCGMWriter::GetColorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->GetColorMode();
  return retVal;
}



void vtkCGMWriter::SetColorModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->SetColorModeToDefault();
}



void vtkCGMWriter::SetColorModeToSpecifiedColor()
{
  vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->SetColorModeToSpecifiedColor();
}



void vtkCGMWriter::SetColorModeToRandomColors()
{
  vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->SetColorModeToRandomColors();
}



void vtkCGMWriter::SetSpecifiedColor(float arg0, float arg1, float arg2)
{
  vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->SetSpecifiedColor(arg0, arg1, arg2);
}



void vtkCGMWriter::SetSpecifiedColor(array<float>^ a)
{
  pin_ptr<float> aPin = &a[0];
  float* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->SetSpecifiedColor(nativeaPin);
}



array<float>^ vtkCGMWriter::GetSpecifiedColor()
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkCGMWriter>(m_instance)->GetSpecifiedColor();
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkCGMWriter::vtkCGMWriter(System::IntPtr native, bool bConst) : vtkPolyDataWriter(native, bConst) {}



  vtkCGMWriter::vtkCGMWriter(bool donothing) : vtkPolyDataWriter(donothing) {}



  vtkCGMWriter::vtkCGMWriter() : vtkPolyDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkCGMWriter::New()));
}



  vtkCGMWriter::~vtkCGMWriter() { }





} // end namespace vtkIO
