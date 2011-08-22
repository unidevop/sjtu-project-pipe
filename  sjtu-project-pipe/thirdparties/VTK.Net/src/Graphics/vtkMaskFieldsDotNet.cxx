

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMaskFieldsDotNet.h"

// native includes
#include "strstream"
#include "vtkMaskFields.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMaskFields::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMaskFields::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMaskFields^ vtkMaskFields::NewInstance()
{
  ::vtkMaskFields* retVal = static_cast<::vtkMaskFields*>(vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->NewInstance());
  return gcnew vtkMaskFields(IntPtr(retVal), false);
}



vtkMaskFields^ vtkMaskFields::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMaskFields* retVal = static_cast<::vtkMaskFields*>(::vtkMaskFields::SafeDownCast(oWrap));
  return gcnew vtkMaskFields(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMaskFields::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMaskFields::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMaskFields::CopyFieldOn(int fieldLocation, System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyFieldOn(fieldLocation, nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkMaskFields::CopyFieldOff(int fieldLocation, System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyFieldOff(fieldLocation, nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkMaskFields::CopyAttributeOn(int attributeLocation, int attributeType)
{
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyAttributeOn(attributeLocation, attributeType);
}



void vtkMaskFields::CopyAttributeOff(int attributeLocation, int attributeType)
{
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyAttributeOff(attributeLocation, attributeType);
}



void vtkMaskFields::CopyFieldsOff()
{
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyFieldsOff();
}



void vtkMaskFields::CopyAttributesOff()
{
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyAttributesOff();
}



void vtkMaskFields::CopyFieldsOn()
{
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyFieldsOn();
}



void vtkMaskFields::CopyAttributesOn()
{
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyAttributesOn();
}



void vtkMaskFields::CopyAttributeOn(System::String^ attributeLoc, System::String^ attributeType)
{
  char* attributeLocWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(attributeLoc).ToPointer());
  char* attributeTypeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(attributeType).ToPointer());
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyAttributeOn(attributeLocWrap, attributeTypeWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(attributeLocWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(attributeTypeWrap));
}



void vtkMaskFields::CopyAttributeOff(System::String^ attributeLoc, System::String^ attributeType)
{
  char* attributeLocWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(attributeLoc).ToPointer());
  char* attributeTypeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(attributeType).ToPointer());
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyAttributeOff(attributeLocWrap, attributeTypeWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(attributeLocWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(attributeTypeWrap));
}



void vtkMaskFields::CopyFieldOn(System::String^ fieldLoc, System::String^ name)
{
  char* fieldLocWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldLoc).ToPointer());
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyFieldOn(fieldLocWrap, nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldLocWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkMaskFields::CopyFieldOff(System::String^ fieldLoc, System::String^ name)
{
  char* fieldLocWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldLoc).ToPointer());
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyFieldOff(fieldLocWrap, nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldLocWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkMaskFields::CopyAllOn()
{
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyAllOn();
}



void vtkMaskFields::CopyAllOff()
{
  vtk::ConvertManagedToNative<::vtkMaskFields>(m_instance)->CopyAllOff();
}



  vtkMaskFields::vtkMaskFields(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkMaskFields::vtkMaskFields(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkMaskFields::vtkMaskFields() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMaskFields::New()));
}



  vtkMaskFields::~vtkMaskFields() { }





} // end namespace vtkGraphics
