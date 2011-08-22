

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLogLookupTableDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkLogLookupTable.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkLogLookupTable::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLogLookupTable>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLogLookupTable::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLogLookupTable>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLogLookupTable^ vtkLogLookupTable::NewInstance()
{
  ::vtkLogLookupTable* retVal = static_cast<::vtkLogLookupTable*>(vtk::ConvertManagedToNative<::vtkLogLookupTable>(m_instance)->NewInstance());
  return gcnew vtkLogLookupTable(IntPtr(retVal), false);
}



vtkLogLookupTable^ vtkLogLookupTable::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLogLookupTable* retVal = static_cast<::vtkLogLookupTable*>(::vtkLogLookupTable::SafeDownCast(oWrap));
  return gcnew vtkLogLookupTable(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLogLookupTable::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLogLookupTable>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLogLookupTable::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLogLookupTable>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkLogLookupTable::vtkLogLookupTable(System::IntPtr native, bool bConst) : vtkLookupTable(native, bConst) {}



  vtkLogLookupTable::vtkLogLookupTable(bool donothing) : vtkLookupTable(donothing) {}



  vtkLogLookupTable::vtkLogLookupTable() : vtkLookupTable(false) {
  this->SetNativePointer(IntPtr(::vtkLogLookupTable::New()));
}



  vtkLogLookupTable::~vtkLogLookupTable() { }





} // end namespace vtkCommon
