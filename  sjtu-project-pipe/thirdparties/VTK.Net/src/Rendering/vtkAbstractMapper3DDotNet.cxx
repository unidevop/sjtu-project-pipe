

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAbstractMapper3DDotNet.h"

// native includes
#include "strstream"
#include "vtkAbstractMapper3D.h"

using namespace System;

namespace vtk {

System::String^ vtkAbstractMapper3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAbstractMapper3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAbstractMapper3D^ vtkAbstractMapper3D::NewInstance()
{
  ::vtkAbstractMapper3D* retVal = static_cast<::vtkAbstractMapper3D*>(vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->NewInstance());
  return gcnew vtkAbstractMapper3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAbstractMapper3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAbstractMapper3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




array<double>^ vtkAbstractMapper3D::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkAbstractMapper3D::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->GetBounds(nativeboundsPin);
}



array<double>^ vtkAbstractMapper3D::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkAbstractMapper3D::GetCenter(array<double>^ center)
{
  pin_ptr<double> centerPin = &center[0];
  double* nativecenterPin = centerPin;
  vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->GetCenter(nativecenterPin);
}



double vtkAbstractMapper3D::GetLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->GetLength();
  return retVal;
}



int vtkAbstractMapper3D::IsARayCastMapper()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->IsARayCastMapper();
  return retVal;
}



int vtkAbstractMapper3D::IsARenderIntoImageMapper()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractMapper3D>(m_instance)->IsARenderIntoImageMapper();
  return retVal;
}



  vtkAbstractMapper3D::vtkAbstractMapper3D(System::IntPtr native, bool bConst) : vtkAbstractMapper(native, bConst) {}



  vtkAbstractMapper3D::vtkAbstractMapper3D(bool donothing) : vtkAbstractMapper(donothing) {}



  vtkAbstractMapper3D::vtkAbstractMapper3D() : vtkAbstractMapper(false) {
  this->SetNativePointer(IntPtr(::vtkAbstractMapper3D::New()));
}



  vtkAbstractMapper3D::~vtkAbstractMapper3D() { }





} // end namespace vtkRendering
