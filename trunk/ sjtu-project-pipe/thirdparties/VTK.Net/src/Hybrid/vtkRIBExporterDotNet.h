#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRIBExporter : public vtkExporter
{

public:
// Did not wrap:  static vtkRIBExporter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRIBExporter *NewInstance ();
  vtkRIBExporter^ NewInstance();


  // vtkRIBExporter *SafeDownCast (vtkObject* o);
  static vtkRIBExporter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetSize (int , int );
  void SetSize(int arg0, int arg1);


  // void SetSize (int  a[2]);
  void SetSize(array<int>^ a);


  // int  *GetSize ();
  array<int>^ GetSize();


  // void SetPixelSamples (int , int );
  void SetPixelSamples(int arg0, int arg1);


  // void SetPixelSamples (int  a[2]);
  void SetPixelSamples(array<int>^ a);


  // int  *GetPixelSamples ();
  array<int>^ GetPixelSamples();


  // void SetFilePrefix (char *);
/// <summary>
/// <para>Specify the prefix of the files to write out. The resulting file names will have .RIB appended to them.</para>
/// </summary>
  void SetFilePrefix(System::String^ arg0);


  // char *GetFilePrefix ();
/// <summary>
/// <para>Specify the prefix of the files to write out. The resulting file names will have .RIB appended to them.</para>
/// </summary>
  System::String^ GetFilePrefix();


  // void SetTexturePrefix (char *);
/// <summary>
/// <para>Specify the prefix of any generated texture files.</para>
/// </summary>
  void SetTexturePrefix(System::String^ arg0);


  // char *GetTexturePrefix ();
/// <summary>
/// <para>Specify the prefix of any generated texture files.</para>
/// </summary>
  System::String^ GetTexturePrefix();


  // void SetBackground (int );
/// <summary>
/// <para>Set/Get the background flag. Default is 0 (off). If set, the rib file will contain an image shader that will use the renderer window's background color. Normally, RenderMan does generate backgrounds. Backgrounds are composited into the scene with the tiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact, Pixar's Renderman will accept an image shader but only sets the alpha of the background. Images created this way will still have a black background but contain an alpha of 1 at all pixels and CANNOT be subsequently composited with other images using tiffcomp.  However, other RenderMan compliant renderers like Blue Moon Ray Tracing (BMRT) do allow image shaders and properly set the background color. If this sounds too confusing, use the following rules: If you are using Pixar's Renderman, leave the Background off. Otherwise, try setting BackGroundOn and see if you get the desired results.</para>
/// </summary>
  void SetBackground(int arg0);


  // int GetBackground ();
/// <summary>
/// <para>Set/Get the background flag. Default is 0 (off). If set, the rib file will contain an image shader that will use the renderer window's background color. Normally, RenderMan does generate backgrounds. Backgrounds are composited into the scene with the tiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact, Pixar's Renderman will accept an image shader but only sets the alpha of the background. Images created this way will still have a black background but contain an alpha of 1 at all pixels and CANNOT be subsequently composited with other images using tiffcomp.  However, other RenderMan compliant renderers like Blue Moon Ray Tracing (BMRT) do allow image shaders and properly set the background color. If this sounds too confusing, use the following rules: If you are using Pixar's Renderman, leave the Background off. Otherwise, try setting BackGroundOn and see if you get the desired results.</para>
/// </summary>
  int GetBackground();


  // void BackgroundOn ();
/// <summary>
/// <para>Set/Get the background flag. Default is 0 (off). If set, the rib file will contain an image shader that will use the renderer window's background color. Normally, RenderMan does generate backgrounds. Backgrounds are composited into the scene with the tiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact, Pixar's Renderman will accept an image shader but only sets the alpha of the background. Images created this way will still have a black background but contain an alpha of 1 at all pixels and CANNOT be subsequently composited with other images using tiffcomp.  However, other RenderMan compliant renderers like Blue Moon Ray Tracing (BMRT) do allow image shaders and properly set the background color. If this sounds too confusing, use the following rules: If you are using Pixar's Renderman, leave the Background off. Otherwise, try setting BackGroundOn and see if you get the desired results.</para>
/// </summary>
  void BackgroundOn();


  // void BackgroundOff ();
/// <summary>
/// <para>Set/Get the background flag. Default is 0 (off). If set, the rib file will contain an image shader that will use the renderer window's background color. Normally, RenderMan does generate backgrounds. Backgrounds are composited into the scene with the tiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact, Pixar's Renderman will accept an image shader but only sets the alpha of the background. Images created this way will still have a black background but contain an alpha of 1 at all pixels and CANNOT be subsequently composited with other images using tiffcomp.  However, other RenderMan compliant renderers like Blue Moon Ray Tracing (BMRT) do allow image shaders and properly set the background color. If this sounds too confusing, use the following rules: If you are using Pixar's Renderman, leave the Background off. Otherwise, try setting BackGroundOn and see if you get the desired results.</para>
/// </summary>
  void BackgroundOff();


  // void SetExportArrays (int );
/// <summary>
/// <para>Set or get the ExportArrays. If ExportArrays is set, then all point data, field data, and cell data arrays will get  exported together with polygons.</para>
/// </summary>
  void SetExportArrays(int arg0);


  // int GetExportArraysMinValue ();
/// <summary>
/// <para>Set or get the ExportArrays. If ExportArrays is set, then all point data, field data, and cell data arrays will get  exported together with polygons.</para>
/// </summary>
  int GetExportArraysMinValue();


  // int GetExportArraysMaxValue ();
/// <summary>
/// <para>Set or get the ExportArrays. If ExportArrays is set, then all point data, field data, and cell data arrays will get  exported together with polygons.</para>
/// </summary>
  int GetExportArraysMaxValue();


  // void ExportArraysOn ();
/// <summary>
/// <para>Set or get the ExportArrays. If ExportArrays is set, then all point data, field data, and cell data arrays will get  exported together with polygons.</para>
/// </summary>
  void ExportArraysOn();


  // void ExportArraysOff ();
/// <summary>
/// <para>Set or get the ExportArrays. If ExportArrays is set, then all point data, field data, and cell data arrays will get  exported together with polygons.</para>
/// </summary>
  void ExportArraysOff();


  // int GetExportArrays ();
/// <summary>
/// <para>Set or get the ExportArrays. If ExportArrays is set, then all point data, field data, and cell data arrays will get  exported together with polygons.</para>
/// </summary>
  int GetExportArrays();


// Did not wrap:  vtkRIBExporter ();


// Did not wrap:  ~vtkRIBExporter ();


// Did not wrap:  void WriteHeader (vtkRenderer *aRen);


// Did not wrap:  void WriteTrailer ();


// Did not wrap:  void WriteTexture (vtkTexture *aTexture);


// Did not wrap:  void WriteViewport (vtkRenderer *aRenderer, int size[2]);


// Did not wrap:  void WriteCamera (vtkCamera *aCamera);


// Did not wrap:  void WriteLight (vtkLight *aLight, int count);


// Did not wrap:  void WriteAmbientLight (int count);


// Did not wrap:  void WriteProperty (vtkProperty *aProperty, vtkTexture *aTexture);


// Did not wrap:  void WritePolygons (vtkPolyData *pd, vtkUnsignedCharArray *colors, vtkProperty *aProperty);


// Did not wrap:  void WriteStrips (vtkPolyData *pd, vtkUnsignedCharArray *colors, vtkProperty *aProperty);


// Did not wrap:  void WriteData ();


// Did not wrap:  void WriteActor (vtkActor *anActor);


// Did not wrap:  void ModifyArrayName (char *newname, const char *name);


// Did not wrap:  char *GetTextureName (vtkTexture *aTexture);


// Did not wrap:  char *GetTIFFName (vtkTexture *aTexture);


// Did not wrap:  vtkRIBExporter (const vtkRIBExporter &);


// Did not wrap:  void vtkRIBExporter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRIBExporter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRIBExporter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRIBExporter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRIBExporter();


};

} // end vtkHybrid
