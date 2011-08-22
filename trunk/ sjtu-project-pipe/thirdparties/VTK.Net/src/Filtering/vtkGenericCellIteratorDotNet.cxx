

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericCellIteratorDotNet.h"
#include "vtkGenericAdaptorCellDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericCellIterator.h"
#include "vtkGenericAdaptorCell.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericCellIterator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericCellIterator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericCellIterator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCellIterator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericCellIterator^ vtkGenericCellIterator::NewInstance()
{
  ::vtkGenericCellIterator* retVal = static_cast<::vtkGenericCellIterator*>(vtk::ConvertManagedToNative<::vtkGenericCellIterator>(m_instance)->NewInstance());
  return gcnew vtkGenericCellIterator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericCellIterator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericCellIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericCellIterator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericCellIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericCellIterator::Begin()
{
  vtk::ConvertManagedToNative<::vtkGenericCellIterator>(m_instance)->Begin();
}



int vtkGenericCellIterator::IsAtEnd()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCellIterator>(m_instance)->IsAtEnd();
  return retVal;
}



vtkGenericAdaptorCell^ vtkGenericCellIterator::NewCell()
{
  ::vtkGenericAdaptorCell* retVal = static_cast<::vtkGenericAdaptorCell*>(vtk::ConvertManagedToNative<::vtkGenericCellIterator>(m_instance)->NewCell());
  return gcnew vtkGenericAdaptorCell(IntPtr(retVal), false);
}



void vtkGenericCellIterator::GetCell(vtkGenericAdaptorCell^ c)
{
  ::vtkGenericAdaptorCell* cWrap = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(c->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCellIterator>(m_instance)->GetCell(cWrap);
}



vtkGenericAdaptorCell^ vtkGenericCellIterator::GetCell()
{
  ::vtkGenericAdaptorCell* retVal = static_cast<::vtkGenericAdaptorCell*>(vtk::ConvertManagedToNative<::vtkGenericCellIterator>(m_instance)->GetCell());
  return gcnew vtkGenericAdaptorCell(IntPtr(retVal), false);
}



void vtkGenericCellIterator::Next()
{
  vtk::ConvertManagedToNative<::vtkGenericCellIterator>(m_instance)->Next();
}



  vtkGenericCellIterator::vtkGenericCellIterator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkGenericCellIterator::vtkGenericCellIterator(bool donothing) : vtkObject(donothing) {}



  vtkGenericCellIterator::vtkGenericCellIterator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkGenericCellIterator::New()));
}



  vtkGenericCellIterator::~vtkGenericCellIterator() { }





} // end namespace vtkFiltering
