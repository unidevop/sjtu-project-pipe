

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericAttributeCollectionDotNet.h"
#include "vtkGenericAttributeDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericAttributeCollection.h"
#include "vtkGenericAttribute.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericAttributeCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericAttributeCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericAttributeCollection^ vtkGenericAttributeCollection::NewInstance()
{
  ::vtkGenericAttributeCollection* retVal = static_cast<::vtkGenericAttributeCollection*>(vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->NewInstance());
  return gcnew vtkGenericAttributeCollection(IntPtr(retVal), false);
}



vtkGenericAttributeCollection^ vtkGenericAttributeCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericAttributeCollection* retVal = static_cast<::vtkGenericAttributeCollection*>(::vtkGenericAttributeCollection::SafeDownCast(oWrap));
  return gcnew vtkGenericAttributeCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericAttributeCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericAttributeCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkGenericAttributeCollection::GetNumberOfAttributes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetNumberOfAttributes();
  return retVal;
}



int vtkGenericAttributeCollection::GetNumberOfComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetNumberOfComponents();
  return retVal;
}



int vtkGenericAttributeCollection::GetNumberOfPointCenteredComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetNumberOfPointCenteredComponents();
  return retVal;
}



int vtkGenericAttributeCollection::GetMaxNumberOfComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetMaxNumberOfComponents();
  return retVal;
}



unsigned long vtkGenericAttributeCollection::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetActualMemorySize();
  return retVal;
}



int vtkGenericAttributeCollection::IsEmpty()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->IsEmpty();
  return retVal;
}



vtkGenericAttribute^ vtkGenericAttributeCollection::GetAttribute(int i)
{
  ::vtkGenericAttribute* retVal = static_cast<::vtkGenericAttribute*>(vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetAttribute(i));
  return gcnew vtkGenericAttribute(IntPtr(retVal), false);
}



int vtkGenericAttributeCollection::FindAttribute(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->FindAttribute(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkGenericAttributeCollection::GetAttributeIndex(int i)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetAttributeIndex(i);
  return retVal;
}



void vtkGenericAttributeCollection::InsertNextAttribute(vtkGenericAttribute^ a)
{
  ::vtkGenericAttribute* aWrap = vtk::ConvertManagedToNative<::vtkGenericAttribute>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->InsertNextAttribute(aWrap);
}



void vtkGenericAttributeCollection::InsertAttribute(int i, vtkGenericAttribute^ a)
{
  ::vtkGenericAttribute* aWrap = vtk::ConvertManagedToNative<::vtkGenericAttribute>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->InsertAttribute(i, aWrap);
}



void vtkGenericAttributeCollection::RemoveAttribute(int i)
{
  vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->RemoveAttribute(i);
}



void vtkGenericAttributeCollection::Reset()
{
  vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->Reset();
}



void vtkGenericAttributeCollection::DeepCopy(vtkGenericAttributeCollection^ other)
{
  ::vtkGenericAttributeCollection* otherWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(other->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->DeepCopy(otherWrap);
}



void vtkGenericAttributeCollection::ShallowCopy(vtkGenericAttributeCollection^ other)
{
  ::vtkGenericAttributeCollection* otherWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(other->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->ShallowCopy(otherWrap);
}



unsigned long vtkGenericAttributeCollection::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetMTime();
  return retVal;
}



int vtkGenericAttributeCollection::GetActiveAttribute()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetActiveAttribute();
  return retVal;
}



int vtkGenericAttributeCollection::GetActiveComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetActiveComponent();
  return retVal;
}



void vtkGenericAttributeCollection::SetActiveAttribute(int attribute, int component)
{
  vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->SetActiveAttribute(attribute, component);
}



int vtkGenericAttributeCollection::GetNumberOfAttributesToInterpolate()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->GetNumberOfAttributesToInterpolate();
  return retVal;
}



int vtkGenericAttributeCollection::HasAttribute(int size, array<int>^ attributes, int attribute)
{
  pin_ptr<int> attributesPin = &attributes[0];
  int* nativeattributesPin = attributesPin;
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->HasAttribute(size, nativeattributesPin, attribute);
  return retVal;
}



void vtkGenericAttributeCollection::SetAttributesToInterpolate(int size, array<int>^ attributes)
{
  pin_ptr<int> attributesPin = &attributes[0];
  int* nativeattributesPin = attributesPin;
  vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->SetAttributesToInterpolate(size, nativeattributesPin);
}



void vtkGenericAttributeCollection::SetAttributesToInterpolateToAll()
{
  vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(m_instance)->SetAttributesToInterpolateToAll();
}



  vtkGenericAttributeCollection::vtkGenericAttributeCollection(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkGenericAttributeCollection::vtkGenericAttributeCollection(bool donothing) : vtkObject(donothing) {}



  vtkGenericAttributeCollection::vtkGenericAttributeCollection() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkGenericAttributeCollection::New()));
}



  vtkGenericAttributeCollection::~vtkGenericAttributeCollection() { }





} // end namespace vtkFiltering
