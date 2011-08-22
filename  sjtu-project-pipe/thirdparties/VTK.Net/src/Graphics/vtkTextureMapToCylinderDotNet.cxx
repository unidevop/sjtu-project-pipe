

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTextureMapToCylinderDotNet.h"

// native includes
#include "strstream"
#include "vtkTextureMapToCylinder.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTextureMapToCylinder::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTextureMapToCylinder::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTextureMapToCylinder^ vtkTextureMapToCylinder::NewInstance()
{
  ::vtkTextureMapToCylinder* retVal = static_cast<::vtkTextureMapToCylinder*>(vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->NewInstance());
  return gcnew vtkTextureMapToCylinder(IntPtr(retVal), false);
}



vtkTextureMapToCylinder^ vtkTextureMapToCylinder::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTextureMapToCylinder* retVal = static_cast<::vtkTextureMapToCylinder*>(::vtkTextureMapToCylinder::SafeDownCast(oWrap));
  return gcnew vtkTextureMapToCylinder(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTextureMapToCylinder::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTextureMapToCylinder::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTextureMapToCylinder::SetPoint1(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->SetPoint1(arg0, arg1, arg2);
}



void vtkTextureMapToCylinder::SetPoint1(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->SetPoint1(nativeaPin);
}



array<double>^ vtkTextureMapToCylinder::GetPoint1()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->GetPoint1();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextureMapToCylinder::SetPoint2(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->SetPoint2(arg0, arg1, arg2);
}



void vtkTextureMapToCylinder::SetPoint2(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->SetPoint2(nativeaPin);
}



array<double>^ vtkTextureMapToCylinder::GetPoint2()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->GetPoint2();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextureMapToCylinder::SetAutomaticCylinderGeneration(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->SetAutomaticCylinderGeneration(arg0);
}



int vtkTextureMapToCylinder::GetAutomaticCylinderGeneration()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->GetAutomaticCylinderGeneration();
  return retVal;
}



void vtkTextureMapToCylinder::AutomaticCylinderGenerationOn()
{
  vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->AutomaticCylinderGenerationOn();
}



void vtkTextureMapToCylinder::AutomaticCylinderGenerationOff()
{
  vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->AutomaticCylinderGenerationOff();
}



void vtkTextureMapToCylinder::SetPreventSeam(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->SetPreventSeam(arg0);
}



int vtkTextureMapToCylinder::GetPreventSeam()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->GetPreventSeam();
  return retVal;
}



void vtkTextureMapToCylinder::PreventSeamOn()
{
  vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->PreventSeamOn();
}



void vtkTextureMapToCylinder::PreventSeamOff()
{
  vtk::ConvertManagedToNative<::vtkTextureMapToCylinder>(m_instance)->PreventSeamOff();
}



  vtkTextureMapToCylinder::vtkTextureMapToCylinder(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkTextureMapToCylinder::vtkTextureMapToCylinder(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkTextureMapToCylinder::vtkTextureMapToCylinder() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTextureMapToCylinder::New()));
}



  vtkTextureMapToCylinder::~vtkTextureMapToCylinder() { }





} // end namespace vtkGraphics
