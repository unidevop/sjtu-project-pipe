

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOBBTreeDotNet.h"

// native includes
#include "strstream"
#include "vtkOBBTree.h"
#include "vtkDataSet.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkObject.h"
#include "vtkPoints.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkOBBTree::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOBBTree::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOBBTree^ vtkOBBTree::NewInstance()
{
  ::vtkOBBTree* retVal = static_cast<::vtkOBBTree*>(vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->NewInstance());
  return gcnew vtkOBBTree(IntPtr(retVal), false);
}



vtkOBBTree^ vtkOBBTree::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOBBTree* retVal = static_cast<::vtkOBBTree*>(::vtkOBBTree::SafeDownCast(oWrap));
  return gcnew vtkOBBTree(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOBBTree::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOBBTree::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOBBTree::ComputeOBB(vtkPoints^ pts, array<double>^ corner, array<double>^ max, array<double>^ mid, array<double>^ min, array<double>^ size)
{
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  pin_ptr<double> cornerPin = &corner[0];
  double* nativecornerPin = cornerPin;
  pin_ptr<double> maxPin = &max[0];
  double* nativemaxPin = maxPin;
  pin_ptr<double> midPin = &mid[0];
  double* nativemidPin = midPin;
  pin_ptr<double> minPin = &min[0];
  double* nativeminPin = minPin;
  pin_ptr<double> sizePin = &size[0];
  double* nativesizePin = sizePin;
  vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->ComputeOBB(ptsWrap, nativecornerPin, nativemaxPin, nativemidPin, nativeminPin, nativesizePin);
}



void vtkOBBTree::ComputeOBB(vtkDataSet^ input, array<double>^ corner, array<double>^ max, array<double>^ mid, array<double>^ min, array<double>^ size)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  pin_ptr<double> cornerPin = &corner[0];
  double* nativecornerPin = cornerPin;
  pin_ptr<double> maxPin = &max[0];
  double* nativemaxPin = maxPin;
  pin_ptr<double> midPin = &mid[0];
  double* nativemidPin = midPin;
  pin_ptr<double> minPin = &min[0];
  double* nativeminPin = minPin;
  pin_ptr<double> sizePin = &size[0];
  double* nativesizePin = sizePin;
  vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->ComputeOBB(inputWrap, nativecornerPin, nativemaxPin, nativemidPin, nativeminPin, nativesizePin);
}



int vtkOBBTree::InsideOrOutside(array<double>^ point)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  int retVal = vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->InsideOrOutside(nativepointPin);
  return retVal;
}



int vtkOBBTree::IntersectWithLine(array<double>^ a0, array<double>^ a1, vtkPoints^ points, vtkIdList^ cellIds)
{
  pin_ptr<double> a0Pin = &a0[0];
  double* nativea0Pin = a0Pin;
  pin_ptr<double> a1Pin = &a1[0];
  double* nativea1Pin = a1Pin;
  ::vtkPoints* pointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(points->GetNativePointer());
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->IntersectWithLine(nativea0Pin, nativea1Pin, pointsWrap, cellIdsWrap);
  return retVal;
}



int vtkOBBTree::IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
{
  pin_ptr<double> a0Pin = &a0[0];
  double* nativea0Pin = a0Pin;
  pin_ptr<double> a1Pin = &a1[0];
  double* nativea1Pin = a1Pin;
  pin_ptr<double> tPin = &t;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<int> subIdPin = &subId;
  int retVal = vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->IntersectWithLine(nativea0Pin, nativea1Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



int vtkOBBTree::IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId, int% cellId)
{
  pin_ptr<double> a0Pin = &a0[0];
  double* nativea0Pin = a0Pin;
  pin_ptr<double> a1Pin = &a1[0];
  double* nativea1Pin = a1Pin;
  pin_ptr<double> tPin = &t;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<int> cellIdPin = &cellId;
  int retVal = vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->IntersectWithLine(nativea0Pin, nativea1Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin, *cellIdPin);
  return retVal;
}



int vtkOBBTree::IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId, int% cellId, vtkGenericCell^ cell)
{
  pin_ptr<double> a0Pin = &a0[0];
  double* nativea0Pin = a0Pin;
  pin_ptr<double> a1Pin = &a1[0];
  double* nativea1Pin = a1Pin;
  pin_ptr<double> tPin = &t;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<int> cellIdPin = &cellId;
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->IntersectWithLine(nativea0Pin, nativea1Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin, *cellIdPin, cellWrap);
  return retVal;
}



void vtkOBBTree::FreeSearchStructure()
{
  vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->FreeSearchStructure();
}



void vtkOBBTree::BuildLocator()
{
  vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->BuildLocator();
}



void vtkOBBTree::GenerateRepresentation(int level, vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOBBTree>(m_instance)->GenerateRepresentation(level, pdWrap);
}



  vtkOBBTree::vtkOBBTree(System::IntPtr native, bool bConst) : vtkCellLocator(native, bConst) {}



  vtkOBBTree::vtkOBBTree(bool donothing) : vtkCellLocator(donothing) {}



  vtkOBBTree::vtkOBBTree() : vtkCellLocator(false) {
  this->SetNativePointer(IntPtr(::vtkOBBTree::New()));
}



  vtkOBBTree::~vtkOBBTree() { }





} // end namespace vtkGraphics
