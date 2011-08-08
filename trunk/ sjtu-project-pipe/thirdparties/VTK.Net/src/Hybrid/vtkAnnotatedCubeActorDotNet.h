#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkAnnotatedCubeActor : public vtkProp3D
{

public:
// Did not wrap:  static vtkAnnotatedCubeActor *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAnnotatedCubeActor *NewInstance ();
  vtkAnnotatedCubeActor^ NewInstance();


  // vtkAnnotatedCubeActor *SafeDownCast (vtkObject* o);
  static vtkAnnotatedCubeActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void GetActors (vtkPropCollection *);
/// <summary>
/// <para>For some exporters and other other operations we must be able to collect all the actors or volumes. These methods are used in that process.</para>
/// </summary>
  void GetActors(vtkPropCollection^ arg0);


  // virtual int RenderOpaqueGeometry (vtkViewport *viewport);
/// <summary>
/// <para>Support the standard render methods.</para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ viewport);


  // virtual int RenderTranslucentGeometry (vtkViewport *viewport);
/// <summary>
/// <para>Support the standard render methods.</para>
/// </summary>
  int RenderTranslucentGeometry(vtkViewport^ viewport);


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of an axes actor. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // void GetBounds (double bounds[6]);
/// <summary>
/// <para>Get the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax). (The method GetBounds(double bounds[6]) is available from the superclass.)</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


// Did not wrap:  double *GetBounds ();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get the actors mtime plus consider its properties and texture if set.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual unsigned long GetRedrawMTime ();
/// <summary>
/// <para>Return the mtime of anything that would cause the rendered image to appear differently. Usually this involves checking the mtime of the prop plus anything else it depends on such as properties, textures etc.</para>
/// </summary>
  unsigned long GetRedrawMTime();


  // void SetFaceTextScale (double );
/// <summary>
/// <para>Set/Get the scale factor for the face text</para>
/// </summary>
  void SetFaceTextScale(double arg0);


  // double GetFaceTextScale ();
/// <summary>
/// <para>Set/Get the scale factor for the face text</para>
/// </summary>
  double GetFaceTextScale();


  // vtkProperty *GetXPlusFaceProperty ();
/// <summary>
/// <para>Get the individual face text properties.</para>
/// </summary>
  vtkProperty^ GetXPlusFaceProperty();


  // vtkProperty *GetXMinusFaceProperty ();
/// <summary>
/// <para>Get the individual face text properties.</para>
/// </summary>
  vtkProperty^ GetXMinusFaceProperty();


  // vtkProperty *GetYPlusFaceProperty ();
/// <summary>
/// <para>Get the individual face text properties.</para>
/// </summary>
  vtkProperty^ GetYPlusFaceProperty();


  // vtkProperty *GetYMinusFaceProperty ();
/// <summary>
/// <para>Get the individual face text properties.</para>
/// </summary>
  vtkProperty^ GetYMinusFaceProperty();


  // vtkProperty *GetZPlusFaceProperty ();
/// <summary>
/// <para>Get the individual face text properties.</para>
/// </summary>
  vtkProperty^ GetZPlusFaceProperty();


  // vtkProperty *GetZMinusFaceProperty ();
/// <summary>
/// <para>Get the individual face text properties.</para>
/// </summary>
  vtkProperty^ GetZMinusFaceProperty();


  // vtkProperty *GetCubeProperty ();
/// <summary>
/// <para>Get the cube properties.</para>
/// </summary>
  vtkProperty^ GetCubeProperty();


  // vtkProperty *GetTextEdgesProperty ();
/// <summary>
/// <para>Get the text edges properties.</para>
/// </summary>
  vtkProperty^ GetTextEdgesProperty();


  // void SetXPlusFaceText (char *);
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  void SetXPlusFaceText(System::String^ arg0);


  // char *GetXPlusFaceText ();
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  System::String^ GetXPlusFaceText();


  // void SetXMinusFaceText (char *);
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  void SetXMinusFaceText(System::String^ arg0);


  // char *GetXMinusFaceText ();
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  System::String^ GetXMinusFaceText();


  // void SetYPlusFaceText (char *);
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  void SetYPlusFaceText(System::String^ arg0);


  // char *GetYPlusFaceText ();
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  System::String^ GetYPlusFaceText();


  // void SetYMinusFaceText (char *);
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  void SetYMinusFaceText(System::String^ arg0);


  // char *GetYMinusFaceText ();
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  System::String^ GetYMinusFaceText();


  // void SetZPlusFaceText (char *);
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  void SetZPlusFaceText(System::String^ arg0);


  // char *GetZPlusFaceText ();
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  System::String^ GetZPlusFaceText();


  // void SetZMinusFaceText (char *);
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  void SetZMinusFaceText(System::String^ arg0);


  // char *GetZMinusFaceText ();
/// <summary>
/// <para>Set/get the face text.</para>
/// </summary>
  System::String^ GetZMinusFaceText();


  // void SetTextEdges (int );
/// <summary>
/// <para>Enable/disable drawing the vector text edges.</para>
/// </summary>
  void SetTextEdges(int arg0);


  // int GetTextEdges ();
/// <summary>
/// <para>Enable/disable drawing the vector text edges.</para>
/// </summary>
  int GetTextEdges();


  // void TextEdgesOn ();
/// <summary>
/// <para>Enable/disable drawing the vector text edges.</para>
/// </summary>
  void TextEdgesOn();


  // void TextEdgesOff ();
/// <summary>
/// <para>Enable/disable drawing the vector text edges.</para>
/// </summary>
  void TextEdgesOff();


  // void SetCube (int );
/// <summary>
/// <para>Enable/disable drawing the cube.</para>
/// </summary>
  void SetCube(int arg0);


  // int GetCube ();
/// <summary>
/// <para>Enable/disable drawing the cube.</para>
/// </summary>
  int GetCube();


  // void CubeOn ();
/// <summary>
/// <para>Enable/disable drawing the cube.</para>
/// </summary>
  void CubeOn();


  // void CubeOff ();
/// <summary>
/// <para>Enable/disable drawing the cube.</para>
/// </summary>
  void CubeOff();


  // void SetFaceText (int );
/// <summary>
/// <para>Enable/disable drawing the vector text.</para>
/// </summary>
  void SetFaceText(int arg0);


  // int GetFaceText ();
/// <summary>
/// <para>Enable/disable drawing the vector text.</para>
/// </summary>
  int GetFaceText();


  // void FaceTextOn ();
/// <summary>
/// <para>Enable/disable drawing the vector text.</para>
/// </summary>
  void FaceTextOn();


  // void FaceTextOff ();
/// <summary>
/// <para>Enable/disable drawing the vector text.</para>
/// </summary>
  void FaceTextOff();


  // void SetXFaceTextRotation (double );
/// <summary>
/// <para>Augment individual face text orientations.</para>
/// </summary>
  void SetXFaceTextRotation(double arg0);


  // double GetXFaceTextRotation ();
/// <summary>
/// <para>Augment individual face text orientations.</para>
/// </summary>
  double GetXFaceTextRotation();


  // void SetYFaceTextRotation (double );
/// <summary>
/// <para>Augment individual face text orientations.</para>
/// </summary>
  void SetYFaceTextRotation(double arg0);


  // double GetYFaceTextRotation ();
/// <summary>
/// <para>Augment individual face text orientations.</para>
/// </summary>
  double GetYFaceTextRotation();


  // void SetZFaceTextRotation (double );
/// <summary>
/// <para>Augment individual face text orientations.</para>
/// </summary>
  void SetZFaceTextRotation(double arg0);


  // double GetZFaceTextRotation ();
/// <summary>
/// <para>Augment individual face text orientations.</para>
/// </summary>
  double GetZFaceTextRotation();


// Did not wrap:  vtkAnnotatedCubeActor ();


// Did not wrap:  ~vtkAnnotatedCubeActor ();


// Did not wrap:  void UpdateProps ();


// Did not wrap:  vtkAnnotatedCubeActor (const vtkAnnotatedCubeActor &);


// Did not wrap:  void vtkAnnotatedCubeActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAnnotatedCubeActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAnnotatedCubeActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAnnotatedCubeActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAnnotatedCubeActor();


};

} // end vtkHybrid
