

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInterpolateDataSetAttributesDotNet.h"

// native includes
#include "strstream"
#include "vtkInterpolateDataSetAttributes.h"
#include "vtkDataSetCollection.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInterpolateDataSetAttributes::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInterpolateDataSetAttributes>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInterpolateDataSetAttributes::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInterpolateDataSetAttributes>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInterpolateDataSetAttributes^ vtkInterpolateDataSetAttributes::NewInstance()
{
  ::vtkInterpolateDataSetAttributes* retVal = static_cast<::vtkInterpolateDataSetAttributes*>(vtk::ConvertManagedToNative<::vtkInterpolateDataSetAttributes>(m_instance)->NewInstance());
  return gcnew vtkInterpolateDataSetAttributes(IntPtr(retVal), false);
}



vtkInterpolateDataSetAttributes^ vtkInterpolateDataSetAttributes::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInterpolateDataSetAttributes* retVal = static_cast<::vtkInterpolateDataSetAttributes*>(::vtkInterpolateDataSetAttributes::SafeDownCast(oWrap));
  return gcnew vtkInterpolateDataSetAttributes(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInterpolateDataSetAttributes::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInterpolateDataSetAttributes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInterpolateDataSetAttributes::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInterpolateDataSetAttributes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkDataSetCollection^ vtkInterpolateDataSetAttributes::GetInputList()
{
  ::vtkDataSetCollection* retVal = static_cast<::vtkDataSetCollection*>(vtk::ConvertManagedToNative<::vtkInterpolateDataSetAttributes>(m_instance)->GetInputList());
  return gcnew vtkDataSetCollection(IntPtr(retVal), false);
}



void vtkInterpolateDataSetAttributes::SetT(double arg0)
{
  vtk::ConvertManagedToNative<::vtkInterpolateDataSetAttributes>(m_instance)->SetT(arg0);
}



double vtkInterpolateDataSetAttributes::GetTMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkInterpolateDataSetAttributes>(m_instance)->GetTMinValue();
  return retVal;
}



double vtkInterpolateDataSetAttributes::GetTMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkInterpolateDataSetAttributes>(m_instance)->GetTMaxValue();
  return retVal;
}



double vtkInterpolateDataSetAttributes::GetT()
{
  double retVal = vtk::ConvertManagedToNative<::vtkInterpolateDataSetAttributes>(m_instance)->GetT();
  return retVal;
}



  vtkInterpolateDataSetAttributes::vtkInterpolateDataSetAttributes(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkInterpolateDataSetAttributes::vtkInterpolateDataSetAttributes(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkInterpolateDataSetAttributes::vtkInterpolateDataSetAttributes() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkInterpolateDataSetAttributes::New()));
}



  vtkInterpolateDataSetAttributes::~vtkInterpolateDataSetAttributes() { }





} // end namespace vtkGraphics
