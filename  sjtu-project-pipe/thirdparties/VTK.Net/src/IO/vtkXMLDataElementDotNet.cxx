

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLDataElementDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLDataElement.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLDataElement::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLDataElement::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLDataElement^ vtkXMLDataElement::NewInstance()
{
  ::vtkXMLDataElement* retVal = static_cast<::vtkXMLDataElement*>(vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->NewInstance());
  return gcnew vtkXMLDataElement(IntPtr(retVal), false);
}



vtkXMLDataElement^ vtkXMLDataElement::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLDataElement* retVal = static_cast<::vtkXMLDataElement*>(::vtkXMLDataElement::SafeDownCast(oWrap));
  return gcnew vtkXMLDataElement(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLDataElement::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLDataElement::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkXMLDataElement::GetName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkXMLDataElement::SetName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkXMLDataElement::GetId()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetId();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkXMLDataElement::SetId(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetId(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkXMLDataElement::GetAttribute(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetAttribute(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkXMLDataElement::SetAttribute(System::String^ name, System::String^ value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  char* valueWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(value).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetAttribute(nameWrap, valueWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(valueWrap));
}



int vtkXMLDataElement::GetScalarAttribute(System::String^ name, int% value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<int> valuePin = &value;
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetScalarAttribute(nameWrap, *valuePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkXMLDataElement::GetScalarAttribute(System::String^ name, float% value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<float> valuePin = &value;
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetScalarAttribute(nameWrap, *valuePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkXMLDataElement::GetScalarAttribute(System::String^ name, double% value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<double> valuePin = &value;
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetScalarAttribute(nameWrap, *valuePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkXMLDataElement::GetScalarAttribute(System::String^ name, unsigned long% arg1)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<unsigned long> arg1Pin = &arg1;
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetScalarAttribute(nameWrap, *arg1Pin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkXMLDataElement::SetIntAttribute(System::String^ name, int value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetIntAttribute(nameWrap, value);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkXMLDataElement::SetFloatAttribute(System::String^ name, float value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetFloatAttribute(nameWrap, value);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkXMLDataElement::SetDoubleAttribute(System::String^ name, double value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetDoubleAttribute(nameWrap, value);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkXMLDataElement::SetUnsignedLongAttribute(System::String^ name, unsigned long value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetUnsignedLongAttribute(nameWrap, value);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



int vtkXMLDataElement::GetVectorAttribute(System::String^ name, int length, array<int>^ value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<int> valuePin = &value[0];
  int* nativevaluePin = valuePin;
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetVectorAttribute(nameWrap, length, nativevaluePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkXMLDataElement::GetVectorAttribute(System::String^ name, int length, array<float>^ value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<float> valuePin = &value[0];
  float* nativevaluePin = valuePin;
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetVectorAttribute(nameWrap, length, nativevaluePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkXMLDataElement::GetVectorAttribute(System::String^ name, int length, array<double>^ value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<double> valuePin = &value[0];
  double* nativevaluePin = valuePin;
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetVectorAttribute(nameWrap, length, nativevaluePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkXMLDataElement::GetVectorAttribute(System::String^ name, int length, array<unsigned long>^ value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<unsigned long> valuePin = &value[0];
  unsigned long* nativevaluePin = valuePin;
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetVectorAttribute(nameWrap, length, nativevaluePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkXMLDataElement::SetVectorAttribute(System::String^ name, int length, array<int>^ arg2)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<int> arg2Pin = &arg2[0];
  int* nativearg2Pin = arg2Pin;
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetVectorAttribute(nameWrap, length, nativearg2Pin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkXMLDataElement::SetVectorAttribute(System::String^ name, int length, array<float>^ value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<float> valuePin = &value[0];
  float* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetVectorAttribute(nameWrap, length, nativevaluePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkXMLDataElement::SetVectorAttribute(System::String^ name, int length, array<double>^ value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<double> valuePin = &value[0];
  double* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetVectorAttribute(nameWrap, length, nativevaluePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkXMLDataElement::SetVectorAttribute(System::String^ name, int length, array<unsigned long>^ value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<unsigned long> valuePin = &value[0];
  unsigned long* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetVectorAttribute(nameWrap, length, nativevaluePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



int vtkXMLDataElement::GetWordTypeAttribute(System::String^ name, int% value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  pin_ptr<int> valuePin = &value;
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetWordTypeAttribute(nameWrap, *valuePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkXMLDataElement::GetNumberOfAttributes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetNumberOfAttributes();
  return retVal;
}



System::String^ vtkXMLDataElement::GetAttributeName(int idx)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetAttributeName(idx);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkXMLDataElement::GetAttributeValue(int idx)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetAttributeValue(idx);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkXMLDataElement::RemoveAllAttributes()
{
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->RemoveAllAttributes();
}



vtkXMLDataElement^ vtkXMLDataElement::GetParent()
{
  ::vtkXMLDataElement* retVal = static_cast<::vtkXMLDataElement*>(vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetParent());
  return gcnew vtkXMLDataElement(IntPtr(retVal), false);
}



void vtkXMLDataElement::SetParent(vtkXMLDataElement^ parent)
{
  ::vtkXMLDataElement* parentWrap = vtk::ConvertManagedToNative<::vtkXMLDataElement>(parent->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetParent(parentWrap);
}



vtkXMLDataElement^ vtkXMLDataElement::GetRoot()
{
  ::vtkXMLDataElement* retVal = static_cast<::vtkXMLDataElement*>(vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetRoot());
  return gcnew vtkXMLDataElement(IntPtr(retVal), false);
}



int vtkXMLDataElement::GetNumberOfNestedElements()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetNumberOfNestedElements();
  return retVal;
}



vtkXMLDataElement^ vtkXMLDataElement::GetNestedElement(int index)
{
  ::vtkXMLDataElement* retVal = static_cast<::vtkXMLDataElement*>(vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetNestedElement(index));
  return gcnew vtkXMLDataElement(IntPtr(retVal), false);
}



void vtkXMLDataElement::AddNestedElement(vtkXMLDataElement^ element)
{
  ::vtkXMLDataElement* elementWrap = vtk::ConvertManagedToNative<::vtkXMLDataElement>(element->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->AddNestedElement(elementWrap);
}



void vtkXMLDataElement::RemoveNestedElement(vtkXMLDataElement^ arg0)
{
  ::vtkXMLDataElement* arg0Wrap = vtk::ConvertManagedToNative<::vtkXMLDataElement>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->RemoveNestedElement(arg0Wrap);
}



void vtkXMLDataElement::RemoveAllNestedElements()
{
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->RemoveAllNestedElements();
}



vtkXMLDataElement^ vtkXMLDataElement::FindNestedElement(System::String^ id)
{
  char* idWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(id).ToPointer());
  ::vtkXMLDataElement* retVal = static_cast<::vtkXMLDataElement*>(vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->FindNestedElement(idWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(idWrap));
  return gcnew vtkXMLDataElement(IntPtr(retVal), false);
}



vtkXMLDataElement^ vtkXMLDataElement::FindNestedElementWithName(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkXMLDataElement* retVal = static_cast<::vtkXMLDataElement*>(vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->FindNestedElementWithName(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return gcnew vtkXMLDataElement(IntPtr(retVal), false);
}



vtkXMLDataElement^ vtkXMLDataElement::FindNestedElementWithNameAndId(System::String^ name, System::String^ id)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  char* idWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(id).ToPointer());
  ::vtkXMLDataElement* retVal = static_cast<::vtkXMLDataElement*>(vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->FindNestedElementWithNameAndId(nameWrap, idWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(idWrap));
  return gcnew vtkXMLDataElement(IntPtr(retVal), false);
}



vtkXMLDataElement^ vtkXMLDataElement::FindNestedElementWithNameAndAttribute(System::String^ name, System::String^ att_name, System::String^ att_value)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  char* att_nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(att_name).ToPointer());
  char* att_valueWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(att_value).ToPointer());
  ::vtkXMLDataElement* retVal = static_cast<::vtkXMLDataElement*>(vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->FindNestedElementWithNameAndAttribute(nameWrap, att_nameWrap, att_valueWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(att_nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(att_valueWrap));
  return gcnew vtkXMLDataElement(IntPtr(retVal), false);
}



vtkXMLDataElement^ vtkXMLDataElement::LookupElement(System::String^ id)
{
  char* idWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(id).ToPointer());
  ::vtkXMLDataElement* retVal = static_cast<::vtkXMLDataElement*>(vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->LookupElement(idWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(idWrap));
  return gcnew vtkXMLDataElement(IntPtr(retVal), false);
}



unsigned long vtkXMLDataElement::GetXMLByteIndex()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetXMLByteIndex();
  return retVal;
}



void vtkXMLDataElement::SetXMLByteIndex(unsigned long arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetXMLByteIndex(arg0);
}



int vtkXMLDataElement::IsEqualTo(vtkXMLDataElement^ elem)
{
  ::vtkXMLDataElement* elemWrap = vtk::ConvertManagedToNative<::vtkXMLDataElement>(elem->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->IsEqualTo(elemWrap);
  return retVal;
}



void vtkXMLDataElement::DeepCopy(vtkXMLDataElement^ elem)
{
  ::vtkXMLDataElement* elemWrap = vtk::ConvertManagedToNative<::vtkXMLDataElement>(elem->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->DeepCopy(elemWrap);
}



void vtkXMLDataElement::SetAttributeEncoding(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->SetAttributeEncoding(arg0);
}



int vtkXMLDataElement::GetAttributeEncodingMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetAttributeEncodingMinValue();
  return retVal;
}



int vtkXMLDataElement::GetAttributeEncodingMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetAttributeEncodingMaxValue();
  return retVal;
}



int vtkXMLDataElement::GetAttributeEncoding()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataElement>(m_instance)->GetAttributeEncoding();
  return retVal;
}



  vtkXMLDataElement::vtkXMLDataElement(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkXMLDataElement::vtkXMLDataElement(bool donothing) : vtkObject(donothing) {}



  vtkXMLDataElement::vtkXMLDataElement() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkXMLDataElement::New()));
}



  vtkXMLDataElement::~vtkXMLDataElement() { }





} // end namespace vtkIO
