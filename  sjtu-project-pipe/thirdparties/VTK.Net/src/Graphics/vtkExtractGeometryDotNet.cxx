

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtractGeometryDotNet.h"

// native includes
#include "strstream"
#include "vtkExtractGeometry.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkExtractGeometry::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtractGeometry::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtractGeometry^ vtkExtractGeometry::NewInstance()
{
  ::vtkExtractGeometry* retVal = static_cast<::vtkExtractGeometry*>(vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->NewInstance());
  return gcnew vtkExtractGeometry(IntPtr(retVal), false);
}



vtkExtractGeometry^ vtkExtractGeometry::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtractGeometry* retVal = static_cast<::vtkExtractGeometry*>(::vtkExtractGeometry::SafeDownCast(oWrap));
  return gcnew vtkExtractGeometry(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtractGeometry::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtractGeometry::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkExtractGeometry::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->GetMTime();
  return retVal;
}



void vtkExtractGeometry::SetImplicitFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->SetImplicitFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkExtractGeometry::GetImplicitFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->GetImplicitFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkExtractGeometry::SetExtractInside(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->SetExtractInside(arg0);
}



int vtkExtractGeometry::GetExtractInside()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->GetExtractInside();
  return retVal;
}



void vtkExtractGeometry::ExtractInsideOn()
{
  vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->ExtractInsideOn();
}



void vtkExtractGeometry::ExtractInsideOff()
{
  vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->ExtractInsideOff();
}



void vtkExtractGeometry::SetExtractBoundaryCells(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->SetExtractBoundaryCells(arg0);
}



int vtkExtractGeometry::GetExtractBoundaryCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->GetExtractBoundaryCells();
  return retVal;
}



void vtkExtractGeometry::ExtractBoundaryCellsOn()
{
  vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->ExtractBoundaryCellsOn();
}



void vtkExtractGeometry::ExtractBoundaryCellsOff()
{
  vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->ExtractBoundaryCellsOff();
}



void vtkExtractGeometry::SetExtractOnlyBoundaryCells(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->SetExtractOnlyBoundaryCells(arg0);
}



int vtkExtractGeometry::GetExtractOnlyBoundaryCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->GetExtractOnlyBoundaryCells();
  return retVal;
}



void vtkExtractGeometry::ExtractOnlyBoundaryCellsOn()
{
  vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->ExtractOnlyBoundaryCellsOn();
}



void vtkExtractGeometry::ExtractOnlyBoundaryCellsOff()
{
  vtk::ConvertManagedToNative<::vtkExtractGeometry>(m_instance)->ExtractOnlyBoundaryCellsOff();
}



  vtkExtractGeometry::vtkExtractGeometry(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkExtractGeometry::vtkExtractGeometry(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkExtractGeometry::vtkExtractGeometry() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExtractGeometry::New()));
}



  vtkExtractGeometry::~vtkExtractGeometry() { }





} // end namespace vtkGraphics
