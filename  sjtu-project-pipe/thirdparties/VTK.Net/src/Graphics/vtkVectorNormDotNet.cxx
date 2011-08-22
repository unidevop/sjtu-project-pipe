

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVectorNormDotNet.h"

// native includes
#include "strstream"
#include "vtkVectorNorm.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkVectorNorm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVectorNorm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVectorNorm^ vtkVectorNorm::NewInstance()
{
  ::vtkVectorNorm* retVal = static_cast<::vtkVectorNorm*>(vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->NewInstance());
  return gcnew vtkVectorNorm(IntPtr(retVal), false);
}



vtkVectorNorm^ vtkVectorNorm::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVectorNorm* retVal = static_cast<::vtkVectorNorm*>(::vtkVectorNorm::SafeDownCast(oWrap));
  return gcnew vtkVectorNorm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVectorNorm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVectorNorm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVectorNorm::SetNormalize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->SetNormalize(arg0);
}



int vtkVectorNorm::GetNormalize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->GetNormalize();
  return retVal;
}



void vtkVectorNorm::NormalizeOn()
{
  vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->NormalizeOn();
}



void vtkVectorNorm::NormalizeOff()
{
  vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->NormalizeOff();
}



void vtkVectorNorm::SetAttributeMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->SetAttributeMode(arg0);
}



int vtkVectorNorm::GetAttributeMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->GetAttributeMode();
  return retVal;
}



void vtkVectorNorm::SetAttributeModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->SetAttributeModeToDefault();
}



void vtkVectorNorm::SetAttributeModeToUsePointData()
{
  vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->SetAttributeModeToUsePointData();
}



void vtkVectorNorm::SetAttributeModeToUseCellData()
{
  vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->SetAttributeModeToUseCellData();
}



System::String^ vtkVectorNorm::GetAttributeModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVectorNorm>(m_instance)->GetAttributeModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkVectorNorm::vtkVectorNorm(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkVectorNorm::vtkVectorNorm(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkVectorNorm::vtkVectorNorm() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkVectorNorm::New()));
}



  vtkVectorNorm::~vtkVectorNorm() { }





} // end namespace vtkGraphics
