

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSynchronizedTemplatesCutter3DDotNet.h"

// native includes
#include "strstream"
#include "vtkSynchronizedTemplatesCutter3D.h"
#include "vtkImageData.h"
#include "vtkImplicitFunction.h"
#include "vtkInformation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSynchronizedTemplatesCutter3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplatesCutter3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSynchronizedTemplatesCutter3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplatesCutter3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSynchronizedTemplatesCutter3D^ vtkSynchronizedTemplatesCutter3D::NewInstance()
{
  ::vtkSynchronizedTemplatesCutter3D* retVal = static_cast<::vtkSynchronizedTemplatesCutter3D*>(vtk::ConvertManagedToNative<::vtkSynchronizedTemplatesCutter3D>(m_instance)->NewInstance());
  return gcnew vtkSynchronizedTemplatesCutter3D(IntPtr(retVal), false);
}



vtkSynchronizedTemplatesCutter3D^ vtkSynchronizedTemplatesCutter3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSynchronizedTemplatesCutter3D* retVal = static_cast<::vtkSynchronizedTemplatesCutter3D*>(::vtkSynchronizedTemplatesCutter3D::SafeDownCast(oWrap));
  return gcnew vtkSynchronizedTemplatesCutter3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSynchronizedTemplatesCutter3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSynchronizedTemplatesCutter3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSynchronizedTemplatesCutter3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSynchronizedTemplatesCutter3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSynchronizedTemplatesCutter3D::ThreadedExecute(vtkImageData^ data, vtkInformation^ outInfo, array<int>^ exExt, int arg3)
{
  ::vtkImageData* dataWrap = vtk::ConvertManagedToNative<::vtkImageData>(data->GetNativePointer());
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  pin_ptr<int> exExtPin = &exExt[0];
  int* nativeexExtPin = exExtPin;
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplatesCutter3D>(m_instance)->ThreadedExecute(dataWrap, outInfoWrap, nativeexExtPin, arg3);
}



void vtkSynchronizedTemplatesCutter3D::SetCutFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplatesCutter3D>(m_instance)->SetCutFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkSynchronizedTemplatesCutter3D::GetCutFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkSynchronizedTemplatesCutter3D>(m_instance)->GetCutFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



  vtkSynchronizedTemplatesCutter3D::vtkSynchronizedTemplatesCutter3D(System::IntPtr native, bool bConst) : vtkSynchronizedTemplates3D(native, bConst) {}



  vtkSynchronizedTemplatesCutter3D::vtkSynchronizedTemplatesCutter3D(bool donothing) : vtkSynchronizedTemplates3D(donothing) {}



  vtkSynchronizedTemplatesCutter3D::vtkSynchronizedTemplatesCutter3D() : vtkSynchronizedTemplates3D(false) {
  this->SetNativePointer(IntPtr(::vtkSynchronizedTemplatesCutter3D::New()));
}



  vtkSynchronizedTemplatesCutter3D::~vtkSynchronizedTemplatesCutter3D() { }





} // end namespace vtkGraphics
