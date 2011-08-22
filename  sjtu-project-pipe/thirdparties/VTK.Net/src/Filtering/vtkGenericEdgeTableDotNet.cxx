

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericEdgeTableDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericEdgeTable.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericEdgeTable::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericEdgeTable::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericEdgeTable^ vtkGenericEdgeTable::NewInstance()
{
  ::vtkGenericEdgeTable* retVal = static_cast<::vtkGenericEdgeTable*>(vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->NewInstance());
  return gcnew vtkGenericEdgeTable(IntPtr(retVal), false);
}



vtkGenericEdgeTable^ vtkGenericEdgeTable::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericEdgeTable* retVal = static_cast<::vtkGenericEdgeTable*>(::vtkGenericEdgeTable::SafeDownCast(oWrap));
  return gcnew vtkGenericEdgeTable(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericEdgeTable::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericEdgeTable::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericEdgeTable::InsertEdge(int e1, int e2, int cellId, int ref, int% ptId)
{
  pin_ptr<int> ptIdPin = &ptId;
  vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->InsertEdge(e1, e2, cellId, ref, *ptIdPin);
}



void vtkGenericEdgeTable::InsertEdge(int e1, int e2, int cellId, int ref)
{
  vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->InsertEdge(e1, e2, cellId, ref);
}



int vtkGenericEdgeTable::RemoveEdge(int e1, int e2)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->RemoveEdge(e1, e2);
  return retVal;
}



int vtkGenericEdgeTable::CheckEdge(int e1, int e2, int% ptId)
{
  pin_ptr<int> ptIdPin = &ptId;
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->CheckEdge(e1, e2, *ptIdPin);
  return retVal;
}



int vtkGenericEdgeTable::IncrementEdgeReferenceCount(int e1, int e2, int cellId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->IncrementEdgeReferenceCount(e1, e2, cellId);
  return retVal;
}



int vtkGenericEdgeTable::CheckEdgeReferenceCount(int e1, int e2)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->CheckEdgeReferenceCount(e1, e2);
  return retVal;
}



void vtkGenericEdgeTable::Initialize(int start)
{
  vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->Initialize(start);
}



int vtkGenericEdgeTable::GetNumberOfComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->GetNumberOfComponents();
  return retVal;
}



void vtkGenericEdgeTable::SetNumberOfComponents(int count)
{
  vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->SetNumberOfComponents(count);
}



int vtkGenericEdgeTable::CheckPoint(int ptId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->CheckPoint(ptId);
  return retVal;
}



int vtkGenericEdgeTable::CheckPoint(int ptId, array<double>^ point, array<double>^ scalar)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  pin_ptr<double> scalarPin = &scalar[0];
  double* nativescalarPin = scalarPin;
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->CheckPoint(ptId, nativepointPin, nativescalarPin);
  return retVal;
}



void vtkGenericEdgeTable::InsertPoint(int ptId, array<double>^ point)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->InsertPoint(ptId, nativepointPin);
}



void vtkGenericEdgeTable::InsertPointAndScalar(int ptId, array<double>^ pt, array<double>^ s)
{
  pin_ptr<double> ptPin = &pt[0];
  double* nativeptPin = ptPin;
  pin_ptr<double> sPin = &s[0];
  double* nativesPin = sPin;
  vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->InsertPointAndScalar(ptId, nativeptPin, nativesPin);
}



void vtkGenericEdgeTable::RemovePoint(int ptId)
{
  vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->RemovePoint(ptId);
}



void vtkGenericEdgeTable::IncrementPointReferenceCount(int ptId)
{
  vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->IncrementPointReferenceCount(ptId);
}



void vtkGenericEdgeTable::DumpTable()
{
  vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->DumpTable();
}



void vtkGenericEdgeTable::LoadFactor()
{
  vtk::ConvertManagedToNative<::vtkGenericEdgeTable>(m_instance)->LoadFactor();
}



  vtkGenericEdgeTable::vtkGenericEdgeTable(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkGenericEdgeTable::vtkGenericEdgeTable(bool donothing) : vtkObject(donothing) {}



  vtkGenericEdgeTable::vtkGenericEdgeTable() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkGenericEdgeTable::New()));
}



  vtkGenericEdgeTable::~vtkGenericEdgeTable() { }





} // end namespace vtkFiltering
