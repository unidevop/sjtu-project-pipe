

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtentTranslatorDotNet.h"

// native includes
#include "strstream"
#include "vtkExtentTranslator.h"

using namespace System;

namespace vtk {

System::String^ vtkExtentTranslator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtentTranslator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtentTranslator^ vtkExtentTranslator::NewInstance()
{
  ::vtkExtentTranslator* retVal = static_cast<::vtkExtentTranslator*>(vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->NewInstance());
  return gcnew vtkExtentTranslator(IntPtr(retVal), false);
}



vtkExtentTranslator^ vtkExtentTranslator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtentTranslator* retVal = static_cast<::vtkExtentTranslator*>(::vtkExtentTranslator::SafeDownCast(oWrap));
  return gcnew vtkExtentTranslator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtentTranslator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtentTranslator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExtentTranslator::SetWholeExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->SetWholeExtent(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkExtentTranslator::SetWholeExtent(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->SetWholeExtent(nativeaPin);
}



array<int>^ vtkExtentTranslator::GetWholeExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->GetWholeExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtentTranslator::SetExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->SetExtent(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkExtentTranslator::SetExtent(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->SetExtent(nativeaPin);
}



array<int>^ vtkExtentTranslator::GetExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->GetExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtentTranslator::SetPiece(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->SetPiece(arg0);
}



int vtkExtentTranslator::GetPiece()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->GetPiece();
  return retVal;
}



void vtkExtentTranslator::SetNumberOfPieces(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->SetNumberOfPieces(arg0);
}



int vtkExtentTranslator::GetNumberOfPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->GetNumberOfPieces();
  return retVal;
}



void vtkExtentTranslator::SetGhostLevel(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->SetGhostLevel(arg0);
}



int vtkExtentTranslator::GetGhostLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->GetGhostLevel();
  return retVal;
}



int vtkExtentTranslator::PieceToExtent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->PieceToExtent();
  return retVal;
}



int vtkExtentTranslator::PieceToExtentByPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->PieceToExtentByPoints();
  return retVal;
}



int vtkExtentTranslator::PieceToExtentThreadSafe(int piece, int numPieces, int ghostLevel, array<int>^ wholeExtent, array<int>^ resultExtent, int splitMode, int byPoints)
{
  pin_ptr<int> wholeExtentPin = &wholeExtent[0];
  int* nativewholeExtentPin = wholeExtentPin;
  pin_ptr<int> resultExtentPin = &resultExtent[0];
  int* nativeresultExtentPin = resultExtentPin;
  int retVal = vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->PieceToExtentThreadSafe(piece, numPieces, ghostLevel, nativewholeExtentPin, nativeresultExtentPin, splitMode, byPoints);
  return retVal;
}



void vtkExtentTranslator::SetSplitModeToBlock()
{
  vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->SetSplitModeToBlock();
}



void vtkExtentTranslator::SetSplitModeToXSlab()
{
  vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->SetSplitModeToXSlab();
}



void vtkExtentTranslator::SetSplitModeToYSlab()
{
  vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->SetSplitModeToYSlab();
}



void vtkExtentTranslator::SetSplitModeToZSlab()
{
  vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->SetSplitModeToZSlab();
}



int vtkExtentTranslator::GetSplitMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtentTranslator>(m_instance)->GetSplitMode();
  return retVal;
}



  vtkExtentTranslator::vtkExtentTranslator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkExtentTranslator::vtkExtentTranslator(bool donothing) : vtkObject(donothing) {}



  vtkExtentTranslator::vtkExtentTranslator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkExtentTranslator::New()));
}



  vtkExtentTranslator::~vtkExtentTranslator() { }





} // end namespace vtkCommon
