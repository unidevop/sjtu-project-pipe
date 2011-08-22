

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPCAAnalysisFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkPCAAnalysisFilter.h"
#include "vtkFloatArray.h"
#include "vtkObject.h"
#include "vtkPointSet.h"

using namespace System;

namespace vtk {

System::String^ vtkPCAAnalysisFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPCAAnalysisFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPCAAnalysisFilter^ vtkPCAAnalysisFilter::NewInstance()
{
  ::vtkPCAAnalysisFilter* retVal = static_cast<::vtkPCAAnalysisFilter*>(vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->NewInstance());
  return gcnew vtkPCAAnalysisFilter(IntPtr(retVal), false);
}



vtkPCAAnalysisFilter^ vtkPCAAnalysisFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPCAAnalysisFilter* retVal = static_cast<::vtkPCAAnalysisFilter*>(::vtkPCAAnalysisFilter::SafeDownCast(oWrap));
  return gcnew vtkPCAAnalysisFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPCAAnalysisFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPCAAnalysisFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkFloatArray^ vtkPCAAnalysisFilter::GetEvals()
{
  ::vtkFloatArray* retVal = static_cast<::vtkFloatArray*>(vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->GetEvals());
  return gcnew vtkFloatArray(IntPtr(retVal), false);
}



void vtkPCAAnalysisFilter::SetNumberOfInputs(int n)
{
  vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->SetNumberOfInputs(n);
}



void vtkPCAAnalysisFilter::SetInput(int idx, vtkPointSet^ p)
{
  ::vtkPointSet* pWrap = vtk::ConvertManagedToNative<::vtkPointSet>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->SetInput(idx, pWrap);
}



vtkPointSet^ vtkPCAAnalysisFilter::GetInput(int idx)
{
  ::vtkPointSet* retVal = static_cast<::vtkPointSet*>(vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->GetInput(idx));
  return gcnew vtkPointSet(IntPtr(retVal), false);
}



void vtkPCAAnalysisFilter::GetParameterisedShape(vtkFloatArray^ b, vtkPointSet^ shape)
{
  ::vtkFloatArray* bWrap = vtk::ConvertManagedToNative<::vtkFloatArray>(b->GetNativePointer());
  ::vtkPointSet* shapeWrap = vtk::ConvertManagedToNative<::vtkPointSet>(shape->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->GetParameterisedShape(bWrap, shapeWrap);
}



void vtkPCAAnalysisFilter::GetShapeParameters(vtkPointSet^ shape, vtkFloatArray^ b, int bsize)
{
  ::vtkPointSet* shapeWrap = vtk::ConvertManagedToNative<::vtkPointSet>(shape->GetNativePointer());
  ::vtkFloatArray* bWrap = vtk::ConvertManagedToNative<::vtkFloatArray>(b->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->GetShapeParameters(shapeWrap, bWrap, bsize);
}



int vtkPCAAnalysisFilter::GetModesRequiredFor(double proportion)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPCAAnalysisFilter>(m_instance)->GetModesRequiredFor(proportion);
  return retVal;
}



  vtkPCAAnalysisFilter::vtkPCAAnalysisFilter(System::IntPtr native, bool bConst) : vtkPointSetAlgorithm(native, bConst) {}



  vtkPCAAnalysisFilter::vtkPCAAnalysisFilter(bool donothing) : vtkPointSetAlgorithm(donothing) {}



  vtkPCAAnalysisFilter::vtkPCAAnalysisFilter() : vtkPointSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPCAAnalysisFilter::New()));
}



  vtkPCAAnalysisFilter::~vtkPCAAnalysisFilter() { }





} // end namespace vtkHybrid
