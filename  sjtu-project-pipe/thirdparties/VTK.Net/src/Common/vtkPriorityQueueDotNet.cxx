

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPriorityQueueDotNet.h"

// native includes
#include "strstream"
#include "vtkPriorityQueue.h"

using namespace System;

namespace vtk {

System::String^ vtkPriorityQueue::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPriorityQueue::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPriorityQueue^ vtkPriorityQueue::NewInstance()
{
  ::vtkPriorityQueue* retVal = static_cast<::vtkPriorityQueue*>(vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->NewInstance());
  return gcnew vtkPriorityQueue(IntPtr(retVal), false);
}



vtkPriorityQueue^ vtkPriorityQueue::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPriorityQueue* retVal = static_cast<::vtkPriorityQueue*>(::vtkPriorityQueue::SafeDownCast(oWrap));
  return gcnew vtkPriorityQueue(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPriorityQueue::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPriorityQueue::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPriorityQueue::Allocate(int sz, int ext)
{
  vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->Allocate(sz, ext);
}



void vtkPriorityQueue::Insert(double priority, int id)
{
  vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->Insert(priority, id);
}



int vtkPriorityQueue::Pop(int location)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->Pop(location);
  return retVal;
}



int vtkPriorityQueue::Peek(int location)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->Peek(location);
  return retVal;
}



double vtkPriorityQueue::DeleteId(int id)
{
  double retVal = vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->DeleteId(id);
  return retVal;
}



double vtkPriorityQueue::GetPriority(int id)
{
  double retVal = vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->GetPriority(id);
  return retVal;
}



int vtkPriorityQueue::GetNumberOfItems()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->GetNumberOfItems();
  return retVal;
}



void vtkPriorityQueue::Reset()
{
  vtk::ConvertManagedToNative<::vtkPriorityQueue>(m_instance)->Reset();
}



  vtkPriorityQueue::vtkPriorityQueue(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkPriorityQueue::vtkPriorityQueue(bool donothing) : vtkObject(donothing) {}



  vtkPriorityQueue::vtkPriorityQueue() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkPriorityQueue::New()));
}



  vtkPriorityQueue::~vtkPriorityQueue() { }





} // end namespace vtkCommon
