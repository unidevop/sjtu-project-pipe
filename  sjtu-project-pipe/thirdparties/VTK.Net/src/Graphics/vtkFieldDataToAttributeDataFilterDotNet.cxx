

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFieldDataToAttributeDataFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkFieldDataToAttributeDataFilter.h"
#include "vtkDataArray.h"
#include "vtkFieldData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFieldDataToAttributeDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFieldDataToAttributeDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkFieldDataToAttributeDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFieldDataToAttributeDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFieldDataToAttributeDataFilter^ vtkFieldDataToAttributeDataFilter::NewInstance()
{
  ::vtkFieldDataToAttributeDataFilter* retVal = static_cast<::vtkFieldDataToAttributeDataFilter*>(vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->NewInstance());
  return gcnew vtkFieldDataToAttributeDataFilter(IntPtr(retVal), false);
}



vtkFieldDataToAttributeDataFilter^ vtkFieldDataToAttributeDataFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFieldDataToAttributeDataFilter* retVal = static_cast<::vtkFieldDataToAttributeDataFilter*>(::vtkFieldDataToAttributeDataFilter::SafeDownCast(oWrap));
  return gcnew vtkFieldDataToAttributeDataFilter(IntPtr(retVal), false);
}



void vtkFieldDataToAttributeDataFilter::SetInputField(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetInputField(arg0);
}



int vtkFieldDataToAttributeDataFilter::GetInputField()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetInputField();
  return retVal;
}



void vtkFieldDataToAttributeDataFilter::SetInputFieldToDataObjectField()
{
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetInputFieldToDataObjectField();
}



void vtkFieldDataToAttributeDataFilter::SetInputFieldToPointDataField()
{
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetInputFieldToPointDataField();
}



void vtkFieldDataToAttributeDataFilter::SetInputFieldToCellDataField()
{
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetInputFieldToCellDataField();
}



void vtkFieldDataToAttributeDataFilter::SetOutputAttributeData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetOutputAttributeData(arg0);
}



int vtkFieldDataToAttributeDataFilter::GetOutputAttributeData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetOutputAttributeData();
  return retVal;
}



void vtkFieldDataToAttributeDataFilter::SetOutputAttributeDataToCellData()
{
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetOutputAttributeDataToCellData();
}



void vtkFieldDataToAttributeDataFilter::SetOutputAttributeDataToPointData()
{
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetOutputAttributeDataToPointData();
}



void vtkFieldDataToAttributeDataFilter::SetScalarComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetScalarComponent(comp, arrayNameWrap, arrayComp, min, max, normalize);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkFieldDataToAttributeDataFilter::SetScalarComponent(int comp, System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetScalarComponent(comp, arrayNameWrap, arrayComp);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkFieldDataToAttributeDataFilter::GetScalarComponentArrayName(int comp)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetScalarComponentArrayName(comp);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFieldDataToAttributeDataFilter::GetScalarComponentArrayComponent(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetScalarComponentArrayComponent(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetScalarComponentMinRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetScalarComponentMinRange(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetScalarComponentMaxRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetScalarComponentMaxRange(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetScalarComponentNormalizeFlag(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetScalarComponentNormalizeFlag(comp);
  return retVal;
}



void vtkFieldDataToAttributeDataFilter::SetVectorComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetVectorComponent(comp, arrayNameWrap, arrayComp, min, max, normalize);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkFieldDataToAttributeDataFilter::SetVectorComponent(int comp, System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetVectorComponent(comp, arrayNameWrap, arrayComp);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkFieldDataToAttributeDataFilter::GetVectorComponentArrayName(int comp)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetVectorComponentArrayName(comp);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFieldDataToAttributeDataFilter::GetVectorComponentArrayComponent(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetVectorComponentArrayComponent(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetVectorComponentMinRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetVectorComponentMinRange(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetVectorComponentMaxRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetVectorComponentMaxRange(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetVectorComponentNormalizeFlag(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetVectorComponentNormalizeFlag(comp);
  return retVal;
}



void vtkFieldDataToAttributeDataFilter::SetNormalComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetNormalComponent(comp, arrayNameWrap, arrayComp, min, max, normalize);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkFieldDataToAttributeDataFilter::SetNormalComponent(int comp, System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetNormalComponent(comp, arrayNameWrap, arrayComp);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkFieldDataToAttributeDataFilter::GetNormalComponentArrayName(int comp)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetNormalComponentArrayName(comp);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFieldDataToAttributeDataFilter::GetNormalComponentArrayComponent(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetNormalComponentArrayComponent(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetNormalComponentMinRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetNormalComponentMinRange(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetNormalComponentMaxRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetNormalComponentMaxRange(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetNormalComponentNormalizeFlag(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetNormalComponentNormalizeFlag(comp);
  return retVal;
}



void vtkFieldDataToAttributeDataFilter::SetTensorComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetTensorComponent(comp, arrayNameWrap, arrayComp, min, max, normalize);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkFieldDataToAttributeDataFilter::SetTensorComponent(int comp, System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetTensorComponent(comp, arrayNameWrap, arrayComp);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkFieldDataToAttributeDataFilter::GetTensorComponentArrayName(int comp)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetTensorComponentArrayName(comp);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFieldDataToAttributeDataFilter::GetTensorComponentArrayComponent(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetTensorComponentArrayComponent(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetTensorComponentMinRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetTensorComponentMinRange(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetTensorComponentMaxRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetTensorComponentMaxRange(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetTensorComponentNormalizeFlag(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetTensorComponentNormalizeFlag(comp);
  return retVal;
}



void vtkFieldDataToAttributeDataFilter::SetTCoordComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetTCoordComponent(comp, arrayNameWrap, arrayComp, min, max, normalize);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkFieldDataToAttributeDataFilter::SetTCoordComponent(int comp, System::String^ arrayName, int arrayComp)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetTCoordComponent(comp, arrayNameWrap, arrayComp);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkFieldDataToAttributeDataFilter::GetTCoordComponentArrayName(int comp)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetTCoordComponentArrayName(comp);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFieldDataToAttributeDataFilter::GetTCoordComponentArrayComponent(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetTCoordComponentArrayComponent(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetTCoordComponentMinRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetTCoordComponentMinRange(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetTCoordComponentMaxRange(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetTCoordComponentMaxRange(comp);
  return retVal;
}



int vtkFieldDataToAttributeDataFilter::GetTCoordComponentNormalizeFlag(int comp)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetTCoordComponentNormalizeFlag(comp);
  return retVal;
}



void vtkFieldDataToAttributeDataFilter::SetDefaultNormalize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->SetDefaultNormalize(arg0);
}



int vtkFieldDataToAttributeDataFilter::GetDefaultNormalize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->GetDefaultNormalize();
  return retVal;
}



void vtkFieldDataToAttributeDataFilter::DefaultNormalizeOn()
{
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->DefaultNormalizeOn();
}



void vtkFieldDataToAttributeDataFilter::DefaultNormalizeOff()
{
  vtk::ConvertManagedToNative<::vtkFieldDataToAttributeDataFilter>(m_instance)->DefaultNormalizeOff();
}



int vtkFieldDataToAttributeDataFilter::ConstructArray(vtkDataArray^ da, int comp, vtkDataArray^ frray, int fieldComp, int min, int max, int normalize)
{
  ::vtkDataArray* daWrap = vtk::ConvertManagedToNative<::vtkDataArray>(da->GetNativePointer());
  ::vtkDataArray* frrayWrap = vtk::ConvertManagedToNative<::vtkDataArray>(frray->GetNativePointer());
  int retVal = ::vtkFieldDataToAttributeDataFilter::ConstructArray(daWrap, comp, frrayWrap, fieldComp, min, max, normalize);
  return retVal;
}



vtkDataArray^ vtkFieldDataToAttributeDataFilter::GetFieldArray(vtkFieldData^ fd, System::String^ name, int comp)
{
  ::vtkFieldData* fdWrap = vtk::ConvertManagedToNative<::vtkFieldData>(fd->GetNativePointer());
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(::vtkFieldDataToAttributeDataFilter::GetFieldArray(fdWrap, nameWrap, comp));
  name->Remove(0,name->Length);
  name->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(nameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



  vtkFieldDataToAttributeDataFilter::vtkFieldDataToAttributeDataFilter(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkFieldDataToAttributeDataFilter::vtkFieldDataToAttributeDataFilter(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkFieldDataToAttributeDataFilter::vtkFieldDataToAttributeDataFilter() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkFieldDataToAttributeDataFilter::New()));
}



  vtkFieldDataToAttributeDataFilter::~vtkFieldDataToAttributeDataFilter() { }





} // end namespace vtkGraphics
