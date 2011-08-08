#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTriangleFilter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkTriangleFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTriangleFilter *NewInstance ();
  vtkTriangleFilter^ NewInstance();


  // vtkTriangleFilter *SafeDownCast (vtkObject* o);
  static vtkTriangleFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void PassVertsOn ();
/// <summary>
/// <para>Turn on/off passing vertices through filter.</para>
/// </summary>
  void PassVertsOn();


  // void PassVertsOff ();
/// <summary>
/// <para>Turn on/off passing vertices through filter.</para>
/// </summary>
  void PassVertsOff();


  // void SetPassVerts (int );
/// <summary>
/// <para>Turn on/off passing vertices through filter.</para>
/// </summary>
  void SetPassVerts(int arg0);


  // int GetPassVerts ();
/// <summary>
/// <para>Turn on/off passing vertices through filter.</para>
/// </summary>
  int GetPassVerts();


  // void PassLinesOn ();
/// <summary>
/// <para>Turn on/off passing lines through filter.</para>
/// </summary>
  void PassLinesOn();


  // void PassLinesOff ();
/// <summary>
/// <para>Turn on/off passing lines through filter.</para>
/// </summary>
  void PassLinesOff();


  // void SetPassLines (int );
/// <summary>
/// <para>Turn on/off passing lines through filter.</para>
/// </summary>
  void SetPassLines(int arg0);


  // int GetPassLines ();
/// <summary>
/// <para>Turn on/off passing lines through filter.</para>
/// </summary>
  int GetPassLines();


// Did not wrap:  vtkTriangleFilter ();PassVerts PassLines 


// Did not wrap:  ~vtkTriangleFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkTriangleFilter (const vtkTriangleFilter &);


// Did not wrap:  void vtkTriangleFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTriangleFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTriangleFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTriangleFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTriangleFilter();


};

} // end vtkGraphics
