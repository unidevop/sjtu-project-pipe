

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointsDotNet.h"
#include "vtkDataArrayDotNet.h"
#include "vtkIdListDotNet.h"

// native includes
#include "strstream"
#include "vtkPoints.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"

using namespace System;

namespace vtk {

System::String^ vtkPoints::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPoints::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPoints^ vtkPoints::NewInstance()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->NewInstance());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



vtkPoints^ vtkPoints::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(::vtkPoints::SafeDownCast(oWrap));
  return gcnew vtkPoints(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPoints::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPoints::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkPoints::Allocate(int sz, int ext)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->Allocate(sz, ext);
  return retVal;
}



void vtkPoints::Initialize()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->Initialize();
}



void vtkPoints::SetData(vtkDataArray^ arg0)
{
  ::vtkDataArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataArray>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetData(arg0Wrap);
}



vtkDataArray^ vtkPoints::GetData()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->GetData());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



int vtkPoints::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->GetDataType();
  return retVal;
}



void vtkPoints::SetDataType(int dataType)
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataType(dataType);
}



void vtkPoints::SetDataTypeToBit()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataTypeToBit();
}



void vtkPoints::SetDataTypeToChar()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataTypeToChar();
}



void vtkPoints::SetDataTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataTypeToUnsignedChar();
}



void vtkPoints::SetDataTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataTypeToShort();
}



void vtkPoints::SetDataTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataTypeToUnsignedShort();
}



void vtkPoints::SetDataTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataTypeToInt();
}



void vtkPoints::SetDataTypeToUnsignedInt()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataTypeToUnsignedInt();
}



void vtkPoints::SetDataTypeToLong()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataTypeToLong();
}



void vtkPoints::SetDataTypeToUnsignedLong()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataTypeToUnsignedLong();
}



void vtkPoints::SetDataTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataTypeToFloat();
}



void vtkPoints::SetDataTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetDataTypeToDouble();
}



System::IntPtr vtkPoints::GetVoidPointer(int id)
{
  void* retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->GetVoidPointer(id);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



void vtkPoints::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->Squeeze();
}



void vtkPoints::Reset()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->Reset();
}



void vtkPoints::DeepCopy(vtkPoints^ ad)
{
  ::vtkPoints* adWrap = vtk::ConvertManagedToNative<::vtkPoints>(ad->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->DeepCopy(adWrap);
}



void vtkPoints::ShallowCopy(vtkPoints^ ad)
{
  ::vtkPoints* adWrap = vtk::ConvertManagedToNative<::vtkPoints>(ad->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->ShallowCopy(adWrap);
}



unsigned long vtkPoints::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->GetActualMemorySize();
  return retVal;
}



int vtkPoints::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->GetNumberOfPoints();
  return retVal;
}



array<double>^ vtkPoints::GetPoint(int id)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->GetPoint(id);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPoints::GetPoint(int id, array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->GetPoint(id, nativexPin);
}



void vtkPoints::SetPoint(int id, array<float>^ x)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetPoint(id, nativexPin);
}



void vtkPoints::SetPoint(int id, array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetPoint(id, nativexPin);
}



void vtkPoints::SetPoint(int id, double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetPoint(id, x, y, z);
}



void vtkPoints::InsertPoint(int id, array<float>^ x)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->InsertPoint(id, nativexPin);
}



void vtkPoints::InsertPoint(int id, array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->InsertPoint(id, nativexPin);
}



void vtkPoints::InsertPoint(int id, double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->InsertPoint(id, x, y, z);
}



int vtkPoints::InsertNextPoint(array<float>^ x)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->InsertNextPoint(nativexPin);
  return retVal;
}



int vtkPoints::InsertNextPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->InsertNextPoint(nativexPin);
  return retVal;
}



int vtkPoints::InsertNextPoint(double x, double y, double z)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->InsertNextPoint(x, y, z);
  return retVal;
}



void vtkPoints::SetNumberOfPoints(int number)
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->SetNumberOfPoints(number);
}



void vtkPoints::GetPoints(vtkIdList^ ptId, vtkPoints^ fp)
{
  ::vtkIdList* ptIdWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptId->GetNativePointer());
  ::vtkPoints* fpWrap = vtk::ConvertManagedToNative<::vtkPoints>(fp->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->GetPoints(ptIdWrap, fpWrap);
}



void vtkPoints::ComputeBounds()
{
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->ComputeBounds();
}



array<double>^ vtkPoints::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPoints::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkPoints>(m_instance)->GetBounds(nativeboundsPin);
}



  vtkPoints::vtkPoints(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkPoints::vtkPoints(bool donothing) : vtkObject(donothing) {}



  vtkPoints::vtkPoints() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkPoints::New()));
}



  vtkPoints::~vtkPoints() { }





} // end namespace vtkCommon
