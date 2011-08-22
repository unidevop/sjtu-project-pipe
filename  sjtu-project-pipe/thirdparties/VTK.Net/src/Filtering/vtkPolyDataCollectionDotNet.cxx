

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataCollectionDotNet.h"
#include "vtkPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataCollection.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataCollection^ vtkPolyDataCollection::NewInstance()
{
  ::vtkPolyDataCollection* retVal = static_cast<::vtkPolyDataCollection*>(vtk::ConvertManagedToNative<::vtkPolyDataCollection>(m_instance)->NewInstance());
  return gcnew vtkPolyDataCollection(IntPtr(retVal), false);
}



vtkPolyDataCollection^ vtkPolyDataCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolyDataCollection* retVal = static_cast<::vtkPolyDataCollection*>(::vtkPolyDataCollection::SafeDownCast(oWrap));
  return gcnew vtkPolyDataCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPolyDataCollection::AddItem(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataCollection>(m_instance)->AddItem(pdWrap);
}



vtkPolyData^ vtkPolyDataCollection::GetNextItem()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataCollection>(m_instance)->GetNextItem());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



  vtkPolyDataCollection::vtkPolyDataCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkPolyDataCollection::vtkPolyDataCollection(bool donothing) : vtkCollection(donothing) {}



  vtkPolyDataCollection::vtkPolyDataCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataCollection::New()));
}



  vtkPolyDataCollection::~vtkPolyDataCollection() { }





} // end namespace vtkFiltering
