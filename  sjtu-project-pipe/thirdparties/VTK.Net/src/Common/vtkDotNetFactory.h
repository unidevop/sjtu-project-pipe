#pragma once

using namespace System;


class vtkObject;

#ifdef DOTNET_KIT_IS_NAMESPACE
namespace vtkCommon
#else
namespace vtk
#endif
{
	ref class vtkObject;

	public ref class vtkDotNetFactory
	{
    static vtkDotNetFactory^ m_instance;
    System::Collections::Generic::List<System::Reflection::Assembly^> m_vtkAssemblies;
	public:
    static property vtkDotNetFactory^ Instance
    {
      vtkDotNetFactory^ get()
      {
        if (nullptr == m_instance)
        {
          m_instance = gcnew vtkDotNetFactory();
        }
        return m_instance;
      }
    }
    static vtkObject^ ToManaged(::vtkObject* unmanaged);
  private:
    vtkDotNetFactory();
    System::Reflection::ConstructorInfo^ LoadFrom(
      System::Reflection::Assembly^ trialAssembly, String^ nativeType);
		vtkObject^ PrivateToManaged(::vtkObject* unmanaged);
    void Initialize();
	};
}