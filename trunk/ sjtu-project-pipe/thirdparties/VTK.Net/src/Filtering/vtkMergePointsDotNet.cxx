

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMergePointsDotNet.h"

// native includes
#include "strstream"
#include "vtkMergePoints.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMergePoints::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMergePoints>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMergePoints::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMergePoints>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMergePoints^ vtkMergePoints::NewInstance()
{
  ::vtkMergePoints* retVal = static_cast<::vtkMergePoints*>(vtk::ConvertManagedToNative<::vtkMergePoints>(m_instance)->NewInstance());
  return gcnew vtkMergePoints(IntPtr(retVal), false);
}



vtkMergePoints^ vtkMergePoints::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMergePoints* retVal = static_cast<::vtkMergePoints*>(::vtkMergePoints::SafeDownCast(oWrap));
  return gcnew vtkMergePoints(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMergePoints::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMergePoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMergePoints::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMergePoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkMergePoints::IsInsertedPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkMergePoints>(m_instance)->IsInsertedPoint(nativexPin);
  return retVal;
}



int vtkMergePoints::IsInsertedPoint(double x, double y, double z)
{
  int retVal = vtk::ConvertManagedToNative<::vtkMergePoints>(m_instance)->IsInsertedPoint(x, y, z);
  return retVal;
}



int vtkMergePoints::InsertUniquePoint(array<double>^ x, int% ptId)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<int> ptIdPin = &ptId;
  int retVal = vtk::ConvertManagedToNative<::vtkMergePoints>(m_instance)->InsertUniquePoint(nativexPin, *ptIdPin);
  return retVal;
}



  vtkMergePoints::vtkMergePoints(System::IntPtr native, bool bConst) : vtkPointLocator(native, bConst) {}



  vtkMergePoints::vtkMergePoints(bool donothing) : vtkPointLocator(donothing) {}



  vtkMergePoints::vtkMergePoints() : vtkPointLocator(false) {
  this->SetNativePointer(IntPtr(::vtkMergePoints::New()));
}



  vtkMergePoints::~vtkMergePoints() { }





} // end namespace vtkFiltering
