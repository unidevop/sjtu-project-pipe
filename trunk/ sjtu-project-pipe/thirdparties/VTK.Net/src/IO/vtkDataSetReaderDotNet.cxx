

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetReader.h"
#include "vtkDataSet.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkRectilinearGrid.h"
#include "vtkStructuredGrid.h"
#include "vtkStructuredPoints.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetReader^ vtkDataSetReader::NewInstance()
{
  ::vtkDataSetReader* retVal = static_cast<::vtkDataSetReader*>(vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->NewInstance());
  return gcnew vtkDataSetReader(IntPtr(retVal), false);
}



vtkDataSetReader^ vtkDataSetReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataSetReader* retVal = static_cast<::vtkDataSetReader*>(::vtkDataSetReader::SafeDownCast(oWrap));
  return gcnew vtkDataSetReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkDataSet^ vtkDataSetReader::GetOutput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->GetOutput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkDataSetReader::GetOutput(int idx)
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->GetOutput(idx));
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkPolyData^ vtkDataSetReader::GetPolyDataOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->GetPolyDataOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkStructuredPoints^ vtkDataSetReader::GetStructuredPointsOutput()
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->GetStructuredPointsOutput());
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkDataSetReader::GetStructuredGridOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->GetStructuredGridOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkDataSetReader::GetUnstructuredGridOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->GetUnstructuredGridOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkDataSetReader::GetRectilinearGridOutput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->GetRectilinearGridOutput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



int vtkDataSetReader::ReadOutputType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetReader>(m_instance)->ReadOutputType();
  return retVal;
}



  vtkDataSetReader::vtkDataSetReader(System::IntPtr native, bool bConst) : vtkDataReader(native, bConst) {}



  vtkDataSetReader::vtkDataSetReader(bool donothing) : vtkDataReader(donothing) {}



  vtkDataSetReader::vtkDataSetReader() : vtkDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetReader::New()));
}



  vtkDataSetReader::~vtkDataSetReader() { }





} // end namespace vtkIO
