

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageDataStreamerDotNet.h"

// native includes
#include "strstream"
#include "vtkImageDataStreamer.h"
#include "vtkExtentTranslator.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageDataStreamer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageDataStreamer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageDataStreamer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageDataStreamer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageDataStreamer^ vtkImageDataStreamer::NewInstance()
{
  ::vtkImageDataStreamer* retVal = static_cast<::vtkImageDataStreamer*>(vtk::ConvertManagedToNative<::vtkImageDataStreamer>(m_instance)->NewInstance());
  return gcnew vtkImageDataStreamer(IntPtr(retVal), false);
}



vtkImageDataStreamer^ vtkImageDataStreamer::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageDataStreamer* retVal = static_cast<::vtkImageDataStreamer*>(::vtkImageDataStreamer::SafeDownCast(oWrap));
  return gcnew vtkImageDataStreamer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageDataStreamer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageDataStreamer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageDataStreamer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageDataStreamer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageDataStreamer::SetNumberOfStreamDivisions(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageDataStreamer>(m_instance)->SetNumberOfStreamDivisions(arg0);
}



int vtkImageDataStreamer::GetNumberOfStreamDivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageDataStreamer>(m_instance)->GetNumberOfStreamDivisions();
  return retVal;
}



void vtkImageDataStreamer::Update()
{
  vtk::ConvertManagedToNative<::vtkImageDataStreamer>(m_instance)->Update();
}



void vtkImageDataStreamer::UpdateWholeExtent()
{
  vtk::ConvertManagedToNative<::vtkImageDataStreamer>(m_instance)->UpdateWholeExtent();
}



void vtkImageDataStreamer::SetExtentTranslator(vtkExtentTranslator^ arg0)
{
  ::vtkExtentTranslator* arg0Wrap = vtk::ConvertManagedToNative<::vtkExtentTranslator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageDataStreamer>(m_instance)->SetExtentTranslator(arg0Wrap);
}



vtkExtentTranslator^ vtkImageDataStreamer::GetExtentTranslator()
{
  ::vtkExtentTranslator* retVal = static_cast<::vtkExtentTranslator*>(vtk::ConvertManagedToNative<::vtkImageDataStreamer>(m_instance)->GetExtentTranslator());
  return gcnew vtkExtentTranslator(IntPtr(retVal), false);
}



  vtkImageDataStreamer::vtkImageDataStreamer(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageDataStreamer::vtkImageDataStreamer(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageDataStreamer::vtkImageDataStreamer() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageDataStreamer::New()));
}



  vtkImageDataStreamer::~vtkImageDataStreamer() { }





} // end namespace vtkImaging
