

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAssemblyPathDotNet.h"
#include "vtkAssemblyNodeDotNet.h"
#include "vtkMatrix4x4DotNet.h"
#include "vtkObjectDotNet.h"
#include "vtkPropDotNet.h"

// native includes
#include "strstream"
#include "vtkAssemblyPath.h"
#include "vtkAssemblyNode.h"
#include "vtkMatrix4x4.h"
#include "vtkObject.h"
#include "vtkProp.h"

using namespace System;

namespace vtk {

System::String^ vtkAssemblyPath::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAssemblyPath::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAssemblyPath^ vtkAssemblyPath::NewInstance()
{
  ::vtkAssemblyPath* retVal = static_cast<::vtkAssemblyPath*>(vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->NewInstance());
  return gcnew vtkAssemblyPath(IntPtr(retVal), false);
}



vtkAssemblyPath^ vtkAssemblyPath::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAssemblyPath* retVal = static_cast<::vtkAssemblyPath*>(::vtkAssemblyPath::SafeDownCast(oWrap));
  return gcnew vtkAssemblyPath(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAssemblyPath::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAssemblyPath::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAssemblyPath::AddNode(vtkProp^ p, vtkMatrix4x4^ m)
{
  ::vtkProp* pWrap = vtk::ConvertManagedToNative<::vtkProp>(p->GetNativePointer());
  ::vtkMatrix4x4* mWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(m->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->AddNode(pWrap, mWrap);
}



vtkAssemblyNode^ vtkAssemblyPath::GetNextNode()
{
  ::vtkAssemblyNode* retVal = static_cast<::vtkAssemblyNode*>(vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->GetNextNode());
  return gcnew vtkAssemblyNode(IntPtr(retVal), false);
}



vtkAssemblyNode^ vtkAssemblyPath::GetFirstNode()
{
  ::vtkAssemblyNode* retVal = static_cast<::vtkAssemblyNode*>(vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->GetFirstNode());
  return gcnew vtkAssemblyNode(IntPtr(retVal), false);
}



vtkAssemblyNode^ vtkAssemblyPath::GetLastNode()
{
  ::vtkAssemblyNode* retVal = static_cast<::vtkAssemblyNode*>(vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->GetLastNode());
  return gcnew vtkAssemblyNode(IntPtr(retVal), false);
}



void vtkAssemblyPath::DeleteLastNode()
{
  vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->DeleteLastNode();
}



void vtkAssemblyPath::ShallowCopy(vtkAssemblyPath^ path)
{
  ::vtkAssemblyPath* pathWrap = vtk::ConvertManagedToNative<::vtkAssemblyPath>(path->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->ShallowCopy(pathWrap);
}



unsigned long vtkAssemblyPath::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAssemblyPath>(m_instance)->GetMTime();
  return retVal;
}



  vtkAssemblyPath::vtkAssemblyPath(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkAssemblyPath::vtkAssemblyPath(bool donothing) : vtkCollection(donothing) {}



  vtkAssemblyPath::vtkAssemblyPath() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkAssemblyPath::New()));
}



  vtkAssemblyPath::~vtkAssemblyPath() { }





} // end namespace vtkCommon
