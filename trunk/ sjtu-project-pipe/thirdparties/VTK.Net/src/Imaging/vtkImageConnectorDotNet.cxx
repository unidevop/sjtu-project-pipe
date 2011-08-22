

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageConnectorDotNet.h"

// native includes
#include "strstream"
#include "vtkImageConnector.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkImageConnector::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageConnector>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageConnector::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageConnector>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageConnector^ vtkImageConnector::NewInstance()
{
  ::vtkImageConnector* retVal = static_cast<::vtkImageConnector*>(vtk::ConvertManagedToNative<::vtkImageConnector>(m_instance)->NewInstance());
  return gcnew vtkImageConnector(IntPtr(retVal), false);
}



vtkImageConnector^ vtkImageConnector::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageConnector* retVal = static_cast<::vtkImageConnector*>(::vtkImageConnector::SafeDownCast(oWrap));
  return gcnew vtkImageConnector(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageConnector::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageConnector>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageConnector::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageConnector>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageConnector::RemoveAllSeeds()
{
  vtk::ConvertManagedToNative<::vtkImageConnector>(m_instance)->RemoveAllSeeds();
}



void vtkImageConnector::SetConnectedValue(unsigned char arg0)
{
  vtk::ConvertManagedToNative<::vtkImageConnector>(m_instance)->SetConnectedValue(arg0);
}



unsigned char vtkImageConnector::GetConnectedValue()
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkImageConnector>(m_instance)->GetConnectedValue();
  return retVal;
}



void vtkImageConnector::SetUnconnectedValue(unsigned char arg0)
{
  vtk::ConvertManagedToNative<::vtkImageConnector>(m_instance)->SetUnconnectedValue(arg0);
}



unsigned char vtkImageConnector::GetUnconnectedValue()
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkImageConnector>(m_instance)->GetUnconnectedValue();
  return retVal;
}



void vtkImageConnector::MarkData(vtkImageData^ data, int dimensionality, array<int>^ ext)
{
  ::vtkImageData* dataWrap = vtk::ConvertManagedToNative<::vtkImageData>(data->GetNativePointer());
  pin_ptr<int> extPin = &ext[0];
  int* nativeextPin = extPin;
  vtk::ConvertManagedToNative<::vtkImageConnector>(m_instance)->MarkData(dataWrap, dimensionality, nativeextPin);
}



  vtkImageConnector::vtkImageConnector(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkImageConnector::vtkImageConnector(bool donothing) : vtkObject(donothing) {}



  vtkImageConnector::vtkImageConnector() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkImageConnector::New()));
}



  vtkImageConnector::~vtkImageConnector() { }





} // end namespace vtkImaging
