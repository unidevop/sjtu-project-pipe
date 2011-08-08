#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkProbeFilter : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkProbeFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProbeFilter *NewInstance ();
  vtkProbeFilter^ NewInstance();


  // vtkProbeFilter *SafeDownCast (vtkObject* o);
  static vtkProbeFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetSource (vtkDataObject *source);
/// <summary>
/// <para>Specify the point locations used to probe input. Any geometry can be used. Old style. Do not use unless for backwards compatibility.</para>
/// </summary>
  void SetSource(vtkDataObject^ source);


  // vtkDataObject *GetSource ();
/// <summary>
/// <para>Specify the point locations used to probe input. Any geometry can be used. Old style. Do not use unless for backwards compatibility.</para>
/// </summary>
  vtkDataObject^ GetSource();


  // void SetSourceConnection (vtkAlgorithmOutput *algOutput);
/// <summary>
/// <para>Specify the point locations used to probe input. Any geometry can be used. New style. Equivalent to SetInputConnection(1, algOutput).</para>
/// </summary>
  void SetSourceConnection(vtkAlgorithmOutput^ algOutput);


  // void SetSpatialMatch (int );
/// <summary>
/// <para>This flag is used only when a piece is requested to update.  By default the flag is off.  Because no spatial correspondence between input pieces and source pieces is known, all of the source has to be requested no matter what piece of the output is requested.  When there is a spatial  correspondence, the user/application can set this flag.  This hint allows the breakup of the probe operation to be much more efficient.  When piece m of n is requested for update by the user, then only n of m needs to be requested of the source. </para>
/// </summary>
  void SetSpatialMatch(int arg0);


  // int GetSpatialMatch ();
/// <summary>
/// <para>This flag is used only when a piece is requested to update.  By default the flag is off.  Because no spatial correspondence between input pieces and source pieces is known, all of the source has to be requested no matter what piece of the output is requested.  When there is a spatial  correspondence, the user/application can set this flag.  This hint allows the breakup of the probe operation to be much more efficient.  When piece m of n is requested for update by the user, then only n of m needs to be requested of the source. </para>
/// </summary>
  int GetSpatialMatch();


  // void SpatialMatchOn ();
/// <summary>
/// <para>This flag is used only when a piece is requested to update.  By default the flag is off.  Because no spatial correspondence between input pieces and source pieces is known, all of the source has to be requested no matter what piece of the output is requested.  When there is a spatial  correspondence, the user/application can set this flag.  This hint allows the breakup of the probe operation to be much more efficient.  When piece m of n is requested for update by the user, then only n of m needs to be requested of the source. </para>
/// </summary>
  void SpatialMatchOn();


  // void SpatialMatchOff ();
/// <summary>
/// <para>This flag is used only when a piece is requested to update.  By default the flag is off.  Because no spatial correspondence between input pieces and source pieces is known, all of the source has to be requested no matter what piece of the output is requested.  When there is a spatial  correspondence, the user/application can set this flag.  This hint allows the breakup of the probe operation to be much more efficient.  When piece m of n is requested for update by the user, then only n of m needs to be requested of the source. </para>
/// </summary>
  void SpatialMatchOff();


  // vtkIdTypeArray *GetValidPoints ();
/// <summary>
/// <para>Get the list of point ids in the output that contain attribute data interpolated from the source.</para>
/// </summary>
  vtkIdTypeArray^ GetValidPoints();


// Did not wrap:  vtkProbeFilter ();


// Did not wrap:  ~vtkProbeFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void Probe (vtkDataSet *input, vtkDataSet *source, vtkDataSet *output);


// Did not wrap:  vtkProbeFilter (const vtkProbeFilter &);


// Did not wrap:  void vtkProbeFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProbeFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProbeFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProbeFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProbeFilter();


};

} // end vtkGraphics
