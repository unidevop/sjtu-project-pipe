

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProcrustesAlignmentFilterDotNet.h"
#include "vtkLandmarkTransformDotNet.h"

// native includes
#include "strstream"
#include "vtkProcrustesAlignmentFilter.h"
#include "vtkLandmarkTransform.h"
#include "vtkObject.h"
#include "vtkPointSet.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkProcrustesAlignmentFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProcrustesAlignmentFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProcrustesAlignmentFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProcrustesAlignmentFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProcrustesAlignmentFilter^ vtkProcrustesAlignmentFilter::NewInstance()
{
  ::vtkProcrustesAlignmentFilter* retVal = static_cast<::vtkProcrustesAlignmentFilter*>(vtk::ConvertManagedToNative<::vtkProcrustesAlignmentFilter>(m_instance)->NewInstance());
  return gcnew vtkProcrustesAlignmentFilter(IntPtr(retVal), false);
}



vtkProcrustesAlignmentFilter^ vtkProcrustesAlignmentFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProcrustesAlignmentFilter* retVal = static_cast<::vtkProcrustesAlignmentFilter*>(::vtkProcrustesAlignmentFilter::SafeDownCast(oWrap));
  return gcnew vtkProcrustesAlignmentFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProcrustesAlignmentFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProcrustesAlignmentFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProcrustesAlignmentFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProcrustesAlignmentFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkLandmarkTransform^ vtkProcrustesAlignmentFilter::GetLandmarkTransform()
{
  ::vtkLandmarkTransform* retVal = static_cast<::vtkLandmarkTransform*>(vtk::ConvertManagedToNative<::vtkProcrustesAlignmentFilter>(m_instance)->GetLandmarkTransform());
  return gcnew vtkLandmarkTransform(IntPtr(retVal), false);
}



vtkPoints^ vtkProcrustesAlignmentFilter::GetMeanPoints()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkProcrustesAlignmentFilter>(m_instance)->GetMeanPoints());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



void vtkProcrustesAlignmentFilter::SetNumberOfInputs(int n)
{
  vtk::ConvertManagedToNative<::vtkProcrustesAlignmentFilter>(m_instance)->SetNumberOfInputs(n);
}



void vtkProcrustesAlignmentFilter::SetInput(int idx, vtkPointSet^ p)
{
  ::vtkPointSet* pWrap = vtk::ConvertManagedToNative<::vtkPointSet>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProcrustesAlignmentFilter>(m_instance)->SetInput(idx, pWrap);
}



vtkPointSet^ vtkProcrustesAlignmentFilter::GetInput(int idx)
{
  ::vtkPointSet* retVal = static_cast<::vtkPointSet*>(vtk::ConvertManagedToNative<::vtkProcrustesAlignmentFilter>(m_instance)->GetInput(idx));
  return gcnew vtkPointSet(IntPtr(retVal), false);
}



  vtkProcrustesAlignmentFilter::vtkProcrustesAlignmentFilter(System::IntPtr native, bool bConst) : vtkPointSetAlgorithm(native, bConst) {}



  vtkProcrustesAlignmentFilter::vtkProcrustesAlignmentFilter(bool donothing) : vtkPointSetAlgorithm(donothing) {}



  vtkProcrustesAlignmentFilter::vtkProcrustesAlignmentFilter() : vtkPointSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkProcrustesAlignmentFilter::New()));
}



  vtkProcrustesAlignmentFilter::~vtkProcrustesAlignmentFilter() { }





} // end namespace vtkHybrid
