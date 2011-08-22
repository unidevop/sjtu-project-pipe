

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleTerrainDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleTerrain.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleTerrain::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleTerrain::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleTerrain^ vtkInteractorStyleTerrain::NewInstance()
{
  ::vtkInteractorStyleTerrain* retVal = static_cast<::vtkInteractorStyleTerrain*>(vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleTerrain(IntPtr(retVal), false);
}



vtkInteractorStyleTerrain^ vtkInteractorStyleTerrain::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleTerrain* retVal = static_cast<::vtkInteractorStyleTerrain*>(::vtkInteractorStyleTerrain::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleTerrain(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleTerrain::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleTerrain::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorStyleTerrain::OnMouseMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->OnMouseMove();
}



void vtkInteractorStyleTerrain::OnLeftButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->OnLeftButtonDown();
}



void vtkInteractorStyleTerrain::OnLeftButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->OnLeftButtonUp();
}



void vtkInteractorStyleTerrain::OnMiddleButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->OnMiddleButtonDown();
}



void vtkInteractorStyleTerrain::OnMiddleButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->OnMiddleButtonUp();
}



void vtkInteractorStyleTerrain::OnRightButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->OnRightButtonDown();
}



void vtkInteractorStyleTerrain::OnRightButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->OnRightButtonUp();
}



void vtkInteractorStyleTerrain::OnChar()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->OnChar();
}



void vtkInteractorStyleTerrain::Rotate()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->Rotate();
}



void vtkInteractorStyleTerrain::Pan()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->Pan();
}



void vtkInteractorStyleTerrain::Dolly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->Dolly();
}



void vtkInteractorStyleTerrain::SetLatLongLines(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->SetLatLongLines(arg0);
}



int vtkInteractorStyleTerrain::GetLatLongLines()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->GetLatLongLines();
  return retVal;
}



void vtkInteractorStyleTerrain::LatLongLinesOn()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->LatLongLinesOn();
}



void vtkInteractorStyleTerrain::LatLongLinesOff()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTerrain>(m_instance)->LatLongLinesOff();
}



  vtkInteractorStyleTerrain::vtkInteractorStyleTerrain(System::IntPtr native, bool bConst) : vtkInteractorStyle(native, bConst) {}



  vtkInteractorStyleTerrain::vtkInteractorStyleTerrain(bool donothing) : vtkInteractorStyle(donothing) {}



  vtkInteractorStyleTerrain::vtkInteractorStyleTerrain() : vtkInteractorStyle(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleTerrain::New()));
}



  vtkInteractorStyleTerrain::~vtkInteractorStyleTerrain() { }





} // end namespace vtkRendering
