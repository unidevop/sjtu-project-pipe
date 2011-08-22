

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCellLinksDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkCellLinks.h"
#include "vtkCellArray.h"
#include "vtkDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkCellLinks::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCellLinks::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCellLinks^ vtkCellLinks::NewInstance()
{
  ::vtkCellLinks* retVal = static_cast<::vtkCellLinks*>(vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->NewInstance());
  return gcnew vtkCellLinks(IntPtr(retVal), false);
}



vtkCellLinks^ vtkCellLinks::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCellLinks* retVal = static_cast<::vtkCellLinks*>(::vtkCellLinks::SafeDownCast(oWrap));
  return gcnew vtkCellLinks(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCellLinks::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCellLinks::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCellLinks::Allocate(int numLinks, int ext)
{
  vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->Allocate(numLinks, ext);
}



unsigned short vtkCellLinks::GetNcells(int ptId)
{
  unsigned short retVal = vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->GetNcells(ptId);
  return retVal;
}



void vtkCellLinks::BuildLinks(vtkDataSet^ data)
{
  ::vtkDataSet* dataWrap = vtk::ConvertManagedToNative<::vtkDataSet>(data->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->BuildLinks(dataWrap);
}



void vtkCellLinks::BuildLinks(vtkDataSet^ data, vtkCellArray^ Connectivity)
{
  ::vtkDataSet* dataWrap = vtk::ConvertManagedToNative<::vtkDataSet>(data->GetNativePointer());
  ::vtkCellArray* ConnectivityWrap = vtk::ConvertManagedToNative<::vtkCellArray>(Connectivity->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->BuildLinks(dataWrap, ConnectivityWrap);
}



int vtkCellLinks::InsertNextPoint(int numLinks)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->InsertNextPoint(numLinks);
  return retVal;
}



void vtkCellLinks::InsertNextCellReference(int ptId, int cellId)
{
  vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->InsertNextCellReference(ptId, cellId);
}



void vtkCellLinks::DeletePoint(int ptId)
{
  vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->DeletePoint(ptId);
}



void vtkCellLinks::RemoveCellReference(int cellId, int ptId)
{
  vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->RemoveCellReference(cellId, ptId);
}



void vtkCellLinks::AddCellReference(int cellId, int ptId)
{
  vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->AddCellReference(cellId, ptId);
}



void vtkCellLinks::ResizeCellList(int ptId, int size)
{
  vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->ResizeCellList(ptId, size);
}



void vtkCellLinks::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->Squeeze();
}



void vtkCellLinks::Reset()
{
  vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->Reset();
}



unsigned long vtkCellLinks::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkCellLinks::DeepCopy(vtkCellLinks^ src)
{
  ::vtkCellLinks* srcWrap = vtk::ConvertManagedToNative<::vtkCellLinks>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCellLinks>(m_instance)->DeepCopy(srcWrap);
}



  vtkCellLinks::vtkCellLinks(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCellLinks::vtkCellLinks(bool donothing) : vtkObject(donothing) {}



  vtkCellLinks::vtkCellLinks() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCellLinks::New()));
}



  vtkCellLinks::~vtkCellLinks() { }





} // end namespace vtkFiltering
