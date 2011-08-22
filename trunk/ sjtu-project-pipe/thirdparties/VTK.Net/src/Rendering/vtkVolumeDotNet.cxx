

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeDotNet.h"
#include "vtkAbstractVolumeMapperDotNet.h"
#include "vtkVolumePropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkVolume.h"
#include "vtkAbstractVolumeMapper.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkVolumeProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkVolume::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolume::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolume^ vtkVolume::NewInstance()
{
  ::vtkVolume* retVal = static_cast<::vtkVolume*>(vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->NewInstance());
  return gcnew vtkVolume(IntPtr(retVal), false);
}



vtkVolume^ vtkVolume::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVolume* retVal = static_cast<::vtkVolume*>(::vtkVolume::SafeDownCast(oWrap));
  return gcnew vtkVolume(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolume::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolume::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVolume::SetMapper(vtkAbstractVolumeMapper^ mapper)
{
  ::vtkAbstractVolumeMapper* mapperWrap = vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(mapper->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->SetMapper(mapperWrap);
}



vtkAbstractVolumeMapper^ vtkVolume::GetMapper()
{
  ::vtkAbstractVolumeMapper* retVal = static_cast<::vtkAbstractVolumeMapper*>(vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetMapper());
  return gcnew vtkAbstractVolumeMapper(IntPtr(retVal), false);
}



void vtkVolume::SetProperty(vtkVolumeProperty^ property)
{
  ::vtkVolumeProperty* propertyWrap = vtk::ConvertManagedToNative<::vtkVolumeProperty>(property->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->SetProperty(propertyWrap);
}



vtkVolumeProperty^ vtkVolume::GetProperty()
{
  ::vtkVolumeProperty* retVal = static_cast<::vtkVolumeProperty*>(vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetProperty());
  return gcnew vtkVolumeProperty(IntPtr(retVal), false);
}



void vtkVolume::GetVolumes(vtkPropCollection^ vc)
{
  ::vtkPropCollection* vcWrap = vtk::ConvertManagedToNative<::vtkPropCollection>(vc->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetVolumes(vcWrap);
}



void vtkVolume::Update()
{
  vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->Update();
}



array<double>^ vtkVolume::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVolume::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetBounds(nativeboundsPin);
}



double vtkVolume::GetMinXBound()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetMinXBound();
  return retVal;
}



double vtkVolume::GetMaxXBound()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetMaxXBound();
  return retVal;
}



double vtkVolume::GetMinYBound()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetMinYBound();
  return retVal;
}



double vtkVolume::GetMaxYBound()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetMaxYBound();
  return retVal;
}



double vtkVolume::GetMinZBound()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetMinZBound();
  return retVal;
}



double vtkVolume::GetMaxZBound()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetMaxZBound();
  return retVal;
}



unsigned long vtkVolume::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetMTime();
  return retVal;
}



unsigned long vtkVolume::GetRedrawMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->GetRedrawMTime();
  return retVal;
}



void vtkVolume::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolume>(m_instance)->ShallowCopy(propWrap);
}



  vtkVolume::vtkVolume(System::IntPtr native, bool bConst) : vtkProp3D(native, bConst) {}



  vtkVolume::vtkVolume(bool donothing) : vtkProp3D(donothing) {}



  vtkVolume::vtkVolume() : vtkProp3D(false) {
  this->SetNativePointer(IntPtr(::vtkVolume::New()));
}



  vtkVolume::~vtkVolume() { }





} // end namespace vtkRendering
