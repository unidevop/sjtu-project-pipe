#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSelectPolyData : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkSelectPolyData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSelectPolyData *NewInstance ();
  vtkSelectPolyData^ NewInstance();


  // vtkSelectPolyData *SafeDownCast (vtkObject* o);
  static vtkSelectPolyData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetGenerateSelectionScalars (int );
/// <summary>
/// <para>Set/Get the flag to control behavior of the filter. If GenerateSelectionScalars is on, then the output of the filter is the same as the input, except that scalars are generated. If off, the filter outputs the cells laying inside the loop, and does not generate scalars.</para>
/// </summary>
  void SetGenerateSelectionScalars(int arg0);


  // int GetGenerateSelectionScalars ();
/// <summary>
/// <para>Set/Get the flag to control behavior of the filter. If GenerateSelectionScalars is on, then the output of the filter is the same as the input, except that scalars are generated. If off, the filter outputs the cells laying inside the loop, and does not generate scalars.</para>
/// </summary>
  int GetGenerateSelectionScalars();


  // void GenerateSelectionScalarsOn ();
/// <summary>
/// <para>Set/Get the flag to control behavior of the filter. If GenerateSelectionScalars is on, then the output of the filter is the same as the input, except that scalars are generated. If off, the filter outputs the cells laying inside the loop, and does not generate scalars.</para>
/// </summary>
  void GenerateSelectionScalarsOn();


  // void GenerateSelectionScalarsOff ();
/// <summary>
/// <para>Set/Get the flag to control behavior of the filter. If GenerateSelectionScalars is on, then the output of the filter is the same as the input, except that scalars are generated. If off, the filter outputs the cells laying inside the loop, and does not generate scalars.</para>
/// </summary>
  void GenerateSelectionScalarsOff();


  // void SetInsideOut (int );
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, the mesh within the loop is extracted. When on, the mesh outside the loop is extracted.</para>
/// </summary>
  void SetInsideOut(int arg0);


  // int GetInsideOut ();
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, the mesh within the loop is extracted. When on, the mesh outside the loop is extracted.</para>
/// </summary>
  int GetInsideOut();


  // void InsideOutOn ();
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, the mesh within the loop is extracted. When on, the mesh outside the loop is extracted.</para>
/// </summary>
  void InsideOutOn();


  // void InsideOutOff ();
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, the mesh within the loop is extracted. When on, the mesh outside the loop is extracted.</para>
/// </summary>
  void InsideOutOff();


  // virtual void SetLoop (vtkPoints *);
/// <summary>
/// <para>Set/Get the array of point coordinates defining the loop. There must be at least three points used to define a loop.</para>
/// </summary>
  void SetLoop(vtkPoints^ arg0);


  // vtkPoints *GetLoop ();
/// <summary>
/// <para>Set/Get the array of point coordinates defining the loop. There must be at least three points used to define a loop.</para>
/// </summary>
  vtkPoints^ GetLoop();


  // void SetSelectionMode (int );
/// <summary>
/// <para>Control how inside/outside of loop is defined.</para>
/// </summary>
  void SetSelectionMode(int arg0);


  // int GetSelectionModeMinValue ();
/// <summary>
/// <para>Control how inside/outside of loop is defined.</para>
/// </summary>
  int GetSelectionModeMinValue();


  // int GetSelectionModeMaxValue ();
/// <summary>
/// <para>Control how inside/outside of loop is defined.</para>
/// </summary>
  int GetSelectionModeMaxValue();


  // int GetSelectionMode ();
/// <summary>
/// <para>Control how inside/outside of loop is defined.</para>
/// </summary>
  int GetSelectionMode();


  // void SetSelectionModeToSmallestRegion ();this SetSelectionMode VTK_INSIDE_SMALLEST_REGION 
/// <summary>
/// <para>Control how inside/outside of loop is defined.</para>
/// </summary>
  void SetSelectionModeToSmallestRegion();


  // void SetSelectionModeToLargestRegion ();this SetSelectionMode VTK_INSIDE_LARGEST_REGION 
/// <summary>
/// <para>Control how inside/outside of loop is defined.</para>
/// </summary>
  void SetSelectionModeToLargestRegion();


  // void SetSelectionModeToClosestPointRegion ();this SetSelectionMode VTK_INSIDE_CLOSEST_POINT_REGION 
/// <summary>
/// <para>Control how inside/outside of loop is defined.</para>
/// </summary>
  void SetSelectionModeToClosestPointRegion();


  // const char *GetSelectionModeAsString ();
/// <summary>
/// <para>Control how inside/outside of loop is defined.</para>
/// </summary>
  System::String^ GetSelectionModeAsString();


  // void SetGenerateUnselectedOutput (int );
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's not been selected.</para>
/// </summary>
  void SetGenerateUnselectedOutput(int arg0);


  // int GetGenerateUnselectedOutput ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's not been selected.</para>
/// </summary>
  int GetGenerateUnselectedOutput();


  // void GenerateUnselectedOutputOn ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's not been selected.</para>
/// </summary>
  void GenerateUnselectedOutputOn();


  // void GenerateUnselectedOutputOff ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's not been selected.</para>
/// </summary>
  void GenerateUnselectedOutputOff();


  // vtkPolyData *GetUnselectedOutput ();
/// <summary>
/// <para>Return output that hasn't been selected (if GenreateUnselectedOutput is enabled).</para>
/// </summary>
  vtkPolyData^ GetUnselectedOutput();


  // vtkPolyData *GetSelectionEdges ();
/// <summary>
/// <para>Return the (mesh) edges of the selection region.</para>
/// </summary>
  vtkPolyData^ GetSelectionEdges();


  // unsigned long GetMTime ();
  unsigned long GetMTime();


// Did not wrap:  vtkSelectPolyData ();


// Did not wrap:  ~vtkSelectPolyData ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void GetPointNeighbors (vtkIdType ptId, vtkIdList *nei);


// Did not wrap:  vtkSelectPolyData (const vtkSelectPolyData &);


// Did not wrap:  void vtkSelectPolyData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSelectPolyData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSelectPolyData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSelectPolyData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSelectPolyData();


};

} // end vtkGraphics
