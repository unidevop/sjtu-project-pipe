

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMaskPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkMaskPolyData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMaskPolyData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMaskPolyData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMaskPolyData^ vtkMaskPolyData::NewInstance()
{
  ::vtkMaskPolyData* retVal = static_cast<::vtkMaskPolyData*>(vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->NewInstance());
  return gcnew vtkMaskPolyData(IntPtr(retVal), false);
}



vtkMaskPolyData^ vtkMaskPolyData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMaskPolyData* retVal = static_cast<::vtkMaskPolyData*>(::vtkMaskPolyData::SafeDownCast(oWrap));
  return gcnew vtkMaskPolyData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMaskPolyData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMaskPolyData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMaskPolyData::SetOnRatio(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->SetOnRatio(arg0);
}



int vtkMaskPolyData::GetOnRatioMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->GetOnRatioMinValue();
  return retVal;
}



int vtkMaskPolyData::GetOnRatioMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->GetOnRatioMaxValue();
  return retVal;
}



int vtkMaskPolyData::GetOnRatio()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->GetOnRatio();
  return retVal;
}



void vtkMaskPolyData::SetOffset(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->SetOffset(arg0);
}



int vtkMaskPolyData::GetOffsetMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->GetOffsetMinValue();
  return retVal;
}



int vtkMaskPolyData::GetOffsetMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->GetOffsetMaxValue();
  return retVal;
}



int vtkMaskPolyData::GetOffset()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPolyData>(m_instance)->GetOffset();
  return retVal;
}



  vtkMaskPolyData::vtkMaskPolyData(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkMaskPolyData::vtkMaskPolyData(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkMaskPolyData::vtkMaskPolyData() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMaskPolyData::New()));
}



  vtkMaskPolyData::~vtkMaskPolyData() { }





} // end namespace vtkGraphics
