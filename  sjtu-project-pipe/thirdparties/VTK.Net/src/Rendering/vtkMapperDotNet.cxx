

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMapperDotNet.h"
#include "vtkActorDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkMapper.h"
#include "vtkAbstractMapper.h"
#include "vtkActor.h"
#include "vtkDataSet.h"
#include "vtkRenderer.h"
#include "vtkScalarsToColors.h"
#include "vtkUnsignedCharArray.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMapper^ vtkMapper::NewInstance()
{
  ::vtkMapper* retVal = static_cast<::vtkMapper*>(vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->NewInstance());
  return gcnew vtkMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMapper::ShallowCopy(vtkAbstractMapper^ m)
{
  ::vtkAbstractMapper* mWrap = vtk::ConvertManagedToNative<::vtkAbstractMapper>(m->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->ShallowCopy(mWrap);
}



unsigned long vtkMapper::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetMTime();
  return retVal;
}



void vtkMapper::Render(vtkRenderer^ ren, vtkActor^ a)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkActor* aWrap = vtk::ConvertManagedToNative<::vtkActor>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->Render(renWrap, aWrap);
}



void vtkMapper::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkMapper::SetLookupTable(vtkScalarsToColors^ lut)
{
  ::vtkScalarsToColors* lutWrap = vtk::ConvertManagedToNative<::vtkScalarsToColors>(lut->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetLookupTable(lutWrap);
}



vtkScalarsToColors^ vtkMapper::GetLookupTable()
{
  ::vtkScalarsToColors* retVal = static_cast<::vtkScalarsToColors*>(vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetLookupTable());
  return gcnew vtkScalarsToColors(IntPtr(retVal), false);
}



void vtkMapper::CreateDefaultLookupTable()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->CreateDefaultLookupTable();
}



void vtkMapper::SetScalarVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarVisibility(arg0);
}



int vtkMapper::GetScalarVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetScalarVisibility();
  return retVal;
}



void vtkMapper::ScalarVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->ScalarVisibilityOn();
}



void vtkMapper::ScalarVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->ScalarVisibilityOff();
}



void vtkMapper::SetStatic(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetStatic(arg0);
}



int vtkMapper::GetStatic()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetStatic();
  return retVal;
}



void vtkMapper::StaticOn()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->StaticOn();
}



void vtkMapper::StaticOff()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->StaticOff();
}



void vtkMapper::SetColorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetColorMode(arg0);
}



int vtkMapper::GetColorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetColorMode();
  return retVal;
}



void vtkMapper::SetColorModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetColorModeToDefault();
}



void vtkMapper::SetColorModeToMapScalars()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetColorModeToMapScalars();
}



System::String^ vtkMapper::GetColorModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetColorModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMapper::SetInterpolateScalarsBeforeMapping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetInterpolateScalarsBeforeMapping(arg0);
}



int vtkMapper::GetInterpolateScalarsBeforeMapping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetInterpolateScalarsBeforeMapping();
  return retVal;
}



void vtkMapper::InterpolateScalarsBeforeMappingOn()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->InterpolateScalarsBeforeMappingOn();
}



void vtkMapper::InterpolateScalarsBeforeMappingOff()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->InterpolateScalarsBeforeMappingOff();
}



void vtkMapper::SetUseLookupTableScalarRange(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetUseLookupTableScalarRange(arg0);
}



int vtkMapper::GetUseLookupTableScalarRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetUseLookupTableScalarRange();
  return retVal;
}



void vtkMapper::UseLookupTableScalarRangeOn()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->UseLookupTableScalarRangeOn();
}



void vtkMapper::UseLookupTableScalarRangeOff()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->UseLookupTableScalarRangeOff();
}



void vtkMapper::SetScalarRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarRange(arg0, arg1);
}



void vtkMapper::SetScalarRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarRange(nativeaPin);
}



array<double>^ vtkMapper::GetScalarRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetScalarRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkMapper::SetImmediateModeRendering(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetImmediateModeRendering(arg0);
}



int vtkMapper::GetImmediateModeRendering()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetImmediateModeRendering();
  return retVal;
}



void vtkMapper::ImmediateModeRenderingOn()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->ImmediateModeRenderingOn();
}



void vtkMapper::ImmediateModeRenderingOff()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->ImmediateModeRenderingOff();
}



void vtkMapper::SetGlobalImmediateModeRendering(int val)
{
  ::vtkMapper::SetGlobalImmediateModeRendering(val);
}



void vtkMapper::GlobalImmediateModeRenderingOn()
{
  ::vtkMapper::GlobalImmediateModeRenderingOn();
}



void vtkMapper::GlobalImmediateModeRenderingOff()
{
  ::vtkMapper::GlobalImmediateModeRenderingOff();
}



int vtkMapper::GetGlobalImmediateModeRendering()
{
  int retVal = ::vtkMapper::GetGlobalImmediateModeRendering();
  return retVal;
}



void vtkMapper::SetScalarMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarMode(arg0);
}



int vtkMapper::GetScalarMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetScalarMode();
  return retVal;
}



void vtkMapper::SetScalarModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarModeToDefault();
}



void vtkMapper::SetScalarModeToUsePointData()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarModeToUsePointData();
}



void vtkMapper::SetScalarModeToUseCellData()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarModeToUseCellData();
}



void vtkMapper::SetScalarModeToUsePointFieldData()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarModeToUsePointFieldData();
}



void vtkMapper::SetScalarModeToUseCellFieldData()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarModeToUseCellFieldData();
}



void vtkMapper::SetScalarModeToUseFieldData()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarModeToUseFieldData();
}



void vtkMapper::SelectColorArray(int arrayNum)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SelectColorArray(arrayNum);
}



void vtkMapper::SelectColorArray(System::String^ arrayName)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SelectColorArray(arrayNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkMapper::ColorByArrayComponent(int arrayNum, int component)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->ColorByArrayComponent(arrayNum, component);
}



void vtkMapper::ColorByArrayComponent(System::String^ arrayName, int component)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->ColorByArrayComponent(arrayNameWrap, component);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkMapper::GetArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMapper::GetArrayId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetArrayId();
  return retVal;
}



int vtkMapper::GetArrayAccessMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetArrayAccessMode();
  return retVal;
}



int vtkMapper::GetArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetArrayComponent();
  return retVal;
}



System::String^ vtkMapper::GetScalarModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetScalarModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMapper::SetResolveCoincidentTopology(int val)
{
  ::vtkMapper::SetResolveCoincidentTopology(val);
}



int vtkMapper::GetResolveCoincidentTopology()
{
  int retVal = ::vtkMapper::GetResolveCoincidentTopology();
  return retVal;
}



void vtkMapper::SetResolveCoincidentTopologyToDefault()
{
  ::vtkMapper::SetResolveCoincidentTopologyToDefault();
}



void vtkMapper::SetResolveCoincidentTopologyToOff()
{
  ::vtkMapper::SetResolveCoincidentTopologyToOff();
}



void vtkMapper::SetResolveCoincidentTopologyToPolygonOffset()
{
  ::vtkMapper::SetResolveCoincidentTopologyToPolygonOffset();
}



void vtkMapper::SetResolveCoincidentTopologyToShiftZBuffer()
{
  ::vtkMapper::SetResolveCoincidentTopologyToShiftZBuffer();
}



void vtkMapper::SetResolveCoincidentTopologyPolygonOffsetParameters(double factor, double units)
{
  ::vtkMapper::SetResolveCoincidentTopologyPolygonOffsetParameters(factor, units);
}



void vtkMapper::GetResolveCoincidentTopologyPolygonOffsetParameters(double% factor, double% units)
{
  pin_ptr<double> factorPin = &factor;
  pin_ptr<double> unitsPin = &units;
  ::vtkMapper::GetResolveCoincidentTopologyPolygonOffsetParameters(*factorPin, *unitsPin);
}



void vtkMapper::SetResolveCoincidentTopologyZShift(double val)
{
  ::vtkMapper::SetResolveCoincidentTopologyZShift(val);
}



double vtkMapper::GetResolveCoincidentTopologyZShift()
{
  double retVal = ::vtkMapper::GetResolveCoincidentTopologyZShift();
  return retVal;
}



array<double>^ vtkMapper::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkMapper::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetBounds(nativeboundsPin);
}



void vtkMapper::SetRenderTime(double time)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetRenderTime(time);
}



double vtkMapper::GetRenderTime()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetRenderTime();
  return retVal;
}



vtkDataSet^ vtkMapper::GetInputAsDataSet()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetInputAsDataSet());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkUnsignedCharArray^ vtkMapper::MapScalars(double alpha)
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->MapScalars(alpha));
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



void vtkMapper::SetScalarMaterialMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarMaterialMode(arg0);
}



int vtkMapper::GetScalarMaterialMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetScalarMaterialMode();
  return retVal;
}



void vtkMapper::SetScalarMaterialModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarMaterialModeToDefault();
}



void vtkMapper::SetScalarMaterialModeToAmbient()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarMaterialModeToAmbient();
}



void vtkMapper::SetScalarMaterialModeToDiffuse()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarMaterialModeToDiffuse();
}



void vtkMapper::SetScalarMaterialModeToAmbientAndDiffuse()
{
  vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->SetScalarMaterialModeToAmbientAndDiffuse();
}



System::String^ vtkMapper::GetScalarMaterialModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMapper>(m_instance)->GetScalarMaterialModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkMapper::vtkMapper(System::IntPtr native, bool bConst) : vtkAbstractMapper3D(native, bConst) {}



  vtkMapper::vtkMapper(bool donothing) : vtkAbstractMapper3D(donothing) {}



  vtkMapper::vtkMapper() : vtkAbstractMapper3D(false) {
  this->SetNativePointer(IntPtr(::vtkMapper::New()));
}



  vtkMapper::~vtkMapper() { }





} // end namespace vtkRendering
