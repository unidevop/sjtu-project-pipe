

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSimpleScalarTreeDotNet.h"

// native includes
#include "strstream"
#include "vtkSimpleScalarTree.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSimpleScalarTree::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSimpleScalarTree::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSimpleScalarTree^ vtkSimpleScalarTree::NewInstance()
{
  ::vtkSimpleScalarTree* retVal = static_cast<::vtkSimpleScalarTree*>(vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->NewInstance());
  return gcnew vtkSimpleScalarTree(IntPtr(retVal), false);
}



vtkSimpleScalarTree^ vtkSimpleScalarTree::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSimpleScalarTree* retVal = static_cast<::vtkSimpleScalarTree*>(::vtkSimpleScalarTree::SafeDownCast(oWrap));
  return gcnew vtkSimpleScalarTree(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSimpleScalarTree::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSimpleScalarTree::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSimpleScalarTree::SetBranchingFactor(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->SetBranchingFactor(arg0);
}



int vtkSimpleScalarTree::GetBranchingFactorMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->GetBranchingFactorMinValue();
  return retVal;
}



int vtkSimpleScalarTree::GetBranchingFactorMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->GetBranchingFactorMaxValue();
  return retVal;
}



int vtkSimpleScalarTree::GetBranchingFactor()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->GetBranchingFactor();
  return retVal;
}



int vtkSimpleScalarTree::GetLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->GetLevel();
  return retVal;
}



void vtkSimpleScalarTree::SetMaxLevel(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->SetMaxLevel(arg0);
}



int vtkSimpleScalarTree::GetMaxLevelMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->GetMaxLevelMinValue();
  return retVal;
}



int vtkSimpleScalarTree::GetMaxLevelMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->GetMaxLevelMaxValue();
  return retVal;
}



int vtkSimpleScalarTree::GetMaxLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->GetMaxLevel();
  return retVal;
}



void vtkSimpleScalarTree::BuildTree()
{
  vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->BuildTree();
}



void vtkSimpleScalarTree::Initialize()
{
  vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->Initialize();
}



void vtkSimpleScalarTree::InitTraversal(double scalarValue)
{
  vtk::ConvertManagedToNative<::vtkSimpleScalarTree>(m_instance)->InitTraversal(scalarValue);
}



  vtkSimpleScalarTree::vtkSimpleScalarTree(System::IntPtr native, bool bConst) : vtkScalarTree(native, bConst) {}



  vtkSimpleScalarTree::vtkSimpleScalarTree(bool donothing) : vtkScalarTree(donothing) {}



  vtkSimpleScalarTree::vtkSimpleScalarTree() : vtkScalarTree(false) {
  this->SetNativePointer(IntPtr(::vtkSimpleScalarTree::New()));
}



  vtkSimpleScalarTree::~vtkSimpleScalarTree() { }





} // end namespace vtkFiltering
