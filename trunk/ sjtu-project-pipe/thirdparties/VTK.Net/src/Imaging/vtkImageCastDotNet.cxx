

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageCastDotNet.h"

// native includes
#include "strstream"
#include "vtkImageCast.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageCast::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageCast::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageCast^ vtkImageCast::NewInstance()
{
  ::vtkImageCast* retVal = static_cast<::vtkImageCast*>(vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->NewInstance());
  return gcnew vtkImageCast(IntPtr(retVal), false);
}



vtkImageCast^ vtkImageCast::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageCast* retVal = static_cast<::vtkImageCast*>(::vtkImageCast::SafeDownCast(oWrap));
  return gcnew vtkImageCast(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageCast::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageCast::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageCast::SetOutputScalarType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetOutputScalarType(arg0);
}



int vtkImageCast::GetOutputScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->GetOutputScalarType();
  return retVal;
}



void vtkImageCast::SetOutputScalarTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetOutputScalarTypeToFloat();
}



void vtkImageCast::SetOutputScalarTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetOutputScalarTypeToDouble();
}



void vtkImageCast::SetOutputScalarTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetOutputScalarTypeToInt();
}



void vtkImageCast::SetOutputScalarTypeToUnsignedInt()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetOutputScalarTypeToUnsignedInt();
}



void vtkImageCast::SetOutputScalarTypeToLong()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetOutputScalarTypeToLong();
}



void vtkImageCast::SetOutputScalarTypeToUnsignedLong()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetOutputScalarTypeToUnsignedLong();
}



void vtkImageCast::SetOutputScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetOutputScalarTypeToShort();
}



void vtkImageCast::SetOutputScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetOutputScalarTypeToUnsignedShort();
}



void vtkImageCast::SetOutputScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetOutputScalarTypeToUnsignedChar();
}



void vtkImageCast::SetOutputScalarTypeToChar()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetOutputScalarTypeToChar();
}



void vtkImageCast::SetClampOverflow(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->SetClampOverflow(arg0);
}



int vtkImageCast::GetClampOverflow()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->GetClampOverflow();
  return retVal;
}



void vtkImageCast::ClampOverflowOn()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->ClampOverflowOn();
}



void vtkImageCast::ClampOverflowOff()
{
  vtk::ConvertManagedToNative<::vtkImageCast>(m_instance)->ClampOverflowOff();
}



  vtkImageCast::vtkImageCast(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageCast::vtkImageCast(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageCast::vtkImageCast() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageCast::New()));
}



  vtkImageCast::~vtkImageCast() { }





} // end namespace vtkImaging
