

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSpherePuzzleArrowsDotNet.h"
#include "vtkSpherePuzzleDotNet.h"

// native includes
#include "strstream"
#include "vtkSpherePuzzleArrows.h"
#include "vtkObject.h"
#include "vtkSpherePuzzle.h"

using namespace System;

namespace vtk {

System::String^ vtkSpherePuzzleArrows::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSpherePuzzleArrows>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSpherePuzzleArrows::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSpherePuzzleArrows>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSpherePuzzleArrows^ vtkSpherePuzzleArrows::NewInstance()
{
  ::vtkSpherePuzzleArrows* retVal = static_cast<::vtkSpherePuzzleArrows*>(vtk::ConvertManagedToNative<::vtkSpherePuzzleArrows>(m_instance)->NewInstance());
  return gcnew vtkSpherePuzzleArrows(IntPtr(retVal), false);
}



vtkSpherePuzzleArrows^ vtkSpherePuzzleArrows::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSpherePuzzleArrows* retVal = static_cast<::vtkSpherePuzzleArrows*>(::vtkSpherePuzzleArrows::SafeDownCast(oWrap));
  return gcnew vtkSpherePuzzleArrows(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSpherePuzzleArrows::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSpherePuzzleArrows>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSpherePuzzleArrows::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSpherePuzzleArrows>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSpherePuzzleArrows::SetPermutation(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkSpherePuzzleArrows>(m_instance)->SetPermutation(nativearg0Pin);
}



array<int>^ vtkSpherePuzzleArrows::GetPermutation()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkSpherePuzzleArrows>(m_instance)->GetPermutation();
  array<int>^ mRetVal = gcnew array<int>(32);
  for (size_t cprIdx=0; cprIdx<32; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkSpherePuzzleArrows::SetPermutationComponent(int comp, int val)
{
  vtk::ConvertManagedToNative<::vtkSpherePuzzleArrows>(m_instance)->SetPermutationComponent(comp, val);
}



void vtkSpherePuzzleArrows::SetPermutation(vtkSpherePuzzle^ puz)
{
  ::vtkSpherePuzzle* puzWrap = vtk::ConvertManagedToNative<::vtkSpherePuzzle>(puz->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSpherePuzzleArrows>(m_instance)->SetPermutation(puzWrap);
}



  vtkSpherePuzzleArrows::vtkSpherePuzzleArrows(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSpherePuzzleArrows::vtkSpherePuzzleArrows(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSpherePuzzleArrows::vtkSpherePuzzleArrows() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSpherePuzzleArrows::New()));
}



  vtkSpherePuzzleArrows::~vtkSpherePuzzleArrows() { }





} // end namespace vtkGraphics
