#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPolyDataStreamer : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkPolyDataStreamer *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyDataStreamer *NewInstance ();
  vtkPolyDataStreamer^ NewInstance();


  // vtkPolyDataStreamer *SafeDownCast (vtkObject* o);
  static vtkPolyDataStreamer^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetNumberOfStreamDivisions (int num);
/// <summary>
/// <para>Set the number of pieces to divide the problem into.</para>
/// </summary>
  void SetNumberOfStreamDivisions(int num);


  // int GetNumberOfStreamDivisions ();
/// <summary>
/// <para>Set the number of pieces to divide the problem into.</para>
/// </summary>
  int GetNumberOfStreamDivisions();


  // void SetColorByPiece (int );
/// <summary>
/// <para>By default, this option is off.  When it is on, cell scalars are generated based on which piece they are in.</para>
/// </summary>
  void SetColorByPiece(int arg0);


  // int GetColorByPiece ();
/// <summary>
/// <para>By default, this option is off.  When it is on, cell scalars are generated based on which piece they are in.</para>
/// </summary>
  int GetColorByPiece();


  // void ColorByPieceOn ();
/// <summary>
/// <para>By default, this option is off.  When it is on, cell scalars are generated based on which piece they are in.</para>
/// </summary>
  void ColorByPieceOn();


  // void ColorByPieceOff ();
/// <summary>
/// <para>By default, this option is off.  When it is on, cell scalars are generated based on which piece they are in.</para>
/// </summary>
  void ColorByPieceOff();


// Did not wrap:  vtkPolyDataStreamer ();


// Did not wrap:  ~vtkPolyDataStreamer ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkPolyDataStreamer (const vtkPolyDataStreamer &);


// Did not wrap:  void vtkPolyDataStreamer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyDataStreamer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyDataStreamer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyDataStreamer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyDataStreamer();


};

} // end vtkGraphics
