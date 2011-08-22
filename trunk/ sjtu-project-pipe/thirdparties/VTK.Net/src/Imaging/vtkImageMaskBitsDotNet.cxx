

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMaskBitsDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMaskBits.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMaskBits::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMaskBits::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMaskBits^ vtkImageMaskBits::NewInstance()
{
  ::vtkImageMaskBits* retVal = static_cast<::vtkImageMaskBits*>(vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->NewInstance());
  return gcnew vtkImageMaskBits(IntPtr(retVal), false);
}



vtkImageMaskBits^ vtkImageMaskBits::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMaskBits* retVal = static_cast<::vtkImageMaskBits*>(::vtkImageMaskBits::SafeDownCast(oWrap));
  return gcnew vtkImageMaskBits(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMaskBits::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMaskBits::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageMaskBits::SetMasks(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3)
{
  vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->SetMasks(arg0, arg1, arg2, arg3);
}



void vtkImageMaskBits::SetMasks(array<unsigned int>^ arg0)
{
  pin_ptr<unsigned int> arg0Pin = &arg0[0];
  unsigned int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->SetMasks(nativearg0Pin);
}



void vtkImageMaskBits::SetMask(unsigned int mask)
{
  vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->SetMask(mask);
}



void vtkImageMaskBits::SetMasks(unsigned int mask1, unsigned int mask2)
{
  vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->SetMasks(mask1, mask2);
}



void vtkImageMaskBits::SetMasks(unsigned int mask1, unsigned int mask2, unsigned int mask3)
{
  vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->SetMasks(mask1, mask2, mask3);
}



array<unsigned int>^ vtkImageMaskBits::GetMasks()
{
  const unsigned int* retVal = vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->GetMasks();
  array<unsigned int>^ mRetVal = gcnew array<unsigned int>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageMaskBits::SetOperation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->SetOperation(arg0);
}



int vtkImageMaskBits::GetOperation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->GetOperation();
  return retVal;
}



void vtkImageMaskBits::SetOperationToAnd()
{
  vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->SetOperationToAnd();
}



void vtkImageMaskBits::SetOperationToOr()
{
  vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->SetOperationToOr();
}



void vtkImageMaskBits::SetOperationToXor()
{
  vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->SetOperationToXor();
}



void vtkImageMaskBits::SetOperationToNand()
{
  vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->SetOperationToNand();
}



void vtkImageMaskBits::SetOperationToNor()
{
  vtk::ConvertManagedToNative<::vtkImageMaskBits>(m_instance)->SetOperationToNor();
}



  vtkImageMaskBits::vtkImageMaskBits(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageMaskBits::vtkImageMaskBits(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageMaskBits::vtkImageMaskBits() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageMaskBits::New()));
}



  vtkImageMaskBits::~vtkImageMaskBits() { }





} // end namespace vtkImaging
