

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHierarchicalDataSetAlgorithmDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkHierarchicalDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkHierarchicalDataSetAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkHierarchicalDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkHierarchicalDataSetAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataSetAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHierarchicalDataSetAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataSetAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHierarchicalDataSetAlgorithm^ vtkHierarchicalDataSetAlgorithm::NewInstance()
{
  ::vtkHierarchicalDataSetAlgorithm* retVal = static_cast<::vtkHierarchicalDataSetAlgorithm*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataSetAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkHierarchicalDataSetAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHierarchicalDataSetAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHierarchicalDataSetAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHierarchicalDataSetAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHierarchicalDataSetAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkHierarchicalDataSet^ vtkHierarchicalDataSetAlgorithm::GetOutput()
{
  ::vtkHierarchicalDataSet* retVal = static_cast<::vtkHierarchicalDataSet*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataSetAlgorithm>(m_instance)->GetOutput());
  return gcnew vtkHierarchicalDataSet(IntPtr(retVal), false);
}



vtkHierarchicalDataSet^ vtkHierarchicalDataSetAlgorithm::GetOutput(int arg0)
{
  ::vtkHierarchicalDataSet* retVal = static_cast<::vtkHierarchicalDataSet*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataSetAlgorithm>(m_instance)->GetOutput(arg0));
  return gcnew vtkHierarchicalDataSet(IntPtr(retVal), false);
}



void vtkHierarchicalDataSetAlgorithm::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalDataSetAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkHierarchicalDataSetAlgorithm::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalDataSetAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



  vtkHierarchicalDataSetAlgorithm::vtkHierarchicalDataSetAlgorithm(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkHierarchicalDataSetAlgorithm::vtkHierarchicalDataSetAlgorithm(bool donothing) : vtkAlgorithm(donothing) {}



  vtkHierarchicalDataSetAlgorithm::vtkHierarchicalDataSetAlgorithm() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkHierarchicalDataSetAlgorithm::New()));
}



  vtkHierarchicalDataSetAlgorithm::~vtkHierarchicalDataSetAlgorithm() { }





} // end namespace vtkFiltering
