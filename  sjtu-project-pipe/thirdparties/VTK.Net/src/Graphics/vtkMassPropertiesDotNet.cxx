

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMassPropertiesDotNet.h"

// native includes
#include "strstream"
#include "vtkMassProperties.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMassProperties::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMassProperties::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMassProperties^ vtkMassProperties::NewInstance()
{
  ::vtkMassProperties* retVal = static_cast<::vtkMassProperties*>(vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->NewInstance());
  return gcnew vtkMassProperties(IntPtr(retVal), false);
}



vtkMassProperties^ vtkMassProperties::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMassProperties* retVal = static_cast<::vtkMassProperties*>(::vtkMassProperties::SafeDownCast(oWrap));
  return gcnew vtkMassProperties(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMassProperties::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMassProperties::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkMassProperties::GetVolume()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->GetVolume();
  return retVal;
}



double vtkMassProperties::GetVolumeX()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->GetVolumeX();
  return retVal;
}



double vtkMassProperties::GetVolumeY()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->GetVolumeY();
  return retVal;
}



double vtkMassProperties::GetVolumeZ()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->GetVolumeZ();
  return retVal;
}



double vtkMassProperties::GetKx()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->GetKx();
  return retVal;
}



double vtkMassProperties::GetKy()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->GetKy();
  return retVal;
}



double vtkMassProperties::GetKz()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->GetKz();
  return retVal;
}



double vtkMassProperties::GetSurfaceArea()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->GetSurfaceArea();
  return retVal;
}



double vtkMassProperties::GetNormalizedShapeIndex()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMassProperties>(m_instance)->GetNormalizedShapeIndex();
  return retVal;
}



  vtkMassProperties::vtkMassProperties(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkMassProperties::vtkMassProperties(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkMassProperties::vtkMassProperties() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMassProperties::New()));
}



  vtkMassProperties::~vtkMassProperties() { }





} // end namespace vtkGraphics
