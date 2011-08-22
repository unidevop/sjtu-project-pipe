

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStripperDotNet.h"

// native includes
#include "strstream"
#include "vtkStripper.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStripper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStripper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStripper^ vtkStripper::NewInstance()
{
  ::vtkStripper* retVal = static_cast<::vtkStripper*>(vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->NewInstance());
  return gcnew vtkStripper(IntPtr(retVal), false);
}



vtkStripper^ vtkStripper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStripper* retVal = static_cast<::vtkStripper*>(::vtkStripper::SafeDownCast(oWrap));
  return gcnew vtkStripper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStripper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStripper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStripper::SetMaximumLength(int arg0)
{
  vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->SetMaximumLength(arg0);
}



int vtkStripper::GetMaximumLengthMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->GetMaximumLengthMinValue();
  return retVal;
}



int vtkStripper::GetMaximumLengthMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->GetMaximumLengthMaxValue();
  return retVal;
}



int vtkStripper::GetMaximumLength()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->GetMaximumLength();
  return retVal;
}



void vtkStripper::PassCellDataAsFieldDataOn()
{
  vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->PassCellDataAsFieldDataOn();
}



void vtkStripper::PassCellDataAsFieldDataOff()
{
  vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->PassCellDataAsFieldDataOff();
}



void vtkStripper::SetPassCellDataAsFieldData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->SetPassCellDataAsFieldData(arg0);
}



int vtkStripper::GetPassCellDataAsFieldData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStripper>(m_instance)->GetPassCellDataAsFieldData();
  return retVal;
}



  vtkStripper::vtkStripper(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkStripper::vtkStripper(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkStripper::vtkStripper() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkStripper::New()));
}



  vtkStripper::~vtkStripper() { }





} // end namespace vtkGraphics
