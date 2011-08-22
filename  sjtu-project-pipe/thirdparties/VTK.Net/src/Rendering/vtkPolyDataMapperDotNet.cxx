

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataMapperDotNet.h"
#include "vtkActorDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataMapper.h"
#include "vtkAbstractMapper.h"
#include "vtkActor.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataMapper^ vtkPolyDataMapper::NewInstance()
{
  ::vtkPolyDataMapper* retVal = static_cast<::vtkPolyDataMapper*>(vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->NewInstance());
  return gcnew vtkPolyDataMapper(IntPtr(retVal), false);
}



vtkPolyDataMapper^ vtkPolyDataMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolyDataMapper* retVal = static_cast<::vtkPolyDataMapper*>(::vtkPolyDataMapper::SafeDownCast(oWrap));
  return gcnew vtkPolyDataMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPolyDataMapper::RenderPiece(vtkRenderer^ ren, vtkActor^ act)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkActor* actWrap = vtk::ConvertManagedToNative<::vtkActor>(act->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->RenderPiece(renWrap, actWrap);
}



void vtkPolyDataMapper::Render(vtkRenderer^ ren, vtkActor^ act)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkActor* actWrap = vtk::ConvertManagedToNative<::vtkActor>(act->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->Render(renWrap, actWrap);
}



void vtkPolyDataMapper::SetInput(vtkPolyData^ in)
{
  ::vtkPolyData* inWrap = vtk::ConvertManagedToNative<::vtkPolyData>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->SetInput(inWrap);
}



vtkPolyData^ vtkPolyDataMapper::GetInput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->GetInput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkPolyDataMapper::Update()
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->Update();
}



void vtkPolyDataMapper::SetPiece(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->SetPiece(arg0);
}



int vtkPolyDataMapper::GetPiece()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->GetPiece();
  return retVal;
}



void vtkPolyDataMapper::SetNumberOfPieces(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->SetNumberOfPieces(arg0);
}



int vtkPolyDataMapper::GetNumberOfPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->GetNumberOfPieces();
  return retVal;
}



void vtkPolyDataMapper::SetNumberOfSubPieces(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->SetNumberOfSubPieces(arg0);
}



int vtkPolyDataMapper::GetNumberOfSubPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->GetNumberOfSubPieces();
  return retVal;
}



void vtkPolyDataMapper::SetGhostLevel(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->SetGhostLevel(arg0);
}



int vtkPolyDataMapper::GetGhostLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->GetGhostLevel();
  return retVal;
}



array<double>^ vtkPolyDataMapper::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPolyDataMapper::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->GetBounds(nativeboundsPin);
}



void vtkPolyDataMapper::ShallowCopy(vtkAbstractMapper^ m)
{
  ::vtkAbstractMapper* mWrap = vtk::ConvertManagedToNative<::vtkAbstractMapper>(m->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataMapper>(m_instance)->ShallowCopy(mWrap);
}



  vtkPolyDataMapper::vtkPolyDataMapper(System::IntPtr native, bool bConst) : vtkMapper(native, bConst) {}



  vtkPolyDataMapper::vtkPolyDataMapper(bool donothing) : vtkMapper(donothing) {}



  vtkPolyDataMapper::vtkPolyDataMapper() : vtkMapper(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataMapper::New()));
}



  vtkPolyDataMapper::~vtkPolyDataMapper() { }





} // end namespace vtkRendering
