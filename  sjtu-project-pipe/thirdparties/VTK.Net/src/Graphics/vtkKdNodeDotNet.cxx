

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkKdNodeDotNet.h"
#include "vtkPlanesIntersectionDotNet.h"

// native includes
#include "strstream"
#include "vtkKdNode.h"
#include "vtkCell.h"
#include "vtkPlanesIntersection.h"

using namespace System;

namespace vtk {

System::String^ vtkKdNode::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkKdNode::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkKdNode^ vtkKdNode::NewInstance()
{
  ::vtkKdNode* retVal = static_cast<::vtkKdNode*>(vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->NewInstance());
  return gcnew vtkKdNode(IntPtr(retVal), false);
}



vtkKdNode^ vtkKdNode::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkKdNode* retVal = static_cast<::vtkKdNode*>(::vtkKdNode::SafeDownCast(oWrap));
  return gcnew vtkKdNode(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkKdNode::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkKdNode::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkKdNode::SetDim(int arg0)
{
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetDim(arg0);
}



int vtkKdNode::GetDim()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetDim();
  return retVal;
}



void vtkKdNode::SetNumberOfPoints(int arg0)
{
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetNumberOfPoints(arg0);
}



int vtkKdNode::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetNumberOfPoints();
  return retVal;
}



void vtkKdNode::SetBounds(double x1, double x2, double y1, double y2, double z1, double z2)
{
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetBounds(x1, x2, y1, y2, z1, z2);
}



void vtkKdNode::GetBounds(array<double>^ b)
{
  pin_ptr<double> bPin = &b[0];
  double* nativebPin = bPin;
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetBounds(nativebPin);
}



void vtkKdNode::SetDataBounds(double x1, double x2, double y1, double y2, double z1, double z2)
{
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetDataBounds(x1, x2, y1, y2, z1, z2);
}



void vtkKdNode::GetDataBounds(array<double>^ b)
{
  pin_ptr<double> bPin = &b[0];
  double* nativebPin = bPin;
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetDataBounds(nativebPin);
}



void vtkKdNode::SetDataBounds(array<float>^ v)
{
  pin_ptr<float> vPin = &v[0];
  float* nativevPin = vPin;
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetDataBounds(nativevPin);
}



void vtkKdNode::SetMinBounds(array<double>^ mb)
{
  pin_ptr<double> mbPin = &mb[0];
  double* nativembPin = mbPin;
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetMinBounds(nativembPin);
}



void vtkKdNode::SetMaxBounds(array<double>^ mb)
{
  pin_ptr<double> mbPin = &mb[0];
  double* nativembPin = mbPin;
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetMaxBounds(nativembPin);
}



void vtkKdNode::SetMinDataBounds(array<double>^ mb)
{
  pin_ptr<double> mbPin = &mb[0];
  double* nativembPin = mbPin;
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetMinDataBounds(nativembPin);
}



void vtkKdNode::SetMaxDataBounds(array<double>^ mb)
{
  pin_ptr<double> mbPin = &mb[0];
  double* nativembPin = mbPin;
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetMaxDataBounds(nativembPin);
}



void vtkKdNode::SetID(int arg0)
{
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetID(arg0);
}



int vtkKdNode::GetID()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetID();
  return retVal;
}



int vtkKdNode::GetMinID()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetMinID();
  return retVal;
}



int vtkKdNode::GetMaxID()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetMaxID();
  return retVal;
}



void vtkKdNode::SetMinID(int arg0)
{
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetMinID(arg0);
}



void vtkKdNode::SetMaxID(int arg0)
{
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetMaxID(arg0);
}



void vtkKdNode::AddChildNodes(vtkKdNode^ left, vtkKdNode^ right)
{
  ::vtkKdNode* leftWrap = vtk::ConvertManagedToNative<::vtkKdNode>(left->GetNativePointer());
  ::vtkKdNode* rightWrap = vtk::ConvertManagedToNative<::vtkKdNode>(right->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->AddChildNodes(leftWrap, rightWrap);
}



void vtkKdNode::DeleteChildNodes()
{
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->DeleteChildNodes();
}



vtkKdNode^ vtkKdNode::GetLeft()
{
  ::vtkKdNode* retVal = static_cast<::vtkKdNode*>(vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetLeft());
  return gcnew vtkKdNode(IntPtr(retVal), false);
}



void vtkKdNode::SetLeft(vtkKdNode^ left)
{
  ::vtkKdNode* leftWrap = vtk::ConvertManagedToNative<::vtkKdNode>(left->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetLeft(leftWrap);
}



vtkKdNode^ vtkKdNode::GetRight()
{
  ::vtkKdNode* retVal = static_cast<::vtkKdNode*>(vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetRight());
  return gcnew vtkKdNode(IntPtr(retVal), false);
}



void vtkKdNode::SetRight(vtkKdNode^ right)
{
  ::vtkKdNode* rightWrap = vtk::ConvertManagedToNative<::vtkKdNode>(right->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetRight(rightWrap);
}



vtkKdNode^ vtkKdNode::GetUp()
{
  ::vtkKdNode* retVal = static_cast<::vtkKdNode*>(vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetUp());
  return gcnew vtkKdNode(IntPtr(retVal), false);
}



void vtkKdNode::SetUp(vtkKdNode^ up)
{
  ::vtkKdNode* upWrap = vtk::ConvertManagedToNative<::vtkKdNode>(up->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->SetUp(upWrap);
}



int vtkKdNode::IntersectsBox(double x1, double x2, double y1, double y2, double z1, double z2, int useDataBounds)
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->IntersectsBox(x1, x2, y1, y2, z1, z2, useDataBounds);
  return retVal;
}



int vtkKdNode::IntersectsSphere2(double x, double y, double z, double rSquared, int useDataBounds)
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->IntersectsSphere2(x, y, z, rSquared, useDataBounds);
  return retVal;
}



int vtkKdNode::IntersectsRegion(vtkPlanesIntersection^ pi, int useDataBounds)
{
  ::vtkPlanesIntersection* piWrap = vtk::ConvertManagedToNative<::vtkPlanesIntersection>(pi->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->IntersectsRegion(piWrap, useDataBounds);
  return retVal;
}



int vtkKdNode::IntersectsCell(vtkCell^ cell, int useDataBounds, int cellRegion, array<double>^ cellBoundsNULL)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  pin_ptr<double> cellBoundsNULLPin = &cellBoundsNULL[0];
  double* nativecellBoundsNULLPin = cellBoundsNULLPin;
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->IntersectsCell(cellWrap, useDataBounds, cellRegion, nativecellBoundsNULLPin);
  return retVal;
}



int vtkKdNode::ContainsBox(double x1, double x2, double y1, double y2, double z1, double z2, int useDataBounds)
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->ContainsBox(x1, x2, y1, y2, z1, z2, useDataBounds);
  return retVal;
}



int vtkKdNode::ContainsPoint(double x, double y, double z, int useDataBounds)
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->ContainsPoint(x, y, z, useDataBounds);
  return retVal;
}



double vtkKdNode::GetDistance2ToBoundary(double x, double y, double z, int useDataBounds)
{
  double retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetDistance2ToBoundary(x, y, z, useDataBounds);
  return retVal;
}



double vtkKdNode::GetDistance2ToBoundary(double x, double y, double z, array<double>^ boundaryPt, int useDataBounds)
{
  pin_ptr<double> boundaryPtPin = &boundaryPt[0];
  double* nativeboundaryPtPin = boundaryPtPin;
  double retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetDistance2ToBoundary(x, y, z, nativeboundaryPtPin, useDataBounds);
  return retVal;
}



double vtkKdNode::GetDistance2ToInnerBoundary(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->GetDistance2ToInnerBoundary(x, y, z);
  return retVal;
}



void vtkKdNode::PrintNode(int depth)
{
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->PrintNode(depth);
}



void vtkKdNode::PrintVerboseNode(int depth)
{
  vtk::ConvertManagedToNative<::vtkKdNode>(m_instance)->PrintVerboseNode(depth);
}



  vtkKdNode::vtkKdNode(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkKdNode::vtkKdNode(bool donothing) : vtkObject(donothing) {}



  vtkKdNode::vtkKdNode() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkKdNode::New()));
}



  vtkKdNode::~vtkKdNode() { }





} // end namespace vtkGraphics
