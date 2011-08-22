

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHierarchicalDataExtractDataSetsDotNet.h"

// native includes
#include "strstream"
#include "vtkHierarchicalDataExtractDataSets.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkHierarchicalDataExtractDataSets::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractDataSets>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHierarchicalDataExtractDataSets::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractDataSets>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHierarchicalDataExtractDataSets^ vtkHierarchicalDataExtractDataSets::NewInstance()
{
  ::vtkHierarchicalDataExtractDataSets* retVal = static_cast<::vtkHierarchicalDataExtractDataSets*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractDataSets>(m_instance)->NewInstance());
  return gcnew vtkHierarchicalDataExtractDataSets(IntPtr(retVal), false);
}



vtkHierarchicalDataExtractDataSets^ vtkHierarchicalDataExtractDataSets::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHierarchicalDataExtractDataSets* retVal = static_cast<::vtkHierarchicalDataExtractDataSets*>(::vtkHierarchicalDataExtractDataSets::SafeDownCast(oWrap));
  return gcnew vtkHierarchicalDataExtractDataSets(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHierarchicalDataExtractDataSets::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractDataSets>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHierarchicalDataExtractDataSets::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractDataSets>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkHierarchicalDataExtractDataSets::AddDataSet(unsigned int level, unsigned int idx)
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractDataSets>(m_instance)->AddDataSet(level, idx);
}



void vtkHierarchicalDataExtractDataSets::ClearDataSetList()
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractDataSets>(m_instance)->ClearDataSetList();
}



  vtkHierarchicalDataExtractDataSets::vtkHierarchicalDataExtractDataSets(System::IntPtr native, bool bConst) : vtkHierarchicalDataSetAlgorithm(native, bConst) {}



  vtkHierarchicalDataExtractDataSets::vtkHierarchicalDataExtractDataSets(bool donothing) : vtkHierarchicalDataSetAlgorithm(donothing) {}



  vtkHierarchicalDataExtractDataSets::vtkHierarchicalDataExtractDataSets() : vtkHierarchicalDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkHierarchicalDataExtractDataSets::New()));
}



  vtkHierarchicalDataExtractDataSets::~vtkHierarchicalDataExtractDataSets() { }





} // end namespace vtkGraphics
