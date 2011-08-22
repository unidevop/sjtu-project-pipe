

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageEuclideanToPolarDotNet.h"

// native includes
#include "strstream"
#include "vtkImageEuclideanToPolar.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageEuclideanToPolar::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageEuclideanToPolar>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageEuclideanToPolar::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageEuclideanToPolar>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageEuclideanToPolar^ vtkImageEuclideanToPolar::NewInstance()
{
  ::vtkImageEuclideanToPolar* retVal = static_cast<::vtkImageEuclideanToPolar*>(vtk::ConvertManagedToNative<::vtkImageEuclideanToPolar>(m_instance)->NewInstance());
  return gcnew vtkImageEuclideanToPolar(IntPtr(retVal), false);
}



vtkImageEuclideanToPolar^ vtkImageEuclideanToPolar::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageEuclideanToPolar* retVal = static_cast<::vtkImageEuclideanToPolar*>(::vtkImageEuclideanToPolar::SafeDownCast(oWrap));
  return gcnew vtkImageEuclideanToPolar(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageEuclideanToPolar::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageEuclideanToPolar>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageEuclideanToPolar::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageEuclideanToPolar>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageEuclideanToPolar::SetThetaMaximum(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageEuclideanToPolar>(m_instance)->SetThetaMaximum(arg0);
}



double vtkImageEuclideanToPolar::GetThetaMaximum()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageEuclideanToPolar>(m_instance)->GetThetaMaximum();
  return retVal;
}



  vtkImageEuclideanToPolar::vtkImageEuclideanToPolar(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageEuclideanToPolar::vtkImageEuclideanToPolar(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageEuclideanToPolar::vtkImageEuclideanToPolar() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageEuclideanToPolar::New()));
}



  vtkImageEuclideanToPolar::~vtkImageEuclideanToPolar() { }





} // end namespace vtkImaging
