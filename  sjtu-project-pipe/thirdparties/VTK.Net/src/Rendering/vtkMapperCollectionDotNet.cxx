

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMapperCollectionDotNet.h"
#include "vtkMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkMapperCollection.h"
#include "vtkMapper.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMapperCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMapperCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMapperCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMapperCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMapperCollection^ vtkMapperCollection::NewInstance()
{
  ::vtkMapperCollection* retVal = static_cast<::vtkMapperCollection*>(vtk::ConvertManagedToNative<::vtkMapperCollection>(m_instance)->NewInstance());
  return gcnew vtkMapperCollection(IntPtr(retVal), false);
}



vtkMapperCollection^ vtkMapperCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMapperCollection* retVal = static_cast<::vtkMapperCollection*>(::vtkMapperCollection::SafeDownCast(oWrap));
  return gcnew vtkMapperCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMapperCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMapperCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMapperCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMapperCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMapperCollection::AddItem(vtkMapper^ a)
{
  ::vtkMapper* aWrap = vtk::ConvertManagedToNative<::vtkMapper>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMapperCollection>(m_instance)->AddItem(aWrap);
}



vtkMapper^ vtkMapperCollection::GetNextItem()
{
  ::vtkMapper* retVal = static_cast<::vtkMapper*>(vtk::ConvertManagedToNative<::vtkMapperCollection>(m_instance)->GetNextItem());
  return gcnew vtkMapper(IntPtr(retVal), false);
}



vtkMapper^ vtkMapperCollection::GetLastItem()
{
  ::vtkMapper* retVal = static_cast<::vtkMapper*>(vtk::ConvertManagedToNative<::vtkMapperCollection>(m_instance)->GetLastItem());
  return gcnew vtkMapper(IntPtr(retVal), false);
}



  vtkMapperCollection::vtkMapperCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkMapperCollection::vtkMapperCollection(bool donothing) : vtkCollection(donothing) {}



  vtkMapperCollection::vtkMapperCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkMapperCollection::New()));
}



  vtkMapperCollection::~vtkMapperCollection() { }





} // end namespace vtkRendering
