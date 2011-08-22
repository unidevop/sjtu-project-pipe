

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCastToConcreteDotNet.h"

// native includes
#include "strstream"
#include "vtkCastToConcrete.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCastToConcrete::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCastToConcrete>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCastToConcrete::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCastToConcrete>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCastToConcrete^ vtkCastToConcrete::NewInstance()
{
  ::vtkCastToConcrete* retVal = static_cast<::vtkCastToConcrete*>(vtk::ConvertManagedToNative<::vtkCastToConcrete>(m_instance)->NewInstance());
  return gcnew vtkCastToConcrete(IntPtr(retVal), false);
}



vtkCastToConcrete^ vtkCastToConcrete::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCastToConcrete* retVal = static_cast<::vtkCastToConcrete*>(::vtkCastToConcrete::SafeDownCast(oWrap));
  return gcnew vtkCastToConcrete(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCastToConcrete::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCastToConcrete>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCastToConcrete::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCastToConcrete>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkCastToConcrete::vtkCastToConcrete(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkCastToConcrete::vtkCastToConcrete(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkCastToConcrete::vtkCastToConcrete() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkCastToConcrete::New()));
}



  vtkCastToConcrete::~vtkCastToConcrete() { }





} // end namespace vtkFiltering
