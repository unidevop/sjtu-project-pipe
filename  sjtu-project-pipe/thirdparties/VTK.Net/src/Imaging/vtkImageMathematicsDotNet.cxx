

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMathematicsDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMathematics.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMathematics::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMathematics::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMathematics^ vtkImageMathematics::NewInstance()
{
  ::vtkImageMathematics* retVal = static_cast<::vtkImageMathematics*>(vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->NewInstance());
  return gcnew vtkImageMathematics(IntPtr(retVal), false);
}



vtkImageMathematics^ vtkImageMathematics::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMathematics* retVal = static_cast<::vtkImageMathematics*>(::vtkImageMathematics::SafeDownCast(oWrap));
  return gcnew vtkImageMathematics(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMathematics::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMathematics::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageMathematics::SetOperation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperation(arg0);
}



int vtkImageMathematics::GetOperation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->GetOperation();
  return retVal;
}



void vtkImageMathematics::SetOperationToAdd()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToAdd();
}



void vtkImageMathematics::SetOperationToSubtract()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToSubtract();
}



void vtkImageMathematics::SetOperationToMultiply()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToMultiply();
}



void vtkImageMathematics::SetOperationToDivide()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToDivide();
}



void vtkImageMathematics::SetOperationToConjugate()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToConjugate();
}



void vtkImageMathematics::SetOperationToComplexMultiply()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToComplexMultiply();
}



void vtkImageMathematics::SetOperationToInvert()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToInvert();
}



void vtkImageMathematics::SetOperationToSin()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToSin();
}



void vtkImageMathematics::SetOperationToCos()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToCos();
}



void vtkImageMathematics::SetOperationToExp()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToExp();
}



void vtkImageMathematics::SetOperationToLog()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToLog();
}



void vtkImageMathematics::SetOperationToAbsoluteValue()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToAbsoluteValue();
}



void vtkImageMathematics::SetOperationToSquare()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToSquare();
}



void vtkImageMathematics::SetOperationToSquareRoot()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToSquareRoot();
}



void vtkImageMathematics::SetOperationToMin()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToMin();
}



void vtkImageMathematics::SetOperationToMax()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToMax();
}



void vtkImageMathematics::SetOperationToATAN()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToATAN();
}



void vtkImageMathematics::SetOperationToATAN2()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToATAN2();
}



void vtkImageMathematics::SetOperationToMultiplyByK()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToMultiplyByK();
}



void vtkImageMathematics::SetOperationToAddConstant()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToAddConstant();
}



void vtkImageMathematics::SetOperationToReplaceCByK()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetOperationToReplaceCByK();
}



void vtkImageMathematics::SetConstantK(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetConstantK(arg0);
}



double vtkImageMathematics::GetConstantK()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->GetConstantK();
  return retVal;
}



void vtkImageMathematics::SetConstantC(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetConstantC(arg0);
}



double vtkImageMathematics::GetConstantC()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->GetConstantC();
  return retVal;
}



void vtkImageMathematics::SetDivideByZeroToC(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetDivideByZeroToC(arg0);
}



int vtkImageMathematics::GetDivideByZeroToC()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->GetDivideByZeroToC();
  return retVal;
}



void vtkImageMathematics::DivideByZeroToCOn()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->DivideByZeroToCOn();
}



void vtkImageMathematics::DivideByZeroToCOff()
{
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->DivideByZeroToCOff();
}



void vtkImageMathematics::SetInput1(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetInput1(inWrap);
}



void vtkImageMathematics::SetInput2(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMathematics>(m_instance)->SetInput2(inWrap);
}



  vtkImageMathematics::vtkImageMathematics(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageMathematics::vtkImageMathematics(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageMathematics::vtkImageMathematics() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageMathematics::New()));
}



  vtkImageMathematics::~vtkImageMathematics() { }





} // end namespace vtkImaging
