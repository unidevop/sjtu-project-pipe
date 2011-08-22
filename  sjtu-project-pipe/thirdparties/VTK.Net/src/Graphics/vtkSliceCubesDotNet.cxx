

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSliceCubesDotNet.h"

// native includes
#include "strstream"
#include "vtkSliceCubes.h"

using namespace System;

namespace vtk {

System::String^ vtkSliceCubes::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSliceCubes::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSliceCubes^ vtkSliceCubes::NewInstance()
{
  ::vtkSliceCubes* retVal = static_cast<::vtkSliceCubes*>(vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->NewInstance());
  return gcnew vtkSliceCubes(IntPtr(retVal), false);
}



vtkSliceCubes^ vtkSliceCubes::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSliceCubes* retVal = static_cast<::vtkSliceCubes*>(::vtkSliceCubes::SafeDownCast(oWrap));
  return gcnew vtkSliceCubes(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSliceCubes::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSliceCubes::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSliceCubes::Write()
{
  vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->Write();
}



void vtkSliceCubes::Update()
{
  vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->Update();
}



void vtkSliceCubes::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkSliceCubes::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkSliceCubes::SetValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->SetValue(arg0);
}



double vtkSliceCubes::GetValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->GetValue();
  return retVal;
}



void vtkSliceCubes::SetLimitsFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->SetLimitsFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkSliceCubes::GetLimitsFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSliceCubes>(m_instance)->GetLimitsFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkSliceCubes::vtkSliceCubes(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkSliceCubes::vtkSliceCubes(bool donothing) : vtkObject(donothing) {}



  vtkSliceCubes::vtkSliceCubes() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkSliceCubes::New()));
}



  vtkSliceCubes::~vtkSliceCubes() { }





} // end namespace vtkGraphics
