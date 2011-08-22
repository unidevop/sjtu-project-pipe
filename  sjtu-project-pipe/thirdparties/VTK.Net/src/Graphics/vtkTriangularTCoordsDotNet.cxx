

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTriangularTCoordsDotNet.h"

// native includes
#include "strstream"
#include "vtkTriangularTCoords.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTriangularTCoords::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTriangularTCoords>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTriangularTCoords::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTriangularTCoords>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTriangularTCoords^ vtkTriangularTCoords::NewInstance()
{
  ::vtkTriangularTCoords* retVal = static_cast<::vtkTriangularTCoords*>(vtk::ConvertManagedToNative<::vtkTriangularTCoords>(m_instance)->NewInstance());
  return gcnew vtkTriangularTCoords(IntPtr(retVal), false);
}



vtkTriangularTCoords^ vtkTriangularTCoords::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTriangularTCoords* retVal = static_cast<::vtkTriangularTCoords*>(::vtkTriangularTCoords::SafeDownCast(oWrap));
  return gcnew vtkTriangularTCoords(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTriangularTCoords::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTriangularTCoords>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTriangularTCoords::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTriangularTCoords>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkTriangularTCoords::vtkTriangularTCoords(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkTriangularTCoords::vtkTriangularTCoords(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkTriangularTCoords::vtkTriangularTCoords() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTriangularTCoords::New()));
}



  vtkTriangularTCoords::~vtkTriangularTCoords() { }





} // end namespace vtkGraphics
