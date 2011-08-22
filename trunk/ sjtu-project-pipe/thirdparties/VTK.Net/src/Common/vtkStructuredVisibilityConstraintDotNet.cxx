

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredVisibilityConstraintDotNet.h"
#include "vtkUnsignedCharArrayDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredVisibilityConstraint.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredVisibilityConstraint::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredVisibilityConstraint::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredVisibilityConstraint^ vtkStructuredVisibilityConstraint::NewInstance()
{
  ::vtkStructuredVisibilityConstraint* retVal = static_cast<::vtkStructuredVisibilityConstraint*>(vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->NewInstance());
  return gcnew vtkStructuredVisibilityConstraint(IntPtr(retVal), false);
}



vtkStructuredVisibilityConstraint^ vtkStructuredVisibilityConstraint::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredVisibilityConstraint* retVal = static_cast<::vtkStructuredVisibilityConstraint*>(::vtkStructuredVisibilityConstraint::SafeDownCast(oWrap));
  return gcnew vtkStructuredVisibilityConstraint(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredVisibilityConstraint::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredVisibilityConstraint::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned char vtkStructuredVisibilityConstraint::IsVisible(int id)
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->IsVisible(id);
  return retVal;
}



void vtkStructuredVisibilityConstraint::Blank(int id)
{
  vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->Blank(id);
}



void vtkStructuredVisibilityConstraint::UnBlank(int id)
{
  vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->UnBlank(id);
}



array<int>^ vtkStructuredVisibilityConstraint::GetDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->GetDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkStructuredVisibilityConstraint::Initialize(array<int>^ dims)
{
  pin_ptr<int> dimsPin = &dims[0];
  int* nativedimsPin = dimsPin;
  vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->Initialize(nativedimsPin);
}



void vtkStructuredVisibilityConstraint::SetVisibilityById(vtkUnsignedCharArray^ vis)
{
  ::vtkUnsignedCharArray* visWrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(vis->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->SetVisibilityById(visWrap);
}



vtkUnsignedCharArray^ vtkStructuredVisibilityConstraint::GetVisibilityById()
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->GetVisibilityById());
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



void vtkStructuredVisibilityConstraint::ShallowCopy(vtkStructuredVisibilityConstraint^ src)
{
  ::vtkStructuredVisibilityConstraint* srcWrap = vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->ShallowCopy(srcWrap);
}



void vtkStructuredVisibilityConstraint::DeepCopy(vtkStructuredVisibilityConstraint^ src)
{
  ::vtkStructuredVisibilityConstraint* srcWrap = vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->DeepCopy(srcWrap);
}



unsigned char vtkStructuredVisibilityConstraint::IsConstrained()
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkStructuredVisibilityConstraint>(m_instance)->IsConstrained();
  return retVal;
}



  vtkStructuredVisibilityConstraint::vtkStructuredVisibilityConstraint(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkStructuredVisibilityConstraint::vtkStructuredVisibilityConstraint(bool donothing) : vtkObject(donothing) {}



  vtkStructuredVisibilityConstraint::vtkStructuredVisibilityConstraint() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredVisibilityConstraint::New()));
}



  vtkStructuredVisibilityConstraint::~vtkStructuredVisibilityConstraint() { }





} // end namespace vtkCommon
