

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkScalarTreeDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkScalarTree.h"
#include "vtkDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkScalarTree::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkScalarTree>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkScalarTree::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkScalarTree>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkScalarTree^ vtkScalarTree::NewInstance()
{
  ::vtkScalarTree* retVal = static_cast<::vtkScalarTree*>(vtk::ConvertManagedToNative<::vtkScalarTree>(m_instance)->NewInstance());
  return gcnew vtkScalarTree(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkScalarTree::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkScalarTree>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkScalarTree::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkScalarTree>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkScalarTree::SetDataSet(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkScalarTree>(m_instance)->SetDataSet(arg0Wrap);
}



vtkDataSet^ vtkScalarTree::GetDataSet()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkScalarTree>(m_instance)->GetDataSet());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkScalarTree::BuildTree()
{
  vtk::ConvertManagedToNative<::vtkScalarTree>(m_instance)->BuildTree();
}



void vtkScalarTree::Initialize()
{
  vtk::ConvertManagedToNative<::vtkScalarTree>(m_instance)->Initialize();
}



void vtkScalarTree::InitTraversal(double scalarValue)
{
  vtk::ConvertManagedToNative<::vtkScalarTree>(m_instance)->InitTraversal(scalarValue);
}



  vtkScalarTree::vtkScalarTree(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkScalarTree::vtkScalarTree(bool donothing) : vtkObject(donothing) {}



  vtkScalarTree::vtkScalarTree() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkScalarTree::New()));
}



  vtkScalarTree::~vtkScalarTree() { }





} // end namespace vtkFiltering
