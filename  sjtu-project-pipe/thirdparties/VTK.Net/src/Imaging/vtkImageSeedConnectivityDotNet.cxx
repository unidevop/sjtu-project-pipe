

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageSeedConnectivityDotNet.h"
#include "vtkImageConnectorDotNet.h"

// native includes
#include "strstream"
#include "vtkImageSeedConnectivity.h"
#include "vtkImageConnector.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageSeedConnectivity::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageSeedConnectivity::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageSeedConnectivity^ vtkImageSeedConnectivity::NewInstance()
{
  ::vtkImageSeedConnectivity* retVal = static_cast<::vtkImageSeedConnectivity*>(vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->NewInstance());
  return gcnew vtkImageSeedConnectivity(IntPtr(retVal), false);
}



vtkImageSeedConnectivity^ vtkImageSeedConnectivity::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageSeedConnectivity* retVal = static_cast<::vtkImageSeedConnectivity*>(::vtkImageSeedConnectivity::SafeDownCast(oWrap));
  return gcnew vtkImageSeedConnectivity(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageSeedConnectivity::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageSeedConnectivity::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageSeedConnectivity::RemoveAllSeeds()
{
  vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->RemoveAllSeeds();
}



void vtkImageSeedConnectivity::AddSeed(int num, array<int>^ index)
{
  pin_ptr<int> indexPin = &index[0];
  int* nativeindexPin = indexPin;
  vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->AddSeed(num, nativeindexPin);
}



void vtkImageSeedConnectivity::AddSeed(int i0, int i1, int i2)
{
  vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->AddSeed(i0, i1, i2);
}



void vtkImageSeedConnectivity::AddSeed(int i0, int i1)
{
  vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->AddSeed(i0, i1);
}



void vtkImageSeedConnectivity::SetInputConnectValue(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->SetInputConnectValue(arg0);
}



int vtkImageSeedConnectivity::GetInputConnectValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->GetInputConnectValue();
  return retVal;
}



void vtkImageSeedConnectivity::SetOutputConnectedValue(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->SetOutputConnectedValue(arg0);
}



int vtkImageSeedConnectivity::GetOutputConnectedValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->GetOutputConnectedValue();
  return retVal;
}



void vtkImageSeedConnectivity::SetOutputUnconnectedValue(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->SetOutputUnconnectedValue(arg0);
}



int vtkImageSeedConnectivity::GetOutputUnconnectedValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->GetOutputUnconnectedValue();
  return retVal;
}



vtkImageConnector^ vtkImageSeedConnectivity::GetConnector()
{
  ::vtkImageConnector* retVal = static_cast<::vtkImageConnector*>(vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->GetConnector());
  return gcnew vtkImageConnector(IntPtr(retVal), false);
}



void vtkImageSeedConnectivity::SetDimensionality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->SetDimensionality(arg0);
}



int vtkImageSeedConnectivity::GetDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageSeedConnectivity>(m_instance)->GetDimensionality();
  return retVal;
}



  vtkImageSeedConnectivity::vtkImageSeedConnectivity(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageSeedConnectivity::vtkImageSeedConnectivity(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageSeedConnectivity::vtkImageSeedConnectivity() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageSeedConnectivity::New()));
}



  vtkImageSeedConnectivity::~vtkImageSeedConnectivity() { }





} // end namespace vtkImaging
