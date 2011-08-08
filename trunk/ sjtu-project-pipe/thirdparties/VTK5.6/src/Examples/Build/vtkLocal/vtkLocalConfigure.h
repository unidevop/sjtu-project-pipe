/*=========================================================================
This source has no copyright.  It is intended to be copied by users
wishing to create their own VTK classes locally.
=========================================================================*/
#ifndef __vtkLocalConfigure_h
#define __vtkLocalConfigure_h

// Define vtkLocal_SHARED if the library was built shared.
#if 1
# define vtkLocal_SHARED
#endif

// Disable warning caused from static VTK and shared vtkLocal.
#if defined(_MSC_VER) && defined(vtkLocal_SHARED)
# pragma warning (disable: 4275) /* non-DLL-interface base class used */
#endif

// Setup export/import macro for DLL.  The symbol
// "vtkLocal_EXPORTS" is defined by CMake when building source
// files for a shared library named "vtkLocal".  For these
// sources we should export if building a shared library.  For other
// sources we should import if using a shared library.
#if defined(_WIN32) && defined(vtkLocal_SHARED)
# if defined(vtkLocal_EXPORTS)
#  define VTK_vtkLocal_EXPORT __declspec(dllexport)
# else
#  define VTK_vtkLocal_EXPORT __declspec(dllimport)
# endif
#else
# define VTK_vtkLocal_EXPORT
#endif

#endif // __vtkLocalConfigure_h
