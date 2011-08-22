

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTableExtentTranslatorDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTableExtentTranslator.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTableExtentTranslator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTableExtentTranslator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTableExtentTranslator^ vtkTableExtentTranslator::NewInstance()
{
  ::vtkTableExtentTranslator* retVal = static_cast<::vtkTableExtentTranslator*>(vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->NewInstance());
  return gcnew vtkTableExtentTranslator(IntPtr(retVal), false);
}



vtkTableExtentTranslator^ vtkTableExtentTranslator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTableExtentTranslator* retVal = static_cast<::vtkTableExtentTranslator*>(::vtkTableExtentTranslator::SafeDownCast(oWrap));
  return gcnew vtkTableExtentTranslator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTableExtentTranslator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTableExtentTranslator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTableExtentTranslator::SetNumberOfPieces(int pieces)
{
  vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->SetNumberOfPieces(pieces);
}



void vtkTableExtentTranslator::SetNumberOfPiecesInTable(int pieces)
{
  vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->SetNumberOfPiecesInTable(pieces);
}



int vtkTableExtentTranslator::GetNumberOfPiecesInTable()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->GetNumberOfPiecesInTable();
  return retVal;
}



int vtkTableExtentTranslator::PieceToExtent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->PieceToExtent();
  return retVal;
}



int vtkTableExtentTranslator::PieceToExtentByPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->PieceToExtentByPoints();
  return retVal;
}



int vtkTableExtentTranslator::PieceToExtentThreadSafe(int piece, int numPieces, int ghostLevel, array<int>^ wholeExtent, array<int>^ resultExtent, int splitMode, int byPoints)
{
  pin_ptr<int> wholeExtentPin = &wholeExtent[0];
  int* nativewholeExtentPin = wholeExtentPin;
  pin_ptr<int> resultExtentPin = &resultExtent[0];
  int* nativeresultExtentPin = resultExtentPin;
  int retVal = vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->PieceToExtentThreadSafe(piece, numPieces, ghostLevel, nativewholeExtentPin, nativeresultExtentPin, splitMode, byPoints);
  return retVal;
}



void vtkTableExtentTranslator::SetExtentForPiece(int piece, array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->SetExtentForPiece(piece, nativeextentPin);
}



void vtkTableExtentTranslator::GetExtentForPiece(int piece, array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->GetExtentForPiece(piece, nativeextentPin);
}



void vtkTableExtentTranslator::SetMaximumGhostLevel(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->SetMaximumGhostLevel(arg0);
}



int vtkTableExtentTranslator::GetMaximumGhostLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->GetMaximumGhostLevel();
  return retVal;
}



void vtkTableExtentTranslator::SetPieceAvailable(int piece, int available)
{
  vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->SetPieceAvailable(piece, available);
}



int vtkTableExtentTranslator::GetPieceAvailable(int piece)
{
  int retVal = vtk::ConvertManagedToNative<::vtkTableExtentTranslator>(m_instance)->GetPieceAvailable(piece);
  return retVal;
}



  vtkTableExtentTranslator::vtkTableExtentTranslator(System::IntPtr native, bool bConst) : vtkExtentTranslator(native, bConst) {}



  vtkTableExtentTranslator::vtkTableExtentTranslator(bool donothing) : vtkExtentTranslator(donothing) {}



  vtkTableExtentTranslator::vtkTableExtentTranslator() : vtkExtentTranslator(false) {
  this->SetNativePointer(IntPtr(::vtkTableExtentTranslator::New()));
}



  vtkTableExtentTranslator::~vtkTableExtentTranslator() { }





} // end namespace vtkCommon
