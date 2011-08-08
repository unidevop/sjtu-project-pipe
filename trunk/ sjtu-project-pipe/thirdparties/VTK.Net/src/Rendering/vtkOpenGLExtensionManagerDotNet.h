#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderWindow;

public ref class vtkOpenGLExtensionManager : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLExtensionManager *NewInstance ();
  vtkOpenGLExtensionManager^ NewInstance();


  // vtkOpenGLExtensionManager *SafeDownCast (vtkObject* o);
  static vtkOpenGLExtensionManager^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkOpenGLExtensionManager *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkRenderWindow *GetRenderWindow ();
/// <summary>
/// <para>Set/Get the render window to query extensions on.  If set to null, justs queries the current render window.</para>
/// </summary>
  vtkRenderWindow^ GetRenderWindow();


  // virtual void SetRenderWindow (vtkRenderWindow *renwin);
/// <summary>
/// <para>Set/Get the render window to query extensions on.  If set to null, justs queries the current render window.</para>
/// </summary>
  void SetRenderWindow(vtkRenderWindow^ renwin);


  // virtual void Update ();
/// <summary>
/// <para>Updates the extensions string.</para>
/// </summary>
  void Update();


  // char *GetExtensionsString ();
/// <summary>
/// <para>Returns a string listing all available extensions.  Call Update first to validate this string.</para>
/// </summary>
  System::String^ GetExtensionsString();


  // virtual int ExtensionSupported (const char *name);
/// <summary>
/// <para>Returns true if the extension is supported, false otherwise.</para>
/// </summary>
  int ExtensionSupported(System::String^ name);


  // virtual void LoadExtension (const char *name);
/// <summary>
/// <para>Loads all the functions associated with the given extension into the appropriate static members of vtkgl.</para>
/// </summary>
  void LoadExtension(System::String^ name);


// Did not wrap:  vtkOpenGLExtensionManager ();


// Did not wrap:  virtual ~vtkOpenGLExtensionManager ();


// Did not wrap:  virtual void ReadOpenGLExtensions ();


// Did not wrap:  vtkOpenGLExtensionManager (const vtkOpenGLExtensionManager &);


// Did not wrap:  void vtkOpenGLExtensionManager 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLExtensionManager(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLExtensionManager(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLExtensionManager();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLExtensionManager();


};

} // end vtkRendering
