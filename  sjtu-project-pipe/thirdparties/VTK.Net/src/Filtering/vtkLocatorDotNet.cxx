

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLocatorDotNet.h"
#include "vtkDataSetDotNet.h"
#include "vtkPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkLocator.h"
#include "vtkDataSet.h"
#include "vtkObjectBase.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkLocator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLocator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLocator^ vtkLocator::NewInstance()
{
  ::vtkLocator* retVal = static_cast<::vtkLocator*>(vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->NewInstance());
  return gcnew vtkLocator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLocator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLocator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLocator::SetDataSet(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->SetDataSet(arg0Wrap);
}



vtkDataSet^ vtkLocator::GetDataSet()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetDataSet());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkLocator::SetMaxLevel(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->SetMaxLevel(arg0);
}



int vtkLocator::GetMaxLevelMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetMaxLevelMinValue();
  return retVal;
}



int vtkLocator::GetMaxLevelMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetMaxLevelMaxValue();
  return retVal;
}



int vtkLocator::GetMaxLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetMaxLevel();
  return retVal;
}



int vtkLocator::GetLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetLevel();
  return retVal;
}



void vtkLocator::SetAutomatic(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->SetAutomatic(arg0);
}



int vtkLocator::GetAutomatic()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetAutomatic();
  return retVal;
}



void vtkLocator::AutomaticOn()
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->AutomaticOn();
}



void vtkLocator::AutomaticOff()
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->AutomaticOff();
}



void vtkLocator::SetTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->SetTolerance(arg0);
}



double vtkLocator::GetToleranceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetToleranceMinValue();
  return retVal;
}



double vtkLocator::GetToleranceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetToleranceMaxValue();
  return retVal;
}



double vtkLocator::GetTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetTolerance();
  return retVal;
}



void vtkLocator::SetRetainCellLists(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->SetRetainCellLists(arg0);
}



int vtkLocator::GetRetainCellLists()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetRetainCellLists();
  return retVal;
}



void vtkLocator::RetainCellListsOn()
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->RetainCellListsOn();
}



void vtkLocator::RetainCellListsOff()
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->RetainCellListsOff();
}



void vtkLocator::Update()
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->Update();
}



void vtkLocator::Initialize()
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->Initialize();
}



void vtkLocator::BuildLocator()
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->BuildLocator();
}



void vtkLocator::FreeSearchStructure()
{
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->FreeSearchStructure();
}



void vtkLocator::GenerateRepresentation(int level, vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GenerateRepresentation(level, pdWrap);
}



unsigned long vtkLocator::GetBuildTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->GetBuildTime();
  return retVal;
}



void vtkLocator::Register(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->Register(oWrap);
}



void vtkLocator::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkLocator>(m_instance)->UnRegister(oWrap);
}



  vtkLocator::vtkLocator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkLocator::vtkLocator(bool donothing) : vtkObject(donothing) {}



  vtkLocator::vtkLocator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkLocator::New()));
}



  vtkLocator::~vtkLocator() { }





} // end namespace vtkFiltering
