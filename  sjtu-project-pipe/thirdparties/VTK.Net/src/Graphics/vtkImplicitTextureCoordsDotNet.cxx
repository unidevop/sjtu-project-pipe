

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitTextureCoordsDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitTextureCoords.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitTextureCoords::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitTextureCoords::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitTextureCoords^ vtkImplicitTextureCoords::NewInstance()
{
  ::vtkImplicitTextureCoords* retVal = static_cast<::vtkImplicitTextureCoords*>(vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->NewInstance());
  return gcnew vtkImplicitTextureCoords(IntPtr(retVal), false);
}



vtkImplicitTextureCoords^ vtkImplicitTextureCoords::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImplicitTextureCoords* retVal = static_cast<::vtkImplicitTextureCoords*>(::vtkImplicitTextureCoords::SafeDownCast(oWrap));
  return gcnew vtkImplicitTextureCoords(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImplicitTextureCoords::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImplicitTextureCoords::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImplicitTextureCoords::SetRFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->SetRFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkImplicitTextureCoords::GetRFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->GetRFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkImplicitTextureCoords::SetSFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->SetSFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkImplicitTextureCoords::GetSFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->GetSFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkImplicitTextureCoords::SetTFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->SetTFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkImplicitTextureCoords::GetTFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->GetTFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkImplicitTextureCoords::SetFlipTexture(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->SetFlipTexture(arg0);
}



int vtkImplicitTextureCoords::GetFlipTexture()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->GetFlipTexture();
  return retVal;
}



void vtkImplicitTextureCoords::FlipTextureOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->FlipTextureOn();
}



void vtkImplicitTextureCoords::FlipTextureOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitTextureCoords>(m_instance)->FlipTextureOff();
}



  vtkImplicitTextureCoords::vtkImplicitTextureCoords(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkImplicitTextureCoords::vtkImplicitTextureCoords(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkImplicitTextureCoords::vtkImplicitTextureCoords() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitTextureCoords::New()));
}



  vtkImplicitTextureCoords::~vtkImplicitTextureCoords() { }





} // end namespace vtkGraphics
