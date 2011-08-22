#include "vtkObject.h"
#include "vtkObjectDotNet.h"
#include "vtkDotNetFactory.h"

using namespace System::Runtime::InteropServices;
using namespace System::Reflection;
using namespace System::Diagnostics;


#ifdef DOTNET_KIT_IS_NAMESPACE
namespace vtkCommon
#else
namespace vtk
#endif
  {

  vtkObject^ vtkDotNetFactory::ToManaged(::vtkObject* unmanaged)
    {
    return vtkDotNetFactory::Instance->PrivateToManaged(unmanaged);
    }


  vtkObject^ vtkDotNetFactory::PrivateToManaged(::vtkObject* unmanaged)
    {
    String^ sName = Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(unmanaged->GetClassName())));

    ConstructorInfo^ managedConstructor = nullptr;
    for each (Assembly^ trialAssembly in m_vtkAssemblies)
      {
      managedConstructor = vtkDotNetFactory::LoadFrom(
        trialAssembly, sName);
      if (nullptr != managedConstructor) break;
      }

    vtkObject^ instance = nullptr;
    if (nullptr != managedConstructor)
      {
      try
        {
        array<Object^>^ args = gcnew array<Object^> { IntPtr(unmanaged), (Object^) false };
        Object^ objInstance = managedConstructor->Invoke(args);
#ifdef DOTNET_KIT_IS_NAMESPACE
        instance = dynamic_cast<vtkCommon::vtkObject^>(objInstance);
#else
        instance = dynamic_cast<vtk::vtkObject^>(objInstance);
#endif
        }
      catch (Exception^ e)
        {
        System::Diagnostics::Debug::WriteLine(String::Format(
          "Could not invoke constructor for {0}: {1}.",
          sName, e->Message));
        }
      }
    else
      {
      System::Diagnostics::Debug::WriteLine(String::Format(  
        "Could not find constructor for {0} in any assembly.",sName));
      }

    return instance;
    }

  vtkDotNetFactory::vtkDotNetFactory()
    {
    this->Initialize();
    }

#ifdef DOTNET_KIT_IS_NAMESPACE
  ConstructorInfo^ vtkDotNetFactory::LoadFromName(Assembly^ trialAssembly, String^ nativeType)
    {
    ConstructorInfo^ ci = nullptr;
    try
      {
      int endChar = trialAssembly->FullName->IndexOf("DotNet");
      if (endChar<0) return nullptr;
      String^ sNamespace = trialAssembly->FullName->Substring(0,endChar);
      String^ nativeFullName = String::Format("{0}.{1}", sNamespace, nativeType);
      Type^ managedType = trialAssembly->GetType(nativeFullName);
      if ( nullptr == managedType )
        {
        return nullptr;
        }
      array<Type^>^ argTypes = gcnew array<Type^> { IntPtr::typeid, System::Boolean::typeid };
      ci = managedType->GetConstructor(argTypes);
      }
    catch (Exception^ e)
      {
      System::Diagnostics::Debug::WriteLine(String::Format(
        "Could not get constructor for {0}: {1}.",
        nativeType, e->Message));
      }
    return ci;
    }

#else

  ConstructorInfo^ vtkDotNetFactory::LoadFrom(Assembly^ trialAssembly, String^ nativeType)
    {
    ConstructorInfo^ ci = nullptr;
    try
      {
      String^ nativeFullName = String::Format("{0}.{1}", "vtk", nativeType);
      Type^ managedType = trialAssembly->GetType(nativeFullName);
      if ( nullptr == managedType )
        {
        return nullptr;
        }
      array<Type^>^ argTypes = gcnew array<Type^> { IntPtr::typeid, System::Boolean::typeid };
      ci = managedType->GetConstructor(argTypes);
      }
    catch (Exception^ e)
      {
      System::Diagnostics::Debug::WriteLine(String::Format(
        "Could not get constructor for {0}: {1}.",
        nativeType, e->Message));
      }
    return ci;
    }
#endif

  void vtkDotNetFactory::Initialize()
    {
    array<Assembly^>^ allAssemblies = AppDomain::CurrentDomain->GetAssemblies();
    for each (Assembly^ anyName in allAssemblies)
      {
      if (anyName->FullName->StartsWith("vtk"))
        {
        m_vtkAssemblies.Add(anyName);
        }
      }
    }

  }
