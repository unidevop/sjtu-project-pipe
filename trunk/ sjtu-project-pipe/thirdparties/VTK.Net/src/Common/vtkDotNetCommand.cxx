
#include "vtkDotNetCommand.h"
#include "vtkCommand.h"
#include "vtkObjectDotNet.h"


#ifdef DOTNET_KIT_IS_NAMESPACE
namespace vtkCommon
#else
namespace vtk
#endif
  {
  vtkDotNetCommand::vtkDotNetCommand() : m_callback(nullptr), m_data(nullptr) {}
  vtkDotNetCommand* vtkDotNetCommand::New() { return new vtkDotNetCommand(); }

  void vtkDotNetCommand::SetCallback(vtkDotNetCallback^ cb) { m_callback = cb; }
  void vtkDotNetCommand::SetClientData(Object^ data) { m_data = data; }

  void vtkDotNetCommand::Execute(::vtkObject *caller, unsigned long eventId, void *callData)
    {
    // It is here that we decide to return vtk objects wrapped with
    // .NET vtkObject wrappers instead of asking a factory to create
    // a wrapper for the most derived class.
    vtkObject^ obj = gcnew vtkObject(IntPtr(caller),false);
    vtkDotNetCallback^ cbPtr = m_callback; // gcroot doesn't do operator==
    if ( nullptr != cbPtr )
      {
      m_callback->Invoke(obj, eventId, m_data, IntPtr(callData));
      }
    }
  }