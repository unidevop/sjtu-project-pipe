

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMultiPartExtentTranslatorDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkMultiPartExtentTranslator.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMultiPartExtentTranslator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMultiPartExtentTranslator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMultiPartExtentTranslator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMultiPartExtentTranslator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMultiPartExtentTranslator^ vtkMultiPartExtentTranslator::NewInstance()
{
  ::vtkMultiPartExtentTranslator* retVal = static_cast<::vtkMultiPartExtentTranslator*>(vtk::ConvertManagedToNative<::vtkMultiPartExtentTranslator>(m_instance)->NewInstance());
  return gcnew vtkMultiPartExtentTranslator(IntPtr(retVal), false);
}



vtkMultiPartExtentTranslator^ vtkMultiPartExtentTranslator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMultiPartExtentTranslator* retVal = static_cast<::vtkMultiPartExtentTranslator*>(::vtkMultiPartExtentTranslator::SafeDownCast(oWrap));
  return gcnew vtkMultiPartExtentTranslator(IntPtr(retVal), false);
}



int vtkMultiPartExtentTranslator::PieceToExtentThreadSafe(int piece, int numPieces, int ghostLevel, array<int>^ wholeExtent, array<int>^ resultExtent, int splitMode, int byPoints)
{
  pin_ptr<int> wholeExtentPin = &wholeExtent[0];
  int* nativewholeExtentPin = wholeExtentPin;
  pin_ptr<int> resultExtentPin = &resultExtent[0];
  int* nativeresultExtentPin = resultExtentPin;
  int retVal = vtk::ConvertManagedToNative<::vtkMultiPartExtentTranslator>(m_instance)->PieceToExtentThreadSafe(piece, numPieces, ghostLevel, nativewholeExtentPin, nativeresultExtentPin, splitMode, byPoints);
  return retVal;
}



  vtkMultiPartExtentTranslator::vtkMultiPartExtentTranslator(System::IntPtr native, bool bConst) : vtkExtentTranslator(native, bConst) {}



  vtkMultiPartExtentTranslator::vtkMultiPartExtentTranslator(bool donothing) : vtkExtentTranslator(donothing) {}



  vtkMultiPartExtentTranslator::vtkMultiPartExtentTranslator() : vtkExtentTranslator(false) {
  this->SetNativePointer(IntPtr(::vtkMultiPartExtentTranslator::New()));
}



  vtkMultiPartExtentTranslator::~vtkMultiPartExtentTranslator() { }





} // end namespace vtkCommon
