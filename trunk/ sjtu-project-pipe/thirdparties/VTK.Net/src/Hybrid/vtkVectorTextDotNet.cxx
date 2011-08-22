

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVectorTextDotNet.h"

// native includes
#include "strstream"
#include "vtkVectorText.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkVectorText::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVectorText>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVectorText::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVectorText>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVectorText^ vtkVectorText::NewInstance()
{
  ::vtkVectorText* retVal = static_cast<::vtkVectorText*>(vtk::ConvertManagedToNative<::vtkVectorText>(m_instance)->NewInstance());
  return gcnew vtkVectorText(IntPtr(retVal), false);
}



vtkVectorText^ vtkVectorText::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVectorText* retVal = static_cast<::vtkVectorText*>(::vtkVectorText::SafeDownCast(oWrap));
  return gcnew vtkVectorText(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVectorText::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVectorText>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVectorText::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVectorText>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVectorText::SetText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkVectorText>(m_instance)->SetText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkVectorText::GetText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVectorText>(m_instance)->GetText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkVectorText::vtkVectorText(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkVectorText::vtkVectorText(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkVectorText::vtkVectorText() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkVectorText::New()));
}



  vtkVectorText::~vtkVectorText() { }





} // end namespace vtkHybrid
