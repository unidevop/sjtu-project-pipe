

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFastNumericConversionDotNet.h"

// native includes
#include "strstream"
#include "vtkFastNumericConversion.h"

using namespace System;

namespace vtk {

System::String^ vtkFastNumericConversion::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFastNumericConversion::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFastNumericConversion^ vtkFastNumericConversion::NewInstance()
{
  ::vtkFastNumericConversion* retVal = static_cast<::vtkFastNumericConversion*>(vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->NewInstance());
  return gcnew vtkFastNumericConversion(IntPtr(retVal), false);
}



vtkFastNumericConversion^ vtkFastNumericConversion::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFastNumericConversion* retVal = static_cast<::vtkFastNumericConversion*>(::vtkFastNumericConversion::SafeDownCast(oWrap));
  return gcnew vtkFastNumericConversion(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFastNumericConversion::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFastNumericConversion::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkFastNumericConversion::TestQuickFloor(double val)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->TestQuickFloor(val);
  return retVal;
}



int vtkFastNumericConversion::TestSafeFloor(double val)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->TestSafeFloor(val);
  return retVal;
}



int vtkFastNumericConversion::TestRound(double val)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->TestRound(val);
  return retVal;
}



int vtkFastNumericConversion::TestConvertFixedPointIntPart(double val)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->TestConvertFixedPointIntPart(val);
  return retVal;
}



int vtkFastNumericConversion::TestConvertFixedPointFracPart(double val)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->TestConvertFixedPointFracPart(val);
  return retVal;
}



void vtkFastNumericConversion::SetReservedFracBits(int bits)
{
  vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->SetReservedFracBits(bits);
}



void vtkFastNumericConversion::PerformanceTests()
{
  vtk::ConvertManagedToNative<::vtkFastNumericConversion>(m_instance)->PerformanceTests();
}



  vtkFastNumericConversion::vtkFastNumericConversion(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkFastNumericConversion::vtkFastNumericConversion(bool donothing) : vtkObject(donothing) {}



  vtkFastNumericConversion::vtkFastNumericConversion() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkFastNumericConversion::New()));
}



  vtkFastNumericConversion::~vtkFastNumericConversion() { }





} // end namespace vtkCommon
