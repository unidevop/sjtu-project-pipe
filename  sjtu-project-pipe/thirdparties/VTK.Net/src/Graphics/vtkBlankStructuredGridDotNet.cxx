

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBlankStructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkBlankStructuredGrid.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBlankStructuredGrid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBlankStructuredGrid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBlankStructuredGrid^ vtkBlankStructuredGrid::NewInstance()
{
  ::vtkBlankStructuredGrid* retVal = static_cast<::vtkBlankStructuredGrid*>(vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->NewInstance());
  return gcnew vtkBlankStructuredGrid(IntPtr(retVal), false);
}



vtkBlankStructuredGrid^ vtkBlankStructuredGrid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBlankStructuredGrid* retVal = static_cast<::vtkBlankStructuredGrid*>(::vtkBlankStructuredGrid::SafeDownCast(oWrap));
  return gcnew vtkBlankStructuredGrid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBlankStructuredGrid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBlankStructuredGrid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBlankStructuredGrid::SetMinBlankingValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->SetMinBlankingValue(arg0);
}



double vtkBlankStructuredGrid::GetMinBlankingValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->GetMinBlankingValue();
  return retVal;
}



void vtkBlankStructuredGrid::SetMaxBlankingValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->SetMaxBlankingValue(arg0);
}



double vtkBlankStructuredGrid::GetMaxBlankingValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->GetMaxBlankingValue();
  return retVal;
}



void vtkBlankStructuredGrid::SetArrayName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->SetArrayName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkBlankStructuredGrid::GetArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->GetArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkBlankStructuredGrid::SetArrayId(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->SetArrayId(arg0);
}



int vtkBlankStructuredGrid::GetArrayId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->GetArrayId();
  return retVal;
}



void vtkBlankStructuredGrid::SetComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->SetComponent(arg0);
}



int vtkBlankStructuredGrid::GetComponentMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->GetComponentMinValue();
  return retVal;
}



int vtkBlankStructuredGrid::GetComponentMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->GetComponentMaxValue();
  return retVal;
}



int vtkBlankStructuredGrid::GetComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBlankStructuredGrid>(m_instance)->GetComponent();
  return retVal;
}



  vtkBlankStructuredGrid::vtkBlankStructuredGrid(System::IntPtr native, bool bConst) : vtkStructuredGridAlgorithm(native, bConst) {}



  vtkBlankStructuredGrid::vtkBlankStructuredGrid(bool donothing) : vtkStructuredGridAlgorithm(donothing) {}



  vtkBlankStructuredGrid::vtkBlankStructuredGrid() : vtkStructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkBlankStructuredGrid::New()));
}



  vtkBlankStructuredGrid::~vtkBlankStructuredGrid() { }





} // end namespace vtkGraphics
