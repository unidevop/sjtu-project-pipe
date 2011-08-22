

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMedicalImageReader2DotNet.h"
#include "vtkMedicalImagePropertiesDotNet.h"

// native includes
#include "strstream"
#include "vtkMedicalImageReader2.h"
#include "vtkMedicalImageProperties.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMedicalImageReader2::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMedicalImageReader2::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMedicalImageReader2^ vtkMedicalImageReader2::NewInstance()
{
  ::vtkMedicalImageReader2* retVal = static_cast<::vtkMedicalImageReader2*>(vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->NewInstance());
  return gcnew vtkMedicalImageReader2(IntPtr(retVal), false);
}



vtkMedicalImageReader2^ vtkMedicalImageReader2::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMedicalImageReader2* retVal = static_cast<::vtkMedicalImageReader2*>(::vtkMedicalImageReader2::SafeDownCast(oWrap));
  return gcnew vtkMedicalImageReader2(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMedicalImageReader2::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMedicalImageReader2::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkMedicalImageProperties^ vtkMedicalImageReader2::GetMedicalImageProperties()
{
  ::vtkMedicalImageProperties* retVal = static_cast<::vtkMedicalImageProperties*>(vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->GetMedicalImageProperties());
  return gcnew vtkMedicalImageProperties(IntPtr(retVal), false);
}



void vtkMedicalImageReader2::SetPatientName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->SetPatientName(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageReader2::GetPatientName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->GetPatientName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageReader2::SetPatientID(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->SetPatientID(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageReader2::GetPatientID()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->GetPatientID();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageReader2::SetDate(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->SetDate(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageReader2::GetDate()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->GetDate();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageReader2::SetSeries(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->SetSeries(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageReader2::GetSeries()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->GetSeries();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageReader2::SetStudy(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->SetStudy(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageReader2::GetStudy()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->GetStudy();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageReader2::SetImageNumber(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->SetImageNumber(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageReader2::GetImageNumber()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->GetImageNumber();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageReader2::SetModality(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->SetModality(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageReader2::GetModality()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageReader2>(m_instance)->GetModality();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkMedicalImageReader2::vtkMedicalImageReader2(System::IntPtr native, bool bConst) : vtkImageReader2(native, bConst) {}



  vtkMedicalImageReader2::vtkMedicalImageReader2(bool donothing) : vtkImageReader2(donothing) {}



  vtkMedicalImageReader2::vtkMedicalImageReader2() : vtkImageReader2(false) {
  this->SetNativePointer(IntPtr(::vtkMedicalImageReader2::New()));
}



  vtkMedicalImageReader2::~vtkMedicalImageReader2() { }





} // end namespace vtkIO
