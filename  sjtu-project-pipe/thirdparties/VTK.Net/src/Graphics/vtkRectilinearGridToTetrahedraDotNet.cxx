

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRectilinearGridToTetrahedraDotNet.h"

// native includes
#include "strstream"
#include "vtkRectilinearGridToTetrahedra.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRectilinearGridToTetrahedra::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRectilinearGridToTetrahedra::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRectilinearGridToTetrahedra^ vtkRectilinearGridToTetrahedra::NewInstance()
{
  ::vtkRectilinearGridToTetrahedra* retVal = static_cast<::vtkRectilinearGridToTetrahedra*>(vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->NewInstance());
  return gcnew vtkRectilinearGridToTetrahedra(IntPtr(retVal), false);
}



vtkRectilinearGridToTetrahedra^ vtkRectilinearGridToTetrahedra::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRectilinearGridToTetrahedra* retVal = static_cast<::vtkRectilinearGridToTetrahedra*>(::vtkRectilinearGridToTetrahedra::SafeDownCast(oWrap));
  return gcnew vtkRectilinearGridToTetrahedra(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRectilinearGridToTetrahedra::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRectilinearGridToTetrahedra::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRectilinearGridToTetrahedra::SetTetraPerCellTo5()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->SetTetraPerCellTo5();
}



void vtkRectilinearGridToTetrahedra::SetTetraPerCellTo6()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->SetTetraPerCellTo6();
}



void vtkRectilinearGridToTetrahedra::SetTetraPerCellTo12()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->SetTetraPerCellTo12();
}



void vtkRectilinearGridToTetrahedra::SetTetraPerCellTo5And12()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->SetTetraPerCellTo5And12();
}



void vtkRectilinearGridToTetrahedra::SetTetraPerCell(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->SetTetraPerCell(arg0);
}



int vtkRectilinearGridToTetrahedra::GetTetraPerCell()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->GetTetraPerCell();
  return retVal;
}



void vtkRectilinearGridToTetrahedra::SetRememberVoxelId(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->SetRememberVoxelId(arg0);
}



int vtkRectilinearGridToTetrahedra::GetRememberVoxelId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->GetRememberVoxelId();
  return retVal;
}



void vtkRectilinearGridToTetrahedra::RememberVoxelIdOn()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->RememberVoxelIdOn();
}



void vtkRectilinearGridToTetrahedra::RememberVoxelIdOff()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->RememberVoxelIdOff();
}



void vtkRectilinearGridToTetrahedra::SetInput(array<double>^ Extent, array<double>^ Spacing, double tol)
{
  pin_ptr<double> ExtentPin = &Extent[0];
  double* nativeExtentPin = ExtentPin;
  pin_ptr<double> SpacingPin = &Spacing[0];
  double* nativeSpacingPin = SpacingPin;
  vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->SetInput(nativeExtentPin, nativeSpacingPin, tol);
}



void vtkRectilinearGridToTetrahedra::SetInput(double ExtentX, double ExtentY, double ExtentZ, double SpacingX, double SpacingY, double SpacingZ, double tol)
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridToTetrahedra>(m_instance)->SetInput(ExtentX, ExtentY, ExtentZ, SpacingX, SpacingY, SpacingZ, tol);
}



  vtkRectilinearGridToTetrahedra::vtkRectilinearGridToTetrahedra(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkRectilinearGridToTetrahedra::vtkRectilinearGridToTetrahedra(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkRectilinearGridToTetrahedra::vtkRectilinearGridToTetrahedra() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRectilinearGridToTetrahedra::New()));
}



  vtkRectilinearGridToTetrahedra::~vtkRectilinearGridToTetrahedra() { }





} // end namespace vtkGraphics
