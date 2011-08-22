

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAssignAttributeDotNet.h"

// native includes
#include "strstream"
#include "vtkAssignAttribute.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkAssignAttribute::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAssignAttribute>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAssignAttribute::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAssignAttribute>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAssignAttribute^ vtkAssignAttribute::NewInstance()
{
  ::vtkAssignAttribute* retVal = static_cast<::vtkAssignAttribute*>(vtk::ConvertManagedToNative<::vtkAssignAttribute>(m_instance)->NewInstance());
  return gcnew vtkAssignAttribute(IntPtr(retVal), false);
}



vtkAssignAttribute^ vtkAssignAttribute::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAssignAttribute* retVal = static_cast<::vtkAssignAttribute*>(::vtkAssignAttribute::SafeDownCast(oWrap));
  return gcnew vtkAssignAttribute(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAssignAttribute::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAssignAttribute>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAssignAttribute::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAssignAttribute>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAssignAttribute::Assign(int inputAttributeType, int attributeType, int attributeLoc)
{
  vtk::ConvertManagedToNative<::vtkAssignAttribute>(m_instance)->Assign(inputAttributeType, attributeType, attributeLoc);
}



void vtkAssignAttribute::Assign(System::String^ fieldName, int attributeType, int attributeLoc)
{
  char* fieldNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldName).ToPointer());
  vtk::ConvertManagedToNative<::vtkAssignAttribute>(m_instance)->Assign(fieldNameWrap, attributeType, attributeLoc);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldNameWrap));
}



void vtkAssignAttribute::Assign(System::String^ name, System::String^ attributeType, System::String^ attributeLoc)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  char* attributeTypeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(attributeType).ToPointer());
  char* attributeLocWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(attributeLoc).ToPointer());
  vtk::ConvertManagedToNative<::vtkAssignAttribute>(m_instance)->Assign(nameWrap, attributeTypeWrap, attributeLocWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(attributeTypeWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(attributeLocWrap));
}



  vtkAssignAttribute::vtkAssignAttribute(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkAssignAttribute::vtkAssignAttribute(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkAssignAttribute::vtkAssignAttribute() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkAssignAttribute::New()));
}



  vtkAssignAttribute::~vtkAssignAttribute() { }





} // end namespace vtkGraphics
