

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkExecutiveDotNet.h"
#include "vtkInformationDataObjectKeyDotNet.h"
#include "vtkInformationDoubleKeyDotNet.h"
#include "vtkInformationDoubleVectorKeyDotNet.h"
#include "vtkInformationExecutivePortKeyDotNet.h"
#include "vtkInformationExecutivePortVectorKeyDotNet.h"
#include "vtkInformationIdTypeKeyDotNet.h"
#include "vtkInformationInformationKeyDotNet.h"
#include "vtkInformationInformationVectorKeyDotNet.h"
#include "vtkInformationIntegerKeyDotNet.h"
#include "vtkInformationIntegerPointerKeyDotNet.h"
#include "vtkInformationIntegerVectorKeyDotNet.h"
#include "vtkInformationKeyDotNet.h"
#include "vtkInformationKeyVectorKeyDotNet.h"
#include "vtkInformationObjectBaseKeyDotNet.h"
#include "vtkInformationRequestKeyDotNet.h"
#include "vtkInformationStringKeyDotNet.h"
#include "vtkInformationUnsignedLongKeyDotNet.h"
#include "vtkInformationVectorDotNet.h"

// native includes
#include "strstream"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkExecutive.h"
#include "vtkInformationDataObjectKey.h"
#include "vtkInformationDoubleKey.h"
#include "vtkInformationDoubleVectorKey.h"
#include "vtkInformationExecutivePortKey.h"
#include "vtkInformationExecutivePortVectorKey.h"
#include "vtkInformationIdTypeKey.h"
#include "vtkInformationInformationKey.h"
#include "vtkInformationInformationVectorKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationIntegerPointerKey.h"
#include "vtkInformationIntegerVectorKey.h"
#include "vtkInformationKey.h"
#include "vtkInformationKeyVectorKey.h"
#include "vtkInformationObjectBaseKey.h"
#include "vtkInformationRequestKey.h"
#include "vtkInformationStringKey.h"
#include "vtkInformationUnsignedLongKey.h"
#include "vtkInformationVector.h"
#include "vtkObjectBase.h"

using namespace System;

namespace vtk {

System::String^ vtkInformation::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformation::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformation^ vtkInformation::NewInstance()
{
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->NewInstance());
  return gcnew vtkInformation(IntPtr(retVal), false);
}



vtkInformation^ vtkInformation::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(::vtkInformation::SafeDownCast(oWrap));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformation::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformation::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformation::Clear()
{
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Clear();
}



void vtkInformation::Copy(vtkInformation^ from, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Copy(fromWrap, deep);
}



void vtkInformation::CopyEntry(vtkInformation^ from, vtkInformationKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntry(fromWrap, keyWrap, deep);
}



void vtkInformation::CopyEntry(vtkInformation^ from, vtkInformationDataObjectKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationDataObjectKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntry(fromWrap, keyWrap, deep);
}



void vtkInformation::CopyEntry(vtkInformation^ from, vtkInformationDoubleVectorKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationDoubleVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntry(fromWrap, keyWrap, deep);
}



void vtkInformation::CopyEntry(vtkInformation^ from, vtkInformationExecutivePortKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationExecutivePortKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntry(fromWrap, keyWrap, deep);
}



void vtkInformation::CopyEntry(vtkInformation^ from, vtkInformationInformationKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationInformationKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntry(fromWrap, keyWrap, deep);
}



void vtkInformation::CopyEntry(vtkInformation^ from, vtkInformationInformationVectorKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationInformationVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntry(fromWrap, keyWrap, deep);
}



void vtkInformation::CopyEntry(vtkInformation^ from, vtkInformationIntegerKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationIntegerKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntry(fromWrap, keyWrap, deep);
}



void vtkInformation::CopyEntry(vtkInformation^ from, vtkInformationIntegerVectorKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationIntegerVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntry(fromWrap, keyWrap, deep);
}



void vtkInformation::CopyEntry(vtkInformation^ from, vtkInformationRequestKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationRequestKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationRequestKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntry(fromWrap, keyWrap, deep);
}



void vtkInformation::CopyEntry(vtkInformation^ from, vtkInformationStringKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationStringKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationStringKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntry(fromWrap, keyWrap, deep);
}



void vtkInformation::CopyEntry(vtkInformation^ from, vtkInformationUnsignedLongKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationUnsignedLongKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntry(fromWrap, keyWrap, deep);
}



void vtkInformation::CopyEntries(vtkInformation^ from, vtkInformationKeyVectorKey^ key, int deep)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformationKeyVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->CopyEntries(fromWrap, keyWrap, deep);
}



void vtkInformation::Set(vtkInformationRequestKey^ key)
{
  ::vtkInformationRequestKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationRequestKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap);
}



void vtkInformation::Remove(vtkInformationRequestKey^ key)
{
  ::vtkInformationRequestKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationRequestKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationRequestKey^ key)
{
  ::vtkInformationRequestKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationRequestKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Set(vtkInformationIntegerKey^ key, int value)
{
  ::vtkInformationIntegerKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, value);
}



int vtkInformation::Get(vtkInformationIntegerKey^ key)
{
  ::vtkInformationIntegerKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap);
  return retVal;
}



void vtkInformation::Remove(vtkInformationIntegerKey^ key)
{
  ::vtkInformationIntegerKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationIntegerKey^ key)
{
  ::vtkInformationIntegerKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Set(vtkInformationIdTypeKey^ key, int value)
{
  ::vtkInformationIdTypeKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, value);
}



int vtkInformation::Get(vtkInformationIdTypeKey^ key)
{
  ::vtkInformationIdTypeKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap);
  return retVal;
}



void vtkInformation::Remove(vtkInformationIdTypeKey^ key)
{
  ::vtkInformationIdTypeKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationIdTypeKey^ key)
{
  ::vtkInformationIdTypeKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Set(vtkInformationDoubleKey^ key, double value)
{
  ::vtkInformationDoubleKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, value);
}



double vtkInformation::Get(vtkInformationDoubleKey^ key)
{
  ::vtkInformationDoubleKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(key->GetNativePointer());
  double retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap);
  return retVal;
}



void vtkInformation::Remove(vtkInformationDoubleKey^ key)
{
  ::vtkInformationDoubleKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationDoubleKey^ key)
{
  ::vtkInformationDoubleKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Append(vtkInformationIntegerVectorKey^ key, int value)
{
  ::vtkInformationIntegerVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Append(keyWrap, value);
}



void vtkInformation::Set(vtkInformationIntegerVectorKey^ key, array<int>^ value, int length)
{
  ::vtkInformationIntegerVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(key->GetNativePointer());
  pin_ptr<int> valuePin = &value[0];
  int* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, nativevaluePin, length);
}



void vtkInformation::Set(vtkInformationIntegerVectorKey^ key, int value1, int value2, int value3)
{
  ::vtkInformationIntegerVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, value1, value2, value3);
}



void vtkInformation::Set(vtkInformationIntegerVectorKey^ key, int value1, int value2, int value3, int value4, int value5, int value6)
{
  ::vtkInformationIntegerVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, value1, value2, value3, value4, value5, value6);
}



void vtkInformation::Get(vtkInformationIntegerVectorKey^ key, array<int>^ value)
{
  ::vtkInformationIntegerVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(key->GetNativePointer());
  pin_ptr<int> valuePin = &value[0];
  int* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap, nativevaluePin);
}



int vtkInformation::Length(vtkInformationIntegerVectorKey^ key)
{
  ::vtkInformationIntegerVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Length(keyWrap);
  return retVal;
}



void vtkInformation::Remove(vtkInformationIntegerVectorKey^ key)
{
  ::vtkInformationIntegerVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationIntegerVectorKey^ key)
{
  ::vtkInformationIntegerVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Set(vtkInformationIntegerPointerKey^ key, array<int>^ value, int length)
{
  ::vtkInformationIntegerPointerKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(key->GetNativePointer());
  pin_ptr<int> valuePin = &value[0];
  int* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, nativevaluePin, length);
}



void vtkInformation::Get(vtkInformationIntegerPointerKey^ key, array<int>^ value)
{
  ::vtkInformationIntegerPointerKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(key->GetNativePointer());
  pin_ptr<int> valuePin = &value[0];
  int* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap, nativevaluePin);
}



int vtkInformation::Length(vtkInformationIntegerPointerKey^ key)
{
  ::vtkInformationIntegerPointerKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Length(keyWrap);
  return retVal;
}



void vtkInformation::Remove(vtkInformationIntegerPointerKey^ key)
{
  ::vtkInformationIntegerPointerKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationIntegerPointerKey^ key)
{
  ::vtkInformationIntegerPointerKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Set(vtkInformationUnsignedLongKey^ key, unsigned long value)
{
  ::vtkInformationUnsignedLongKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, value);
}



unsigned long vtkInformation::Get(vtkInformationUnsignedLongKey^ key)
{
  ::vtkInformationUnsignedLongKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(key->GetNativePointer());
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap);
  return retVal;
}



void vtkInformation::Remove(vtkInformationUnsignedLongKey^ key)
{
  ::vtkInformationUnsignedLongKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationUnsignedLongKey^ key)
{
  ::vtkInformationUnsignedLongKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Append(vtkInformationDoubleVectorKey^ key, double value)
{
  ::vtkInformationDoubleVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Append(keyWrap, value);
}



void vtkInformation::Set(vtkInformationDoubleVectorKey^ key, array<double>^ value, int length)
{
  ::vtkInformationDoubleVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(key->GetNativePointer());
  pin_ptr<double> valuePin = &value[0];
  double* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, nativevaluePin, length);
}



void vtkInformation::Set(vtkInformationDoubleVectorKey^ key, double value1, double value2, double value3)
{
  ::vtkInformationDoubleVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, value1, value2, value3);
}



void vtkInformation::Set(vtkInformationDoubleVectorKey^ key, double value1, double value2, double value3, double value4, double value5, double value6)
{
  ::vtkInformationDoubleVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, value1, value2, value3, value4, value5, value6);
}



void vtkInformation::Get(vtkInformationDoubleVectorKey^ key, array<double>^ value)
{
  ::vtkInformationDoubleVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(key->GetNativePointer());
  pin_ptr<double> valuePin = &value[0];
  double* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap, nativevaluePin);
}



int vtkInformation::Length(vtkInformationDoubleVectorKey^ key)
{
  ::vtkInformationDoubleVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Length(keyWrap);
  return retVal;
}



void vtkInformation::Remove(vtkInformationDoubleVectorKey^ key)
{
  ::vtkInformationDoubleVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationDoubleVectorKey^ key)
{
  ::vtkInformationDoubleVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Append(vtkInformationKeyVectorKey^ key, vtkInformationKey^ value)
{
  ::vtkInformationKeyVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(key->GetNativePointer());
  ::vtkInformationKey* valueWrap = vtk::ConvertManagedToNative<::vtkInformationKey>(value->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Append(keyWrap, valueWrap);
}



void vtkInformation::AppendUnique(vtkInformationKeyVectorKey^ key, vtkInformationKey^ value)
{
  ::vtkInformationKeyVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(key->GetNativePointer());
  ::vtkInformationKey* valueWrap = vtk::ConvertManagedToNative<::vtkInformationKey>(value->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->AppendUnique(keyWrap, valueWrap);
}



void vtkInformation::Remove(vtkInformationKeyVectorKey^ key, vtkInformationKey^ value)
{
  ::vtkInformationKeyVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(key->GetNativePointer());
  ::vtkInformationKey* valueWrap = vtk::ConvertManagedToNative<::vtkInformationKey>(value->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap, valueWrap);
}



int vtkInformation::Length(vtkInformationKeyVectorKey^ key)
{
  ::vtkInformationKeyVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Length(keyWrap);
  return retVal;
}



void vtkInformation::Remove(vtkInformationKeyVectorKey^ key)
{
  ::vtkInformationKeyVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationKeyVectorKey^ key)
{
  ::vtkInformationKeyVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Set(vtkInformationStringKey^ key, System::String^ arg1)
{
  ::vtkInformationStringKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationStringKey>(key->GetNativePointer());
  char* arg1Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg1).ToPointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, arg1Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg1Wrap));
}



System::String^ vtkInformation::Get(vtkInformationStringKey^ key)
{
  ::vtkInformationStringKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationStringKey>(key->GetNativePointer());
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkInformation::Remove(vtkInformationStringKey^ key)
{
  ::vtkInformationStringKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationStringKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationStringKey^ key)
{
  ::vtkInformationStringKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationStringKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Set(vtkInformationInformationKey^ key, vtkInformation^ arg1)
{
  ::vtkInformationInformationKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationKey>(key->GetNativePointer());
  ::vtkInformation* arg1Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, arg1Wrap);
}



vtkInformation^ vtkInformation::Get(vtkInformationInformationKey^ key)
{
  ::vtkInformationInformationKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationKey>(key->GetNativePointer());
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



void vtkInformation::Remove(vtkInformationInformationKey^ key)
{
  ::vtkInformationInformationKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationInformationKey^ key)
{
  ::vtkInformationInformationKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Set(vtkInformationInformationVectorKey^ key, vtkInformationVector^ arg1)
{
  ::vtkInformationInformationVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(key->GetNativePointer());
  ::vtkInformationVector* arg1Wrap = vtk::ConvertManagedToNative<::vtkInformationVector>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, arg1Wrap);
}



vtkInformationVector^ vtkInformation::Get(vtkInformationInformationVectorKey^ key)
{
  ::vtkInformationInformationVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(key->GetNativePointer());
  ::vtkInformationVector* retVal = static_cast<::vtkInformationVector*>(vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap));
  return gcnew vtkInformationVector(IntPtr(retVal), false);
}



void vtkInformation::Remove(vtkInformationInformationVectorKey^ key)
{
  ::vtkInformationInformationVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationInformationVectorKey^ key)
{
  ::vtkInformationInformationVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Set(vtkInformationObjectBaseKey^ key, vtkObjectBase^ arg1)
{
  ::vtkInformationObjectBaseKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(key->GetNativePointer());
  ::vtkObjectBase* arg1Wrap = static_cast<::vtkObjectBase*>(arg1->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, arg1Wrap);
}



vtkObjectBase^ vtkInformation::Get(vtkInformationObjectBaseKey^ key)
{
  ::vtkInformationObjectBaseKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(key->GetNativePointer());
  ::vtkObjectBase* retVal = static_cast<::vtkObjectBase*>(vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap));
  return gcnew vtkObjectBase(IntPtr(retVal), false);
}



void vtkInformation::Remove(vtkInformationObjectBaseKey^ key)
{
  ::vtkInformationObjectBaseKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationObjectBaseKey^ key)
{
  ::vtkInformationObjectBaseKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Set(vtkInformationDataObjectKey^ key, vtkDataObject^ arg1)
{
  ::vtkInformationDataObjectKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(key->GetNativePointer());
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, arg1Wrap);
}



vtkDataObject^ vtkInformation::Get(vtkInformationDataObjectKey^ key)
{
  ::vtkInformationDataObjectKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(key->GetNativePointer());
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Get(keyWrap));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkInformation::Remove(vtkInformationDataObjectKey^ key)
{
  ::vtkInformationDataObjectKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationDataObjectKey^ key)
{
  ::vtkInformationDataObjectKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Set(vtkInformationExecutivePortKey^ key, vtkExecutive^ arg1, int arg2)
{
  ::vtkInformationExecutivePortKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(key->GetNativePointer());
  ::vtkExecutive* arg1Wrap = vtk::ConvertManagedToNative<::vtkExecutive>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Set(keyWrap, arg1Wrap, arg2);
}



vtkExecutive^ vtkInformation::GetExecutive(vtkInformationExecutivePortKey^ key)
{
  ::vtkInformationExecutivePortKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(key->GetNativePointer());
  ::vtkExecutive* retVal = static_cast<::vtkExecutive*>(vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->GetExecutive(keyWrap));
  return gcnew vtkExecutive(IntPtr(retVal), false);
}



int vtkInformation::GetPort(vtkInformationExecutivePortKey^ key)
{
  ::vtkInformationExecutivePortKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->GetPort(keyWrap);
  return retVal;
}



void vtkInformation::Remove(vtkInformationExecutivePortKey^ key)
{
  ::vtkInformationExecutivePortKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationExecutivePortKey^ key)
{
  ::vtkInformationExecutivePortKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



void vtkInformation::Append(vtkInformationExecutivePortVectorKey^ key, vtkExecutive^ executive, int port)
{
  ::vtkInformationExecutivePortVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(key->GetNativePointer());
  ::vtkExecutive* executiveWrap = vtk::ConvertManagedToNative<::vtkExecutive>(executive->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Append(keyWrap, executiveWrap, port);
}



void vtkInformation::Remove(vtkInformationExecutivePortVectorKey^ key, vtkExecutive^ executive, int port)
{
  ::vtkInformationExecutivePortVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(key->GetNativePointer());
  ::vtkExecutive* executiveWrap = vtk::ConvertManagedToNative<::vtkExecutive>(executive->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap, executiveWrap, port);
}



int vtkInformation::Length(vtkInformationExecutivePortVectorKey^ key)
{
  ::vtkInformationExecutivePortVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Length(keyWrap);
  return retVal;
}



void vtkInformation::Remove(vtkInformationExecutivePortVectorKey^ key)
{
  ::vtkInformationExecutivePortVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(key->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Remove(keyWrap);
}



int vtkInformation::Has(vtkInformationExecutivePortVectorKey^ key)
{
  ::vtkInformationExecutivePortVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(key->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Has(keyWrap);
  return retVal;
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationDataObjectKey^ key)
{
  ::vtkInformationDataObjectKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationDoubleKey^ key)
{
  ::vtkInformationDoubleKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationDoubleVectorKey^ key)
{
  ::vtkInformationDoubleVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationExecutivePortKey^ key)
{
  ::vtkInformationExecutivePortKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationInformationKey^ key)
{
  ::vtkInformationInformationKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationInformationVectorKey^ key)
{
  ::vtkInformationInformationVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationIntegerKey^ key)
{
  ::vtkInformationIntegerKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationIntegerVectorKey^ key)
{
  ::vtkInformationIntegerVectorKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationRequestKey^ key)
{
  ::vtkInformationRequestKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationRequestKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationStringKey^ key)
{
  ::vtkInformationStringKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationStringKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationKey^ key)
{
  ::vtkInformationKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



vtkInformationKey^ vtkInformation::GetKey(vtkInformationUnsignedLongKey^ key)
{
  ::vtkInformationUnsignedLongKey* keyWrap = vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(key->GetNativePointer());
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(::vtkInformation::GetKey(keyWrap));
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



void vtkInformation::Register(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->Register(oWrap);
}



void vtkInformation::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->UnRegister(oWrap);
}



void vtkInformation::SetRequest(vtkInformationRequestKey^ request)
{
  ::vtkInformationRequestKey* requestWrap = vtk::ConvertManagedToNative<::vtkInformationRequestKey>(request->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->SetRequest(requestWrap);
}



vtkInformationRequestKey^ vtkInformation::GetRequest()
{
  ::vtkInformationRequestKey* retVal = static_cast<::vtkInformationRequestKey*>(vtk::ConvertManagedToNative<::vtkInformation>(m_instance)->GetRequest());
  return gcnew vtkInformationRequestKey(IntPtr(retVal), false);
}



  vtkInformation::vtkInformation(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkInformation::vtkInformation(bool donothing) : vtkObject(donothing) {}



  vtkInformation::vtkInformation() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkInformation::New()));
}



  vtkInformation::~vtkInformation() { }





} // end namespace vtkFiltering
