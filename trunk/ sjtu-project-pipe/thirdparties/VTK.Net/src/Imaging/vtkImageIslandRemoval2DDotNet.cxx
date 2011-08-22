

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageIslandRemoval2DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageIslandRemoval2D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageIslandRemoval2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageIslandRemoval2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageIslandRemoval2D^ vtkImageIslandRemoval2D::NewInstance()
{
  ::vtkImageIslandRemoval2D* retVal = static_cast<::vtkImageIslandRemoval2D*>(vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->NewInstance());
  return gcnew vtkImageIslandRemoval2D(IntPtr(retVal), false);
}



vtkImageIslandRemoval2D^ vtkImageIslandRemoval2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageIslandRemoval2D* retVal = static_cast<::vtkImageIslandRemoval2D*>(::vtkImageIslandRemoval2D::SafeDownCast(oWrap));
  return gcnew vtkImageIslandRemoval2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageIslandRemoval2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageIslandRemoval2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageIslandRemoval2D::SetAreaThreshold(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->SetAreaThreshold(arg0);
}



int vtkImageIslandRemoval2D::GetAreaThreshold()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->GetAreaThreshold();
  return retVal;
}



void vtkImageIslandRemoval2D::SetSquareNeighborhood(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->SetSquareNeighborhood(arg0);
}



int vtkImageIslandRemoval2D::GetSquareNeighborhood()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->GetSquareNeighborhood();
  return retVal;
}



void vtkImageIslandRemoval2D::SquareNeighborhoodOn()
{
  vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->SquareNeighborhoodOn();
}



void vtkImageIslandRemoval2D::SquareNeighborhoodOff()
{
  vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->SquareNeighborhoodOff();
}



void vtkImageIslandRemoval2D::SetIslandValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->SetIslandValue(arg0);
}



double vtkImageIslandRemoval2D::GetIslandValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->GetIslandValue();
  return retVal;
}



void vtkImageIslandRemoval2D::SetReplaceValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->SetReplaceValue(arg0);
}



double vtkImageIslandRemoval2D::GetReplaceValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageIslandRemoval2D>(m_instance)->GetReplaceValue();
  return retVal;
}



  vtkImageIslandRemoval2D::vtkImageIslandRemoval2D(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageIslandRemoval2D::vtkImageIslandRemoval2D(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageIslandRemoval2D::vtkImageIslandRemoval2D() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageIslandRemoval2D::New()));
}



  vtkImageIslandRemoval2D::~vtkImageIslandRemoval2D() { }





} // end namespace vtkImaging
