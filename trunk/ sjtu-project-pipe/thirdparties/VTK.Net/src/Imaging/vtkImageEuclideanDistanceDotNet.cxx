

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageEuclideanDistanceDotNet.h"

// native includes
#include "strstream"
#include "vtkImageEuclideanDistance.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageEuclideanDistance::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageEuclideanDistance::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageEuclideanDistance^ vtkImageEuclideanDistance::NewInstance()
{
  ::vtkImageEuclideanDistance* retVal = static_cast<::vtkImageEuclideanDistance*>(vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->NewInstance());
  return gcnew vtkImageEuclideanDistance(IntPtr(retVal), false);
}



vtkImageEuclideanDistance^ vtkImageEuclideanDistance::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageEuclideanDistance* retVal = static_cast<::vtkImageEuclideanDistance*>(::vtkImageEuclideanDistance::SafeDownCast(oWrap));
  return gcnew vtkImageEuclideanDistance(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageEuclideanDistance::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageEuclideanDistance::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkImageEuclideanDistance::SplitExtent(array<int>^ splitExt, array<int>^ startExt, int num, int total)
{
  pin_ptr<int> splitExtPin = &splitExt[0];
  int* nativesplitExtPin = splitExtPin;
  pin_ptr<int> startExtPin = &startExt[0];
  int* nativestartExtPin = startExtPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->SplitExtent(nativesplitExtPin, nativestartExtPin, num, total);
  return retVal;
}



void vtkImageEuclideanDistance::SetInitialize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->SetInitialize(arg0);
}



int vtkImageEuclideanDistance::GetInitialize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->GetInitialize();
  return retVal;
}



void vtkImageEuclideanDistance::InitializeOn()
{
  vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->InitializeOn();
}



void vtkImageEuclideanDistance::InitializeOff()
{
  vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->InitializeOff();
}



void vtkImageEuclideanDistance::SetConsiderAnisotropy(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->SetConsiderAnisotropy(arg0);
}



int vtkImageEuclideanDistance::GetConsiderAnisotropy()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->GetConsiderAnisotropy();
  return retVal;
}



void vtkImageEuclideanDistance::ConsiderAnisotropyOn()
{
  vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->ConsiderAnisotropyOn();
}



void vtkImageEuclideanDistance::ConsiderAnisotropyOff()
{
  vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->ConsiderAnisotropyOff();
}



void vtkImageEuclideanDistance::SetMaximumDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->SetMaximumDistance(arg0);
}



double vtkImageEuclideanDistance::GetMaximumDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->GetMaximumDistance();
  return retVal;
}



void vtkImageEuclideanDistance::SetAlgorithm(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->SetAlgorithm(arg0);
}



int vtkImageEuclideanDistance::GetAlgorithm()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->GetAlgorithm();
  return retVal;
}



void vtkImageEuclideanDistance::SetAlgorithmToSaito()
{
  vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->SetAlgorithmToSaito();
}



void vtkImageEuclideanDistance::SetAlgorithmToSaitoCached()
{
  vtk::ConvertManagedToNative<::vtkImageEuclideanDistance>(m_instance)->SetAlgorithmToSaitoCached();
}



  vtkImageEuclideanDistance::vtkImageEuclideanDistance(System::IntPtr native, bool bConst) : vtkImageDecomposeFilter(native, bConst) {}



  vtkImageEuclideanDistance::vtkImageEuclideanDistance(bool donothing) : vtkImageDecomposeFilter(donothing) {}



  vtkImageEuclideanDistance::vtkImageEuclideanDistance() : vtkImageDecomposeFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageEuclideanDistance::New()));
}



  vtkImageEuclideanDistance::~vtkImageEuclideanDistance() { }





} // end namespace vtkImaging
