

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCellTypesDotNet.h"

// native includes
#include "strstream"
#include "vtkCellTypes.h"
#include "vtkIntArray.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkCellTypes::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCellTypes::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCellTypes^ vtkCellTypes::NewInstance()
{
  ::vtkCellTypes* retVal = static_cast<::vtkCellTypes*>(vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->NewInstance());
  return gcnew vtkCellTypes(IntPtr(retVal), false);
}



vtkCellTypes^ vtkCellTypes::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCellTypes* retVal = static_cast<::vtkCellTypes*>(::vtkCellTypes::SafeDownCast(oWrap));
  return gcnew vtkCellTypes(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCellTypes::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCellTypes::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkCellTypes::Allocate(int sz, int ext)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->Allocate(sz, ext);
  return retVal;
}



void vtkCellTypes::InsertCell(int id, unsigned char type, int loc)
{
  vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->InsertCell(id, type, loc);
}



int vtkCellTypes::InsertNextCell(unsigned char type, int loc)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->InsertNextCell(type, loc);
  return retVal;
}



void vtkCellTypes::SetCellTypes(int ncells, vtkUnsignedCharArray^ cellTypes, vtkIntArray^ cellLocations)
{
  ::vtkUnsignedCharArray* cellTypesWrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(cellTypes->GetNativePointer());
  ::vtkIntArray* cellLocationsWrap = vtk::ConvertManagedToNative<::vtkIntArray>(cellLocations->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->SetCellTypes(ncells, cellTypesWrap, cellLocationsWrap);
}



int vtkCellTypes::GetCellLocation(int cellId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->GetCellLocation(cellId);
  return retVal;
}



void vtkCellTypes::DeleteCell(int cellId)
{
  vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->DeleteCell(cellId);
}



int vtkCellTypes::GetNumberOfTypes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->GetNumberOfTypes();
  return retVal;
}



int vtkCellTypes::IsType(unsigned char type)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->IsType(type);
  return retVal;
}



int vtkCellTypes::InsertNextType(unsigned char type)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->InsertNextType(type);
  return retVal;
}



unsigned char vtkCellTypes::GetCellType(int cellId)
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->GetCellType(cellId);
  return retVal;
}



void vtkCellTypes::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->Squeeze();
}



void vtkCellTypes::Reset()
{
  vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->Reset();
}



unsigned long vtkCellTypes::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkCellTypes::DeepCopy(vtkCellTypes^ src)
{
  ::vtkCellTypes* srcWrap = vtk::ConvertManagedToNative<::vtkCellTypes>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCellTypes>(m_instance)->DeepCopy(srcWrap);
}



  vtkCellTypes::vtkCellTypes(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCellTypes::vtkCellTypes(bool donothing) : vtkObject(donothing) {}



  vtkCellTypes::vtkCellTypes() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCellTypes::New()));
}



  vtkCellTypes::~vtkCellTypes() { }





} // end namespace vtkFiltering
