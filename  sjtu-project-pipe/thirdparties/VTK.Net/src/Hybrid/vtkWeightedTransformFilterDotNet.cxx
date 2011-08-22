

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWeightedTransformFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkWeightedTransformFilter.h"
#include "vtkAbstractTransform.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWeightedTransformFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWeightedTransformFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWeightedTransformFilter^ vtkWeightedTransformFilter::NewInstance()
{
  ::vtkWeightedTransformFilter* retVal = static_cast<::vtkWeightedTransformFilter*>(vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->NewInstance());
  return gcnew vtkWeightedTransformFilter(IntPtr(retVal), false);
}



vtkWeightedTransformFilter^ vtkWeightedTransformFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWeightedTransformFilter* retVal = static_cast<::vtkWeightedTransformFilter*>(::vtkWeightedTransformFilter::SafeDownCast(oWrap));
  return gcnew vtkWeightedTransformFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWeightedTransformFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWeightedTransformFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkWeightedTransformFilter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->GetMTime();
  return retVal;
}



void vtkWeightedTransformFilter::SetWeightArray(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->SetWeightArray(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkWeightedTransformFilter::GetWeightArray()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->GetWeightArray();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkWeightedTransformFilter::SetTransformIndexArray(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->SetTransformIndexArray(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkWeightedTransformFilter::GetTransformIndexArray()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->GetTransformIndexArray();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkWeightedTransformFilter::SetCellDataWeightArray(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->SetCellDataWeightArray(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkWeightedTransformFilter::GetCellDataWeightArray()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->GetCellDataWeightArray();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkWeightedTransformFilter::SetCellDataTransformIndexArray(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->SetCellDataTransformIndexArray(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkWeightedTransformFilter::GetCellDataTransformIndexArray()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->GetCellDataTransformIndexArray();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkWeightedTransformFilter::SetTransform(vtkAbstractTransform^ transform, int num)
{
  ::vtkAbstractTransform* transformWrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(transform->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->SetTransform(transformWrap, num);
}



vtkAbstractTransform^ vtkWeightedTransformFilter::GetTransform(int num)
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->GetTransform(num));
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



void vtkWeightedTransformFilter::SetNumberOfTransforms(int num)
{
  vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->SetNumberOfTransforms(num);
}



int vtkWeightedTransformFilter::GetNumberOfTransforms()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->GetNumberOfTransforms();
  return retVal;
}



void vtkWeightedTransformFilter::AddInputValuesOn()
{
  vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->AddInputValuesOn();
}



void vtkWeightedTransformFilter::AddInputValuesOff()
{
  vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->AddInputValuesOff();
}



void vtkWeightedTransformFilter::SetAddInputValues(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->SetAddInputValues(arg0);
}



int vtkWeightedTransformFilter::GetAddInputValues()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWeightedTransformFilter>(m_instance)->GetAddInputValues();
  return retVal;
}



  vtkWeightedTransformFilter::vtkWeightedTransformFilter(System::IntPtr native, bool bConst) : vtkPointSetAlgorithm(native, bConst) {}



  vtkWeightedTransformFilter::vtkWeightedTransformFilter(bool donothing) : vtkPointSetAlgorithm(donothing) {}



  vtkWeightedTransformFilter::vtkWeightedTransformFilter() : vtkPointSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkWeightedTransformFilter::New()));
}



  vtkWeightedTransformFilter::~vtkWeightedTransformFilter() { }





} // end namespace vtkHybrid
