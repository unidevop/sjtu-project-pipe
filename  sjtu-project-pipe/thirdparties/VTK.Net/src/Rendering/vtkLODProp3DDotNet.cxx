

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLODProp3DDotNet.h"
#include "vtkAbstractMapper3DDotNet.h"
#include "vtkAbstractVolumeMapperDotNet.h"
#include "vtkMapperDotNet.h"
#include "vtkPropertyDotNet.h"
#include "vtkTextureDotNet.h"
#include "vtkVolumePropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkLODProp3D.h"
#include "vtkAbstractMapper3D.h"
#include "vtkAbstractVolumeMapper.h"
#include "vtkMapper.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkProperty.h"
#include "vtkTexture.h"
#include "vtkVolumeProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkLODProp3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLODProp3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLODProp3D^ vtkLODProp3D::NewInstance()
{
  ::vtkLODProp3D* retVal = static_cast<::vtkLODProp3D*>(vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->NewInstance());
  return gcnew vtkLODProp3D(IntPtr(retVal), false);
}



vtkLODProp3D^ vtkLODProp3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLODProp3D* retVal = static_cast<::vtkLODProp3D*>(::vtkLODProp3D::SafeDownCast(oWrap));
  return gcnew vtkLODProp3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLODProp3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLODProp3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




array<double>^ vtkLODProp3D::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLODProp3D::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetBounds(nativeboundsPin);
}



int vtkLODProp3D::AddLOD(vtkMapper^ m, vtkProperty^ p, vtkProperty^ back, vtkTexture^ t, double time)
{
  ::vtkMapper* mWrap = vtk::ConvertManagedToNative<::vtkMapper>(m->GetNativePointer());
  ::vtkProperty* pWrap = vtk::ConvertManagedToNative<::vtkProperty>(p->GetNativePointer());
  ::vtkProperty* backWrap = vtk::ConvertManagedToNative<::vtkProperty>(back->GetNativePointer());
  ::vtkTexture* tWrap = vtk::ConvertManagedToNative<::vtkTexture>(t->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AddLOD(mWrap, pWrap, backWrap, tWrap, time);
  return retVal;
}



int vtkLODProp3D::AddLOD(vtkMapper^ m, vtkProperty^ p, vtkTexture^ t, double time)
{
  ::vtkMapper* mWrap = vtk::ConvertManagedToNative<::vtkMapper>(m->GetNativePointer());
  ::vtkProperty* pWrap = vtk::ConvertManagedToNative<::vtkProperty>(p->GetNativePointer());
  ::vtkTexture* tWrap = vtk::ConvertManagedToNative<::vtkTexture>(t->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AddLOD(mWrap, pWrap, tWrap, time);
  return retVal;
}



int vtkLODProp3D::AddLOD(vtkMapper^ m, vtkProperty^ p, vtkProperty^ back, double time)
{
  ::vtkMapper* mWrap = vtk::ConvertManagedToNative<::vtkMapper>(m->GetNativePointer());
  ::vtkProperty* pWrap = vtk::ConvertManagedToNative<::vtkProperty>(p->GetNativePointer());
  ::vtkProperty* backWrap = vtk::ConvertManagedToNative<::vtkProperty>(back->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AddLOD(mWrap, pWrap, backWrap, time);
  return retVal;
}



int vtkLODProp3D::AddLOD(vtkMapper^ m, vtkProperty^ p, double time)
{
  ::vtkMapper* mWrap = vtk::ConvertManagedToNative<::vtkMapper>(m->GetNativePointer());
  ::vtkProperty* pWrap = vtk::ConvertManagedToNative<::vtkProperty>(p->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AddLOD(mWrap, pWrap, time);
  return retVal;
}



int vtkLODProp3D::AddLOD(vtkMapper^ m, vtkTexture^ t, double time)
{
  ::vtkMapper* mWrap = vtk::ConvertManagedToNative<::vtkMapper>(m->GetNativePointer());
  ::vtkTexture* tWrap = vtk::ConvertManagedToNative<::vtkTexture>(t->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AddLOD(mWrap, tWrap, time);
  return retVal;
}



int vtkLODProp3D::AddLOD(vtkMapper^ m, double time)
{
  ::vtkMapper* mWrap = vtk::ConvertManagedToNative<::vtkMapper>(m->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AddLOD(mWrap, time);
  return retVal;
}



int vtkLODProp3D::AddLOD(vtkAbstractVolumeMapper^ m, vtkVolumeProperty^ p, double time)
{
  ::vtkAbstractVolumeMapper* mWrap = vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(m->GetNativePointer());
  ::vtkVolumeProperty* pWrap = vtk::ConvertManagedToNative<::vtkVolumeProperty>(p->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AddLOD(mWrap, pWrap, time);
  return retVal;
}



int vtkLODProp3D::AddLOD(vtkAbstractVolumeMapper^ m, double time)
{
  ::vtkAbstractVolumeMapper* mWrap = vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(m->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AddLOD(mWrap, time);
  return retVal;
}



int vtkLODProp3D::GetNumberOfLODs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetNumberOfLODs();
  return retVal;
}



int vtkLODProp3D::GetCurrentIndex()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetCurrentIndex();
  return retVal;
}



void vtkLODProp3D::RemoveLOD(int id)
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->RemoveLOD(id);
}



void vtkLODProp3D::SetLODProperty(int id, vtkProperty^ p)
{
  ::vtkProperty* pWrap = vtk::ConvertManagedToNative<::vtkProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->SetLODProperty(id, pWrap);
}



void vtkLODProp3D::SetLODProperty(int id, vtkVolumeProperty^ p)
{
  ::vtkVolumeProperty* pWrap = vtk::ConvertManagedToNative<::vtkVolumeProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->SetLODProperty(id, pWrap);
}



void vtkLODProp3D::SetLODMapper(int id, vtkMapper^ m)
{
  ::vtkMapper* mWrap = vtk::ConvertManagedToNative<::vtkMapper>(m->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->SetLODMapper(id, mWrap);
}



void vtkLODProp3D::SetLODMapper(int id, vtkAbstractVolumeMapper^ m)
{
  ::vtkAbstractVolumeMapper* mWrap = vtk::ConvertManagedToNative<::vtkAbstractVolumeMapper>(m->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->SetLODMapper(id, mWrap);
}



vtkAbstractMapper3D^ vtkLODProp3D::GetLODMapper(int id)
{
  ::vtkAbstractMapper3D* retVal = static_cast<::vtkAbstractMapper3D*>(vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetLODMapper(id));
  return gcnew vtkAbstractMapper3D(IntPtr(retVal), false);
}



void vtkLODProp3D::SetLODBackfaceProperty(int id, vtkProperty^ t)
{
  ::vtkProperty* tWrap = vtk::ConvertManagedToNative<::vtkProperty>(t->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->SetLODBackfaceProperty(id, tWrap);
}



void vtkLODProp3D::SetLODTexture(int id, vtkTexture^ t)
{
  ::vtkTexture* tWrap = vtk::ConvertManagedToNative<::vtkTexture>(t->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->SetLODTexture(id, tWrap);
}



void vtkLODProp3D::EnableLOD(int id)
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->EnableLOD(id);
}



void vtkLODProp3D::DisableLOD(int id)
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->DisableLOD(id);
}



int vtkLODProp3D::IsLODEnabled(int id)
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->IsLODEnabled(id);
  return retVal;
}



void vtkLODProp3D::SetLODLevel(int id, double level)
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->SetLODLevel(id, level);
}



double vtkLODProp3D::GetLODLevel(int id)
{
  double retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetLODLevel(id);
  return retVal;
}



double vtkLODProp3D::GetLODIndexLevel(int index)
{
  double retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetLODIndexLevel(index);
  return retVal;
}



double vtkLODProp3D::GetLODEstimatedRenderTime(int id)
{
  double retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetLODEstimatedRenderTime(id);
  return retVal;
}



double vtkLODProp3D::GetLODIndexEstimatedRenderTime(int index)
{
  double retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetLODIndexEstimatedRenderTime(index);
  return retVal;
}



void vtkLODProp3D::SetAutomaticLODSelection(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->SetAutomaticLODSelection(arg0);
}



int vtkLODProp3D::GetAutomaticLODSelectionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetAutomaticLODSelectionMinValue();
  return retVal;
}



int vtkLODProp3D::GetAutomaticLODSelectionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetAutomaticLODSelectionMaxValue();
  return retVal;
}



int vtkLODProp3D::GetAutomaticLODSelection()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetAutomaticLODSelection();
  return retVal;
}



void vtkLODProp3D::AutomaticLODSelectionOn()
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AutomaticLODSelectionOn();
}



void vtkLODProp3D::AutomaticLODSelectionOff()
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AutomaticLODSelectionOff();
}



void vtkLODProp3D::SetSelectedLODID(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->SetSelectedLODID(arg0);
}



int vtkLODProp3D::GetSelectedLODID()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetSelectedLODID();
  return retVal;
}



int vtkLODProp3D::GetLastRenderedLODID()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetLastRenderedLODID();
  return retVal;
}



int vtkLODProp3D::GetPickLODID()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetPickLODID();
  return retVal;
}



void vtkLODProp3D::GetActors(vtkPropCollection^ arg0)
{
  ::vtkPropCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkPropCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetActors(arg0Wrap);
}



void vtkLODProp3D::SetSelectedPickLODID(int id)
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->SetSelectedPickLODID(id);
}



int vtkLODProp3D::GetSelectedPickLODID()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetSelectedPickLODID();
  return retVal;
}



void vtkLODProp3D::SetAutomaticPickLODSelection(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->SetAutomaticPickLODSelection(arg0);
}



int vtkLODProp3D::GetAutomaticPickLODSelectionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetAutomaticPickLODSelectionMinValue();
  return retVal;
}



int vtkLODProp3D::GetAutomaticPickLODSelectionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetAutomaticPickLODSelectionMaxValue();
  return retVal;
}



int vtkLODProp3D::GetAutomaticPickLODSelection()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->GetAutomaticPickLODSelection();
  return retVal;
}



void vtkLODProp3D::AutomaticPickLODSelectionOn()
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AutomaticPickLODSelectionOn();
}



void vtkLODProp3D::AutomaticPickLODSelectionOff()
{
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->AutomaticPickLODSelectionOff();
}



void vtkLODProp3D::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODProp3D>(m_instance)->ShallowCopy(propWrap);
}



  vtkLODProp3D::vtkLODProp3D(System::IntPtr native, bool bConst) : vtkProp3D(native, bConst) {}



  vtkLODProp3D::vtkLODProp3D(bool donothing) : vtkProp3D(donothing) {}



  vtkLODProp3D::vtkLODProp3D() : vtkProp3D(false) {
  this->SetNativePointer(IntPtr(::vtkLODProp3D::New()));
}



  vtkLODProp3D::~vtkLODProp3D() { }





} // end namespace vtkRendering
