

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTrivialProducerDotNet.h"
#include "vtkDataObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTrivialProducer.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTrivialProducer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTrivialProducer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTrivialProducer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTrivialProducer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTrivialProducer^ vtkTrivialProducer::NewInstance()
{
  ::vtkTrivialProducer* retVal = static_cast<::vtkTrivialProducer*>(vtk::ConvertManagedToNative<::vtkTrivialProducer>(m_instance)->NewInstance());
  return gcnew vtkTrivialProducer(IntPtr(retVal), false);
}



vtkTrivialProducer^ vtkTrivialProducer::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTrivialProducer* retVal = static_cast<::vtkTrivialProducer*>(::vtkTrivialProducer::SafeDownCast(oWrap));
  return gcnew vtkTrivialProducer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTrivialProducer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTrivialProducer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTrivialProducer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTrivialProducer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTrivialProducer::SetOutput(vtkDataObject^ output)
{
  ::vtkDataObject* outputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTrivialProducer>(m_instance)->SetOutput(outputWrap);
}



unsigned long vtkTrivialProducer::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkTrivialProducer>(m_instance)->GetMTime();
  return retVal;
}



  vtkTrivialProducer::vtkTrivialProducer(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkTrivialProducer::vtkTrivialProducer(bool donothing) : vtkAlgorithm(donothing) {}



  vtkTrivialProducer::vtkTrivialProducer() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTrivialProducer::New()));
}



  vtkTrivialProducer::~vtkTrivialProducer() { }





} // end namespace vtkFiltering
