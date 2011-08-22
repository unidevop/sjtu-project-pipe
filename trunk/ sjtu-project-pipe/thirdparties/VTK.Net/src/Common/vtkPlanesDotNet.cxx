

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPlanesDotNet.h"
#include "vtkDataArrayDotNet.h"
#include "vtkObjectDotNet.h"
#include "vtkPlaneDotNet.h"
#include "vtkPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkPlanes.h"
#include "vtkDataArray.h"
#include "vtkObject.h"
#include "vtkPlane.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkPlanes::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPlanes::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPlanes^ vtkPlanes::NewInstance()
{
  ::vtkPlanes* retVal = static_cast<::vtkPlanes*>(vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->NewInstance());
  return gcnew vtkPlanes(IntPtr(retVal), false);
}



vtkPlanes^ vtkPlanes::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPlanes* retVal = static_cast<::vtkPlanes*>(::vtkPlanes::SafeDownCast(oWrap));
  return gcnew vtkPlanes(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPlanes::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPlanes::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkPlanes::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkPlanes::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkPlanes::EvaluateGradient(array<double>^ x, array<double>^ n)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->EvaluateGradient(nativexPin, nativenPin);
}



void vtkPlanes::SetPoints(vtkPoints^ arg0)
{
  ::vtkPoints* arg0Wrap = vtk::ConvertManagedToNative<::vtkPoints>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->SetPoints(arg0Wrap);
}



vtkPoints^ vtkPlanes::GetPoints()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->GetPoints());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



void vtkPlanes::SetNormals(vtkDataArray^ normals)
{
  ::vtkDataArray* normalsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(normals->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->SetNormals(normalsWrap);
}



vtkDataArray^ vtkPlanes::GetNormals()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->GetNormals());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



void vtkPlanes::SetFrustumPlanes(array<double>^ planes)
{
  pin_ptr<double> planesPin = &planes[0];
  double* nativeplanesPin = planesPin;
  vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->SetFrustumPlanes(nativeplanesPin);
}



void vtkPlanes::SetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->SetBounds(nativeboundsPin);
}



void vtkPlanes::SetBounds(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->SetBounds(xmin, xmax, ymin, ymax, zmin, zmax);
}



int vtkPlanes::GetNumberOfPlanes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->GetNumberOfPlanes();
  return retVal;
}



vtkPlane^ vtkPlanes::GetPlane(int i)
{
  ::vtkPlane* retVal = static_cast<::vtkPlane*>(vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->GetPlane(i));
  return gcnew vtkPlane(IntPtr(retVal), false);
}



void vtkPlanes::GetPlane(int i, vtkPlane^ plane)
{
  ::vtkPlane* planeWrap = vtk::ConvertManagedToNative<::vtkPlane>(plane->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPlanes>(m_instance)->GetPlane(i, planeWrap);
}



  vtkPlanes::vtkPlanes(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkPlanes::vtkPlanes(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkPlanes::vtkPlanes() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkPlanes::New()));
}



  vtkPlanes::~vtkPlanes() { }





} // end namespace vtkCommon
