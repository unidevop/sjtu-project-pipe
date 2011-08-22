

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTensorDotNet.h"

// native includes
#include "strstream"
#include "vtkTensor.h"

using namespace System;

namespace vtk {

System::String^ vtkTensor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTensor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTensor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTensor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTensor^ vtkTensor::NewInstance()
{
  ::vtkTensor* retVal = static_cast<::vtkTensor*>(vtk::ConvertManagedToNative<::vtkTensor>(m_instance)->NewInstance());
  return gcnew vtkTensor(IntPtr(retVal), false);
}



vtkTensor^ vtkTensor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTensor* retVal = static_cast<::vtkTensor*>(::vtkTensor::SafeDownCast(oWrap));
  return gcnew vtkTensor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTensor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTensor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTensor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTensor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTensor::Initialize()
{
  vtk::ConvertManagedToNative<::vtkTensor>(m_instance)->Initialize();
}



double vtkTensor::GetComponent(int i, int j)
{
  double retVal = vtk::ConvertManagedToNative<::vtkTensor>(m_instance)->GetComponent(i, j);
  return retVal;
}



void vtkTensor::SetComponent(int i, int j, double v)
{
  vtk::ConvertManagedToNative<::vtkTensor>(m_instance)->SetComponent(i, j, v);
}



void vtkTensor::AddComponent(int i, int j, double v)
{
  vtk::ConvertManagedToNative<::vtkTensor>(m_instance)->AddComponent(i, j, v);
}



void vtkTensor::DeepCopy(vtkTensor^ t)
{
  ::vtkTensor* tWrap = vtk::ConvertManagedToNative<::vtkTensor>(t->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTensor>(m_instance)->DeepCopy(tWrap);
}



  vtkTensor::vtkTensor(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkTensor::vtkTensor(bool donothing) : vtkObject(donothing) {}



  vtkTensor::vtkTensor() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkTensor::New()));
}



  vtkTensor::~vtkTensor() { }





} // end namespace vtkCommon
