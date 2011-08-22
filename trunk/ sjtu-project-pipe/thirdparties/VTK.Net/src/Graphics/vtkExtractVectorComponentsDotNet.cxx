

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtractVectorComponentsDotNet.h"

// native includes
#include "strstream"
#include "vtkExtractVectorComponents.h"
#include "vtkDataSet.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkExtractVectorComponents::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtractVectorComponents::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtractVectorComponents^ vtkExtractVectorComponents::NewInstance()
{
  ::vtkExtractVectorComponents* retVal = static_cast<::vtkExtractVectorComponents*>(vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->NewInstance());
  return gcnew vtkExtractVectorComponents(IntPtr(retVal), false);
}



vtkExtractVectorComponents^ vtkExtractVectorComponents::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtractVectorComponents* retVal = static_cast<::vtkExtractVectorComponents*>(::vtkExtractVectorComponents::SafeDownCast(oWrap));
  return gcnew vtkExtractVectorComponents(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtractVectorComponents::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtractVectorComponents::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExtractVectorComponents::SetInput(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->SetInput(inputWrap);
}



vtkDataSet^ vtkExtractVectorComponents::GetVxComponent()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->GetVxComponent());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkExtractVectorComponents::GetVyComponent()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->GetVyComponent());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkExtractVectorComponents::GetVzComponent()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->GetVzComponent());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkExtractVectorComponents::SetExtractToFieldData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->SetExtractToFieldData(arg0);
}



int vtkExtractVectorComponents::GetExtractToFieldData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->GetExtractToFieldData();
  return retVal;
}



void vtkExtractVectorComponents::ExtractToFieldDataOn()
{
  vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->ExtractToFieldDataOn();
}



void vtkExtractVectorComponents::ExtractToFieldDataOff()
{
  vtk::ConvertManagedToNative<::vtkExtractVectorComponents>(m_instance)->ExtractToFieldDataOff();
}



  vtkExtractVectorComponents::vtkExtractVectorComponents(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkExtractVectorComponents::vtkExtractVectorComponents(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkExtractVectorComponents::vtkExtractVectorComponents() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExtractVectorComponents::New()));
}



  vtkExtractVectorComponents::~vtkExtractVectorComponents() { }





} // end namespace vtkGraphics
