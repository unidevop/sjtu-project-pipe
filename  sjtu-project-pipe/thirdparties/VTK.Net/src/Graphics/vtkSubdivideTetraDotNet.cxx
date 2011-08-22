

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSubdivideTetraDotNet.h"

// native includes
#include "strstream"
#include "vtkSubdivideTetra.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSubdivideTetra::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSubdivideTetra>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSubdivideTetra::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSubdivideTetra>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSubdivideTetra^ vtkSubdivideTetra::NewInstance()
{
  ::vtkSubdivideTetra* retVal = static_cast<::vtkSubdivideTetra*>(vtk::ConvertManagedToNative<::vtkSubdivideTetra>(m_instance)->NewInstance());
  return gcnew vtkSubdivideTetra(IntPtr(retVal), false);
}



vtkSubdivideTetra^ vtkSubdivideTetra::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSubdivideTetra* retVal = static_cast<::vtkSubdivideTetra*>(::vtkSubdivideTetra::SafeDownCast(oWrap));
  return gcnew vtkSubdivideTetra(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSubdivideTetra::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSubdivideTetra>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSubdivideTetra::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSubdivideTetra>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkSubdivideTetra::vtkSubdivideTetra(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkSubdivideTetra::vtkSubdivideTetra(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkSubdivideTetra::vtkSubdivideTetra() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSubdivideTetra::New()));
}



  vtkSubdivideTetra::~vtkSubdivideTetra() { }





} // end namespace vtkGraphics
