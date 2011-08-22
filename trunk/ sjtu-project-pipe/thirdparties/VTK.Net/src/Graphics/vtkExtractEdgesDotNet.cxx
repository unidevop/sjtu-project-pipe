

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtractEdgesDotNet.h"

// native includes
#include "strstream"
#include "vtkExtractEdges.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkExtractEdges::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtractEdges>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtractEdges::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtractEdges>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtractEdges^ vtkExtractEdges::NewInstance()
{
  ::vtkExtractEdges* retVal = static_cast<::vtkExtractEdges*>(vtk::ConvertManagedToNative<::vtkExtractEdges>(m_instance)->NewInstance());
  return gcnew vtkExtractEdges(IntPtr(retVal), false);
}



vtkExtractEdges^ vtkExtractEdges::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtractEdges* retVal = static_cast<::vtkExtractEdges*>(::vtkExtractEdges::SafeDownCast(oWrap));
  return gcnew vtkExtractEdges(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtractEdges::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtractEdges>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtractEdges::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtractEdges>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExtractEdges::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExtractEdges>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkExtractEdges::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkExtractEdges>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkExtractEdges::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkExtractEdges>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkExtractEdges::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkExtractEdges>(m_instance)->GetMTime();
  return retVal;
}



  vtkExtractEdges::vtkExtractEdges(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkExtractEdges::vtkExtractEdges(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkExtractEdges::vtkExtractEdges() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExtractEdges::New()));
}



  vtkExtractEdges::~vtkExtractEdges() { }





} // end namespace vtkGraphics
