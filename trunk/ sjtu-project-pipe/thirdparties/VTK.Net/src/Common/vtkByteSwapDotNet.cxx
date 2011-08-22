

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkByteSwapDotNet.h"

// native includes
#include "strstream"
#include "vtkByteSwap.h"

using namespace System;

namespace vtk {

System::String^ vtkByteSwap::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkByteSwap>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkByteSwap::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkByteSwap>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkByteSwap^ vtkByteSwap::NewInstance()
{
  ::vtkByteSwap* retVal = static_cast<::vtkByteSwap*>(vtk::ConvertManagedToNative<::vtkByteSwap>(m_instance)->NewInstance());
  return gcnew vtkByteSwap(IntPtr(retVal), false);
}



vtkByteSwap^ vtkByteSwap::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkByteSwap* retVal = static_cast<::vtkByteSwap*>(::vtkByteSwap::SafeDownCast(oWrap));
  return gcnew vtkByteSwap(IntPtr(retVal), false);
}



void vtkByteSwap::Swap2LE(System::IntPtr p)
{
  ::vtkByteSwap::Swap2LE(p.ToPointer());
}



void vtkByteSwap::Swap4LE(System::IntPtr p)
{
  ::vtkByteSwap::Swap4LE(p.ToPointer());
}



void vtkByteSwap::Swap8LE(System::IntPtr p)
{
  ::vtkByteSwap::Swap8LE(p.ToPointer());
}



void vtkByteSwap::Swap2LERange(System::IntPtr p, int num)
{
  ::vtkByteSwap::Swap2LERange(p.ToPointer(), num);
}



void vtkByteSwap::Swap4LERange(System::IntPtr p, int num)
{
  ::vtkByteSwap::Swap4LERange(p.ToPointer(), num);
}



void vtkByteSwap::Swap8LERange(System::IntPtr p, int num)
{
  ::vtkByteSwap::Swap8LERange(p.ToPointer(), num);
}



void vtkByteSwap::Swap2BE(System::IntPtr p)
{
  ::vtkByteSwap::Swap2BE(p.ToPointer());
}



void vtkByteSwap::Swap4BE(System::IntPtr p)
{
  ::vtkByteSwap::Swap4BE(p.ToPointer());
}



void vtkByteSwap::Swap8BE(System::IntPtr p)
{
  ::vtkByteSwap::Swap8BE(p.ToPointer());
}



void vtkByteSwap::Swap2BERange(System::IntPtr p, int num)
{
  ::vtkByteSwap::Swap2BERange(p.ToPointer(), num);
}



void vtkByteSwap::Swap4BERange(System::IntPtr p, int num)
{
  ::vtkByteSwap::Swap4BERange(p.ToPointer(), num);
}



void vtkByteSwap::Swap8BERange(System::IntPtr p, int num)
{
  ::vtkByteSwap::Swap8BERange(p.ToPointer(), num);
}



void vtkByteSwap::SwapVoidRange(System::IntPtr buffer, int numWords, int wordSize)
{
  ::vtkByteSwap::SwapVoidRange(buffer.ToPointer(), numWords, wordSize);
}



  vtkByteSwap::vtkByteSwap(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkByteSwap::vtkByteSwap(bool donothing) : vtkObject(donothing) {}



  vtkByteSwap::vtkByteSwap() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkByteSwap::New()));
}



  vtkByteSwap::~vtkByteSwap() { }





} // end namespace vtkCommon
