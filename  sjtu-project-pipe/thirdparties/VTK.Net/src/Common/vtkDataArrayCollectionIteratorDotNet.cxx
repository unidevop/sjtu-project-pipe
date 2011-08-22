

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataArrayCollectionIteratorDotNet.h"
#include "vtkCollectionDotNet.h"
#include "vtkDataArrayDotNet.h"
#include "vtkDataArrayCollectionDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkDataArrayCollectionIterator.h"
#include "vtkCollection.h"
#include "vtkDataArray.h"
#include "vtkDataArrayCollection.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataArrayCollectionIterator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataArrayCollectionIterator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataArrayCollectionIterator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataArrayCollectionIterator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataArrayCollectionIterator^ vtkDataArrayCollectionIterator::NewInstance()
{
  ::vtkDataArrayCollectionIterator* retVal = static_cast<::vtkDataArrayCollectionIterator*>(vtk::ConvertManagedToNative<::vtkDataArrayCollectionIterator>(m_instance)->NewInstance());
  return gcnew vtkDataArrayCollectionIterator(IntPtr(retVal), false);
}



vtkDataArrayCollectionIterator^ vtkDataArrayCollectionIterator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataArrayCollectionIterator* retVal = static_cast<::vtkDataArrayCollectionIterator*>(::vtkDataArrayCollectionIterator::SafeDownCast(oWrap));
  return gcnew vtkDataArrayCollectionIterator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataArrayCollectionIterator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataArrayCollectionIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataArrayCollectionIterator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataArrayCollectionIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataArrayCollectionIterator::SetCollection(vtkCollection^ arg0)
{
  ::vtkCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataArrayCollectionIterator>(m_instance)->SetCollection(arg0Wrap);
}



void vtkDataArrayCollectionIterator::SetCollection(vtkDataArrayCollection^ arg0)
{
  ::vtkDataArrayCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataArrayCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataArrayCollectionIterator>(m_instance)->SetCollection(arg0Wrap);
}



vtkDataArray^ vtkDataArrayCollectionIterator::GetDataArray()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataArrayCollectionIterator>(m_instance)->GetDataArray());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



  vtkDataArrayCollectionIterator::vtkDataArrayCollectionIterator(System::IntPtr native, bool bConst) : vtkCollectionIterator(native, bConst) {}



  vtkDataArrayCollectionIterator::vtkDataArrayCollectionIterator(bool donothing) : vtkCollectionIterator(donothing) {}



  vtkDataArrayCollectionIterator::vtkDataArrayCollectionIterator() : vtkCollectionIterator(false) {
  this->SetNativePointer(IntPtr(::vtkDataArrayCollectionIterator::New()));
}



  vtkDataArrayCollectionIterator::~vtkDataArrayCollectionIterator() { }





} // end namespace vtkCommon
