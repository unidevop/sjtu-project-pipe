

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkChacoReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkChacoReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkChacoReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkChacoReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkChacoReader^ vtkChacoReader::NewInstance()
{
  ::vtkChacoReader* retVal = static_cast<::vtkChacoReader*>(vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->NewInstance());
  return gcnew vtkChacoReader(IntPtr(retVal), false);
}



vtkChacoReader^ vtkChacoReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkChacoReader* retVal = static_cast<::vtkChacoReader*>(::vtkChacoReader::SafeDownCast(oWrap));
  return gcnew vtkChacoReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkChacoReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkChacoReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkChacoReader::SetBaseName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->SetBaseName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkChacoReader::GetBaseName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetBaseName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkChacoReader::SetGenerateGlobalElementIdArray(int arg0)
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->SetGenerateGlobalElementIdArray(arg0);
}



int vtkChacoReader::GetGenerateGlobalElementIdArray()
{
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetGenerateGlobalElementIdArray();
  return retVal;
}



void vtkChacoReader::GenerateGlobalElementIdArrayOn()
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GenerateGlobalElementIdArrayOn();
}



void vtkChacoReader::GenerateGlobalElementIdArrayOff()
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GenerateGlobalElementIdArrayOff();
}



System::String^ vtkChacoReader::GetGlobalElementIdArrayName()
{
  const char* retVal = ::vtkChacoReader::GetGlobalElementIdArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkChacoReader::SetGenerateGlobalNodeIdArray(int arg0)
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->SetGenerateGlobalNodeIdArray(arg0);
}



int vtkChacoReader::GetGenerateGlobalNodeIdArray()
{
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetGenerateGlobalNodeIdArray();
  return retVal;
}



void vtkChacoReader::GenerateGlobalNodeIdArrayOn()
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GenerateGlobalNodeIdArrayOn();
}



void vtkChacoReader::GenerateGlobalNodeIdArrayOff()
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GenerateGlobalNodeIdArrayOff();
}



System::String^ vtkChacoReader::GetGlobalNodeIdArrayName()
{
  const char* retVal = ::vtkChacoReader::GetGlobalNodeIdArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkChacoReader::SetGenerateVertexWeightArrays(int arg0)
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->SetGenerateVertexWeightArrays(arg0);
}



int vtkChacoReader::GetGenerateVertexWeightArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetGenerateVertexWeightArrays();
  return retVal;
}



void vtkChacoReader::GenerateVertexWeightArraysOn()
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GenerateVertexWeightArraysOn();
}



void vtkChacoReader::GenerateVertexWeightArraysOff()
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GenerateVertexWeightArraysOff();
}



int vtkChacoReader::GetNumberOfVertexWeights()
{
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetNumberOfVertexWeights();
  return retVal;
}



System::String^ vtkChacoReader::GetVertexWeightArrayName(int weight)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetVertexWeightArrayName(weight);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkChacoReader::SetGenerateEdgeWeightArrays(int arg0)
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->SetGenerateEdgeWeightArrays(arg0);
}



int vtkChacoReader::GetGenerateEdgeWeightArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetGenerateEdgeWeightArrays();
  return retVal;
}



void vtkChacoReader::GenerateEdgeWeightArraysOn()
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GenerateEdgeWeightArraysOn();
}



void vtkChacoReader::GenerateEdgeWeightArraysOff()
{
  vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GenerateEdgeWeightArraysOff();
}



int vtkChacoReader::GetNumberOfEdgeWeights()
{
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetNumberOfEdgeWeights();
  return retVal;
}



System::String^ vtkChacoReader::GetEdgeWeightArrayName(int weight)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetEdgeWeightArrayName(weight);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkChacoReader::GetDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetDimensionality();
  return retVal;
}



int vtkChacoReader::GetNumberOfEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetNumberOfEdges();
  return retVal;
}



int vtkChacoReader::GetNumberOfVertices()
{
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetNumberOfVertices();
  return retVal;
}



int vtkChacoReader::GetNumberOfCellWeightArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetNumberOfCellWeightArrays();
  return retVal;
}



int vtkChacoReader::GetNumberOfPointWeightArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkChacoReader>(m_instance)->GetNumberOfPointWeightArrays();
  return retVal;
}



  vtkChacoReader::vtkChacoReader(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkChacoReader::vtkChacoReader(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkChacoReader::vtkChacoReader() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkChacoReader::New()));
}



  vtkChacoReader::~vtkChacoReader() { }





} // end namespace vtkIO
