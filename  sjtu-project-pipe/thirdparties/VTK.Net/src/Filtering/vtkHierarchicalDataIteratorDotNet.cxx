

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHierarchicalDataIteratorDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkHierarchicalDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkHierarchicalDataIterator.h"
#include "vtkDataObject.h"
#include "vtkHierarchicalDataSet.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkHierarchicalDataIterator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataIterator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHierarchicalDataIterator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataIterator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHierarchicalDataIterator^ vtkHierarchicalDataIterator::NewInstance()
{
  ::vtkHierarchicalDataIterator* retVal = static_cast<::vtkHierarchicalDataIterator*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataIterator>(m_instance)->NewInstance());
  return gcnew vtkHierarchicalDataIterator(IntPtr(retVal), false);
}



vtkHierarchicalDataIterator^ vtkHierarchicalDataIterator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHierarchicalDataIterator* retVal = static_cast<::vtkHierarchicalDataIterator*>(::vtkHierarchicalDataIterator::SafeDownCast(oWrap));
  return gcnew vtkHierarchicalDataIterator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHierarchicalDataIterator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHierarchicalDataIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHierarchicalDataIterator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHierarchicalDataIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkHierarchicalDataIterator::GoToFirstItem()
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataIterator>(m_instance)->GoToFirstItem();
}



void vtkHierarchicalDataIterator::GoToNextItem()
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataIterator>(m_instance)->GoToNextItem();
}



int vtkHierarchicalDataIterator::IsDoneWithTraversal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataIterator>(m_instance)->IsDoneWithTraversal();
  return retVal;
}



vtkDataObject^ vtkHierarchicalDataIterator::GetCurrentDataObject()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataIterator>(m_instance)->GetCurrentDataObject());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkHierarchicalDataIterator::SetDataSet(vtkHierarchicalDataSet^ dataset)
{
  ::vtkHierarchicalDataSet* datasetWrap = vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(dataset->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalDataIterator>(m_instance)->SetDataSet(datasetWrap);
}



vtkHierarchicalDataSet^ vtkHierarchicalDataIterator::GetDataSet()
{
  ::vtkHierarchicalDataSet* retVal = static_cast<::vtkHierarchicalDataSet*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataIterator>(m_instance)->GetDataSet());
  return gcnew vtkHierarchicalDataSet(IntPtr(retVal), false);
}



  vtkHierarchicalDataIterator::vtkHierarchicalDataIterator(System::IntPtr native, bool bConst) : vtkCompositeDataIterator(native, bConst) {}



  vtkHierarchicalDataIterator::vtkHierarchicalDataIterator(bool donothing) : vtkCompositeDataIterator(donothing) {}



  vtkHierarchicalDataIterator::vtkHierarchicalDataIterator() : vtkCompositeDataIterator(false) {
  this->SetNativePointer(IntPtr(::vtkHierarchicalDataIterator::New()));
}



  vtkHierarchicalDataIterator::~vtkHierarchicalDataIterator() { }





} // end namespace vtkFiltering
