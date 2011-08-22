

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTextureDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkTexture.h"
#include "vtkLookupTable.h"
#include "vtkObject.h"
#include "vtkRenderer.h"
#include "vtkUnsignedCharArray.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkTexture::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTexture::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTexture^ vtkTexture::NewInstance()
{
  ::vtkTexture* retVal = static_cast<::vtkTexture*>(vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->NewInstance());
  return gcnew vtkTexture(IntPtr(retVal), false);
}



vtkTexture^ vtkTexture::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTexture* retVal = static_cast<::vtkTexture*>(::vtkTexture::SafeDownCast(oWrap));
  return gcnew vtkTexture(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTexture::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTexture::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTexture::Render(vtkRenderer^ ren)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->Render(renWrap);
}



void vtkTexture::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkTexture::Load(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->Load(arg0Wrap);
}



int vtkTexture::GetRepeat()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->GetRepeat();
  return retVal;
}



void vtkTexture::SetRepeat(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->SetRepeat(arg0);
}



void vtkTexture::RepeatOn()
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->RepeatOn();
}



void vtkTexture::RepeatOff()
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->RepeatOff();
}



int vtkTexture::GetInterpolate()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->GetInterpolate();
  return retVal;
}



void vtkTexture::SetInterpolate(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->SetInterpolate(arg0);
}



void vtkTexture::InterpolateOn()
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->InterpolateOn();
}



void vtkTexture::InterpolateOff()
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->InterpolateOff();
}



void vtkTexture::SetQuality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->SetQuality(arg0);
}



int vtkTexture::GetQuality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->GetQuality();
  return retVal;
}



void vtkTexture::SetQualityToDefault()
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->SetQualityToDefault();
}



void vtkTexture::SetQualityTo16Bit()
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->SetQualityTo16Bit();
}



void vtkTexture::SetQualityTo32Bit()
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->SetQualityTo32Bit();
}



int vtkTexture::GetMapColorScalarsThroughLookupTable()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->GetMapColorScalarsThroughLookupTable();
  return retVal;
}



void vtkTexture::SetMapColorScalarsThroughLookupTable(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->SetMapColorScalarsThroughLookupTable(arg0);
}



void vtkTexture::MapColorScalarsThroughLookupTableOn()
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->MapColorScalarsThroughLookupTableOn();
}



void vtkTexture::MapColorScalarsThroughLookupTableOff()
{
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->MapColorScalarsThroughLookupTableOff();
}



void vtkTexture::SetLookupTable(vtkLookupTable^ arg0)
{
  ::vtkLookupTable* arg0Wrap = vtk::ConvertManagedToNative<::vtkLookupTable>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->SetLookupTable(arg0Wrap);
}



vtkLookupTable^ vtkTexture::GetLookupTable()
{
  ::vtkLookupTable* retVal = static_cast<::vtkLookupTable*>(vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->GetLookupTable());
  return gcnew vtkLookupTable(IntPtr(retVal), false);
}



vtkUnsignedCharArray^ vtkTexture::GetMappedScalars()
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkTexture>(m_instance)->GetMappedScalars());
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



  vtkTexture::vtkTexture(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkTexture::vtkTexture(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkTexture::vtkTexture() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTexture::New()));
}



  vtkTexture::~vtkTexture() { }





} // end namespace vtkRendering
