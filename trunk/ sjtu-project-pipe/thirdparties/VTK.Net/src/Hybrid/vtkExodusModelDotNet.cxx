

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExodusModelDotNet.h"

// native includes
#include "strstream"
#include "vtkExodusModel.h"
#include "vtkIntArray.h"
#include "vtkModelMetadata.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkExodusModel::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusModel::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExodusModel^ vtkExodusModel::NewInstance()
{
  ::vtkExodusModel* retVal = static_cast<::vtkExodusModel*>(vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->NewInstance());
  return gcnew vtkExodusModel(IntPtr(retVal), false);
}



vtkExodusModel^ vtkExodusModel::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExodusModel* retVal = static_cast<::vtkExodusModel*>(::vtkExodusModel::SafeDownCast(oWrap));
  return gcnew vtkExodusModel(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExodusModel::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExodusModel::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkExodusModel::SetGlobalInformation(int fid, int compute_word_size)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->SetGlobalInformation(fid, compute_word_size);
  return retVal;
}



int vtkExodusModel::AddUGridElementVariable(System::String^ ugridVarName, System::String^ origName, int numComponents)
{
  char* ugridVarNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(ugridVarName).ToPointer());
  char* origNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(origName).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->AddUGridElementVariable(ugridVarNameWrap, origNameWrap, numComponents);
  ugridVarName->Remove(0,ugridVarName->Length);
  ugridVarName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(ugridVarNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(ugridVarNameWrap));
  origName->Remove(0,origName->Length);
  origName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(origNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(origNameWrap));
  return retVal;
}



int vtkExodusModel::RemoveUGridElementVariable(System::String^ ugridVarName)
{
  char* ugridVarNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(ugridVarName).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->RemoveUGridElementVariable(ugridVarNameWrap);
  ugridVarName->Remove(0,ugridVarName->Length);
  ugridVarName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(ugridVarNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(ugridVarNameWrap));
  return retVal;
}



int vtkExodusModel::AddUGridNodeVariable(System::String^ ugridVarName, System::String^ origName, int numComponents)
{
  char* ugridVarNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(ugridVarName).ToPointer());
  char* origNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(origName).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->AddUGridNodeVariable(ugridVarNameWrap, origNameWrap, numComponents);
  ugridVarName->Remove(0,ugridVarName->Length);
  ugridVarName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(ugridVarNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(ugridVarNameWrap));
  origName->Remove(0,origName->Length);
  origName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(origNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(origNameWrap));
  return retVal;
}



int vtkExodusModel::RemoveUGridNodeVariable(System::String^ ugridVarName)
{
  char* ugridVarNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(ugridVarName).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->RemoveUGridNodeVariable(ugridVarNameWrap);
  ugridVarName->Remove(0,ugridVarName->Length);
  ugridVarName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(ugridVarNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(ugridVarNameWrap));
  return retVal;
}



int vtkExodusModel::SetLocalInformation(vtkUnstructuredGrid^ ugrid, int fid, int timeStep, int newGeometry, int compute_word_size)
{
  ::vtkUnstructuredGrid* ugridWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(ugrid->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->SetLocalInformation(ugridWrap, fid, timeStep, newGeometry, compute_word_size);
  return retVal;
}



int vtkExodusModel::HasMetadata(vtkUnstructuredGrid^ grid)
{
  ::vtkUnstructuredGrid* gridWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(grid->GetNativePointer());
  int retVal = ::vtkExodusModel::HasMetadata(gridWrap);
  return retVal;
}



vtkModelMetadata^ vtkExodusModel::GetModelMetadata()
{
  ::vtkModelMetadata* retVal = static_cast<::vtkModelMetadata*>(vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->GetModelMetadata());
  return gcnew vtkModelMetadata(IntPtr(retVal), false);
}



void vtkExodusModel::SetModelMetadata(vtkModelMetadata^ emData)
{
  ::vtkModelMetadata* emDataWrap = vtk::ConvertManagedToNative<::vtkModelMetadata>(emData->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->SetModelMetadata(emDataWrap);
}



int vtkExodusModel::UnpackExodusModel(vtkUnstructuredGrid^ grid, int deleteIt)
{
  ::vtkUnstructuredGrid* gridWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(grid->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->UnpackExodusModel(gridWrap, deleteIt);
  return retVal;
}



int vtkExodusModel::MergeExodusModel(vtkExodusModel^ em)
{
  ::vtkExodusModel* emWrap = vtk::ConvertManagedToNative<::vtkExodusModel>(em->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->MergeExodusModel(emWrap);
  return retVal;
}



vtkExodusModel^ vtkExodusModel::ExtractExodusModel(vtkIntArray^ globalCellIdList, vtkUnstructuredGrid^ grid, System::String^ globalCellIdArrayName, System::String^ globalNodeIdArrayName)
{
  ::vtkIntArray* globalCellIdListWrap = vtk::ConvertManagedToNative<::vtkIntArray>(globalCellIdList->GetNativePointer());
  ::vtkUnstructuredGrid* gridWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(grid->GetNativePointer());
  char* globalCellIdArrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(globalCellIdArrayName).ToPointer());
  char* globalNodeIdArrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(globalNodeIdArrayName).ToPointer());
  ::vtkExodusModel* retVal = static_cast<::vtkExodusModel*>(vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->ExtractExodusModel(globalCellIdListWrap, gridWrap, globalCellIdArrayNameWrap, globalNodeIdArrayNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(globalCellIdArrayNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(globalNodeIdArrayNameWrap));
  return gcnew vtkExodusModel(IntPtr(retVal), false);
}



void vtkExodusModel::PackExodusModel(vtkUnstructuredGrid^ grid)
{
  ::vtkUnstructuredGrid* gridWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(grid->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->PackExodusModel(gridWrap);
}



void vtkExodusModel::Reset()
{
  vtk::ConvertManagedToNative<::vtkExodusModel>(m_instance)->Reset();
}



  vtkExodusModel::vtkExodusModel(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkExodusModel::vtkExodusModel(bool donothing) : vtkObject(donothing) {}



  vtkExodusModel::vtkExodusModel() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkExodusModel::New()));
}



  vtkExodusModel::~vtkExodusModel() { }





} // end namespace vtkHybrid
