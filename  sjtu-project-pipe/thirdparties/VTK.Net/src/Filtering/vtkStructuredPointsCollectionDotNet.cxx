

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredPointsCollectionDotNet.h"
#include "vtkStructuredPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredPointsCollection.h"
#include "vtkObject.h"
#include "vtkStructuredPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredPointsCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredPointsCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredPointsCollection^ vtkStructuredPointsCollection::NewInstance()
{
  ::vtkStructuredPointsCollection* retVal = static_cast<::vtkStructuredPointsCollection*>(vtk::ConvertManagedToNative<::vtkStructuredPointsCollection>(m_instance)->NewInstance());
  return gcnew vtkStructuredPointsCollection(IntPtr(retVal), false);
}



vtkStructuredPointsCollection^ vtkStructuredPointsCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredPointsCollection* retVal = static_cast<::vtkStructuredPointsCollection*>(::vtkStructuredPointsCollection::SafeDownCast(oWrap));
  return gcnew vtkStructuredPointsCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredPointsCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredPointsCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredPointsCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredPointsCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStructuredPointsCollection::AddItem(vtkStructuredPoints^ ds)
{
  ::vtkStructuredPoints* dsWrap = vtk::ConvertManagedToNative<::vtkStructuredPoints>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredPointsCollection>(m_instance)->AddItem(dsWrap);
}



vtkStructuredPoints^ vtkStructuredPointsCollection::GetNextItem()
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkStructuredPointsCollection>(m_instance)->GetNextItem());
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



  vtkStructuredPointsCollection::vtkStructuredPointsCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkStructuredPointsCollection::vtkStructuredPointsCollection(bool donothing) : vtkCollection(donothing) {}



  vtkStructuredPointsCollection::vtkStructuredPointsCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredPointsCollection::New()));
}



  vtkStructuredPointsCollection::~vtkStructuredPointsCollection() { }





} // end namespace vtkFiltering
