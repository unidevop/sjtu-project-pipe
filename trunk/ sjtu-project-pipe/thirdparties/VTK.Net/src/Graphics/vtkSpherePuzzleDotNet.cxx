

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSpherePuzzleDotNet.h"

// native includes
#include "strstream"
#include "vtkSpherePuzzle.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSpherePuzzle::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSpherePuzzle>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSpherePuzzle::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSpherePuzzle>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSpherePuzzle^ vtkSpherePuzzle::NewInstance()
{
  ::vtkSpherePuzzle* retVal = static_cast<::vtkSpherePuzzle*>(vtk::ConvertManagedToNative<::vtkSpherePuzzle>(m_instance)->NewInstance());
  return gcnew vtkSpherePuzzle(IntPtr(retVal), false);
}



vtkSpherePuzzle^ vtkSpherePuzzle::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSpherePuzzle* retVal = static_cast<::vtkSpherePuzzle*>(::vtkSpherePuzzle::SafeDownCast(oWrap));
  return gcnew vtkSpherePuzzle(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSpherePuzzle::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSpherePuzzle>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSpherePuzzle::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSpherePuzzle>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSpherePuzzle::Reset()
{
  vtk::ConvertManagedToNative<::vtkSpherePuzzle>(m_instance)->Reset();
}



void vtkSpherePuzzle::MoveHorizontal(int section, int percentage, int rightFlag)
{
  vtk::ConvertManagedToNative<::vtkSpherePuzzle>(m_instance)->MoveHorizontal(section, percentage, rightFlag);
}



void vtkSpherePuzzle::MoveVertical(int section, int percentage, int rightFlag)
{
  vtk::ConvertManagedToNative<::vtkSpherePuzzle>(m_instance)->MoveVertical(section, percentage, rightFlag);
}



int vtkSpherePuzzle::SetPoint(double x, double y, double z)
{
  int retVal = vtk::ConvertManagedToNative<::vtkSpherePuzzle>(m_instance)->SetPoint(x, y, z);
  return retVal;
}



void vtkSpherePuzzle::MovePoint(int percentage)
{
  vtk::ConvertManagedToNative<::vtkSpherePuzzle>(m_instance)->MovePoint(percentage);
}



  vtkSpherePuzzle::vtkSpherePuzzle(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSpherePuzzle::vtkSpherePuzzle(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSpherePuzzle::vtkSpherePuzzle() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSpherePuzzle::New()));
}



  vtkSpherePuzzle::~vtkSpherePuzzle() { }





} // end namespace vtkGraphics
