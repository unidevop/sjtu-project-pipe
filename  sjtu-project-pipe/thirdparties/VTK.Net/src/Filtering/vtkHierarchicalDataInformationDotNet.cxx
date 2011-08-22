

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHierarchicalDataInformationDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkHierarchicalDataInformation.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkHierarchicalDataInformation::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHierarchicalDataInformation::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHierarchicalDataInformation^ vtkHierarchicalDataInformation::NewInstance()
{
  ::vtkHierarchicalDataInformation* retVal = static_cast<::vtkHierarchicalDataInformation*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->NewInstance());
  return gcnew vtkHierarchicalDataInformation(IntPtr(retVal), false);
}



vtkHierarchicalDataInformation^ vtkHierarchicalDataInformation::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHierarchicalDataInformation* retVal = static_cast<::vtkHierarchicalDataInformation*>(::vtkHierarchicalDataInformation::SafeDownCast(oWrap));
  return gcnew vtkHierarchicalDataInformation(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHierarchicalDataInformation::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHierarchicalDataInformation::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned int vtkHierarchicalDataInformation::GetNumberOfLevels()
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->GetNumberOfLevels();
  return retVal;
}



void vtkHierarchicalDataInformation::SetNumberOfLevels(unsigned int numLevels)
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->SetNumberOfLevels(numLevels);
}



unsigned int vtkHierarchicalDataInformation::GetNumberOfDataSets(unsigned int level)
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->GetNumberOfDataSets(level);
  return retVal;
}



void vtkHierarchicalDataInformation::SetNumberOfDataSets(unsigned int level, unsigned int numDataSets)
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->SetNumberOfDataSets(level, numDataSets);
}



vtkInformation^ vtkHierarchicalDataInformation::GetInformation(unsigned int level, unsigned int id)
{
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->GetInformation(level, id));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



int vtkHierarchicalDataInformation::HasInformation(unsigned int level, unsigned int id)
{
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->HasInformation(level, id);
  return retVal;
}



void vtkHierarchicalDataInformation::DeepCopy(vtkHierarchicalDataInformation^ from)
{
  ::vtkHierarchicalDataInformation* fromWrap = vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(from->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->DeepCopy(fromWrap);
}



void vtkHierarchicalDataInformation::Clear()
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataInformation>(m_instance)->Clear();
}



  vtkHierarchicalDataInformation::vtkHierarchicalDataInformation(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkHierarchicalDataInformation::vtkHierarchicalDataInformation(bool donothing) : vtkObject(donothing) {}



  vtkHierarchicalDataInformation::vtkHierarchicalDataInformation() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkHierarchicalDataInformation::New()));
}



  vtkHierarchicalDataInformation::~vtkHierarchicalDataInformation() { }





} // end namespace vtkFiltering
