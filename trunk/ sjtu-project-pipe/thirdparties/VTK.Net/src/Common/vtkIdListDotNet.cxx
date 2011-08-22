

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkIdListDotNet.h"

// native includes
#include "strstream"
#include "vtkIdList.h"

using namespace System;

namespace vtk {

void vtkIdList::Initialize()
{
  vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->Initialize();
}



int vtkIdList::Allocate(int sz, int strategy)
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->Allocate(sz, strategy);
  return retVal;
}



System::String^ vtkIdList::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkIdList::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkIdList^ vtkIdList::NewInstance()
{
  ::vtkIdList* retVal = static_cast<::vtkIdList*>(vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->NewInstance());
  return gcnew vtkIdList(IntPtr(retVal), false);
}



vtkIdList^ vtkIdList::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkIdList* retVal = static_cast<::vtkIdList*>(::vtkIdList::SafeDownCast(oWrap));
  return gcnew vtkIdList(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkIdList::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkIdList::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkIdList::GetNumberOfIds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->GetNumberOfIds();
  return retVal;
}



int vtkIdList::GetId(int i)
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->GetId(i);
  return retVal;
}



void vtkIdList::SetNumberOfIds(int number)
{
  vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->SetNumberOfIds(number);
}



void vtkIdList::SetId(int i, int id)
{
  vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->SetId(i, id);
}



void vtkIdList::InsertId(int i, int id)
{
  vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->InsertId(i, id);
}



int vtkIdList::InsertNextId(int id)
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->InsertNextId(id);
  return retVal;
}



int vtkIdList::InsertUniqueId(int id)
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->InsertUniqueId(id);
  return retVal;
}



void vtkIdList::Reset()
{
  vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->Reset();
}



void vtkIdList::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->Squeeze();
}



void vtkIdList::DeepCopy(vtkIdList^ ids)
{
  ::vtkIdList* idsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ids->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->DeepCopy(idsWrap);
}



void vtkIdList::DeleteId(int id)
{
  vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->DeleteId(id);
}



int vtkIdList::IsId(int id)
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdList>(m_instance)->IsId(id);
  return retVal;
}



  vtkIdList::vtkIdList(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkIdList::vtkIdList(bool donothing) : vtkObject(donothing) {}



  vtkIdList::vtkIdList() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkIdList::New()));
}



  vtkIdList::~vtkIdList() { }





} // end namespace vtkCommon
