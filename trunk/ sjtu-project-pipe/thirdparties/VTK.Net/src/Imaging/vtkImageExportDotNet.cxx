

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageExportDotNet.h"

// native includes
#include "strstream"
#include "vtkImageExport.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageExport::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageExport::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageExport^ vtkImageExport::NewInstance()
{
  ::vtkImageExport* retVal = static_cast<::vtkImageExport*>(vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->NewInstance());
  return gcnew vtkImageExport(IntPtr(retVal), false);
}



vtkImageExport^ vtkImageExport::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageExport* retVal = static_cast<::vtkImageExport*>(::vtkImageExport::SafeDownCast(oWrap));
  return gcnew vtkImageExport(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageExport::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageExport::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkImageExport::GetDataMemorySize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataMemorySize();
  return retVal;
}



void vtkImageExport::GetDataDimensions(array<int>^ ptr)
{
  pin_ptr<int> ptrPin = &ptr[0];
  int* nativeptrPin = ptrPin;
  vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataDimensions(nativeptrPin);
}



array<int>^ vtkImageExport::GetDataDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkImageExport::GetDataNumberOfScalarComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataNumberOfScalarComponents();
  return retVal;
}



int vtkImageExport::GetDataScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataScalarType();
  return retVal;
}



System::String^ vtkImageExport::GetDataScalarTypeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataScalarTypeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



array<int>^ vtkImageExport::GetDataExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageExport::GetDataExtent(array<int>^ ptr)
{
  pin_ptr<int> ptrPin = &ptr[0];
  int* nativeptrPin = ptrPin;
  vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataExtent(nativeptrPin);
}



array<double>^ vtkImageExport::GetDataSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageExport::GetDataSpacing(array<double>^ ptr)
{
  pin_ptr<double> ptrPin = &ptr[0];
  double* nativeptrPin = ptrPin;
  vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataSpacing(nativeptrPin);
}



array<double>^ vtkImageExport::GetDataOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageExport::GetDataOrigin(array<double>^ ptr)
{
  pin_ptr<double> ptrPin = &ptr[0];
  double* nativeptrPin = ptrPin;
  vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetDataOrigin(nativeptrPin);
}



void vtkImageExport::ImageLowerLeftOn()
{
  vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->ImageLowerLeftOn();
}



void vtkImageExport::ImageLowerLeftOff()
{
  vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->ImageLowerLeftOff();
}



int vtkImageExport::GetImageLowerLeft()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetImageLowerLeft();
  return retVal;
}



void vtkImageExport::SetImageLowerLeft(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->SetImageLowerLeft(arg0);
}



void vtkImageExport::SetExportVoidPointer(System::IntPtr arg0)
{
  vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->SetExportVoidPointer(arg0.ToPointer());
}



System::IntPtr vtkImageExport::GetExportVoidPointer()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetExportVoidPointer();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



void vtkImageExport::Export()
{
  vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->Export();
}



void vtkImageExport::Export(System::IntPtr arg0)
{
  vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->Export(arg0.ToPointer());
}



System::IntPtr vtkImageExport::GetPointerToData()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetPointerToData();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkImageExport::GetCallbackUserData()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkImageExport>(m_instance)->GetCallbackUserData();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



  vtkImageExport::vtkImageExport(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageExport::vtkImageExport(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageExport::vtkImageExport() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageExport::New()));
}



  vtkImageExport::~vtkImageExport() { }





} // end namespace vtkImaging
