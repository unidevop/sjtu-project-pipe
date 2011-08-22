

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImagePermuteDotNet.h"

// native includes
#include "strstream"
#include "vtkImagePermute.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImagePermute::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImagePermute>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImagePermute::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImagePermute>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImagePermute^ vtkImagePermute::NewInstance()
{
  ::vtkImagePermute* retVal = static_cast<::vtkImagePermute*>(vtk::ConvertManagedToNative<::vtkImagePermute>(m_instance)->NewInstance());
  return gcnew vtkImagePermute(IntPtr(retVal), false);
}



vtkImagePermute^ vtkImagePermute::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImagePermute* retVal = static_cast<::vtkImagePermute*>(::vtkImagePermute::SafeDownCast(oWrap));
  return gcnew vtkImagePermute(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImagePermute::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImagePermute>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImagePermute::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImagePermute>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImagePermute::SetFilteredAxes(int x, int y, int z)
{
  vtk::ConvertManagedToNative<::vtkImagePermute>(m_instance)->SetFilteredAxes(x, y, z);
}



void vtkImagePermute::SetFilteredAxes(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkImagePermute>(m_instance)->SetFilteredAxes(nativearg0Pin);
}



array<int>^ vtkImagePermute::GetFilteredAxes()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImagePermute>(m_instance)->GetFilteredAxes();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkImagePermute::vtkImagePermute(System::IntPtr native, bool bConst) : vtkImageReslice(native, bConst) {}



  vtkImagePermute::vtkImagePermute(bool donothing) : vtkImageReslice(donothing) {}



  vtkImagePermute::vtkImagePermute() : vtkImageReslice(false) {
  this->SetNativePointer(IntPtr(::vtkImagePermute::New()));
}



  vtkImagePermute::~vtkImagePermute() { }





} // end namespace vtkImaging
