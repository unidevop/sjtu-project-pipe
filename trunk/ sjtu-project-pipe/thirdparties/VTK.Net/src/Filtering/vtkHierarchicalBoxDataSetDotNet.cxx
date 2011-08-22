

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHierarchicalBoxDataSetDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkInformationDotNet.h"
#include "vtkInformationIdTypeKeyDotNet.h"
#include "vtkInformationIntegerVectorKeyDotNet.h"

// native includes
#include "strstream"
#include "vtkHierarchicalBoxDataSet.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationIdTypeKey.h"
#include "vtkInformationIntegerVectorKey.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkHierarchicalBoxDataSet::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHierarchicalBoxDataSet::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHierarchicalBoxDataSet^ vtkHierarchicalBoxDataSet::NewInstance()
{
  ::vtkHierarchicalBoxDataSet* retVal = static_cast<::vtkHierarchicalBoxDataSet*>(vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->NewInstance());
  return gcnew vtkHierarchicalBoxDataSet(IntPtr(retVal), false);
}



vtkHierarchicalBoxDataSet^ vtkHierarchicalBoxDataSet::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHierarchicalBoxDataSet* retVal = static_cast<::vtkHierarchicalBoxDataSet*>(::vtkHierarchicalBoxDataSet::SafeDownCast(oWrap));
  return gcnew vtkHierarchicalBoxDataSet(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHierarchicalBoxDataSet::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHierarchicalBoxDataSet::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkHierarchicalBoxDataSet::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->GetDataObjectType();
  return retVal;
}



vtkDataObject^ vtkHierarchicalBoxDataSet::GetDataSet(unsigned int level, unsigned int id)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->GetDataSet(level, id));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkHierarchicalBoxDataSet::GetDataSet(vtkInformation^ index)
{
  ::vtkInformation* indexWrap = vtk::ConvertManagedToNative<::vtkInformation>(index->GetNativePointer());
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->GetDataSet(indexWrap));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkHierarchicalBoxDataSet::SetRefinementRatio(unsigned int level, int refRatio)
{
  vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->SetRefinementRatio(level, refRatio);
}



int vtkHierarchicalBoxDataSet::GetRefinementRatio(unsigned int level)
{
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->GetRefinementRatio(level);
  return retVal;
}



void vtkHierarchicalBoxDataSet::GenerateVisibilityArrays()
{
  vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->GenerateVisibilityArrays();
}



void vtkHierarchicalBoxDataSet::ShallowCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->ShallowCopy(srcWrap);
}



void vtkHierarchicalBoxDataSet::DeepCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->DeepCopy(srcWrap);
}



vtkInformationIntegerVectorKey^ vtkHierarchicalBoxDataSet::BOX()
{
  ::vtkInformationIntegerVectorKey* retVal = static_cast<::vtkInformationIntegerVectorKey*>(::vtkHierarchicalBoxDataSet::BOX());
  return gcnew vtkInformationIntegerVectorKey(IntPtr(retVal), false);
}



vtkInformationIdTypeKey^ vtkHierarchicalBoxDataSet::NUMBER_OF_BLANKED_POINTS()
{
  ::vtkInformationIdTypeKey* retVal = static_cast<::vtkInformationIdTypeKey*>(::vtkHierarchicalBoxDataSet::NUMBER_OF_BLANKED_POINTS());
  return gcnew vtkInformationIdTypeKey(IntPtr(retVal), false);
}



int vtkHierarchicalBoxDataSet::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalBoxDataSet>(m_instance)->GetNumberOfPoints();
  return retVal;
}



  vtkHierarchicalBoxDataSet::vtkHierarchicalBoxDataSet(System::IntPtr native, bool bConst) : vtkHierarchicalDataSet(native, bConst) {}



  vtkHierarchicalBoxDataSet::vtkHierarchicalBoxDataSet(bool donothing) : vtkHierarchicalDataSet(donothing) {}



  vtkHierarchicalBoxDataSet::vtkHierarchicalBoxDataSet() : vtkHierarchicalDataSet(false) {
  this->SetNativePointer(IntPtr(::vtkHierarchicalBoxDataSet::New()));
}



  vtkHierarchicalBoxDataSet::~vtkHierarchicalBoxDataSet() { }





} // end namespace vtkFiltering
