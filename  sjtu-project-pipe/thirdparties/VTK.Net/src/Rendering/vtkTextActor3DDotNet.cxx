

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTextActor3DDotNet.h"
#include "vtkTextPropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkTextActor3D.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkTextProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkTextActor3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextActor3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTextActor3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextActor3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTextActor3D^ vtkTextActor3D::NewInstance()
{
  ::vtkTextActor3D* retVal = static_cast<::vtkTextActor3D*>(vtk::ConvertManagedToNative<::vtkTextActor3D>(m_instance)->NewInstance());
  return gcnew vtkTextActor3D(IntPtr(retVal), false);
}



vtkTextActor3D^ vtkTextActor3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTextActor3D* retVal = static_cast<::vtkTextActor3D*>(::vtkTextActor3D::SafeDownCast(oWrap));
  return gcnew vtkTextActor3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTextActor3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTextActor3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTextActor3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTextActor3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTextActor3D::SetInput(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkTextActor3D>(m_instance)->SetInput(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkTextActor3D::GetInput()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextActor3D>(m_instance)->GetInput();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTextActor3D::SetTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTextActor3D>(m_instance)->SetTextProperty(pWrap);
}



vtkTextProperty^ vtkTextActor3D::GetTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkTextActor3D>(m_instance)->GetTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkTextActor3D::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTextActor3D>(m_instance)->ShallowCopy(propWrap);
}



  vtkTextActor3D::vtkTextActor3D(System::IntPtr native, bool bConst) : vtkProp3D(native, bConst) {}



  vtkTextActor3D::vtkTextActor3D(bool donothing) : vtkProp3D(donothing) {}



  vtkTextActor3D::vtkTextActor3D() : vtkProp3D(false) {
  this->SetNativePointer(IntPtr(::vtkTextActor3D::New()));
}



  vtkTextActor3D::~vtkTextActor3D() { }





} // end namespace vtkRendering
