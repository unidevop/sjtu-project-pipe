

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInterpolatedVelocityFieldDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkInterpolatedVelocityField.h"
#include "vtkDataSet.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInterpolatedVelocityField::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInterpolatedVelocityField::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInterpolatedVelocityField^ vtkInterpolatedVelocityField::NewInstance()
{
  ::vtkInterpolatedVelocityField* retVal = static_cast<::vtkInterpolatedVelocityField*>(vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->NewInstance());
  return gcnew vtkInterpolatedVelocityField(IntPtr(retVal), false);
}



vtkInterpolatedVelocityField^ vtkInterpolatedVelocityField::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInterpolatedVelocityField* retVal = static_cast<::vtkInterpolatedVelocityField*>(::vtkInterpolatedVelocityField::SafeDownCast(oWrap));
  return gcnew vtkInterpolatedVelocityField(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInterpolatedVelocityField::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInterpolatedVelocityField::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkInterpolatedVelocityField::FunctionValues(array<double>^ x, array<double>^ f)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> fPin = &f[0];
  double* nativefPin = fPin;
  int retVal = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->FunctionValues(nativexPin, nativefPin);
  return retVal;
}



void vtkInterpolatedVelocityField::AddDataSet(vtkDataSet^ dataset)
{
  ::vtkDataSet* datasetWrap = vtk::ConvertManagedToNative<::vtkDataSet>(dataset->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->AddDataSet(datasetWrap);
}



int vtkInterpolatedVelocityField::GetLastCellId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->GetLastCellId();
  return retVal;
}



void vtkInterpolatedVelocityField::SetLastCellId(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->SetLastCellId(arg0);
}



void vtkInterpolatedVelocityField::ClearLastCellId()
{
  vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->ClearLastCellId();
}



int vtkInterpolatedVelocityField::GetLastWeights(array<double>^ w)
{
  pin_ptr<double> wPin = &w[0];
  double* nativewPin = wPin;
  int retVal = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->GetLastWeights(nativewPin);
  return retVal;
}



int vtkInterpolatedVelocityField::GetLastLocalCoordinates(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->GetLastLocalCoordinates(nativepcoordsPin);
  return retVal;
}



int vtkInterpolatedVelocityField::GetCaching()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->GetCaching();
  return retVal;
}



void vtkInterpolatedVelocityField::SetCaching(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->SetCaching(arg0);
}



void vtkInterpolatedVelocityField::CachingOn()
{
  vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->CachingOn();
}



void vtkInterpolatedVelocityField::CachingOff()
{
  vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->CachingOff();
}



int vtkInterpolatedVelocityField::GetCacheHit()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->GetCacheHit();
  return retVal;
}



int vtkInterpolatedVelocityField::GetCacheMiss()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->GetCacheMiss();
  return retVal;
}



System::String^ vtkInterpolatedVelocityField::GetVectorsSelection()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->GetVectorsSelection();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkInterpolatedVelocityField::SelectVectors(System::String^ fieldName)
{
  char* fieldNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldName).ToPointer());
  vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->SelectVectors(fieldNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldNameWrap));
}



vtkDataSet^ vtkInterpolatedVelocityField::GetLastDataSet()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->GetLastDataSet());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkInterpolatedVelocityField::CopyParameters(vtkInterpolatedVelocityField^ from)
{
  ::vtkInterpolatedVelocityField* fromWrap = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(from->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(m_instance)->CopyParameters(fromWrap);
}



  vtkInterpolatedVelocityField::vtkInterpolatedVelocityField(System::IntPtr native, bool bConst) : vtkFunctionSet(native, bConst) {}



  vtkInterpolatedVelocityField::vtkInterpolatedVelocityField(bool donothing) : vtkFunctionSet(donothing) {}



  vtkInterpolatedVelocityField::vtkInterpolatedVelocityField() : vtkFunctionSet(false) {
  this->SetNativePointer(IntPtr(::vtkInterpolatedVelocityField::New()));
}



  vtkInterpolatedVelocityField::~vtkInterpolatedVelocityField() { }





} // end namespace vtkFiltering
