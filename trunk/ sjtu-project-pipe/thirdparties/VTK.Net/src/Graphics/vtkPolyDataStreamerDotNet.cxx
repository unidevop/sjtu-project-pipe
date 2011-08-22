

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataStreamerDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataStreamer.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataStreamer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataStreamer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataStreamer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataStreamer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataStreamer^ vtkPolyDataStreamer::NewInstance()
{
  ::vtkPolyDataStreamer* retVal = static_cast<::vtkPolyDataStreamer*>(vtk::ConvertManagedToNative<::vtkPolyDataStreamer>(m_instance)->NewInstance());
  return gcnew vtkPolyDataStreamer(IntPtr(retVal), false);
}



vtkPolyDataStreamer^ vtkPolyDataStreamer::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolyDataStreamer* retVal = static_cast<::vtkPolyDataStreamer*>(::vtkPolyDataStreamer::SafeDownCast(oWrap));
  return gcnew vtkPolyDataStreamer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataStreamer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataStreamer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataStreamer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataStreamer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPolyDataStreamer::SetNumberOfStreamDivisions(int num)
{
  vtk::ConvertManagedToNative<::vtkPolyDataStreamer>(m_instance)->SetNumberOfStreamDivisions(num);
}



int vtkPolyDataStreamer::GetNumberOfStreamDivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataStreamer>(m_instance)->GetNumberOfStreamDivisions();
  return retVal;
}



void vtkPolyDataStreamer::SetColorByPiece(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataStreamer>(m_instance)->SetColorByPiece(arg0);
}



int vtkPolyDataStreamer::GetColorByPiece()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataStreamer>(m_instance)->GetColorByPiece();
  return retVal;
}



void vtkPolyDataStreamer::ColorByPieceOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataStreamer>(m_instance)->ColorByPieceOn();
}



void vtkPolyDataStreamer::ColorByPieceOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataStreamer>(m_instance)->ColorByPieceOff();
}



  vtkPolyDataStreamer::vtkPolyDataStreamer(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkPolyDataStreamer::vtkPolyDataStreamer(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkPolyDataStreamer::vtkPolyDataStreamer() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataStreamer::New()));
}



  vtkPolyDataStreamer::~vtkPolyDataStreamer() { }





} // end namespace vtkGraphics
