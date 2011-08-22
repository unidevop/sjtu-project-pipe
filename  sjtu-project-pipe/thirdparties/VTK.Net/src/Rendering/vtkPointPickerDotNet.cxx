

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointPickerDotNet.h"

// native includes
#include "strstream"
#include "vtkPointPicker.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPointPicker::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointPicker>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointPicker::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointPicker>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointPicker^ vtkPointPicker::NewInstance()
{
  ::vtkPointPicker* retVal = static_cast<::vtkPointPicker*>(vtk::ConvertManagedToNative<::vtkPointPicker>(m_instance)->NewInstance());
  return gcnew vtkPointPicker(IntPtr(retVal), false);
}



vtkPointPicker^ vtkPointPicker::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPointPicker* retVal = static_cast<::vtkPointPicker*>(::vtkPointPicker::SafeDownCast(oWrap));
  return gcnew vtkPointPicker(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointPicker::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointPicker::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkPointPicker::GetPointId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointPicker>(m_instance)->GetPointId();
  return retVal;
}



  vtkPointPicker::vtkPointPicker(System::IntPtr native, bool bConst) : vtkPicker(native, bConst) {}



  vtkPointPicker::vtkPointPicker(bool donothing) : vtkPicker(donothing) {}



  vtkPointPicker::vtkPointPicker() : vtkPicker(false) {
  this->SetNativePointer(IntPtr(::vtkPointPicker::New()));
}



  vtkPointPicker::~vtkPointPicker() { }





} // end namespace vtkRendering
