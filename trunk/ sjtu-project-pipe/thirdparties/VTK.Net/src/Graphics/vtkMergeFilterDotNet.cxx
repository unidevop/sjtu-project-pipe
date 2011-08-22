

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMergeFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkMergeFilter.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataSet.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMergeFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMergeFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMergeFilter^ vtkMergeFilter::NewInstance()
{
  ::vtkMergeFilter* retVal = static_cast<::vtkMergeFilter*>(vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->NewInstance());
  return gcnew vtkMergeFilter(IntPtr(retVal), false);
}



vtkMergeFilter^ vtkMergeFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMergeFilter* retVal = static_cast<::vtkMergeFilter*>(::vtkMergeFilter::SafeDownCast(oWrap));
  return gcnew vtkMergeFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMergeFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMergeFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMergeFilter::SetGeometry(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetGeometry(inputWrap);
}



vtkDataSet^ vtkMergeFilter::GetGeometry()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->GetGeometry());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkMergeFilter::SetGeometryConnection(vtkAlgorithmOutput^ algOutput)
{
  ::vtkAlgorithmOutput* algOutputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(algOutput->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetGeometryConnection(algOutputWrap);
}



void vtkMergeFilter::SetScalars(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetScalars(arg0Wrap);
}



vtkDataSet^ vtkMergeFilter::GetScalars()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->GetScalars());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkMergeFilter::SetScalarsConnection(vtkAlgorithmOutput^ algOutput)
{
  ::vtkAlgorithmOutput* algOutputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(algOutput->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetScalarsConnection(algOutputWrap);
}



void vtkMergeFilter::SetVectors(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetVectors(arg0Wrap);
}



vtkDataSet^ vtkMergeFilter::GetVectors()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->GetVectors());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkMergeFilter::SetVectorsConnection(vtkAlgorithmOutput^ algOutput)
{
  ::vtkAlgorithmOutput* algOutputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(algOutput->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetVectorsConnection(algOutputWrap);
}



void vtkMergeFilter::SetNormals(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetNormals(arg0Wrap);
}



vtkDataSet^ vtkMergeFilter::GetNormals()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->GetNormals());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkMergeFilter::SetNormalsConnection(vtkAlgorithmOutput^ algOutput)
{
  ::vtkAlgorithmOutput* algOutputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(algOutput->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetNormalsConnection(algOutputWrap);
}



void vtkMergeFilter::SetTCoords(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetTCoords(arg0Wrap);
}



vtkDataSet^ vtkMergeFilter::GetTCoords()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->GetTCoords());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkMergeFilter::SetTCoordsConnection(vtkAlgorithmOutput^ algOutput)
{
  ::vtkAlgorithmOutput* algOutputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(algOutput->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetTCoordsConnection(algOutputWrap);
}



void vtkMergeFilter::SetTensors(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetTensors(arg0Wrap);
}



vtkDataSet^ vtkMergeFilter::GetTensors()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->GetTensors());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkMergeFilter::SetTensorsConnection(vtkAlgorithmOutput^ algOutput)
{
  ::vtkAlgorithmOutput* algOutputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(algOutput->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->SetTensorsConnection(algOutputWrap);
}



void vtkMergeFilter::AddField(System::String^ name, vtkDataSet^ input)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeFilter>(m_instance)->AddField(nameWrap, inputWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



  vtkMergeFilter::vtkMergeFilter(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkMergeFilter::vtkMergeFilter(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkMergeFilter::vtkMergeFilter() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMergeFilter::New()));
}



  vtkMergeFilter::~vtkMergeFilter() { }





} // end namespace vtkGraphics
