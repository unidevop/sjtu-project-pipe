

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCompositeDataPipelineDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkInformationIntegerKeyDotNet.h"
#include "vtkInformationObjectBaseKeyDotNet.h"
#include "vtkInformationStringKeyDotNet.h"

// native includes
#include "strstream"
#include "vtkCompositeDataPipeline.h"
#include "vtkDataObject.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationObjectBaseKey.h"
#include "vtkInformationStringKey.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCompositeDataPipeline::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCompositeDataPipeline>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCompositeDataPipeline::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCompositeDataPipeline>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCompositeDataPipeline^ vtkCompositeDataPipeline::NewInstance()
{
  ::vtkCompositeDataPipeline* retVal = static_cast<::vtkCompositeDataPipeline*>(vtk::ConvertManagedToNative<::vtkCompositeDataPipeline>(m_instance)->NewInstance());
  return gcnew vtkCompositeDataPipeline(IntPtr(retVal), false);
}



vtkCompositeDataPipeline^ vtkCompositeDataPipeline::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCompositeDataPipeline* retVal = static_cast<::vtkCompositeDataPipeline*>(::vtkCompositeDataPipeline::SafeDownCast(oWrap));
  return gcnew vtkCompositeDataPipeline(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCompositeDataPipeline::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCompositeDataPipeline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCompositeDataPipeline::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCompositeDataPipeline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkDataObject^ vtkCompositeDataPipeline::GetCompositeOutputData(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkCompositeDataPipeline>(m_instance)->GetCompositeOutputData(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkCompositeDataPipeline::BEGIN_LOOP()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkCompositeDataPipeline::BEGIN_LOOP());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkCompositeDataPipeline::END_LOOP()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkCompositeDataPipeline::END_LOOP());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationStringKey^ vtkCompositeDataPipeline::COMPOSITE_DATA_TYPE_NAME()
{
  ::vtkInformationStringKey* retVal = static_cast<::vtkInformationStringKey*>(::vtkCompositeDataPipeline::COMPOSITE_DATA_TYPE_NAME());
  return gcnew vtkInformationStringKey(IntPtr(retVal), false);
}



vtkInformationObjectBaseKey^ vtkCompositeDataPipeline::COMPOSITE_DATA_INFORMATION()
{
  ::vtkInformationObjectBaseKey* retVal = static_cast<::vtkInformationObjectBaseKey*>(::vtkCompositeDataPipeline::COMPOSITE_DATA_INFORMATION());
  return gcnew vtkInformationObjectBaseKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkCompositeDataPipeline::MARKED_FOR_UPDATE()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkCompositeDataPipeline::MARKED_FOR_UPDATE());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationStringKey^ vtkCompositeDataPipeline::INPUT_REQUIRED_COMPOSITE_DATA_TYPE()
{
  ::vtkInformationStringKey* retVal = static_cast<::vtkInformationStringKey*>(::vtkCompositeDataPipeline::INPUT_REQUIRED_COMPOSITE_DATA_TYPE());
  return gcnew vtkInformationStringKey(IntPtr(retVal), false);
}



vtkInformationObjectBaseKey^ vtkCompositeDataPipeline::UPDATE_BLOCKS()
{
  ::vtkInformationObjectBaseKey* retVal = static_cast<::vtkInformationObjectBaseKey*>(::vtkCompositeDataPipeline::UPDATE_BLOCKS());
  return gcnew vtkInformationObjectBaseKey(IntPtr(retVal), false);
}



  vtkCompositeDataPipeline::vtkCompositeDataPipeline(System::IntPtr native, bool bConst) : vtkStreamingDemandDrivenPipeline(native, bConst) {}



  vtkCompositeDataPipeline::vtkCompositeDataPipeline(bool donothing) : vtkStreamingDemandDrivenPipeline(donothing) {}



  vtkCompositeDataPipeline::vtkCompositeDataPipeline() : vtkStreamingDemandDrivenPipeline(false) {
  this->SetNativePointer(IntPtr(::vtkCompositeDataPipeline::New()));
}



  vtkCompositeDataPipeline::~vtkCompositeDataPipeline() { }





} // end namespace vtkFiltering
