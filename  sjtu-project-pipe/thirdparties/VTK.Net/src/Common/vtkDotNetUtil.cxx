#include "vtkToolkits.h"

using namespace System;

#ifdef DOTNET_KIT_IS_NAMESPACE
namespace vtkCommon
#else
namespace vtk
#endif
  {

  /// <summary>Helper for VTK .NET wrappers.
  /// </summary>
  public ref class vtkDotNetUtil
    {
    public:
      /// <summary>This method finds the location of VTK demonstration data either
      /// from the VTK_DATA_ROOT environment variable or from compile-time
      /// specification.
      /// </summary>
      static String^ vtkGetDataRoot()
        {
        String^ dataRoot = Environment::GetEnvironmentVariable("VTK_DATA_ROOT");
#ifdef VTK_DATA_ROOT
        if (nullptr == dataRoot)
          {
          dataRoot = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(
            IntPtr(const_cast<char*>(VTK_DATA_ROOT)));
          }
#endif
        return dataRoot;
        }
    };

  }