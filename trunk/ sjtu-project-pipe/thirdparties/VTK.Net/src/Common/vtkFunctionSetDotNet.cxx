

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFunctionSetDotNet.h"

// native includes
#include "strstream"
#include "vtkFunctionSet.h"

using namespace System;

namespace vtk {

System::String^ vtkFunctionSet::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFunctionSet>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFunctionSet::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFunctionSet>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFunctionSet^ vtkFunctionSet::NewInstance()
{
  ::vtkFunctionSet* retVal = static_cast<::vtkFunctionSet*>(vtk::ConvertManagedToNative<::vtkFunctionSet>(m_instance)->NewInstance());
  return gcnew vtkFunctionSet(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFunctionSet::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFunctionSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFunctionSet::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFunctionSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkFunctionSet::FunctionValues(array<double>^ x, array<double>^ f)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> fPin = &f[0];
  double* nativefPin = fPin;
  int retVal = vtk::ConvertManagedToNative<::vtkFunctionSet>(m_instance)->FunctionValues(nativexPin, nativefPin);
  return retVal;
}



int vtkFunctionSet::GetNumberOfFunctions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFunctionSet>(m_instance)->GetNumberOfFunctions();
  return retVal;
}



int vtkFunctionSet::GetNumberOfIndependentVariables()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFunctionSet>(m_instance)->GetNumberOfIndependentVariables();
  return retVal;
}



  vtkFunctionSet::vtkFunctionSet(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkFunctionSet::vtkFunctionSet(bool donothing) : vtkObject(donothing) {}



  vtkFunctionSet::vtkFunctionSet() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkFunctionSet::New()));
}



  vtkFunctionSet::~vtkFunctionSet() { }





} // end namespace vtkCommon
