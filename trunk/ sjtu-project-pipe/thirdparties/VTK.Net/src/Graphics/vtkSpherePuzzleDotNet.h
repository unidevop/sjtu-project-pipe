#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSpherePuzzle : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSpherePuzzle *NewInstance ();
  vtkSpherePuzzle^ NewInstance();


  // vtkSpherePuzzle *SafeDownCast (vtkObject* o);
  static vtkSpherePuzzle^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSpherePuzzle *New ();


  // void Reset ();
/// <summary>
/// <para>Reset the state of this puzzle back to its original state.</para>
/// </summary>
  void Reset();


  // void MoveHorizontal (int section, int percentage, int rightFlag);
/// <summary>
/// <para>Move the top/bottom half one segment either direction.</para>
/// </summary>
  void MoveHorizontal(int section, int percentage, int rightFlag);


  // void MoveVertical (int section, int percentage, int rightFlag);
/// <summary>
/// <para>Rotate vertical half of sphere along one of the longitude lines.</para>
/// </summary>
  void MoveVertical(int section, int percentage, int rightFlag);


  // int SetPoint (double x, double y, double z);
/// <summary>
/// <para>SetPoint will be called as the mouse moves over the screen. The output will change to indicate the pending move. SetPoint returns zero if move is not activated by point. Otherwise it encodes the move into a unique integer so that the caller can determine if the move state has changed. This will answer the question, &quot;Should I render.&quot;</para>
/// </summary>
  int SetPoint(double x, double y, double z);


  // void MovePoint (int percentage);
/// <summary>
/// <para>Move actually implements the pending move. When percentage is 100, the pending move becomes inactive, and SetPoint will have to be called again to setup another move.</para>
/// </summary>
  void MovePoint(int percentage);


// Did not wrap:  int *GetState ();return this State 


// Did not wrap:  vtkSpherePuzzle ();


// Did not wrap:  ~vtkSpherePuzzle ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void MarkVertical (int section);


// Did not wrap:  void MarkHorizontal (int section);


// Did not wrap:  vtkSpherePuzzle (const vtkSpherePuzzle &);


// Did not wrap:  void vtkSpherePuzzle 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSpherePuzzle(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSpherePuzzle(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSpherePuzzle();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSpherePuzzle();


};

} // end vtkGraphics
