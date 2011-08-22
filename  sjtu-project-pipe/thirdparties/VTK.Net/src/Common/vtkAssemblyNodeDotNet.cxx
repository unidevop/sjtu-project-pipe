

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAssemblyNodeDotNet.h"
#include "vtkMatrix4x4DotNet.h"
#include "vtkPropDotNet.h"

// native includes
#include "strstream"
#include "vtkAssemblyNode.h"
#include "vtkMatrix4x4.h"
#include "vtkProp.h"

using namespace System;

namespace vtk {

System::String^ vtkAssemblyNode::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAssemblyNode::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAssemblyNode^ vtkAssemblyNode::NewInstance()
{
  ::vtkAssemblyNode* retVal = static_cast<::vtkAssemblyNode*>(vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->NewInstance());
  return gcnew vtkAssemblyNode(IntPtr(retVal), false);
}



vtkAssemblyNode^ vtkAssemblyNode::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAssemblyNode* retVal = static_cast<::vtkAssemblyNode*>(::vtkAssemblyNode::SafeDownCast(oWrap));
  return gcnew vtkAssemblyNode(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAssemblyNode::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAssemblyNode::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAssemblyNode::SetViewProp(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->SetViewProp(propWrap);
}



vtkProp^ vtkAssemblyNode::GetViewProp()
{
  ::vtkProp* retVal = static_cast<::vtkProp*>(vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->GetViewProp());
  return gcnew vtkProp(IntPtr(retVal), false);
}



void vtkAssemblyNode::SetMatrix(vtkMatrix4x4^ matrix)
{
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->SetMatrix(matrixWrap);
}



vtkMatrix4x4^ vtkAssemblyNode::GetMatrix()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->GetMatrix());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



unsigned long vtkAssemblyNode::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->GetMTime();
  return retVal;
}



void vtkAssemblyNode::SetProp(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->SetProp(propWrap);
}



vtkProp^ vtkAssemblyNode::GetProp()
{
  ::vtkProp* retVal = static_cast<::vtkProp*>(vtk::ConvertManagedToNative<::vtkAssemblyNode>(m_instance)->GetProp());
  return gcnew vtkProp(IntPtr(retVal), false);
}



  vtkAssemblyNode::vtkAssemblyNode(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkAssemblyNode::vtkAssemblyNode(bool donothing) : vtkObject(donothing) {}



  vtkAssemblyNode::vtkAssemblyNode() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkAssemblyNode::New()));
}



  vtkAssemblyNode::~vtkAssemblyNode() { }





} // end namespace vtkCommon
