

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStreamingDemandDrivenPipelineDotNet.h"
#include "vtkInformationDotNet.h"
#include "vtkInformationDoubleVectorKeyDotNet.h"
#include "vtkInformationIntegerKeyDotNet.h"
#include "vtkInformationIntegerVectorKeyDotNet.h"
#include "vtkInformationObjectBaseKeyDotNet.h"
#include "vtkInformationRequestKeyDotNet.h"

// native includes
#include "strstream"
#include "vtkStreamingDemandDrivenPipeline.h"
#include "vtkExtentTranslator.h"
#include "vtkInformation.h"
#include "vtkInformationDoubleVectorKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationIntegerVectorKey.h"
#include "vtkInformationObjectBaseKey.h"
#include "vtkInformationRequestKey.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStreamingDemandDrivenPipeline::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStreamingDemandDrivenPipeline::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStreamingDemandDrivenPipeline^ vtkStreamingDemandDrivenPipeline::NewInstance()
{
  ::vtkStreamingDemandDrivenPipeline* retVal = static_cast<::vtkStreamingDemandDrivenPipeline*>(vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->NewInstance());
  return gcnew vtkStreamingDemandDrivenPipeline(IntPtr(retVal), false);
}



vtkStreamingDemandDrivenPipeline^ vtkStreamingDemandDrivenPipeline::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStreamingDemandDrivenPipeline* retVal = static_cast<::vtkStreamingDemandDrivenPipeline*>(::vtkStreamingDemandDrivenPipeline::SafeDownCast(oWrap));
  return gcnew vtkStreamingDemandDrivenPipeline(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStreamingDemandDrivenPipeline::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStreamingDemandDrivenPipeline::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkStreamingDemandDrivenPipeline::Update()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->Update();
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::Update(int port)
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->Update(port);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::UpdateWholeExtent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->UpdateWholeExtent();
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::PropagateUpdateExtent(int outputPort)
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->PropagateUpdateExtent(outputPort);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::SetMaximumNumberOfPieces(vtkInformation^ arg0, int n)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->SetMaximumNumberOfPieces(arg0Wrap, n);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::GetMaximumNumberOfPieces(vtkInformation^ arg0)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->GetMaximumNumberOfPieces(arg0Wrap);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::SetWholeExtent(vtkInformation^ arg0, array<int>^ extent)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->SetWholeExtent(arg0Wrap, nativeextentPin);
  return retVal;
}



void vtkStreamingDemandDrivenPipeline::GetWholeExtent(vtkInformation^ arg0, array<int>^ extent)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->GetWholeExtent(arg0Wrap, nativeextentPin);
}



int vtkStreamingDemandDrivenPipeline::SetUpdateExtentToWholeExtent(vtkInformation^ arg0)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->SetUpdateExtentToWholeExtent(arg0Wrap);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::SetUpdateExtent(vtkInformation^ arg0, array<int>^ extent)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->SetUpdateExtent(arg0Wrap, nativeextentPin);
  return retVal;
}



void vtkStreamingDemandDrivenPipeline::GetUpdateExtent(vtkInformation^ arg0, array<int>^ extent)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->GetUpdateExtent(arg0Wrap, nativeextentPin);
}



int vtkStreamingDemandDrivenPipeline::SetUpdateExtent(vtkInformation^ arg0, int piece, int numPieces, int ghostLevel)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->SetUpdateExtent(arg0Wrap, piece, numPieces, ghostLevel);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::SetUpdatePiece(vtkInformation^ arg0, int piece)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->SetUpdatePiece(arg0Wrap, piece);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::GetUpdatePiece(vtkInformation^ arg0)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->GetUpdatePiece(arg0Wrap);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::SetUpdateNumberOfPieces(vtkInformation^ arg0, int n)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->SetUpdateNumberOfPieces(arg0Wrap, n);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::GetUpdateNumberOfPieces(vtkInformation^ arg0)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->GetUpdateNumberOfPieces(arg0Wrap);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::SetUpdateGhostLevel(vtkInformation^ arg0, int n)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->SetUpdateGhostLevel(arg0Wrap, n);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::GetUpdateGhostLevel(vtkInformation^ arg0)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->GetUpdateGhostLevel(arg0Wrap);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::SetRequestExactExtent(int port, int flag)
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->SetRequestExactExtent(port, flag);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::GetRequestExactExtent(int port)
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->GetRequestExactExtent(port);
  return retVal;
}



int vtkStreamingDemandDrivenPipeline::SetExtentTranslator(vtkInformation^ arg0, vtkExtentTranslator^ translator)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  ::vtkExtentTranslator* translatorWrap = vtk::ConvertManagedToNative<::vtkExtentTranslator>(translator->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->SetExtentTranslator(arg0Wrap, translatorWrap);
  return retVal;
}



vtkExtentTranslator^ vtkStreamingDemandDrivenPipeline::GetExtentTranslator(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkExtentTranslator* retVal = static_cast<::vtkExtentTranslator*>(vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->GetExtentTranslator(infoWrap));
  return gcnew vtkExtentTranslator(IntPtr(retVal), false);
}



int vtkStreamingDemandDrivenPipeline::SetWholeBoundingBox(int port, array<double>^ bb)
{
  pin_ptr<double> bbPin = &bb[0];
  double* nativebbPin = bbPin;
  int retVal = vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->SetWholeBoundingBox(port, nativebbPin);
  return retVal;
}



void vtkStreamingDemandDrivenPipeline::GetWholeBoundingBox(int port, array<double>^ bb)
{
  pin_ptr<double> bbPin = &bb[0];
  double* nativebbPin = bbPin;
  vtk::ConvertManagedToNative<::vtkStreamingDemandDrivenPipeline>(m_instance)->GetWholeBoundingBox(port, nativebbPin);
}



vtkInformationRequestKey^ vtkStreamingDemandDrivenPipeline::REQUEST_UPDATE_EXTENT()
{
  ::vtkInformationRequestKey* retVal = static_cast<::vtkInformationRequestKey*>(::vtkStreamingDemandDrivenPipeline::REQUEST_UPDATE_EXTENT());
  return gcnew vtkInformationRequestKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkStreamingDemandDrivenPipeline::CONTINUE_EXECUTING()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkStreamingDemandDrivenPipeline::CONTINUE_EXECUTING());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationObjectBaseKey^ vtkStreamingDemandDrivenPipeline::EXTENT_TRANSLATOR()
{
  ::vtkInformationObjectBaseKey* retVal = static_cast<::vtkInformationObjectBaseKey*>(::vtkStreamingDemandDrivenPipeline::EXTENT_TRANSLATOR());
  return gcnew vtkInformationObjectBaseKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT_INITIALIZED()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT_INITIALIZED());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerVectorKey^ vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT()
{
  ::vtkInformationIntegerVectorKey* retVal = static_cast<::vtkInformationIntegerVectorKey*>(::vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT());
  return gcnew vtkInformationIntegerVectorKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkStreamingDemandDrivenPipeline::UPDATE_PIECE_NUMBER()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkStreamingDemandDrivenPipeline::UPDATE_PIECE_NUMBER());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_PIECES()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_PIECES());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_GHOST_LEVELS()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_GHOST_LEVELS());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerVectorKey^ vtkStreamingDemandDrivenPipeline::WHOLE_EXTENT()
{
  ::vtkInformationIntegerVectorKey* retVal = static_cast<::vtkInformationIntegerVectorKey*>(::vtkStreamingDemandDrivenPipeline::WHOLE_EXTENT());
  return gcnew vtkInformationIntegerVectorKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkStreamingDemandDrivenPipeline::MAXIMUM_NUMBER_OF_PIECES()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkStreamingDemandDrivenPipeline::MAXIMUM_NUMBER_OF_PIECES());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationDoubleVectorKey^ vtkStreamingDemandDrivenPipeline::WHOLE_BOUNDING_BOX()
{
  ::vtkInformationDoubleVectorKey* retVal = static_cast<::vtkInformationDoubleVectorKey*>(::vtkStreamingDemandDrivenPipeline::WHOLE_BOUNDING_BOX());
  return gcnew vtkInformationDoubleVectorKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkStreamingDemandDrivenPipeline::EXACT_EXTENT()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkStreamingDemandDrivenPipeline::EXACT_EXTENT());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationDoubleVectorKey^ vtkStreamingDemandDrivenPipeline::TIME_STEPS()
{
  ::vtkInformationDoubleVectorKey* retVal = static_cast<::vtkInformationDoubleVectorKey*>(::vtkStreamingDemandDrivenPipeline::TIME_STEPS());
  return gcnew vtkInformationDoubleVectorKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkStreamingDemandDrivenPipeline::UPDATE_TIME_INDEX()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkStreamingDemandDrivenPipeline::UPDATE_TIME_INDEX());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



  vtkStreamingDemandDrivenPipeline::vtkStreamingDemandDrivenPipeline(System::IntPtr native, bool bConst) : vtkDemandDrivenPipeline(native, bConst) {}



  vtkStreamingDemandDrivenPipeline::vtkStreamingDemandDrivenPipeline(bool donothing) : vtkDemandDrivenPipeline(donothing) {}



  vtkStreamingDemandDrivenPipeline::vtkStreamingDemandDrivenPipeline() : vtkDemandDrivenPipeline(false) {
  this->SetNativePointer(IntPtr(::vtkStreamingDemandDrivenPipeline::New()));
}



  vtkStreamingDemandDrivenPipeline::~vtkStreamingDemandDrivenPipeline() { }





} // end namespace vtkFiltering
