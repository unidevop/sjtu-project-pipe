

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEdgeTableDotNet.h"
#include "vtkPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkEdgeTable.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkEdgeTable::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEdgeTable::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEdgeTable^ vtkEdgeTable::NewInstance()
{
  ::vtkEdgeTable* retVal = static_cast<::vtkEdgeTable*>(vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->NewInstance());
  return gcnew vtkEdgeTable(IntPtr(retVal), false);
}



vtkEdgeTable^ vtkEdgeTable::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkEdgeTable* retVal = static_cast<::vtkEdgeTable*>(::vtkEdgeTable::SafeDownCast(oWrap));
  return gcnew vtkEdgeTable(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEdgeTable::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEdgeTable::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkEdgeTable::Initialize()
{
  vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->Initialize();
}



int vtkEdgeTable::InitEdgeInsertion(int numPoints, int storeAttributes)
{
  int retVal = vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->InitEdgeInsertion(numPoints, storeAttributes);
  return retVal;
}



int vtkEdgeTable::InsertEdge(int p1, int p2)
{
  int retVal = vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->InsertEdge(p1, p2);
  return retVal;
}



void vtkEdgeTable::InsertEdge(int p1, int p2, int attributeId)
{
  vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->InsertEdge(p1, p2, attributeId);
}



void vtkEdgeTable::InsertEdge(int p1, int p2, System::IntPtr ptr)
{
  vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->InsertEdge(p1, p2, ptr.ToPointer());
}



int vtkEdgeTable::IsEdge(int p1, int p2)
{
  int retVal = vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->IsEdge(p1, p2);
  return retVal;
}



int vtkEdgeTable::InitPointInsertion(vtkPoints^ newPts, int estSize)
{
  ::vtkPoints* newPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(newPts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->InitPointInsertion(newPtsWrap, estSize);
  return retVal;
}



int vtkEdgeTable::InsertUniquePoint(int p1, int p2, array<double>^ x, int% ptId)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<int> ptIdPin = &ptId;
  int retVal = vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->InsertUniquePoint(p1, p2, nativexPin, *ptIdPin);
  return retVal;
}



int vtkEdgeTable::GetNumberOfEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->GetNumberOfEdges();
  return retVal;
}



void vtkEdgeTable::InitTraversal()
{
  vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->InitTraversal();
}



int vtkEdgeTable::GetNextEdge(int% p1, int% p2)
{
  pin_ptr<int> p1Pin = &p1;
  pin_ptr<int> p2Pin = &p2;
  int retVal = vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->GetNextEdge(*p1Pin, *p2Pin);
  return retVal;
}



void vtkEdgeTable::Reset()
{
  vtk::ConvertManagedToNative<::vtkEdgeTable>(m_instance)->Reset();
}



  vtkEdgeTable::vtkEdgeTable(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkEdgeTable::vtkEdgeTable(bool donothing) : vtkObject(donothing) {}



  vtkEdgeTable::vtkEdgeTable() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkEdgeTable::New()));
}



  vtkEdgeTable::~vtkEdgeTable() { }





} // end namespace vtkCommon
