

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPLYWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkPLYWriter.h"
#include "vtkObject.h"
#include "vtkScalarsToColors.h"

using namespace System;

namespace vtk {

System::String^ vtkPLYWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPLYWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPLYWriter^ vtkPLYWriter::NewInstance()
{
  ::vtkPLYWriter* retVal = static_cast<::vtkPLYWriter*>(vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->NewInstance());
  return gcnew vtkPLYWriter(IntPtr(retVal), false);
}



vtkPLYWriter^ vtkPLYWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPLYWriter* retVal = static_cast<::vtkPLYWriter*>(::vtkPLYWriter::SafeDownCast(oWrap));
  return gcnew vtkPLYWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPLYWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPLYWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPLYWriter::SetDataByteOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetDataByteOrder(arg0);
}



int vtkPLYWriter::GetDataByteOrderMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->GetDataByteOrderMinValue();
  return retVal;
}



int vtkPLYWriter::GetDataByteOrderMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->GetDataByteOrderMaxValue();
  return retVal;
}



int vtkPLYWriter::GetDataByteOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->GetDataByteOrder();
  return retVal;
}



void vtkPLYWriter::SetDataByteOrderToBigEndian()
{
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetDataByteOrderToBigEndian();
}



void vtkPLYWriter::SetDataByteOrderToLittleEndian()
{
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetDataByteOrderToLittleEndian();
}



void vtkPLYWriter::SetColorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetColorMode(arg0);
}



int vtkPLYWriter::GetColorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->GetColorMode();
  return retVal;
}



void vtkPLYWriter::SetColorModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetColorModeToDefault();
}



void vtkPLYWriter::SetColorModeToUniformCellColor()
{
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetColorModeToUniformCellColor();
}



void vtkPLYWriter::SetColorModeToUniformPointColor()
{
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetColorModeToUniformPointColor();
}



void vtkPLYWriter::SetColorModeToUniformColor()
{
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetColorModeToUniformColor();
}



void vtkPLYWriter::SetColorModeToOff()
{
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetColorModeToOff();
}



void vtkPLYWriter::SetArrayName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetArrayName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkPLYWriter::GetArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->GetArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkPLYWriter::SetComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetComponent(arg0);
}



int vtkPLYWriter::GetComponentMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->GetComponentMinValue();
  return retVal;
}



int vtkPLYWriter::GetComponentMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->GetComponentMaxValue();
  return retVal;
}



int vtkPLYWriter::GetComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->GetComponent();
  return retVal;
}



void vtkPLYWriter::SetLookupTable(vtkScalarsToColors^ arg0)
{
  ::vtkScalarsToColors* arg0Wrap = vtk::ConvertManagedToNative<::vtkScalarsToColors>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetLookupTable(arg0Wrap);
}



vtkScalarsToColors^ vtkPLYWriter::GetLookupTable()
{
  ::vtkScalarsToColors* retVal = static_cast<::vtkScalarsToColors*>(vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->GetLookupTable());
  return gcnew vtkScalarsToColors(IntPtr(retVal), false);
}



void vtkPLYWriter::SetColor(unsigned char arg0, unsigned char arg1, unsigned char arg2)
{
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetColor(arg0, arg1, arg2);
}



void vtkPLYWriter::SetColor(array<unsigned char>^ a)
{
  pin_ptr<unsigned char> aPin = &a[0];
  unsigned char* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->SetColor(nativeaPin);
}



array<unsigned char>^ vtkPLYWriter::GetColor()
{
  const unsigned char* retVal = vtk::ConvertManagedToNative<::vtkPLYWriter>(m_instance)->GetColor();
  array<unsigned char>^ mRetVal = gcnew array<unsigned char>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkPLYWriter::vtkPLYWriter(System::IntPtr native, bool bConst) : vtkPolyDataWriter(native, bConst) {}



  vtkPLYWriter::vtkPLYWriter(bool donothing) : vtkPolyDataWriter(donothing) {}



  vtkPLYWriter::vtkPLYWriter() : vtkPolyDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkPLYWriter::New()));
}



  vtkPLYWriter::~vtkPLYWriter() { }





} // end namespace vtkIO
