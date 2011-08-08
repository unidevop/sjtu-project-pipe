#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMaskPoints : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkMaskPoints *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMaskPoints *NewInstance ();
  vtkMaskPoints^ NewInstance();


  // vtkMaskPoints *SafeDownCast (vtkObject* o);
  static vtkMaskPoints^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetOnRatio (int );
/// <summary>
/// <para>Turn on every nth point.</para>
/// </summary>
  void SetOnRatio(int arg0);


  // int GetOnRatioMinValue ();
/// <summary>
/// <para>Turn on every nth point.</para>
/// </summary>
  int GetOnRatioMinValue();


  // int GetOnRatioMaxValue ();
/// <summary>
/// <para>Turn on every nth point.</para>
/// </summary>
  int GetOnRatioMaxValue();


  // int GetOnRatio ();
/// <summary>
/// <para>Turn on every nth point.</para>
/// </summary>
  int GetOnRatio();


  // void SetMaximumNumberOfPoints (vtkIdType );
/// <summary>
/// <para>Limit the number of points that can be passed through.</para>
/// </summary>
  void SetMaximumNumberOfPoints(int arg0);


  // vtkIdType GetMaximumNumberOfPointsMinValue ();
/// <summary>
/// <para>Limit the number of points that can be passed through.</para>
/// </summary>
  int GetMaximumNumberOfPointsMinValue();


  // vtkIdType GetMaximumNumberOfPointsMaxValue ();
/// <summary>
/// <para>Limit the number of points that can be passed through.</para>
/// </summary>
  int GetMaximumNumberOfPointsMaxValue();


  // vtkIdType GetMaximumNumberOfPoints ();
/// <summary>
/// <para>Limit the number of points that can be passed through.</para>
/// </summary>
  int GetMaximumNumberOfPoints();


  // void SetOffset (vtkIdType );
/// <summary>
/// <para>Start with this point.</para>
/// </summary>
  void SetOffset(int arg0);


  // vtkIdType GetOffsetMinValue ();
/// <summary>
/// <para>Start with this point.</para>
/// </summary>
  int GetOffsetMinValue();


  // vtkIdType GetOffsetMaxValue ();
/// <summary>
/// <para>Start with this point.</para>
/// </summary>
  int GetOffsetMaxValue();


  // vtkIdType GetOffset ();
/// <summary>
/// <para>Start with this point.</para>
/// </summary>
  int GetOffset();


  // void SetRandomMode (int );
/// <summary>
/// <para>Special flag causes randomization of point selection. If this mode is on, statistically every nth point (i.e., OnRatio) will be displayed.</para>
/// </summary>
  void SetRandomMode(int arg0);


  // int GetRandomMode ();
/// <summary>
/// <para>Special flag causes randomization of point selection. If this mode is on, statistically every nth point (i.e., OnRatio) will be displayed.</para>
/// </summary>
  int GetRandomMode();


  // void RandomModeOn ();
/// <summary>
/// <para>Special flag causes randomization of point selection. If this mode is on, statistically every nth point (i.e., OnRatio) will be displayed.</para>
/// </summary>
  void RandomModeOn();


  // void RandomModeOff ();
/// <summary>
/// <para>Special flag causes randomization of point selection. If this mode is on, statistically every nth point (i.e., OnRatio) will be displayed.</para>
/// </summary>
  void RandomModeOff();


  // void SetGenerateVertices (int );
/// <summary>
/// <para>Generate output polydata vertices as well as points. A useful convenience method because vertices are drawn (they are topology) while points are not (they are geometry). By default this method is off.</para>
/// </summary>
  void SetGenerateVertices(int arg0);


  // int GetGenerateVertices ();
/// <summary>
/// <para>Generate output polydata vertices as well as points. A useful convenience method because vertices are drawn (they are topology) while points are not (they are geometry). By default this method is off.</para>
/// </summary>
  int GetGenerateVertices();


  // void GenerateVerticesOn ();
/// <summary>
/// <para>Generate output polydata vertices as well as points. A useful convenience method because vertices are drawn (they are topology) while points are not (they are geometry). By default this method is off.</para>
/// </summary>
  void GenerateVerticesOn();


  // void GenerateVerticesOff ();
/// <summary>
/// <para>Generate output polydata vertices as well as points. A useful convenience method because vertices are drawn (they are topology) while points are not (they are geometry). By default this method is off.</para>
/// </summary>
  void GenerateVerticesOff();


// Did not wrap:  vtkMaskPoints ();


// Did not wrap:  ~vtkMaskPoints ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkMaskPoints (const vtkMaskPoints &);


// Did not wrap:  void vtkMaskPoints 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMaskPoints(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMaskPoints(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMaskPoints();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMaskPoints();


};

} // end vtkGraphics
