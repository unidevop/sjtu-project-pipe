

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointDataDotNet.h"

// native includes
#include "strstream"
#include "vtkPointData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPointData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointData^ vtkPointData::NewInstance()
{
  ::vtkPointData* retVal = static_cast<::vtkPointData*>(vtk::ConvertManagedToNative<::vtkPointData>(m_instance)->NewInstance());
  return gcnew vtkPointData(IntPtr(retVal), false);
}



vtkPointData^ vtkPointData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPointData* retVal = static_cast<::vtkPointData*>(::vtkPointData::SafeDownCast(oWrap));
  return gcnew vtkPointData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPointData::NullPoint(int ptId)
{
  vtk::ConvertManagedToNative<::vtkPointData>(m_instance)->NullPoint(ptId);
}



  vtkPointData::vtkPointData(System::IntPtr native, bool bConst) : vtkDataSetAttributes(native, bConst) {}



  vtkPointData::vtkPointData(bool donothing) : vtkDataSetAttributes(donothing) {}



  vtkPointData::vtkPointData() : vtkDataSetAttributes(false) {
  this->SetNativePointer(IntPtr(::vtkPointData::New()));
}



  vtkPointData::~vtkPointData() { }





} // end namespace vtkFiltering
