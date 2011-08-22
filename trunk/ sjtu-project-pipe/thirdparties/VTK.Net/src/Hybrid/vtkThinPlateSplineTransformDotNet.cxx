

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkThinPlateSplineTransformDotNet.h"

// native includes
#include "strstream"
#include "vtkThinPlateSplineTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkObject.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkThinPlateSplineTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkThinPlateSplineTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkThinPlateSplineTransform^ vtkThinPlateSplineTransform::NewInstance()
{
  ::vtkThinPlateSplineTransform* retVal = static_cast<::vtkThinPlateSplineTransform*>(vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->NewInstance());
  return gcnew vtkThinPlateSplineTransform(IntPtr(retVal), false);
}



vtkThinPlateSplineTransform^ vtkThinPlateSplineTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkThinPlateSplineTransform* retVal = static_cast<::vtkThinPlateSplineTransform*>(::vtkThinPlateSplineTransform::SafeDownCast(oWrap));
  return gcnew vtkThinPlateSplineTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkThinPlateSplineTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkThinPlateSplineTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkThinPlateSplineTransform::GetSigma()
{
  double retVal = vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->GetSigma();
  return retVal;
}



void vtkThinPlateSplineTransform::SetSigma(double arg0)
{
  vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->SetSigma(arg0);
}



void vtkThinPlateSplineTransform::SetBasis(int basis)
{
  vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->SetBasis(basis);
}



int vtkThinPlateSplineTransform::GetBasis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->GetBasis();
  return retVal;
}



void vtkThinPlateSplineTransform::SetBasisToR()
{
  vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->SetBasisToR();
}



void vtkThinPlateSplineTransform::SetBasisToR2LogR()
{
  vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->SetBasisToR2LogR();
}



System::String^ vtkThinPlateSplineTransform::GetBasisAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->GetBasisAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkThinPlateSplineTransform::SetSourceLandmarks(vtkPoints^ source)
{
  ::vtkPoints* sourceWrap = vtk::ConvertManagedToNative<::vtkPoints>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->SetSourceLandmarks(sourceWrap);
}



vtkPoints^ vtkThinPlateSplineTransform::GetSourceLandmarks()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->GetSourceLandmarks());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



void vtkThinPlateSplineTransform::SetTargetLandmarks(vtkPoints^ target)
{
  ::vtkPoints* targetWrap = vtk::ConvertManagedToNative<::vtkPoints>(target->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->SetTargetLandmarks(targetWrap);
}



vtkPoints^ vtkThinPlateSplineTransform::GetTargetLandmarks()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->GetTargetLandmarks());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



unsigned long vtkThinPlateSplineTransform::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->GetMTime();
  return retVal;
}



vtkAbstractTransform^ vtkThinPlateSplineTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkThinPlateSplineTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



  vtkThinPlateSplineTransform::vtkThinPlateSplineTransform(System::IntPtr native, bool bConst) : vtkWarpTransform(native, bConst) {}



  vtkThinPlateSplineTransform::vtkThinPlateSplineTransform(bool donothing) : vtkWarpTransform(donothing) {}



  vtkThinPlateSplineTransform::vtkThinPlateSplineTransform() : vtkWarpTransform(false) {
  this->SetNativePointer(IntPtr(::vtkThinPlateSplineTransform::New()));
}



  vtkThinPlateSplineTransform::~vtkThinPlateSplineTransform() { }





} // end namespace vtkHybrid
