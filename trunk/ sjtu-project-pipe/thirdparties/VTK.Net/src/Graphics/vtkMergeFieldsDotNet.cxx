

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMergeFieldsDotNet.h"

// native includes
#include "strstream"
#include "vtkMergeFields.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMergeFields::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMergeFields>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMergeFields::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMergeFields>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMergeFields^ vtkMergeFields::NewInstance()
{
  ::vtkMergeFields* retVal = static_cast<::vtkMergeFields*>(vtk::ConvertManagedToNative<::vtkMergeFields>(m_instance)->NewInstance());
  return gcnew vtkMergeFields(IntPtr(retVal), false);
}



vtkMergeFields^ vtkMergeFields::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMergeFields* retVal = static_cast<::vtkMergeFields*>(::vtkMergeFields::SafeDownCast(oWrap));
  return gcnew vtkMergeFields(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMergeFields::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMergeFields>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMergeFields::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMergeFields>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMergeFields::SetOutputField(System::String^ name, int fieldLoc)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkMergeFields>(m_instance)->SetOutputField(nameWrap, fieldLoc);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkMergeFields::SetOutputField(System::String^ name, System::String^ fieldLoc)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  char* fieldLocWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldLoc).ToPointer());
  vtk::ConvertManagedToNative<::vtkMergeFields>(m_instance)->SetOutputField(nameWrap, fieldLocWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldLocWrap));
}



void vtkMergeFields::Merge(int component, System::String^ arrayName, int sourceComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkMergeFields>(m_instance)->Merge(component, arrayNameWrap, sourceComp);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkMergeFields::SetNumberOfComponents(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMergeFields>(m_instance)->SetNumberOfComponents(arg0);
}



  vtkMergeFields::vtkMergeFields(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkMergeFields::vtkMergeFields(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkMergeFields::vtkMergeFields() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMergeFields::New()));
}



  vtkMergeFields::~vtkMergeFields() { }





} // end namespace vtkGraphics
