

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAbstractVolumeMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkAbstractVolumeMapper.h"
#include "vtkDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkAbstractVolumeMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAbstractVolumeMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAbstractVolumeMapper^ vtkAbstractVolumeMapper::NewInstance()
{
  ::vtkAbstractVolumeMapper* retVal = static_cast<::vtkAbstractVolumeMapper*>(vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(m_instance)->NewInstance());
  return gcnew vtkAbstractVolumeMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAbstractVolumeMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAbstractVolumeMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAbstractVolumeMapper::SetInput(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(m_instance)->SetInput(arg0Wrap);
}



vtkDataSet^ vtkAbstractVolumeMapper::GetDataSetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(m_instance)->GetDataSetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkAbstractVolumeMapper::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(m_instance)->GetBounds(nativeboundsPin);
}



  vtkAbstractVolumeMapper::vtkAbstractVolumeMapper(System::IntPtr native, bool bConst) : vtkAbstractMapper3D(native, bConst) {}



  vtkAbstractVolumeMapper::vtkAbstractVolumeMapper(bool donothing) : vtkAbstractMapper3D(donothing) {}



  vtkAbstractVolumeMapper::vtkAbstractVolumeMapper() : vtkAbstractMapper3D(false) {
  this->SetNativePointer(IntPtr(::vtkAbstractVolumeMapper::New()));
}



  vtkAbstractVolumeMapper::~vtkAbstractVolumeMapper() { }





} // end namespace vtkRendering
