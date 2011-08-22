

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCellPickerDotNet.h"

// native includes
#include "strstream"
#include "vtkCellPicker.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCellPicker::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellPicker>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCellPicker::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellPicker>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCellPicker^ vtkCellPicker::NewInstance()
{
  ::vtkCellPicker* retVal = static_cast<::vtkCellPicker*>(vtk::ConvertManagedToNative<::vtkCellPicker>(m_instance)->NewInstance());
  return gcnew vtkCellPicker(IntPtr(retVal), false);
}



vtkCellPicker^ vtkCellPicker::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCellPicker* retVal = static_cast<::vtkCellPicker*>(::vtkCellPicker::SafeDownCast(oWrap));
  return gcnew vtkCellPicker(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCellPicker::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCellPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCellPicker::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCellPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkCellPicker::GetCellId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellPicker>(m_instance)->GetCellId();
  return retVal;
}



int vtkCellPicker::GetSubId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellPicker>(m_instance)->GetSubId();
  return retVal;
}



array<double>^ vtkCellPicker::GetPCoords()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCellPicker>(m_instance)->GetPCoords();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkCellPicker::vtkCellPicker(System::IntPtr native, bool bConst) : vtkPicker(native, bConst) {}



  vtkCellPicker::vtkCellPicker(bool donothing) : vtkPicker(donothing) {}



  vtkCellPicker::vtkCellPicker() : vtkPicker(false) {
  this->SetNativePointer(IntPtr(::vtkCellPicker::New()));
}



  vtkCellPicker::~vtkCellPicker() { }





} // end namespace vtkRendering
