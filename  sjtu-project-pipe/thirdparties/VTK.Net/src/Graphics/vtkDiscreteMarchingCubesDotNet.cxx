

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDiscreteMarchingCubesDotNet.h"

// native includes
#include "strstream"
#include "vtkDiscreteMarchingCubes.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDiscreteMarchingCubes::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDiscreteMarchingCubes>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDiscreteMarchingCubes::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDiscreteMarchingCubes>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDiscreteMarchingCubes^ vtkDiscreteMarchingCubes::NewInstance()
{
  ::vtkDiscreteMarchingCubes* retVal = static_cast<::vtkDiscreteMarchingCubes*>(vtk::ConvertManagedToNative<::vtkDiscreteMarchingCubes>(m_instance)->NewInstance());
  return gcnew vtkDiscreteMarchingCubes(IntPtr(retVal), false);
}



vtkDiscreteMarchingCubes^ vtkDiscreteMarchingCubes::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDiscreteMarchingCubes* retVal = static_cast<::vtkDiscreteMarchingCubes*>(::vtkDiscreteMarchingCubes::SafeDownCast(oWrap));
  return gcnew vtkDiscreteMarchingCubes(IntPtr(retVal), false);
}



  vtkDiscreteMarchingCubes::vtkDiscreteMarchingCubes(System::IntPtr native, bool bConst) : vtkMarchingCubes(native, bConst) {}



  vtkDiscreteMarchingCubes::vtkDiscreteMarchingCubes(bool donothing) : vtkMarchingCubes(donothing) {}



  vtkDiscreteMarchingCubes::vtkDiscreteMarchingCubes() : vtkMarchingCubes(false) {
  this->SetNativePointer(IntPtr(::vtkDiscreteMarchingCubes::New()));
}



  vtkDiscreteMarchingCubes::~vtkDiscreteMarchingCubes() { }





} // end namespace vtkGraphics
