

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCompositeDataSetDotNet.h"
#include "vtkAlgorithmOutputDotNet.h"
#include "vtkCompositeDataIteratorDotNet.h"
#include "vtkInformationDotNet.h"
#include "vtkInformationDataObjectKeyDotNet.h"
#include "vtkInformationIntegerKeyDotNet.h"

// native includes
#include "strstream"
#include "vtkCompositeDataSet.h"
#include "vtkAlgorithmOutput.h"
#include "vtkCompositeDataIterator.h"
#include "vtkInformation.h"
#include "vtkInformationDataObjectKey.h"
#include "vtkInformationIntegerKey.h"

using namespace System;

namespace vtk {

System::String^ vtkCompositeDataSet::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCompositeDataSet::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCompositeDataSet^ vtkCompositeDataSet::NewInstance()
{
  ::vtkCompositeDataSet* retVal = static_cast<::vtkCompositeDataSet*>(vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->NewInstance());
  return gcnew vtkCompositeDataSet(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCompositeDataSet::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCompositeDataSet::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkCompositeDataIterator^ vtkCompositeDataSet::NewIterator()
{
  ::vtkCompositeDataIterator* retVal = static_cast<::vtkCompositeDataIterator*>(vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->NewIterator());
  return gcnew vtkCompositeDataIterator(IntPtr(retVal), false);
}



int vtkCompositeDataSet::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->GetDataObjectType();
  return retVal;
}



void vtkCompositeDataSet::Initialize()
{
  vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->Initialize();
}



void vtkCompositeDataSet::AddDataSet(vtkInformation^ index, vtkDataObject^ dobj)
{
  ::vtkInformation* indexWrap = vtk::ConvertManagedToNative<::vtkInformation>(index->GetNativePointer());
  ::vtkDataObject* dobjWrap = vtk::ConvertManagedToNative<::vtkDataObject>(dobj->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->AddDataSet(indexWrap, dobjWrap);
}



vtkDataObject^ vtkCompositeDataSet::GetDataSet(vtkInformation^ index)
{
  ::vtkInformation* indexWrap = vtk::ConvertManagedToNative<::vtkInformation>(index->GetNativePointer());
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->GetDataSet(indexWrap));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkCompositeDataSet::SetPipelineInformation(vtkInformation^ arg0)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->SetPipelineInformation(arg0Wrap);
}



vtkAlgorithmOutput^ vtkCompositeDataSet::GetProducerPort()
{
  ::vtkAlgorithmOutput* retVal = static_cast<::vtkAlgorithmOutput*>(vtk::ConvertManagedToNative<::vtkCompositeDataSet>(m_instance)->GetProducerPort());
  return gcnew vtkAlgorithmOutput(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkCompositeDataSet::INDEX()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkCompositeDataSet::INDEX());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationDataObjectKey^ vtkCompositeDataSet::COMPOSITE_DATA_SET()
{
  ::vtkInformationDataObjectKey* retVal = static_cast<::vtkInformationDataObjectKey*>(::vtkCompositeDataSet::COMPOSITE_DATA_SET());
  return gcnew vtkInformationDataObjectKey(IntPtr(retVal), false);
}



  vtkCompositeDataSet::vtkCompositeDataSet(System::IntPtr native, bool bConst) : vtkDataObject(native, bConst) {}



  vtkCompositeDataSet::vtkCompositeDataSet(bool donothing) : vtkDataObject(donothing) {}



  vtkCompositeDataSet::vtkCompositeDataSet() : vtkDataObject(false) {
  this->SetNativePointer(IntPtr(::vtkCompositeDataSet::New()));
}



  vtkCompositeDataSet::~vtkCompositeDataSet() { }





} // end namespace vtkFiltering
