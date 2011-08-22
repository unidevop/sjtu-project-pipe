

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPDBReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkPDBReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPDBReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPDBReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPDBReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPDBReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPDBReader^ vtkPDBReader::NewInstance()
{
  ::vtkPDBReader* retVal = static_cast<::vtkPDBReader*>(vtk::ConvertManagedToNative<::vtkPDBReader>(m_instance)->NewInstance());
  return gcnew vtkPDBReader(IntPtr(retVal), false);
}



vtkPDBReader^ vtkPDBReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPDBReader* retVal = static_cast<::vtkPDBReader*>(::vtkPDBReader::SafeDownCast(oWrap));
  return gcnew vtkPDBReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPDBReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPDBReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPDBReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPDBReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkPDBReader::vtkPDBReader(System::IntPtr native, bool bConst) : vtkMoleculeReaderBase(native, bConst) {}



  vtkPDBReader::vtkPDBReader(bool donothing) : vtkMoleculeReaderBase(donothing) {}



  vtkPDBReader::vtkPDBReader() : vtkMoleculeReaderBase(false) {
  this->SetNativePointer(IntPtr(::vtkPDBReader::New()));
}



  vtkPDBReader::~vtkPDBReader() { }





} // end namespace vtkIO
