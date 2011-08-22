

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageImportDotNet.h"

// native includes
#include "strstream"
#include "vtkImageImport.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageImport::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageImport::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageImport^ vtkImageImport::NewInstance()
{
  ::vtkImageImport* retVal = static_cast<::vtkImageImport*>(vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->NewInstance());
  return gcnew vtkImageImport(IntPtr(retVal), false);
}



vtkImageImport^ vtkImageImport::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageImport* retVal = static_cast<::vtkImageImport*>(::vtkImageImport::SafeDownCast(oWrap));
  return gcnew vtkImageImport(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageImport::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageImport::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageImport::CopyImportVoidPointer(System::IntPtr ptr, int size)
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->CopyImportVoidPointer(ptr.ToPointer(), size);
}



void vtkImageImport::SetImportVoidPointer(System::IntPtr ptr)
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetImportVoidPointer(ptr.ToPointer());
}



System::IntPtr vtkImageImport::GetImportVoidPointer()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->GetImportVoidPointer();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



void vtkImageImport::SetImportVoidPointer(System::IntPtr ptr, int save)
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetImportVoidPointer(ptr.ToPointer(), save);
}



void vtkImageImport::SetDataScalarType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataScalarType(arg0);
}



void vtkImageImport::SetDataScalarTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataScalarTypeToDouble();
}



void vtkImageImport::SetDataScalarTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataScalarTypeToFloat();
}



void vtkImageImport::SetDataScalarTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataScalarTypeToInt();
}



void vtkImageImport::SetDataScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataScalarTypeToShort();
}



void vtkImageImport::SetDataScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataScalarTypeToUnsignedShort();
}



void vtkImageImport::SetDataScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataScalarTypeToUnsignedChar();
}



int vtkImageImport::GetDataScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->GetDataScalarType();
  return retVal;
}



System::String^ vtkImageImport::GetDataScalarTypeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->GetDataScalarTypeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageImport::SetNumberOfScalarComponents(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetNumberOfScalarComponents(arg0);
}



int vtkImageImport::GetNumberOfScalarComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->GetNumberOfScalarComponents();
  return retVal;
}



void vtkImageImport::SetDataExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataExtent(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkImageImport::SetDataExtent(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataExtent(nativeaPin);
}



array<int>^ vtkImageImport::GetDataExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->GetDataExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageImport::SetDataExtentToWholeExtent()
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataExtentToWholeExtent();
}



void vtkImageImport::SetDataSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataSpacing(arg0, arg1, arg2);
}



void vtkImageImport::SetDataSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataSpacing(nativeaPin);
}



array<double>^ vtkImageImport::GetDataSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->GetDataSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageImport::SetDataOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataOrigin(arg0, arg1, arg2);
}



void vtkImageImport::SetDataOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetDataOrigin(nativeaPin);
}



array<double>^ vtkImageImport::GetDataOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->GetDataOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageImport::SetWholeExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetWholeExtent(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkImageImport::SetWholeExtent(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->SetWholeExtent(nativeaPin);
}



array<int>^ vtkImageImport::GetWholeExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->GetWholeExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkImageImport::InvokePipelineModifiedCallbacks()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->InvokePipelineModifiedCallbacks();
  return retVal;
}



void vtkImageImport::InvokeUpdateInformationCallbacks()
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->InvokeUpdateInformationCallbacks();
}



void vtkImageImport::InvokeExecuteInformationCallbacks()
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->InvokeExecuteInformationCallbacks();
}



void vtkImageImport::InvokeExecuteDataCallbacks()
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->InvokeExecuteDataCallbacks();
}



void vtkImageImport::LegacyCheckWholeExtent()
{
  vtk::ConvertManagedToNative<::vtkImageImport>(m_instance)->LegacyCheckWholeExtent();
}



  vtkImageImport::vtkImageImport(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageImport::vtkImageImport(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageImport::vtkImageImport() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageImport::New()));
}



  vtkImageImport::~vtkImageImport() { }





} // end namespace vtkImaging
