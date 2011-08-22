

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridVolumeMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridVolumeMapper.h"
#include "vtkDataSet.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridVolumeMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridVolumeMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridVolumeMapper^ vtkUnstructuredGridVolumeMapper::NewInstance()
{
  ::vtkUnstructuredGridVolumeMapper* retVal = static_cast<::vtkUnstructuredGridVolumeMapper*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridVolumeMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridVolumeMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridVolumeMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUnstructuredGridVolumeMapper::SetInput(vtkUnstructuredGrid^ arg0)
{
  ::vtkUnstructuredGrid* arg0Wrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->SetInput(arg0Wrap);
}



void vtkUnstructuredGridVolumeMapper::SetInput(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->SetInput(arg0Wrap);
}



vtkUnstructuredGrid^ vtkUnstructuredGridVolumeMapper::GetInput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->GetInput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



void vtkUnstructuredGridVolumeMapper::SetBlendMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->SetBlendMode(arg0);
}



void vtkUnstructuredGridVolumeMapper::SetBlendModeToComposite()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->SetBlendModeToComposite();
}



void vtkUnstructuredGridVolumeMapper::SetBlendModeToMaximumIntensity()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->SetBlendModeToMaximumIntensity();
}



int vtkUnstructuredGridVolumeMapper::GetBlendMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeMapper>(m_instance)->GetBlendMode();
  return retVal;
}



  vtkUnstructuredGridVolumeMapper::vtkUnstructuredGridVolumeMapper(System::IntPtr native, bool bConst) : vtkAbstractVolumeMapper(native, bConst) {}



  vtkUnstructuredGridVolumeMapper::vtkUnstructuredGridVolumeMapper(bool donothing) : vtkAbstractVolumeMapper(donothing) {}



  vtkUnstructuredGridVolumeMapper::vtkUnstructuredGridVolumeMapper() : vtkAbstractVolumeMapper(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridVolumeMapper::New()));
}



  vtkUnstructuredGridVolumeMapper::~vtkUnstructuredGridVolumeMapper() { }





} // end namespace vtkVolumeRendering
