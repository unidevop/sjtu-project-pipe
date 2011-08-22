

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDicerDotNet.h"

// native includes
#include "strstream"
#include "vtkDicer.h"

using namespace System;

namespace vtk {

System::String^ vtkDicer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDicer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDicer^ vtkDicer::NewInstance()
{
  ::vtkDicer* retVal = static_cast<::vtkDicer*>(vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->NewInstance());
  return gcnew vtkDicer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDicer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDicer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDicer::SetFieldData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->SetFieldData(arg0);
}



int vtkDicer::GetFieldData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetFieldData();
  return retVal;
}



void vtkDicer::FieldDataOn()
{
  vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->FieldDataOn();
}



void vtkDicer::FieldDataOff()
{
  vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->FieldDataOff();
}



void vtkDicer::SetDiceMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->SetDiceMode(arg0);
}



int vtkDicer::GetDiceModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetDiceModeMinValue();
  return retVal;
}



int vtkDicer::GetDiceModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetDiceModeMaxValue();
  return retVal;
}



int vtkDicer::GetDiceMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetDiceMode();
  return retVal;
}



void vtkDicer::SetDiceModeToNumberOfPointsPerPiece()
{
  vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->SetDiceModeToNumberOfPointsPerPiece();
}



void vtkDicer::SetDiceModeToSpecifiedNumberOfPieces()
{
  vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->SetDiceModeToSpecifiedNumberOfPieces();
}



void vtkDicer::SetDiceModeToMemoryLimitPerPiece()
{
  vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->SetDiceModeToMemoryLimitPerPiece();
}



int vtkDicer::GetNumberOfActualPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetNumberOfActualPieces();
  return retVal;
}



void vtkDicer::SetNumberOfPointsPerPiece(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->SetNumberOfPointsPerPiece(arg0);
}



int vtkDicer::GetNumberOfPointsPerPieceMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetNumberOfPointsPerPieceMinValue();
  return retVal;
}



int vtkDicer::GetNumberOfPointsPerPieceMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetNumberOfPointsPerPieceMaxValue();
  return retVal;
}



int vtkDicer::GetNumberOfPointsPerPiece()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetNumberOfPointsPerPiece();
  return retVal;
}



void vtkDicer::SetNumberOfPieces(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->SetNumberOfPieces(arg0);
}



int vtkDicer::GetNumberOfPiecesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetNumberOfPiecesMinValue();
  return retVal;
}



int vtkDicer::GetNumberOfPiecesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetNumberOfPiecesMaxValue();
  return retVal;
}



int vtkDicer::GetNumberOfPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetNumberOfPieces();
  return retVal;
}



void vtkDicer::SetMemoryLimit(unsigned long arg0)
{
  vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->SetMemoryLimit(arg0);
}



unsigned long vtkDicer::GetMemoryLimitMinValue()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetMemoryLimitMinValue();
  return retVal;
}



unsigned long vtkDicer::GetMemoryLimitMaxValue()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetMemoryLimitMaxValue();
  return retVal;
}



unsigned long vtkDicer::GetMemoryLimit()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDicer>(m_instance)->GetMemoryLimit();
  return retVal;
}



  vtkDicer::vtkDicer(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkDicer::vtkDicer(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkDicer::vtkDicer() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDicer::New()));
}



  vtkDicer::~vtkDicer() { }





} // end namespace vtkGraphics
