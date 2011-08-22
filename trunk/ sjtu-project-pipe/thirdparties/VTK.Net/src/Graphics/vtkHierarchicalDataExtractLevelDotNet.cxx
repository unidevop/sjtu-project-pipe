

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHierarchicalDataExtractLevelDotNet.h"

// native includes
#include "strstream"
#include "vtkHierarchicalDataExtractLevel.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkHierarchicalDataExtractLevel::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractLevel>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHierarchicalDataExtractLevel::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractLevel>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHierarchicalDataExtractLevel^ vtkHierarchicalDataExtractLevel::NewInstance()
{
  ::vtkHierarchicalDataExtractLevel* retVal = static_cast<::vtkHierarchicalDataExtractLevel*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractLevel>(m_instance)->NewInstance());
  return gcnew vtkHierarchicalDataExtractLevel(IntPtr(retVal), false);
}



vtkHierarchicalDataExtractLevel^ vtkHierarchicalDataExtractLevel::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHierarchicalDataExtractLevel* retVal = static_cast<::vtkHierarchicalDataExtractLevel*>(::vtkHierarchicalDataExtractLevel::SafeDownCast(oWrap));
  return gcnew vtkHierarchicalDataExtractLevel(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHierarchicalDataExtractLevel::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractLevel>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHierarchicalDataExtractLevel::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractLevel>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkHierarchicalDataExtractLevel::SetMinLevel(unsigned int arg0)
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractLevel>(m_instance)->SetMinLevel(arg0);
}



unsigned int vtkHierarchicalDataExtractLevel::GetMinLevel()
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractLevel>(m_instance)->GetMinLevel();
  return retVal;
}



void vtkHierarchicalDataExtractLevel::SetMaxLevel(unsigned int arg0)
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractLevel>(m_instance)->SetMaxLevel(arg0);
}



unsigned int vtkHierarchicalDataExtractLevel::GetMaxLevel()
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractLevel>(m_instance)->GetMaxLevel();
  return retVal;
}



void vtkHierarchicalDataExtractLevel::SetLevelRange(unsigned int min, unsigned int max)
{
  vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractLevel>(m_instance)->SetLevelRange(min, max);
}



array<int>^ vtkHierarchicalDataExtractLevel::GetInputLevels()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataExtractLevel>(m_instance)->GetInputLevels();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkHierarchicalDataExtractLevel::vtkHierarchicalDataExtractLevel(System::IntPtr native, bool bConst) : vtkHierarchicalDataSetAlgorithm(native, bConst) {}



  vtkHierarchicalDataExtractLevel::vtkHierarchicalDataExtractLevel(bool donothing) : vtkHierarchicalDataSetAlgorithm(donothing) {}



  vtkHierarchicalDataExtractLevel::vtkHierarchicalDataExtractLevel() : vtkHierarchicalDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkHierarchicalDataExtractLevel::New()));
}



  vtkHierarchicalDataExtractLevel::~vtkHierarchicalDataExtractLevel() { }





} // end namespace vtkGraphics
