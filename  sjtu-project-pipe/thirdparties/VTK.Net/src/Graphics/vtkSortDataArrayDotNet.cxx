

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSortDataArrayDotNet.h"

// native includes
#include "strstream"
#include "vtkSortDataArray.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"

using namespace System;

namespace vtk {

System::String^ vtkSortDataArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSortDataArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSortDataArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSortDataArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSortDataArray^ vtkSortDataArray::NewInstance()
{
  ::vtkSortDataArray* retVal = static_cast<::vtkSortDataArray*>(vtk::ConvertManagedToNative<::vtkSortDataArray>(m_instance)->NewInstance());
  return gcnew vtkSortDataArray(IntPtr(retVal), false);
}



vtkSortDataArray^ vtkSortDataArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSortDataArray* retVal = static_cast<::vtkSortDataArray*>(::vtkSortDataArray::SafeDownCast(oWrap));
  return gcnew vtkSortDataArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSortDataArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSortDataArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSortDataArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSortDataArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSortDataArray::Sort(vtkIdList^ keys)
{
  ::vtkIdList* keysWrap = vtk::ConvertManagedToNative<::vtkIdList>(keys->GetNativePointer());
  ::vtkSortDataArray::Sort(keysWrap);
}



void vtkSortDataArray::Sort(vtkDataArray^ keys)
{
  ::vtkDataArray* keysWrap = vtk::ConvertManagedToNative<::vtkDataArray>(keys->GetNativePointer());
  ::vtkSortDataArray::Sort(keysWrap);
}



void vtkSortDataArray::Sort(vtkIdList^ keys, vtkIdList^ values)
{
  ::vtkIdList* keysWrap = vtk::ConvertManagedToNative<::vtkIdList>(keys->GetNativePointer());
  ::vtkIdList* valuesWrap = vtk::ConvertManagedToNative<::vtkIdList>(values->GetNativePointer());
  ::vtkSortDataArray::Sort(keysWrap, valuesWrap);
}



void vtkSortDataArray::Sort(vtkIdList^ keys, vtkDataArray^ values)
{
  ::vtkIdList* keysWrap = vtk::ConvertManagedToNative<::vtkIdList>(keys->GetNativePointer());
  ::vtkDataArray* valuesWrap = vtk::ConvertManagedToNative<::vtkDataArray>(values->GetNativePointer());
  ::vtkSortDataArray::Sort(keysWrap, valuesWrap);
}



void vtkSortDataArray::Sort(vtkDataArray^ keys, vtkIdList^ values)
{
  ::vtkDataArray* keysWrap = vtk::ConvertManagedToNative<::vtkDataArray>(keys->GetNativePointer());
  ::vtkIdList* valuesWrap = vtk::ConvertManagedToNative<::vtkIdList>(values->GetNativePointer());
  ::vtkSortDataArray::Sort(keysWrap, valuesWrap);
}



void vtkSortDataArray::Sort(vtkDataArray^ keys, vtkDataArray^ values)
{
  ::vtkDataArray* keysWrap = vtk::ConvertManagedToNative<::vtkDataArray>(keys->GetNativePointer());
  ::vtkDataArray* valuesWrap = vtk::ConvertManagedToNative<::vtkDataArray>(values->GetNativePointer());
  ::vtkSortDataArray::Sort(keysWrap, valuesWrap);
}



  vtkSortDataArray::vtkSortDataArray(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkSortDataArray::vtkSortDataArray(bool donothing) : vtkObject(donothing) {}



  vtkSortDataArray::vtkSortDataArray() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkSortDataArray::New()));
}



  vtkSortDataArray::~vtkSortDataArray() { }





} // end namespace vtkGraphics
