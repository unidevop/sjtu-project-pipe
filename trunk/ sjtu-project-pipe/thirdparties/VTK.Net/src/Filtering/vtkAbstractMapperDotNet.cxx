

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAbstractMapperDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkAbstractMapper.h"
#include "vtkDataArray.h"
#include "vtkDataSet.h"
#include "vtkPlane.h"
#include "vtkPlaneCollection.h"
#include "vtkPlanes.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkAbstractMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAbstractMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAbstractMapper^ vtkAbstractMapper::NewInstance()
{
  ::vtkAbstractMapper* retVal = static_cast<::vtkAbstractMapper*>(vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->NewInstance());
  return gcnew vtkAbstractMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAbstractMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAbstractMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkAbstractMapper::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->GetMTime();
  return retVal;
}



void vtkAbstractMapper::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



double vtkAbstractMapper::GetTimeToDraw()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->GetTimeToDraw();
  return retVal;
}



void vtkAbstractMapper::AddClippingPlane(vtkPlane^ plane)
{
  ::vtkPlane* planeWrap = vtk::ConvertManagedToNative<::vtkPlane>(plane->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->AddClippingPlane(planeWrap);
}



void vtkAbstractMapper::RemoveClippingPlane(vtkPlane^ plane)
{
  ::vtkPlane* planeWrap = vtk::ConvertManagedToNative<::vtkPlane>(plane->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->RemoveClippingPlane(planeWrap);
}



void vtkAbstractMapper::RemoveAllClippingPlanes()
{
  vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->RemoveAllClippingPlanes();
}



void vtkAbstractMapper::SetClippingPlanes(vtkPlaneCollection^ arg0)
{
  ::vtkPlaneCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkPlaneCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->SetClippingPlanes(arg0Wrap);
}



vtkPlaneCollection^ vtkAbstractMapper::GetClippingPlanes()
{
  ::vtkPlaneCollection* retVal = static_cast<::vtkPlaneCollection*>(vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->GetClippingPlanes());
  return gcnew vtkPlaneCollection(IntPtr(retVal), false);
}



void vtkAbstractMapper::SetClippingPlanes(vtkPlanes^ planes)
{
  ::vtkPlanes* planesWrap = vtk::ConvertManagedToNative<::vtkPlanes>(planes->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->SetClippingPlanes(planesWrap);
}



void vtkAbstractMapper::ShallowCopy(vtkAbstractMapper^ m)
{
  ::vtkAbstractMapper* mWrap = vtk::ConvertManagedToNative<::vtkAbstractMapper>(m->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractMapper>(m_instance)->ShallowCopy(mWrap);
}



vtkDataArray^ vtkAbstractMapper::GetScalars(vtkDataSet^ input, int scalarMode, int arrayAccessMode, int arrayId, System::String^ arrayName, int% cellFlag)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  pin_ptr<int> cellFlagPin = &cellFlag;
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(::vtkAbstractMapper::GetScalars(inputWrap, scalarMode, arrayAccessMode, arrayId, arrayNameWrap, *cellFlagPin));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



  vtkAbstractMapper::vtkAbstractMapper(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkAbstractMapper::vtkAbstractMapper(bool donothing) : vtkAlgorithm(donothing) {}



  vtkAbstractMapper::vtkAbstractMapper() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkAbstractMapper::New()));
}



  vtkAbstractMapper::~vtkAbstractMapper() { }





} // end namespace vtkFiltering
