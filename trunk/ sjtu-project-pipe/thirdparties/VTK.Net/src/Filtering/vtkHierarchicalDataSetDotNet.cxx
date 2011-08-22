

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHierarchicalDataSetDotNet.h"
#include "vtkCompositeDataIteratorDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkHierarchicalDataInformationDotNet.h"
#include "vtkInformationDotNet.h"
#include "vtkInformationIntegerKeyDotNet.h"

// native includes
#include "strstream"
#include "vtkHierarchicalDataSet.h"
#include "vtkCompositeDataIterator.h"
#include "vtkDataObject.h"
#include "vtkHierarchicalDataInformation.h"
#include "vtkInformation.h"
#include "vtkInformationIntegerKey.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkHierarchicalDataSet::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHierarchicalDataSet::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHierarchicalDataSet^ vtkHierarchicalDataSet::NewInstance()
{
  ::vtkHierarchicalDataSet* retVal = static_cast<::vtkHierarchicalDataSet*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->NewInstance());
  return gcnew vtkHierarchicalDataSet(IntPtr(retVal), false);
}



vtkHierarchicalDataSet^ vtkHierarchicalDataSet::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHierarchicalDataSet* retVal = static_cast<::vtkHierarchicalDataSet*>(::vtkHierarchicalDataSet::SafeDownCast(oWrap));
  return gcnew vtkHierarchicalDataSet(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHierarchicalDataSet::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHierarchicalDataSet::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkCompositeDataIterator^ vtkHierarchicalDataSet::NewIterator()
{
  ::vtkCompositeDataIterator* retVal = static_cast<::vtkCompositeDataIterator*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->NewIterator());
  return gcnew vtkCompositeDataIterator(IntPtr(retVal), false);
}



int vtkHierarchicalDataSet::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->GetDataObjectType();
  return retVal;
}



void vtkHierarchicalDataSet::Initialize()
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->Initialize();
}



void vtkHierarchicalDataSet::SetNumberOfLevels(unsigned int numLevels)
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->SetNumberOfLevels(numLevels);
}



unsigned int vtkHierarchicalDataSet::GetNumberOfLevels()
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->GetNumberOfLevels();
  return retVal;
}



void vtkHierarchicalDataSet::SetNumberOfDataSets(unsigned int level, unsigned int numDataSets)
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->SetNumberOfDataSets(level, numDataSets);
}



unsigned int vtkHierarchicalDataSet::GetNumberOfDataSets(unsigned int level)
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->GetNumberOfDataSets(level);
  return retVal;
}



void vtkHierarchicalDataSet::InitializeNode(unsigned int level, unsigned int id)
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->InitializeNode(level, id);
}



void vtkHierarchicalDataSet::SetDataSet(unsigned int level, unsigned int id, vtkDataObject^ dataSet)
{
  ::vtkDataObject* dataSetWrap = vtk::ConvertManagedToNative<::vtkDataObject>(dataSet->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->SetDataSet(level, id, dataSetWrap);
}



void vtkHierarchicalDataSet::AddDataSet(vtkInformation^ index, vtkDataObject^ dobj)
{
  ::vtkInformation* indexWrap = vtk::ConvertManagedToNative<::vtkInformation>(index->GetNativePointer());
  ::vtkDataObject* dobjWrap = vtk::ConvertManagedToNative<::vtkDataObject>(dobj->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->AddDataSet(indexWrap, dobjWrap);
}



vtkDataObject^ vtkHierarchicalDataSet::GetDataSet(unsigned int level, unsigned int id)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->GetDataSet(level, id));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkHierarchicalDataSet::GetDataSet(vtkInformation^ index)
{
  ::vtkInformation* indexWrap = vtk::ConvertManagedToNative<::vtkInformation>(index->GetNativePointer());
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->GetDataSet(indexWrap));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkHierarchicalDataSet::ShallowCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->ShallowCopy(srcWrap);
}



void vtkHierarchicalDataSet::DeepCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->DeepCopy(srcWrap);
}



vtkHierarchicalDataInformation^ vtkHierarchicalDataSet::GetHierarchicalDataInformation()
{
  ::vtkHierarchicalDataInformation* retVal = static_cast<::vtkHierarchicalDataInformation*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->GetHierarchicalDataInformation());
  return gcnew vtkHierarchicalDataInformation(IntPtr(retVal), false);
}



void vtkHierarchicalDataSet::SetHierarchicalDataInformation(vtkHierarchicalDataInformation^ info)
{
  ::vtkHierarchicalDataInformation* infoWrap = vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->SetHierarchicalDataInformation(infoWrap);
}



int vtkHierarchicalDataSet::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataSet>(m_instance)->GetNumberOfPoints();
  return retVal;
}



vtkInformationIntegerKey^ vtkHierarchicalDataSet::LEVEL()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkHierarchicalDataSet::LEVEL());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



  vtkHierarchicalDataSet::vtkHierarchicalDataSet(System::IntPtr native, bool bConst) : vtkCompositeDataSet(native, bConst) {}



  vtkHierarchicalDataSet::vtkHierarchicalDataSet(bool donothing) : vtkCompositeDataSet(donothing) {}



  vtkHierarchicalDataSet::vtkHierarchicalDataSet() : vtkCompositeDataSet(false) {
  this->SetNativePointer(IntPtr(::vtkHierarchicalDataSet::New()));
}



  vtkHierarchicalDataSet::~vtkHierarchicalDataSet() { }





} // end namespace vtkFiltering
