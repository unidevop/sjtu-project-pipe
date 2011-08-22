

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDEMReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkDEMReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDEMReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDEMReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDEMReader^ vtkDEMReader::NewInstance()
{
  ::vtkDEMReader* retVal = static_cast<::vtkDEMReader*>(vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->NewInstance());
  return gcnew vtkDEMReader(IntPtr(retVal), false);
}



vtkDEMReader^ vtkDEMReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDEMReader* retVal = static_cast<::vtkDEMReader*>(::vtkDEMReader::SafeDownCast(oWrap));
  return gcnew vtkDEMReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDEMReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDEMReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDEMReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDEMReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDEMReader::SetElevationReference(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->SetElevationReference(arg0);
}



int vtkDEMReader::GetElevationReferenceMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetElevationReferenceMinValue();
  return retVal;
}



int vtkDEMReader::GetElevationReferenceMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetElevationReferenceMaxValue();
  return retVal;
}



int vtkDEMReader::GetElevationReference()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetElevationReference();
  return retVal;
}



void vtkDEMReader::SetElevationReferenceToSeaLevel()
{
  vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->SetElevationReferenceToSeaLevel();
}



void vtkDEMReader::SetElevationReferenceToElevationBounds()
{
  vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->SetElevationReferenceToElevationBounds();
}



System::String^ vtkDEMReader::GetElevationReferenceAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetElevationReferenceAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDEMReader::GetMapLabel()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetMapLabel();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDEMReader::GetDEMLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetDEMLevel();
  return retVal;
}



int vtkDEMReader::GetElevationPattern()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetElevationPattern();
  return retVal;
}



int vtkDEMReader::GetGroundSystem()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetGroundSystem();
  return retVal;
}



int vtkDEMReader::GetGroundZone()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetGroundZone();
  return retVal;
}



array<float>^ vtkDEMReader::GetProjectionParameters()
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetProjectionParameters();
  array<float>^ mRetVal = gcnew array<float>(15);
  for (size_t cprIdx=0; cprIdx<15; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkDEMReader::GetPlaneUnitOfMeasure()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetPlaneUnitOfMeasure();
  return retVal;
}



int vtkDEMReader::GetElevationUnitOfMeasure()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetElevationUnitOfMeasure();
  return retVal;
}



int vtkDEMReader::GetPolygonSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetPolygonSize();
  return retVal;
}



array<float>^ vtkDEMReader::GetElevationBounds()
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetElevationBounds();
  array<float>^ mRetVal = gcnew array<float>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



float vtkDEMReader::GetLocalRotation()
{
  float retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetLocalRotation();
  return retVal;
}



int vtkDEMReader::GetAccuracyCode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetAccuracyCode();
  return retVal;
}



array<float>^ vtkDEMReader::GetSpatialResolution()
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetSpatialResolution();
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<int>^ vtkDEMReader::GetProfileDimension()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkDEMReader>(m_instance)->GetProfileDimension();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkDEMReader::vtkDEMReader(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkDEMReader::vtkDEMReader(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkDEMReader::vtkDEMReader() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDEMReader::New()));
}



  vtkDEMReader::~vtkDEMReader() { }





} // end namespace vtkIO
