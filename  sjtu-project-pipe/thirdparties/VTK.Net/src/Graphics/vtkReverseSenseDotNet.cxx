

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkReverseSenseDotNet.h"

// native includes
#include "strstream"
#include "vtkReverseSense.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkReverseSense::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkReverseSense::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkReverseSense^ vtkReverseSense::NewInstance()
{
  ::vtkReverseSense* retVal = static_cast<::vtkReverseSense*>(vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->NewInstance());
  return gcnew vtkReverseSense(IntPtr(retVal), false);
}



vtkReverseSense^ vtkReverseSense::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkReverseSense* retVal = static_cast<::vtkReverseSense*>(::vtkReverseSense::SafeDownCast(oWrap));
  return gcnew vtkReverseSense(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkReverseSense::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkReverseSense::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkReverseSense::SetReverseCells(int arg0)
{
  vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->SetReverseCells(arg0);
}



int vtkReverseSense::GetReverseCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->GetReverseCells();
  return retVal;
}



void vtkReverseSense::ReverseCellsOn()
{
  vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->ReverseCellsOn();
}



void vtkReverseSense::ReverseCellsOff()
{
  vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->ReverseCellsOff();
}



void vtkReverseSense::SetReverseNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->SetReverseNormals(arg0);
}



int vtkReverseSense::GetReverseNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->GetReverseNormals();
  return retVal;
}



void vtkReverseSense::ReverseNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->ReverseNormalsOn();
}



void vtkReverseSense::ReverseNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkReverseSense>(m_instance)->ReverseNormalsOff();
}



  vtkReverseSense::vtkReverseSense(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkReverseSense::vtkReverseSense(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkReverseSense::vtkReverseSense() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkReverseSense::New()));
}



  vtkReverseSense::~vtkReverseSense() { }





} // end namespace vtkGraphics
