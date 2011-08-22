

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEdgePointsDotNet.h"

// native includes
#include "strstream"
#include "vtkEdgePoints.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkEdgePoints::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEdgePoints>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEdgePoints::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEdgePoints>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEdgePoints^ vtkEdgePoints::NewInstance()
{
  ::vtkEdgePoints* retVal = static_cast<::vtkEdgePoints*>(vtk::ConvertManagedToNative<::vtkEdgePoints>(m_instance)->NewInstance());
  return gcnew vtkEdgePoints(IntPtr(retVal), false);
}



vtkEdgePoints^ vtkEdgePoints::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkEdgePoints* retVal = static_cast<::vtkEdgePoints*>(::vtkEdgePoints::SafeDownCast(oWrap));
  return gcnew vtkEdgePoints(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEdgePoints::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEdgePoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEdgePoints::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEdgePoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkEdgePoints::SetValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkEdgePoints>(m_instance)->SetValue(arg0);
}



double vtkEdgePoints::GetValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEdgePoints>(m_instance)->GetValue();
  return retVal;
}



  vtkEdgePoints::vtkEdgePoints(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkEdgePoints::vtkEdgePoints(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkEdgePoints::vtkEdgePoints() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkEdgePoints::New()));
}



  vtkEdgePoints::~vtkEdgePoints() { }





} // end namespace vtkGraphics
