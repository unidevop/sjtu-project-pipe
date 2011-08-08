#pragma once

using namespace System;

#ifdef KIT_IS_NAMESPACE
namespace vtkCommon
#else
namespace vtk
#endif
{
  template<class Derived>
  Derived* ConvertManagedToNative(IntPtr instance)
  {
    ::vtkObjectBase* base = static_cast<::vtkObjectBase*>(instance.ToPointer());
		Derived* derived = Derived::SafeDownCast(base);
    if ( 0 == derived )
    {
      throw gcnew System::ApplicationException("Could not downcast pointer to native class.");
    }
    return derived;
  }
}