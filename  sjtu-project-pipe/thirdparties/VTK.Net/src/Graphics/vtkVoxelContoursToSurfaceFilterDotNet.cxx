

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVoxelContoursToSurfaceFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkVoxelContoursToSurfaceFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkVoxelContoursToSurfaceFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVoxelContoursToSurfaceFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVoxelContoursToSurfaceFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVoxelContoursToSurfaceFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVoxelContoursToSurfaceFilter^ vtkVoxelContoursToSurfaceFilter::NewInstance()
{
  ::vtkVoxelContoursToSurfaceFilter* retVal = static_cast<::vtkVoxelContoursToSurfaceFilter*>(vtk::ConvertManagedToNative<::vtkVoxelContoursToSurfaceFilter>(m_instance)->NewInstance());
  return gcnew vtkVoxelContoursToSurfaceFilter(IntPtr(retVal), false);
}



vtkVoxelContoursToSurfaceFilter^ vtkVoxelContoursToSurfaceFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVoxelContoursToSurfaceFilter* retVal = static_cast<::vtkVoxelContoursToSurfaceFilter*>(::vtkVoxelContoursToSurfaceFilter::SafeDownCast(oWrap));
  return gcnew vtkVoxelContoursToSurfaceFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVoxelContoursToSurfaceFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVoxelContoursToSurfaceFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVoxelContoursToSurfaceFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVoxelContoursToSurfaceFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVoxelContoursToSurfaceFilter::SetMemoryLimitInBytes(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVoxelContoursToSurfaceFilter>(m_instance)->SetMemoryLimitInBytes(arg0);
}



int vtkVoxelContoursToSurfaceFilter::GetMemoryLimitInBytes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVoxelContoursToSurfaceFilter>(m_instance)->GetMemoryLimitInBytes();
  return retVal;
}



void vtkVoxelContoursToSurfaceFilter::SetSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkVoxelContoursToSurfaceFilter>(m_instance)->SetSpacing(arg0, arg1, arg2);
}



void vtkVoxelContoursToSurfaceFilter::SetSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkVoxelContoursToSurfaceFilter>(m_instance)->SetSpacing(nativeaPin);
}



array<double>^ vtkVoxelContoursToSurfaceFilter::GetSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkVoxelContoursToSurfaceFilter>(m_instance)->GetSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkVoxelContoursToSurfaceFilter::vtkVoxelContoursToSurfaceFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkVoxelContoursToSurfaceFilter::vtkVoxelContoursToSurfaceFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkVoxelContoursToSurfaceFilter::vtkVoxelContoursToSurfaceFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkVoxelContoursToSurfaceFilter::New()));
}



  vtkVoxelContoursToSurfaceFilter::~vtkVoxelContoursToSurfaceFilter() { }





} // end namespace vtkGraphics
