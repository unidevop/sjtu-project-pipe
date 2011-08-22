

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtractDataOverTimeDotNet.h"

// native includes
#include "strstream"
#include "vtkExtractDataOverTime.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkExtractDataOverTime::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtractDataOverTime>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtractDataOverTime::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtractDataOverTime>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtractDataOverTime^ vtkExtractDataOverTime::NewInstance()
{
  ::vtkExtractDataOverTime* retVal = static_cast<::vtkExtractDataOverTime*>(vtk::ConvertManagedToNative<::vtkExtractDataOverTime>(m_instance)->NewInstance());
  return gcnew vtkExtractDataOverTime(IntPtr(retVal), false);
}



vtkExtractDataOverTime^ vtkExtractDataOverTime::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtractDataOverTime* retVal = static_cast<::vtkExtractDataOverTime*>(::vtkExtractDataOverTime::SafeDownCast(oWrap));
  return gcnew vtkExtractDataOverTime(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtractDataOverTime::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtractDataOverTime>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtractDataOverTime::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtractDataOverTime>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExtractDataOverTime::SetPointIndex(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractDataOverTime>(m_instance)->SetPointIndex(arg0);
}



int vtkExtractDataOverTime::GetPointIndex()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractDataOverTime>(m_instance)->GetPointIndex();
  return retVal;
}



int vtkExtractDataOverTime::GetNumberOfTimeSteps()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractDataOverTime>(m_instance)->GetNumberOfTimeSteps();
  return retVal;
}



  vtkExtractDataOverTime::vtkExtractDataOverTime(System::IntPtr native, bool bConst) : vtkPointSetAlgorithm(native, bConst) {}



  vtkExtractDataOverTime::vtkExtractDataOverTime(bool donothing) : vtkPointSetAlgorithm(donothing) {}



  vtkExtractDataOverTime::vtkExtractDataOverTime() : vtkPointSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExtractDataOverTime::New()));
}



  vtkExtractDataOverTime::~vtkExtractDataOverTime() { }





} // end namespace vtkGraphics
