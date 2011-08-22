

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBSPCutsDotNet.h"
#include "vtkKdNodeDotNet.h"

// native includes
#include "strstream"
#include "vtkBSPCuts.h"
#include "vtkKdNode.h"

using namespace System;

namespace vtk {

System::String^ vtkBSPCuts::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBSPCuts::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBSPCuts^ vtkBSPCuts::NewInstance()
{
  ::vtkBSPCuts* retVal = static_cast<::vtkBSPCuts*>(vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->NewInstance());
  return gcnew vtkBSPCuts(IntPtr(retVal), false);
}



vtkBSPCuts^ vtkBSPCuts::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBSPCuts* retVal = static_cast<::vtkBSPCuts*>(::vtkBSPCuts::SafeDownCast(oWrap));
  return gcnew vtkBSPCuts(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBSPCuts::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBSPCuts::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBSPCuts::CreateCuts(array<double>^ bounds, int ncuts, array<int>^ dim, array<double>^ coord, array<int>^ lower, array<int>^ upper, array<double>^ lowerDataCoord, array<double>^ upperDataCoord, array<int>^ npoints)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  pin_ptr<double> coordPin = &coord[0];
  double* nativecoordPin = coordPin;
  pin_ptr<int> lowerPin = &lower[0];
  int* nativelowerPin = lowerPin;
  pin_ptr<int> upperPin = &upper[0];
  int* nativeupperPin = upperPin;
  pin_ptr<double> lowerDataCoordPin = &lowerDataCoord[0];
  double* nativelowerDataCoordPin = lowerDataCoordPin;
  pin_ptr<double> upperDataCoordPin = &upperDataCoord[0];
  double* nativeupperDataCoordPin = upperDataCoordPin;
  pin_ptr<int> npointsPin = &npoints[0];
  int* nativenpointsPin = npointsPin;
  vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->CreateCuts(nativeboundsPin, ncuts, nativedimPin, nativecoordPin, nativelowerPin, nativeupperPin, nativelowerDataCoordPin, nativeupperDataCoordPin, nativenpointsPin);
}



void vtkBSPCuts::CreateCuts(vtkKdNode^ kd)
{
  ::vtkKdNode* kdWrap = vtk::ConvertManagedToNative<::vtkKdNode>(kd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->CreateCuts(kdWrap);
}



vtkKdNode^ vtkBSPCuts::GetKdNodeTree()
{
  ::vtkKdNode* retVal = static_cast<::vtkKdNode*>(vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->GetKdNodeTree());
  return gcnew vtkKdNode(IntPtr(retVal), false);
}



int vtkBSPCuts::GetNumberOfCuts()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->GetNumberOfCuts();
  return retVal;
}



int vtkBSPCuts::GetArrays(int len, array<int>^ dim, array<double>^ coord, array<int>^ lower, array<int>^ upper, array<double>^ lowerDataCoord, array<double>^ upperDataCoord, array<int>^ npoints)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  pin_ptr<double> coordPin = &coord[0];
  double* nativecoordPin = coordPin;
  pin_ptr<int> lowerPin = &lower[0];
  int* nativelowerPin = lowerPin;
  pin_ptr<int> upperPin = &upper[0];
  int* nativeupperPin = upperPin;
  pin_ptr<double> lowerDataCoordPin = &lowerDataCoord[0];
  double* nativelowerDataCoordPin = lowerDataCoordPin;
  pin_ptr<double> upperDataCoordPin = &upperDataCoord[0];
  double* nativeupperDataCoordPin = upperDataCoordPin;
  pin_ptr<int> npointsPin = &npoints[0];
  int* nativenpointsPin = npointsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->GetArrays(len, nativedimPin, nativecoordPin, nativelowerPin, nativeupperPin, nativelowerDataCoordPin, nativeupperDataCoordPin, nativenpointsPin);
  return retVal;
}



void vtkBSPCuts::PrintTree()
{
  vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->PrintTree();
}



void vtkBSPCuts::PrintArrays()
{
  vtk::ConvertManagedToNative<::vtkBSPCuts>(m_instance)->PrintArrays();
}



  vtkBSPCuts::vtkBSPCuts(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkBSPCuts::vtkBSPCuts(bool donothing) : vtkObject(donothing) {}



  vtkBSPCuts::vtkBSPCuts() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkBSPCuts::New()));
}



  vtkBSPCuts::~vtkBSPCuts() { }





} // end namespace vtkGraphics
