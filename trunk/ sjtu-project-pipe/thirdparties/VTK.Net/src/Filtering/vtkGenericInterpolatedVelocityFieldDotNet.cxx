

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericInterpolatedVelocityFieldDotNet.h"
#include "vtkGenericAdaptorCellDotNet.h"
#include "vtkGenericDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericInterpolatedVelocityField.h"
#include "vtkGenericAdaptorCell.h"
#include "vtkGenericDataSet.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericInterpolatedVelocityField::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericInterpolatedVelocityField::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericInterpolatedVelocityField^ vtkGenericInterpolatedVelocityField::NewInstance()
{
  ::vtkGenericInterpolatedVelocityField* retVal = static_cast<::vtkGenericInterpolatedVelocityField*>(vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->NewInstance());
  return gcnew vtkGenericInterpolatedVelocityField(IntPtr(retVal), false);
}



vtkGenericInterpolatedVelocityField^ vtkGenericInterpolatedVelocityField::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericInterpolatedVelocityField* retVal = static_cast<::vtkGenericInterpolatedVelocityField*>(::vtkGenericInterpolatedVelocityField::SafeDownCast(oWrap));
  return gcnew vtkGenericInterpolatedVelocityField(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericInterpolatedVelocityField::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericInterpolatedVelocityField::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkGenericInterpolatedVelocityField::FunctionValues(array<double>^ x, array<double>^ f)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> fPin = &f[0];
  double* nativefPin = fPin;
  int retVal = vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->FunctionValues(nativexPin, nativefPin);
  return retVal;
}



void vtkGenericInterpolatedVelocityField::AddDataSet(vtkGenericDataSet^ dataset)
{
  ::vtkGenericDataSet* datasetWrap = vtk::ConvertManagedToNative<::vtkGenericDataSet>(dataset->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->AddDataSet(datasetWrap);
}



void vtkGenericInterpolatedVelocityField::ClearLastCell()
{
  vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->ClearLastCell();
}



vtkGenericAdaptorCell^ vtkGenericInterpolatedVelocityField::GetLastCell()
{
  ::vtkGenericAdaptorCell* retVal = static_cast<::vtkGenericAdaptorCell*>(vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->GetLastCell());
  return gcnew vtkGenericAdaptorCell(IntPtr(retVal), false);
}



int vtkGenericInterpolatedVelocityField::GetLastLocalCoordinates(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->GetLastLocalCoordinates(nativepcoordsPin);
  return retVal;
}



int vtkGenericInterpolatedVelocityField::GetCaching()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->GetCaching();
  return retVal;
}



void vtkGenericInterpolatedVelocityField::SetCaching(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->SetCaching(arg0);
}



void vtkGenericInterpolatedVelocityField::CachingOn()
{
  vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->CachingOn();
}



void vtkGenericInterpolatedVelocityField::CachingOff()
{
  vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->CachingOff();
}



int vtkGenericInterpolatedVelocityField::GetCacheHit()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->GetCacheHit();
  return retVal;
}



int vtkGenericInterpolatedVelocityField::GetCacheMiss()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->GetCacheMiss();
  return retVal;
}



System::String^ vtkGenericInterpolatedVelocityField::GetVectorsSelection()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->GetVectorsSelection();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericInterpolatedVelocityField::SelectVectors(System::String^ fieldName)
{
  char* fieldNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldName).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->SelectVectors(fieldNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldNameWrap));
}



vtkGenericDataSet^ vtkGenericInterpolatedVelocityField::GetLastDataSet()
{
  ::vtkGenericDataSet* retVal = static_cast<::vtkGenericDataSet*>(vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->GetLastDataSet());
  return gcnew vtkGenericDataSet(IntPtr(retVal), false);
}



void vtkGenericInterpolatedVelocityField::CopyParameters(vtkGenericInterpolatedVelocityField^ from)
{
  ::vtkGenericInterpolatedVelocityField* fromWrap = vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(from->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(m_instance)->CopyParameters(fromWrap);
}



  vtkGenericInterpolatedVelocityField::vtkGenericInterpolatedVelocityField(System::IntPtr native, bool bConst) : vtkFunctionSet(native, bConst) {}



  vtkGenericInterpolatedVelocityField::vtkGenericInterpolatedVelocityField(bool donothing) : vtkFunctionSet(donothing) {}



  vtkGenericInterpolatedVelocityField::vtkGenericInterpolatedVelocityField() : vtkFunctionSet(false) {
  this->SetNativePointer(IntPtr(::vtkGenericInterpolatedVelocityField::New()));
}



  vtkGenericInterpolatedVelocityField::~vtkGenericInterpolatedVelocityField() { }





} // end namespace vtkFiltering
