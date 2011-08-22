

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtractPolyDataGeometryDotNet.h"

// native includes
#include "strstream"
#include "vtkExtractPolyDataGeometry.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkExtractPolyDataGeometry::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtractPolyDataGeometry::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtractPolyDataGeometry^ vtkExtractPolyDataGeometry::NewInstance()
{
  ::vtkExtractPolyDataGeometry* retVal = static_cast<::vtkExtractPolyDataGeometry*>(vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->NewInstance());
  return gcnew vtkExtractPolyDataGeometry(IntPtr(retVal), false);
}



vtkExtractPolyDataGeometry^ vtkExtractPolyDataGeometry::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtractPolyDataGeometry* retVal = static_cast<::vtkExtractPolyDataGeometry*>(::vtkExtractPolyDataGeometry::SafeDownCast(oWrap));
  return gcnew vtkExtractPolyDataGeometry(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtractPolyDataGeometry::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtractPolyDataGeometry::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkExtractPolyDataGeometry::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->GetMTime();
  return retVal;
}



void vtkExtractPolyDataGeometry::SetImplicitFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->SetImplicitFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkExtractPolyDataGeometry::GetImplicitFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->GetImplicitFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkExtractPolyDataGeometry::SetExtractInside(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->SetExtractInside(arg0);
}



int vtkExtractPolyDataGeometry::GetExtractInside()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->GetExtractInside();
  return retVal;
}



void vtkExtractPolyDataGeometry::ExtractInsideOn()
{
  vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->ExtractInsideOn();
}



void vtkExtractPolyDataGeometry::ExtractInsideOff()
{
  vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->ExtractInsideOff();
}



void vtkExtractPolyDataGeometry::SetExtractBoundaryCells(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->SetExtractBoundaryCells(arg0);
}



int vtkExtractPolyDataGeometry::GetExtractBoundaryCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->GetExtractBoundaryCells();
  return retVal;
}



void vtkExtractPolyDataGeometry::ExtractBoundaryCellsOn()
{
  vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->ExtractBoundaryCellsOn();
}



void vtkExtractPolyDataGeometry::ExtractBoundaryCellsOff()
{
  vtk::ConvertManagedToNative<::vtkExtractPolyDataGeometry>(m_instance)->ExtractBoundaryCellsOff();
}



  vtkExtractPolyDataGeometry::vtkExtractPolyDataGeometry(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkExtractPolyDataGeometry::vtkExtractPolyDataGeometry(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkExtractPolyDataGeometry::vtkExtractPolyDataGeometry() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExtractPolyDataGeometry::New()));
}



  vtkExtractPolyDataGeometry::~vtkExtractPolyDataGeometry() { }





} // end namespace vtkGraphics
