#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkBlankStructuredGrid : public vtkStructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkBlankStructuredGrid *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBlankStructuredGrid *NewInstance ();
  vtkBlankStructuredGrid^ NewInstance();


  // vtkBlankStructuredGrid *SafeDownCast (vtkObject* o);
  static vtkBlankStructuredGrid^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMinBlankingValue (double );
/// <summary>
/// <para>Specify the lower data value in the data array specified which will be converted into a &quot;blank&quot; (or off) value in the blanking array.</para>
/// </summary>
  void SetMinBlankingValue(double arg0);


  // double GetMinBlankingValue ();
/// <summary>
/// <para>Specify the lower data value in the data array specified which will be converted into a &quot;blank&quot; (or off) value in the blanking array.</para>
/// </summary>
  double GetMinBlankingValue();


  // void SetMaxBlankingValue (double );
/// <summary>
/// <para>Specify the upper data value in the data array specified which will be converted into a &quot;blank&quot; (or off) value in the blanking array.</para>
/// </summary>
  void SetMaxBlankingValue(double arg0);


  // double GetMaxBlankingValue ();
/// <summary>
/// <para>Specify the upper data value in the data array specified which will be converted into a &quot;blank&quot; (or off) value in the blanking array.</para>
/// </summary>
  double GetMaxBlankingValue();


  // void SetArrayName (char *);
/// <summary>
/// <para>Specify the data array name to use to generate the blanking field. Alternatively, you can specify the array id. (If both are set, the array name takes precedence.)</para>
/// </summary>
  void SetArrayName(System::String^ arg0);


  // char *GetArrayName ();
/// <summary>
/// <para>Specify the data array name to use to generate the blanking field. Alternatively, you can specify the array id. (If both are set, the array name takes precedence.)</para>
/// </summary>
  System::String^ GetArrayName();


  // void SetArrayId (int );
/// <summary>
/// <para>Specify the data array id to use to generate the blanking field. Alternatively, you can specify the array name. (If both are set, the array name takes precedence.)</para>
/// </summary>
  void SetArrayId(int arg0);


  // int GetArrayId ();
/// <summary>
/// <para>Specify the data array id to use to generate the blanking field. Alternatively, you can specify the array name. (If both are set, the array name takes precedence.)</para>
/// </summary>
  int GetArrayId();


  // void SetComponent (int );
/// <summary>
/// <para>Specify the component in the data array to use to generate the blanking field.</para>
/// </summary>
  void SetComponent(int arg0);


  // int GetComponentMinValue ();
/// <summary>
/// <para>Specify the component in the data array to use to generate the blanking field.</para>
/// </summary>
  int GetComponentMinValue();


  // int GetComponentMaxValue ();
/// <summary>
/// <para>Specify the component in the data array to use to generate the blanking field.</para>
/// </summary>
  int GetComponentMaxValue();


  // int GetComponent ();
/// <summary>
/// <para>Specify the component in the data array to use to generate the blanking field.</para>
/// </summary>
  int GetComponent();


// Did not wrap:  vtkBlankStructuredGrid ();


// Did not wrap:  ~vtkBlankStructuredGrid ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkBlankStructuredGrid (const vtkBlankStructuredGrid &);


// Did not wrap:  void vtkBlankStructuredGrid 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBlankStructuredGrid(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBlankStructuredGrid(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBlankStructuredGrid();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBlankStructuredGrid();


};

} // end vtkGraphics
