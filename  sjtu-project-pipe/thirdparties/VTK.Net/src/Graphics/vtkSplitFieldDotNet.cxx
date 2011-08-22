

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSplitFieldDotNet.h"

// native includes
#include "strstream"
#include "vtkSplitField.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSplitField::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSplitField>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSplitField::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSplitField>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSplitField^ vtkSplitField::NewInstance()
{
  ::vtkSplitField* retVal = static_cast<::vtkSplitField*>(vtk::ConvertManagedToNative<::vtkSplitField>(m_instance)->NewInstance());
  return gcnew vtkSplitField(IntPtr(retVal), false);
}



vtkSplitField^ vtkSplitField::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSplitField* retVal = static_cast<::vtkSplitField*>(::vtkSplitField::SafeDownCast(oWrap));
  return gcnew vtkSplitField(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSplitField::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSplitField>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSplitField::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSplitField>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSplitField::SetInputField(int attributeType, int fieldLoc)
{
  vtk::ConvertManagedToNative<::vtkSplitField>(m_instance)->SetInputField(attributeType, fieldLoc);
}



void vtkSplitField::SetInputField(System::String^ name, int fieldLoc)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkSplitField>(m_instance)->SetInputField(nameWrap, fieldLoc);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkSplitField::SetInputField(System::String^ name, System::String^ fieldLoc)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  char* fieldLocWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldLoc).ToPointer());
  vtk::ConvertManagedToNative<::vtkSplitField>(m_instance)->SetInputField(nameWrap, fieldLocWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldLocWrap));
}



void vtkSplitField::Split(int component, System::String^ arrayName)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkSplitField>(m_instance)->Split(component, arrayNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



  vtkSplitField::vtkSplitField(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkSplitField::vtkSplitField(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkSplitField::vtkSplitField() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSplitField::New()));
}



  vtkSplitField::~vtkSplitField() { }





} // end namespace vtkGraphics
