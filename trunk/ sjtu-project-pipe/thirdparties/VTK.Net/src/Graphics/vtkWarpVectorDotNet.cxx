

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWarpVectorDotNet.h"

// native includes
#include "strstream"
#include "vtkWarpVector.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWarpVector::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWarpVector>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWarpVector::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWarpVector>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWarpVector^ vtkWarpVector::NewInstance()
{
  ::vtkWarpVector* retVal = static_cast<::vtkWarpVector*>(vtk::ConvertManagedToNative<::vtkWarpVector>(m_instance)->NewInstance());
  return gcnew vtkWarpVector(IntPtr(retVal), false);
}



vtkWarpVector^ vtkWarpVector::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWarpVector* retVal = static_cast<::vtkWarpVector*>(::vtkWarpVector::SafeDownCast(oWrap));
  return gcnew vtkWarpVector(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWarpVector::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWarpVector>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWarpVector::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWarpVector>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWarpVector::SetScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpVector>(m_instance)->SetScaleFactor(arg0);
}



double vtkWarpVector::GetScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWarpVector>(m_instance)->GetScaleFactor();
  return retVal;
}



  vtkWarpVector::vtkWarpVector(System::IntPtr native, bool bConst) : vtkPointSetAlgorithm(native, bConst) {}



  vtkWarpVector::vtkWarpVector(bool donothing) : vtkPointSetAlgorithm(donothing) {}



  vtkWarpVector::vtkWarpVector() : vtkPointSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkWarpVector::New()));
}



  vtkWarpVector::~vtkWarpVector() { }





} // end namespace vtkGraphics
