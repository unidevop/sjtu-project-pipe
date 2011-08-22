

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPlatonicSolidSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkPlatonicSolidSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPlatonicSolidSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPlatonicSolidSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPlatonicSolidSource^ vtkPlatonicSolidSource::NewInstance()
{
  ::vtkPlatonicSolidSource* retVal = static_cast<::vtkPlatonicSolidSource*>(vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->NewInstance());
  return gcnew vtkPlatonicSolidSource(IntPtr(retVal), false);
}



vtkPlatonicSolidSource^ vtkPlatonicSolidSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPlatonicSolidSource* retVal = static_cast<::vtkPlatonicSolidSource*>(::vtkPlatonicSolidSource::SafeDownCast(oWrap));
  return gcnew vtkPlatonicSolidSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPlatonicSolidSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPlatonicSolidSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPlatonicSolidSource::SetSolidType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->SetSolidType(arg0);
}



int vtkPlatonicSolidSource::GetSolidTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->GetSolidTypeMinValue();
  return retVal;
}



int vtkPlatonicSolidSource::GetSolidTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->GetSolidTypeMaxValue();
  return retVal;
}



int vtkPlatonicSolidSource::GetSolidType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->GetSolidType();
  return retVal;
}



void vtkPlatonicSolidSource::SetSolidTypeToTetrahedron()
{
  vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->SetSolidTypeToTetrahedron();
}



void vtkPlatonicSolidSource::SetSolidTypeToCube()
{
  vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->SetSolidTypeToCube();
}



void vtkPlatonicSolidSource::SetSolidTypeToOctahedron()
{
  vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->SetSolidTypeToOctahedron();
}



void vtkPlatonicSolidSource::SetSolidTypeToIcosahedron()
{
  vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->SetSolidTypeToIcosahedron();
}



void vtkPlatonicSolidSource::SetSolidTypeToDodecahedron()
{
  vtk::ConvertManagedToNative<::vtkPlatonicSolidSource>(m_instance)->SetSolidTypeToDodecahedron();
}



  vtkPlatonicSolidSource::vtkPlatonicSolidSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkPlatonicSolidSource::vtkPlatonicSolidSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkPlatonicSolidSource::vtkPlatonicSolidSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPlatonicSolidSource::New()));
}



  vtkPlatonicSolidSource::~vtkPlatonicSolidSource() { }





} // end namespace vtkGraphics
