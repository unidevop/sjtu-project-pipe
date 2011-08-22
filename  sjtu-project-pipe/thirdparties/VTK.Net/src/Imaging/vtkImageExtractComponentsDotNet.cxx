

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageExtractComponentsDotNet.h"

// native includes
#include "strstream"
#include "vtkImageExtractComponents.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageExtractComponents::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageExtractComponents>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageExtractComponents::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageExtractComponents>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageExtractComponents^ vtkImageExtractComponents::NewInstance()
{
  ::vtkImageExtractComponents* retVal = static_cast<::vtkImageExtractComponents*>(vtk::ConvertManagedToNative<::vtkImageExtractComponents>(m_instance)->NewInstance());
  return gcnew vtkImageExtractComponents(IntPtr(retVal), false);
}



vtkImageExtractComponents^ vtkImageExtractComponents::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageExtractComponents* retVal = static_cast<::vtkImageExtractComponents*>(::vtkImageExtractComponents::SafeDownCast(oWrap));
  return gcnew vtkImageExtractComponents(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageExtractComponents::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageExtractComponents>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageExtractComponents::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageExtractComponents>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageExtractComponents::SetComponents(int c1)
{
  vtk::ConvertManagedToNative<::vtkImageExtractComponents>(m_instance)->SetComponents(c1);
}



void vtkImageExtractComponents::SetComponents(int c1, int c2)
{
  vtk::ConvertManagedToNative<::vtkImageExtractComponents>(m_instance)->SetComponents(c1, c2);
}



void vtkImageExtractComponents::SetComponents(int c1, int c2, int c3)
{
  vtk::ConvertManagedToNative<::vtkImageExtractComponents>(m_instance)->SetComponents(c1, c2, c3);
}



array<int>^ vtkImageExtractComponents::GetComponents()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageExtractComponents>(m_instance)->GetComponents();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkImageExtractComponents::GetNumberOfComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageExtractComponents>(m_instance)->GetNumberOfComponents();
  return retVal;
}



  vtkImageExtractComponents::vtkImageExtractComponents(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageExtractComponents::vtkImageExtractComponents(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageExtractComponents::vtkImageExtractComponents() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageExtractComponents::New()));
}



  vtkImageExtractComponents::~vtkImageExtractComponents() { }





} // end namespace vtkImaging
