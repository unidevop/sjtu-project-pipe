

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericAttributeDotNet.h"
#include "vtkGenericAdaptorCellDotNet.h"
#include "vtkGenericCellIteratorDotNet.h"
#include "vtkGenericPointIteratorDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericAttribute.h"
#include "vtkGenericAdaptorCell.h"
#include "vtkGenericCellIterator.h"
#include "vtkGenericPointIterator.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericAttribute::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericAttribute::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericAttribute^ vtkGenericAttribute::NewInstance()
{
  ::vtkGenericAttribute* retVal = static_cast<::vtkGenericAttribute*>(vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->NewInstance());
  return gcnew vtkGenericAttribute(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericAttribute::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericAttribute::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkGenericAttribute::GetName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericAttribute::GetNumberOfComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetNumberOfComponents();
  return retVal;
}



int vtkGenericAttribute::GetCentering()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetCentering();
  return retVal;
}



int vtkGenericAttribute::GetType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetType();
  return retVal;
}



int vtkGenericAttribute::GetComponentType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetComponentType();
  return retVal;
}



int vtkGenericAttribute::GetSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetSize();
  return retVal;
}



unsigned long vtkGenericAttribute::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkGenericAttribute::GetRange(int component, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetRange(component, nativerangePin);
}



double vtkGenericAttribute::GetMaxNorm()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetMaxNorm();
  return retVal;
}



void vtkGenericAttribute::GetTuple(vtkGenericAdaptorCell^ c, array<double>^ tuple)
{
  ::vtkGenericAdaptorCell* cWrap = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(c->GetNativePointer());
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetTuple(cWrap, nativetuplePin);
}



void vtkGenericAttribute::GetTuple(vtkGenericCellIterator^ c, array<double>^ tuple)
{
  ::vtkGenericCellIterator* cWrap = vtk::ConvertManagedToNative<::vtkGenericCellIterator>(c->GetNativePointer());
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetTuple(cWrap, nativetuplePin);
}



void vtkGenericAttribute::GetTuple(vtkGenericPointIterator^ p, array<double>^ tuple)
{
  ::vtkGenericPointIterator* pWrap = vtk::ConvertManagedToNative<::vtkGenericPointIterator>(p->GetNativePointer());
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetTuple(pWrap, nativetuplePin);
}



void vtkGenericAttribute::GetComponent(int i, vtkGenericCellIterator^ c, array<double>^ values)
{
  ::vtkGenericCellIterator* cWrap = vtk::ConvertManagedToNative<::vtkGenericCellIterator>(c->GetNativePointer());
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetComponent(i, cWrap, nativevaluesPin);
}



double vtkGenericAttribute::GetComponent(int i, vtkGenericPointIterator^ p)
{
  ::vtkGenericPointIterator* pWrap = vtk::ConvertManagedToNative<::vtkGenericPointIterator>(p->GetNativePointer());
  double retVal = vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->GetComponent(i, pWrap);
  return retVal;
}



void vtkGenericAttribute::DeepCopy(vtkGenericAttribute^ other)
{
  ::vtkGenericAttribute* otherWrap = vtk::ConvertManagedToNative<::vtkGenericAttribute>(other->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->DeepCopy(otherWrap);
}



void vtkGenericAttribute::ShallowCopy(vtkGenericAttribute^ other)
{
  ::vtkGenericAttribute* otherWrap = vtk::ConvertManagedToNative<::vtkGenericAttribute>(other->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAttribute>(m_instance)->ShallowCopy(otherWrap);
}



  vtkGenericAttribute::vtkGenericAttribute(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkGenericAttribute::vtkGenericAttribute(bool donothing) : vtkObject(donothing) {}



  vtkGenericAttribute::vtkGenericAttribute() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkGenericAttribute::New()));
}



  vtkGenericAttribute::~vtkGenericAttribute() { }





} // end namespace vtkFiltering
