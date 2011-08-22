

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRearrangeFieldsDotNet.h"

// native includes
#include "strstream"
#include "vtkRearrangeFields.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRearrangeFields::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRearrangeFields::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRearrangeFields^ vtkRearrangeFields::NewInstance()
{
  ::vtkRearrangeFields* retVal = static_cast<::vtkRearrangeFields*>(vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->NewInstance());
  return gcnew vtkRearrangeFields(IntPtr(retVal), false);
}



vtkRearrangeFields^ vtkRearrangeFields::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRearrangeFields* retVal = static_cast<::vtkRearrangeFields*>(::vtkRearrangeFields::SafeDownCast(oWrap));
  return gcnew vtkRearrangeFields(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRearrangeFields::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRearrangeFields::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkRearrangeFields::AddOperation(int operationType, int attributeType, int fromFieldLoc, int toFieldLoc)
{
  int retVal = vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->AddOperation(operationType, attributeType, fromFieldLoc, toFieldLoc);
  return retVal;
}



int vtkRearrangeFields::AddOperation(int operationType, System::String^ name, int fromFieldLoc, int toFieldLoc)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->AddOperation(operationType, nameWrap, fromFieldLoc, toFieldLoc);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkRearrangeFields::AddOperation(System::String^ operationType, System::String^ attributeType, System::String^ fromFieldLoc, System::String^ toFieldLoc)
{
  char* operationTypeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(operationType).ToPointer());
  char* attributeTypeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(attributeType).ToPointer());
  char* fromFieldLocWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fromFieldLoc).ToPointer());
  char* toFieldLocWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(toFieldLoc).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->AddOperation(operationTypeWrap, attributeTypeWrap, fromFieldLocWrap, toFieldLocWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(operationTypeWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(attributeTypeWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fromFieldLocWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(toFieldLocWrap));
  return retVal;
}



int vtkRearrangeFields::RemoveOperation(int operationId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->RemoveOperation(operationId);
  return retVal;
}



int vtkRearrangeFields::RemoveOperation(int operationType, int attributeType, int fromFieldLoc, int toFieldLoc)
{
  int retVal = vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->RemoveOperation(operationType, attributeType, fromFieldLoc, toFieldLoc);
  return retVal;
}



int vtkRearrangeFields::RemoveOperation(int operationType, System::String^ name, int fromFieldLoc, int toFieldLoc)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->RemoveOperation(operationType, nameWrap, fromFieldLoc, toFieldLoc);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkRearrangeFields::RemoveOperation(System::String^ operationType, System::String^ attributeType, System::String^ fromFieldLoc, System::String^ toFieldLoc)
{
  char* operationTypeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(operationType).ToPointer());
  char* attributeTypeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(attributeType).ToPointer());
  char* fromFieldLocWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fromFieldLoc).ToPointer());
  char* toFieldLocWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(toFieldLoc).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->RemoveOperation(operationTypeWrap, attributeTypeWrap, fromFieldLocWrap, toFieldLocWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(operationTypeWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(attributeTypeWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fromFieldLocWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(toFieldLocWrap));
  return retVal;
}



void vtkRearrangeFields::RemoveAllOperations()
{
  vtk::ConvertManagedToNative<::vtkRearrangeFields>(m_instance)->RemoveAllOperations();
}



  vtkRearrangeFields::vtkRearrangeFields(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkRearrangeFields::vtkRearrangeFields(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkRearrangeFields::vtkRearrangeFields() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRearrangeFields::New()));
}



  vtkRearrangeFields::~vtkRearrangeFields() { }





} // end namespace vtkGraphics
