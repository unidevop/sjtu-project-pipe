

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageLogicDotNet.h"

// native includes
#include "strstream"
#include "vtkImageLogic.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageLogic::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageLogic::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageLogic^ vtkImageLogic::NewInstance()
{
  ::vtkImageLogic* retVal = static_cast<::vtkImageLogic*>(vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->NewInstance());
  return gcnew vtkImageLogic(IntPtr(retVal), false);
}



vtkImageLogic^ vtkImageLogic::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageLogic* retVal = static_cast<::vtkImageLogic*>(::vtkImageLogic::SafeDownCast(oWrap));
  return gcnew vtkImageLogic(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageLogic::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageLogic::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageLogic::SetOperation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->SetOperation(arg0);
}



int vtkImageLogic::GetOperation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->GetOperation();
  return retVal;
}



void vtkImageLogic::SetOperationToAnd()
{
  vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->SetOperationToAnd();
}



void vtkImageLogic::SetOperationToOr()
{
  vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->SetOperationToOr();
}



void vtkImageLogic::SetOperationToXor()
{
  vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->SetOperationToXor();
}



void vtkImageLogic::SetOperationToNand()
{
  vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->SetOperationToNand();
}



void vtkImageLogic::SetOperationToNor()
{
  vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->SetOperationToNor();
}



void vtkImageLogic::SetOperationToNot()
{
  vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->SetOperationToNot();
}



void vtkImageLogic::SetOutputTrueValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->SetOutputTrueValue(arg0);
}



double vtkImageLogic::GetOutputTrueValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->GetOutputTrueValue();
  return retVal;
}



void vtkImageLogic::SetInput1(vtkDataObject^ input)
{
  ::vtkDataObject* inputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->SetInput1(inputWrap);
}



void vtkImageLogic::SetInput2(vtkDataObject^ input)
{
  ::vtkDataObject* inputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageLogic>(m_instance)->SetInput2(inputWrap);
}



  vtkImageLogic::vtkImageLogic(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageLogic::vtkImageLogic(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageLogic::vtkImageLogic() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageLogic::New()));
}



  vtkImageLogic::~vtkImageLogic() { }





} // end namespace vtkImaging
