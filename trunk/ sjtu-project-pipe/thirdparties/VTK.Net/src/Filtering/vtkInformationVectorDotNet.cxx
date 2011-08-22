

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationVectorDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationVector.h"
#include "vtkInformation.h"
#include "vtkObjectBase.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationVector::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationVector::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationVector^ vtkInformationVector::NewInstance()
{
  ::vtkInformationVector* retVal = static_cast<::vtkInformationVector*>(vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->NewInstance());
  return gcnew vtkInformationVector(IntPtr(retVal), false);
}



vtkInformationVector^ vtkInformationVector::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInformationVector* retVal = static_cast<::vtkInformationVector*>(::vtkInformationVector::SafeDownCast(oWrap));
  return gcnew vtkInformationVector(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationVector::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationVector::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkInformationVector::GetNumberOfInformationObjects()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->GetNumberOfInformationObjects();
  return retVal;
}



void vtkInformationVector::SetNumberOfInformationObjects(int n)
{
  vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->SetNumberOfInformationObjects(n);
}



void vtkInformationVector::SetInformationObject(int index, vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->SetInformationObject(index, infoWrap);
}



vtkInformation^ vtkInformationVector::GetInformationObject(int index)
{
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->GetInformationObject(index));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



void vtkInformationVector::Append(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->Append(infoWrap);
}



void vtkInformationVector::Remove(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->Remove(infoWrap);
}



void vtkInformationVector::Register(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->Register(oWrap);
}



void vtkInformationVector::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->UnRegister(oWrap);
}



void vtkInformationVector::Copy(vtkInformationVector^ from, int deep)
{
  ::vtkInformationVector* fromWrap = vtk::ConvertManagedToNative<::vtkInformationVector>(from->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationVector>(m_instance)->Copy(fromWrap, deep);
}



  vtkInformationVector::vtkInformationVector(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkInformationVector::vtkInformationVector(bool donothing) : vtkObject(donothing) {}



  vtkInformationVector::vtkInformationVector() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkInformationVector::New()));
}



  vtkInformationVector::~vtkInformationVector() { }





} // end namespace vtkFiltering
