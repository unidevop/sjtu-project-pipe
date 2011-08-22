

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMedicalImagePropertiesDotNet.h"

// native includes
#include "strstream"
#include "vtkMedicalImageProperties.h"

using namespace System;

namespace vtk {

System::String^ vtkMedicalImageProperties::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMedicalImageProperties::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMedicalImageProperties^ vtkMedicalImageProperties::NewInstance()
{
  ::vtkMedicalImageProperties* retVal = static_cast<::vtkMedicalImageProperties*>(vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->NewInstance());
  return gcnew vtkMedicalImageProperties(IntPtr(retVal), false);
}



vtkMedicalImageProperties^ vtkMedicalImageProperties::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMedicalImageProperties* retVal = static_cast<::vtkMedicalImageProperties*>(::vtkMedicalImageProperties::SafeDownCast(oWrap));
  return gcnew vtkMedicalImageProperties(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMedicalImageProperties::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMedicalImageProperties::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMedicalImageProperties::Clear()
{
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->Clear();
}



void vtkMedicalImageProperties::SetPatientName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetPatientName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetPatientName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetPatientID(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetPatientID(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetPatientID()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientID();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetPatientAge(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetPatientAge(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetPatientAge()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientAge();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMedicalImageProperties::GetAgeAsFields(System::String^ age, int% year, int% month, int% week, int% day)
{
  char* ageWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(age).ToPointer());
  pin_ptr<int> yearPin = &year;
  pin_ptr<int> monthPin = &month;
  pin_ptr<int> weekPin = &week;
  pin_ptr<int> dayPin = &day;
  int retVal = ::vtkMedicalImageProperties::GetAgeAsFields(ageWrap, *yearPin, *monthPin, *weekPin, *dayPin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(ageWrap));
  return retVal;
}



int vtkMedicalImageProperties::GetPatientAgeYear()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientAgeYear();
  return retVal;
}



int vtkMedicalImageProperties::GetPatientAgeMonth()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientAgeMonth();
  return retVal;
}



int vtkMedicalImageProperties::GetPatientAgeWeek()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientAgeWeek();
  return retVal;
}



int vtkMedicalImageProperties::GetPatientAgeDay()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientAgeDay();
  return retVal;
}



void vtkMedicalImageProperties::SetPatientSex(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetPatientSex(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetPatientSex()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientSex();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetPatientBirthDate(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetPatientBirthDate(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetPatientBirthDate()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientBirthDate();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMedicalImageProperties::GetPatientBirthDateYear()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientBirthDateYear();
  return retVal;
}



int vtkMedicalImageProperties::GetPatientBirthDateMonth()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientBirthDateMonth();
  return retVal;
}



int vtkMedicalImageProperties::GetPatientBirthDateDay()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetPatientBirthDateDay();
  return retVal;
}



void vtkMedicalImageProperties::SetAcquisitionDate(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetAcquisitionDate(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetAcquisitionDate()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetAcquisitionDate();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMedicalImageProperties::GetAcquisitionDateYear()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetAcquisitionDateYear();
  return retVal;
}



int vtkMedicalImageProperties::GetAcquisitionDateMonth()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetAcquisitionDateMonth();
  return retVal;
}



int vtkMedicalImageProperties::GetAcquisitionDateDay()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetAcquisitionDateDay();
  return retVal;
}



void vtkMedicalImageProperties::SetAcquisitionTime(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetAcquisitionTime(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetAcquisitionTime()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetAcquisitionTime();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetImageDate(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetImageDate(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetImageDate()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetImageDate();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMedicalImageProperties::GetImageDateYear()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetImageDateYear();
  return retVal;
}



int vtkMedicalImageProperties::GetImageDateMonth()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetImageDateMonth();
  return retVal;
}



int vtkMedicalImageProperties::GetImageDateDay()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetImageDateDay();
  return retVal;
}



int vtkMedicalImageProperties::GetDateAsFields(System::String^ date, int% year, int% month, int% day)
{
  char* dateWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(date).ToPointer());
  pin_ptr<int> yearPin = &year;
  pin_ptr<int> monthPin = &month;
  pin_ptr<int> dayPin = &day;
  int retVal = ::vtkMedicalImageProperties::GetDateAsFields(dateWrap, *yearPin, *monthPin, *dayPin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(dateWrap));
  return retVal;
}



int vtkMedicalImageProperties::GetDateAsLocale(System::String^ date, System::String^ locale)
{
  char* dateWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(date).ToPointer());
  char* localeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(locale).ToPointer());
  int retVal = ::vtkMedicalImageProperties::GetDateAsLocale(dateWrap, localeWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(dateWrap));
  locale->Remove(0,locale->Length);
  locale->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(localeWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(localeWrap));
  return retVal;
}



void vtkMedicalImageProperties::SetImageTime(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetImageTime(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetImageTime()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetImageTime();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetImageNumber(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetImageNumber(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetImageNumber()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetImageNumber();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetSeriesNumber(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetSeriesNumber(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetSeriesNumber()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetSeriesNumber();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetSeriesDescription(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetSeriesDescription(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetSeriesDescription()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetSeriesDescription();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetStudyID(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetStudyID(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetStudyID()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetStudyID();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetStudyDescription(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetStudyDescription(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetStudyDescription()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetStudyDescription();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetModality(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetModality(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetModality()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetModality();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetManufacturer(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetManufacturer(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetManufacturer()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetManufacturer();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetManufacturerModelName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetManufacturerModelName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetManufacturerModelName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetManufacturerModelName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetStationName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetStationName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetStationName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetStationName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetInstitutionName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetInstitutionName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetInstitutionName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetInstitutionName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetConvolutionKernel(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetConvolutionKernel(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetConvolutionKernel()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetConvolutionKernel();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetSliceThickness(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetSliceThickness(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetSliceThickness()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetSliceThickness();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



double vtkMedicalImageProperties::GetSliceThicknessAsDouble()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetSliceThicknessAsDouble();
  return retVal;
}



void vtkMedicalImageProperties::SetKVP(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetKVP(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetKVP()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetKVP();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetGantryTilt(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetGantryTilt(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetGantryTilt()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetGantryTilt();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



double vtkMedicalImageProperties::GetGantryTiltAsDouble()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetGantryTiltAsDouble();
  return retVal;
}



void vtkMedicalImageProperties::SetEchoTime(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetEchoTime(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetEchoTime()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetEchoTime();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetEchoTrainLength(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetEchoTrainLength(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetEchoTrainLength()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetEchoTrainLength();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetRepetitionTime(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetRepetitionTime(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetRepetitionTime()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetRepetitionTime();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetExposureTime(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetExposureTime(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetExposureTime()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetExposureTime();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetXRayTubeCurrent(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetXRayTubeCurrent(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetXRayTubeCurrent()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetXRayTubeCurrent();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::SetExposure(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetExposure(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMedicalImageProperties::GetExposure()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetExposure();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMedicalImageProperties::DeepCopy(vtkMedicalImageProperties^ p)
{
  ::vtkMedicalImageProperties* pWrap = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->DeepCopy(pWrap);
}



void vtkMedicalImageProperties::AddWindowLevelPreset(double w, double l)
{
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->AddWindowLevelPreset(w, l);
}



void vtkMedicalImageProperties::RemoveWindowLevelPreset(double w, double l)
{
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->RemoveWindowLevelPreset(w, l);
}



void vtkMedicalImageProperties::RemoveAllWindowLevelPresets()
{
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->RemoveAllWindowLevelPresets();
}



int vtkMedicalImageProperties::GetNumberOfWindowLevelPresets()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetNumberOfWindowLevelPresets();
  return retVal;
}



int vtkMedicalImageProperties::HasWindowLevelPreset(double w, double l)
{
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->HasWindowLevelPreset(w, l);
  return retVal;
}



int vtkMedicalImageProperties::GetNthWindowLevelPreset(int idx, array<double>^ w, array<double>^ l)
{
  pin_ptr<double> wPin = &w[0];
  double* nativewPin = wPin;
  pin_ptr<double> lPin = &l[0];
  double* nativelPin = lPin;
  int retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetNthWindowLevelPreset(idx, nativewPin, nativelPin);
  return retVal;
}



array<double>^ vtkMedicalImageProperties::GetNthWindowLevelPreset(int idx)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetNthWindowLevelPreset(idx);
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkMedicalImageProperties::SetNthWindowLevelPresetComment(int idx, System::String^ comment)
{
  char* commentWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(comment).ToPointer());
  vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->SetNthWindowLevelPresetComment(idx, commentWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(commentWrap));
}



System::String^ vtkMedicalImageProperties::GetNthWindowLevelPresetComment(int idx)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMedicalImageProperties>(m_instance)->GetNthWindowLevelPresetComment(idx);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkMedicalImageProperties::vtkMedicalImageProperties(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkMedicalImageProperties::vtkMedicalImageProperties(bool donothing) : vtkObject(donothing) {}



  vtkMedicalImageProperties::vtkMedicalImageProperties() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkMedicalImageProperties::New()));
}



  vtkMedicalImageProperties::~vtkMedicalImageProperties() { }





} // end namespace vtkIO
