

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTextureMapToSphereDotNet.h"

// native includes
#include "strstream"
#include "vtkTextureMapToSphere.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTextureMapToSphere::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTextureMapToSphere::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTextureMapToSphere^ vtkTextureMapToSphere::NewInstance()
{
  ::vtkTextureMapToSphere* retVal = static_cast<::vtkTextureMapToSphere*>(vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->NewInstance());
  return gcnew vtkTextureMapToSphere(IntPtr(retVal), false);
}



vtkTextureMapToSphere^ vtkTextureMapToSphere::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTextureMapToSphere* retVal = static_cast<::vtkTextureMapToSphere*>(::vtkTextureMapToSphere::SafeDownCast(oWrap));
  return gcnew vtkTextureMapToSphere(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTextureMapToSphere::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTextureMapToSphere::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTextureMapToSphere::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkTextureMapToSphere::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkTextureMapToSphere::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextureMapToSphere::SetAutomaticSphereGeneration(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->SetAutomaticSphereGeneration(arg0);
}



int vtkTextureMapToSphere::GetAutomaticSphereGeneration()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->GetAutomaticSphereGeneration();
  return retVal;
}



void vtkTextureMapToSphere::AutomaticSphereGenerationOn()
{
  vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->AutomaticSphereGenerationOn();
}



void vtkTextureMapToSphere::AutomaticSphereGenerationOff()
{
  vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->AutomaticSphereGenerationOff();
}



void vtkTextureMapToSphere::SetPreventSeam(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->SetPreventSeam(arg0);
}



int vtkTextureMapToSphere::GetPreventSeam()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->GetPreventSeam();
  return retVal;
}



void vtkTextureMapToSphere::PreventSeamOn()
{
  vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->PreventSeamOn();
}



void vtkTextureMapToSphere::PreventSeamOff()
{
  vtk::ConvertManagedToNative<::vtkTextureMapToSphere>(m_instance)->PreventSeamOff();
}



  vtkTextureMapToSphere::vtkTextureMapToSphere(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkTextureMapToSphere::vtkTextureMapToSphere(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkTextureMapToSphere::vtkTextureMapToSphere() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTextureMapToSphere::New()));
}



  vtkTextureMapToSphere::~vtkTextureMapToSphere() { }





} // end namespace vtkGraphics
