

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageQuantizeRGBToIndexDotNet.h"

// native includes
#include "strstream"
#include "vtkImageQuantizeRGBToIndex.h"
#include "vtkLookupTable.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageQuantizeRGBToIndex::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageQuantizeRGBToIndex::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageQuantizeRGBToIndex^ vtkImageQuantizeRGBToIndex::NewInstance()
{
  ::vtkImageQuantizeRGBToIndex* retVal = static_cast<::vtkImageQuantizeRGBToIndex*>(vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->NewInstance());
  return gcnew vtkImageQuantizeRGBToIndex(IntPtr(retVal), false);
}



vtkImageQuantizeRGBToIndex^ vtkImageQuantizeRGBToIndex::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageQuantizeRGBToIndex* retVal = static_cast<::vtkImageQuantizeRGBToIndex*>(::vtkImageQuantizeRGBToIndex::SafeDownCast(oWrap));
  return gcnew vtkImageQuantizeRGBToIndex(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageQuantizeRGBToIndex::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageQuantizeRGBToIndex::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageQuantizeRGBToIndex::SetNumberOfColors(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->SetNumberOfColors(arg0);
}



int vtkImageQuantizeRGBToIndex::GetNumberOfColorsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->GetNumberOfColorsMinValue();
  return retVal;
}



int vtkImageQuantizeRGBToIndex::GetNumberOfColorsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->GetNumberOfColorsMaxValue();
  return retVal;
}



int vtkImageQuantizeRGBToIndex::GetNumberOfColors()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->GetNumberOfColors();
  return retVal;
}



vtkLookupTable^ vtkImageQuantizeRGBToIndex::GetLookupTable()
{
  ::vtkLookupTable* retVal = static_cast<::vtkLookupTable*>(vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->GetLookupTable());
  return gcnew vtkLookupTable(IntPtr(retVal), false);
}



double vtkImageQuantizeRGBToIndex::GetInitializeExecuteTime()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->GetInitializeExecuteTime();
  return retVal;
}



double vtkImageQuantizeRGBToIndex::GetBuildTreeExecuteTime()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->GetBuildTreeExecuteTime();
  return retVal;
}



double vtkImageQuantizeRGBToIndex::GetLookupIndexExecuteTime()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageQuantizeRGBToIndex>(m_instance)->GetLookupIndexExecuteTime();
  return retVal;
}



  vtkImageQuantizeRGBToIndex::vtkImageQuantizeRGBToIndex(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageQuantizeRGBToIndex::vtkImageQuantizeRGBToIndex(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageQuantizeRGBToIndex::vtkImageQuantizeRGBToIndex() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageQuantizeRGBToIndex::New()));
}



  vtkImageQuantizeRGBToIndex::~vtkImageQuantizeRGBToIndex() { }





} // end namespace vtkImaging
