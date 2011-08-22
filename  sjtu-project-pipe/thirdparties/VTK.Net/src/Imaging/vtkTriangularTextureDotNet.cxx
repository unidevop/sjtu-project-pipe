

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTriangularTextureDotNet.h"

// native includes
#include "strstream"
#include "vtkTriangularTexture.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTriangularTexture::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTriangularTexture::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTriangularTexture^ vtkTriangularTexture::NewInstance()
{
  ::vtkTriangularTexture* retVal = static_cast<::vtkTriangularTexture*>(vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->NewInstance());
  return gcnew vtkTriangularTexture(IntPtr(retVal), false);
}



vtkTriangularTexture^ vtkTriangularTexture::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTriangularTexture* retVal = static_cast<::vtkTriangularTexture*>(::vtkTriangularTexture::SafeDownCast(oWrap));
  return gcnew vtkTriangularTexture(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTriangularTexture::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTriangularTexture::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTriangularTexture::SetScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->SetScaleFactor(arg0);
}



double vtkTriangularTexture::GetScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->GetScaleFactor();
  return retVal;
}



void vtkTriangularTexture::SetXSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->SetXSize(arg0);
}



int vtkTriangularTexture::GetXSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->GetXSize();
  return retVal;
}



void vtkTriangularTexture::SetYSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->SetYSize(arg0);
}



int vtkTriangularTexture::GetYSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->GetYSize();
  return retVal;
}



void vtkTriangularTexture::SetTexturePattern(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->SetTexturePattern(arg0);
}



int vtkTriangularTexture::GetTexturePatternMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->GetTexturePatternMinValue();
  return retVal;
}



int vtkTriangularTexture::GetTexturePatternMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->GetTexturePatternMaxValue();
  return retVal;
}



int vtkTriangularTexture::GetTexturePattern()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTriangularTexture>(m_instance)->GetTexturePattern();
  return retVal;
}



  vtkTriangularTexture::vtkTriangularTexture(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkTriangularTexture::vtkTriangularTexture(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkTriangularTexture::vtkTriangularTexture() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTriangularTexture::New()));
}



  vtkTriangularTexture::~vtkTriangularTexture() { }





} // end namespace vtkImaging
