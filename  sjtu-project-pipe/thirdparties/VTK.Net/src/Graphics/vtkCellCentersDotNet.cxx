

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCellCentersDotNet.h"

// native includes
#include "strstream"
#include "vtkCellCenters.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCellCenters::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellCenters>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCellCenters::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellCenters>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCellCenters^ vtkCellCenters::NewInstance()
{
  ::vtkCellCenters* retVal = static_cast<::vtkCellCenters*>(vtk::ConvertManagedToNative<::vtkCellCenters>(m_instance)->NewInstance());
  return gcnew vtkCellCenters(IntPtr(retVal), false);
}



vtkCellCenters^ vtkCellCenters::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCellCenters* retVal = static_cast<::vtkCellCenters*>(::vtkCellCenters::SafeDownCast(oWrap));
  return gcnew vtkCellCenters(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCellCenters::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCellCenters>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCellCenters::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCellCenters>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCellCenters::SetVertexCells(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCellCenters>(m_instance)->SetVertexCells(arg0);
}



int vtkCellCenters::GetVertexCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellCenters>(m_instance)->GetVertexCells();
  return retVal;
}



void vtkCellCenters::VertexCellsOn()
{
  vtk::ConvertManagedToNative<::vtkCellCenters>(m_instance)->VertexCellsOn();
}



void vtkCellCenters::VertexCellsOff()
{
  vtk::ConvertManagedToNative<::vtkCellCenters>(m_instance)->VertexCellsOff();
}



  vtkCellCenters::vtkCellCenters(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkCellCenters::vtkCellCenters(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkCellCenters::vtkCellCenters() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkCellCenters::New()));
}



  vtkCellCenters::~vtkCellCenters() { }





} // end namespace vtkGraphics
