

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTextMapperDotNet.h"
#include "vtkTextPropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkTextMapper.h"
#include "vtkObject.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"

using namespace System;

namespace vtk {

System::String^ vtkTextMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTextMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTextMapper^ vtkTextMapper::NewInstance()
{
  ::vtkTextMapper* retVal = static_cast<::vtkTextMapper*>(vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->NewInstance());
  return gcnew vtkTextMapper(IntPtr(retVal), false);
}



vtkTextMapper^ vtkTextMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTextMapper* retVal = static_cast<::vtkTextMapper*>(::vtkTextMapper::SafeDownCast(oWrap));
  return gcnew vtkTextMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTextMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTextMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTextMapper::GetSize(vtkViewport^ arg0, array<int>^ size)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  pin_ptr<int> sizePin = &size[0];
  int* nativesizePin = sizePin;
  vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->GetSize(arg0Wrap, nativesizePin);
}



int vtkTextMapper::GetWidth(vtkViewport^ v)
{
  ::vtkViewport* vWrap = vtk::ConvertManagedToNative<::vtkViewport>(v->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->GetWidth(vWrap);
  return retVal;
}



int vtkTextMapper::GetHeight(vtkViewport^ v)
{
  ::vtkViewport* vWrap = vtk::ConvertManagedToNative<::vtkViewport>(v->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->GetHeight(vWrap);
  return retVal;
}



void vtkTextMapper::SetInput(System::String^ inputString)
{
  char* inputStringWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(inputString).ToPointer());
  vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->SetInput(inputStringWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(inputStringWrap));
}



System::String^ vtkTextMapper::GetInput()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->GetInput();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTextMapper::SetTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->SetTextProperty(pWrap);
}



vtkTextProperty^ vtkTextMapper::GetTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->GetTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



int vtkTextMapper::GetNumberOfLines()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->GetNumberOfLines();
  return retVal;
}



void vtkTextMapper::ShallowCopy(vtkTextMapper^ tm)
{
  ::vtkTextMapper* tmWrap = vtk::ConvertManagedToNative<::vtkTextMapper>(tm->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->ShallowCopy(tmWrap);
}



int vtkTextMapper::GetNumberOfLines(System::String^ input)
{
  char* inputWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(input).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->GetNumberOfLines(inputWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(inputWrap));
  return retVal;
}



int vtkTextMapper::SetConstrainedFontSize(vtkViewport^ arg0, int targetWidth, int targetHeight)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->SetConstrainedFontSize(arg0Wrap, targetWidth, targetHeight);
  return retVal;
}



int vtkTextMapper::GetSystemFontSize(int size)
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextMapper>(m_instance)->GetSystemFontSize(size);
  return retVal;
}



  vtkTextMapper::vtkTextMapper(System::IntPtr native, bool bConst) : vtkMapper2D(native, bConst) {}



  vtkTextMapper::vtkTextMapper(bool donothing) : vtkMapper2D(donothing) {}



  vtkTextMapper::vtkTextMapper() : vtkMapper2D(false) {
  this->SetNativePointer(IntPtr(::vtkTextMapper::New()));
}



  vtkTextMapper::~vtkTextMapper() { }





} // end namespace vtkRendering
