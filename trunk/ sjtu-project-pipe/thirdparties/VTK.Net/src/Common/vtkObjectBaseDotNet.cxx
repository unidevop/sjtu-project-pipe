

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkObjectBaseDotNet.h"

// native includes
#include "strstream"
#include "vtkObjectBase.h"

using namespace System;

namespace vtk {

System::String^ vtkObjectBase::GetClassName()
{
  const char* retVal = static_cast<::vtkObjectBase*>(m_instance.ToPointer())->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkObjectBase::IsTypeOf(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = ::vtkObjectBase::IsTypeOf(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkObjectBase::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = static_cast<::vtkObjectBase*>(m_instance.ToPointer())->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkObjectBase::FastDelete()
{
  static_cast<::vtkObjectBase*>(m_instance.ToPointer())->FastDelete();
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkObjectBase::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    static_cast<::vtkObjectBase*>(m_instance.ToPointer())->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkObjectBase::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    static_cast<::vtkObjectBase*>(m_instance.ToPointer())->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkObjectBase::Register(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  static_cast<::vtkObjectBase*>(m_instance.ToPointer())->Register(oWrap);
}



void vtkObjectBase::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  static_cast<::vtkObjectBase*>(m_instance.ToPointer())->UnRegister(oWrap);
}



int vtkObjectBase::GetReferenceCount()
{
  int retVal = static_cast<::vtkObjectBase*>(m_instance.ToPointer())->GetReferenceCount();
  return retVal;
}



void vtkObjectBase::SetReferenceCount(int arg0)
{
  static_cast<::vtkObjectBase*>(m_instance.ToPointer())->SetReferenceCount(arg0);
}



System::IntPtr vtkObjectBase::GetNativePointer() {
	 if (m_const) return IntPtr::Zero;
  return m_instance;
}
System::IntPtr vtkObjectBase::GetNativeConstPointer() {
	 return m_instance;
}

vtkObjectBase::vtkObjectBase() {}

vtkObjectBase::vtkObjectBase(bool)
{
}

vtkObjectBase::vtkObjectBase(System::IntPtr ptr, bool bConst)
{
  this->SetNativePointer(ptr, bConst, false);
}

vtkObjectBase::~vtkObjectBase() {
  if ( (IntPtr::Zero != m_instance) && !m_const)
  {
    static_cast<::vtkObjectBase*>(m_instance.ToPointer())->Delete();
    m_instance = IntPtr::Zero;
  }
}
vtkObjectBase::!vtkObjectBase() {
  if ( (IntPtr::Zero != m_instance) && !m_const)
  {
    static_cast<::vtkObjectBase*>(m_instance.ToPointer())->Delete();
    m_instance = IntPtr::Zero;
  }
}

void vtkObjectBase::SetNativePointer(IntPtr ptr)
{
  this->SetNativePointer(ptr, false, true);
}

void vtkObjectBase::SetNativePointer(IntPtr ptr, bool bConst, bool bOwn)
{
  String^ name = this->GetType()->Name;
  if ( IntPtr::Zero == ptr ) {
    throw gcnew System::ApplicationException(String::Format(
      "Could not create class {0} from null native pointer.", name));
  }
  m_instance = ptr;
  m_const = bConst;
  if ( !bConst && !bOwn )
  {
    // cannot register const classes.  They could disappear under us.
    ::vtkObjectBase* ninstance = static_cast<::vtkObjectBase*>(m_instance.ToPointer());
    ninstance->Register(static_cast<::vtkObjectBase*>(nullptr));
  }
}





} // end namespace vtkCommon
