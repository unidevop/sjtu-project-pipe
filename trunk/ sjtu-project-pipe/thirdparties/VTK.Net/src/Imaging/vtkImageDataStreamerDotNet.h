#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageDataStreamer : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageDataStreamer *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageDataStreamer *NewInstance ();
  vtkImageDataStreamer^ NewInstance();


  // vtkImageDataStreamer *SafeDownCast (vtkObject* o);
  static vtkImageDataStreamer^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetNumberOfStreamDivisions (int );
/// <summary>
/// <para>Set how many pieces to divide the input into. void SetNumberOfStreamDivisions(int num); int GetNumberOfStreamDivisions();</para>
/// </summary>
  void SetNumberOfStreamDivisions(int arg0);


  // int GetNumberOfStreamDivisions ();
/// <summary>
/// <para>Set how many pieces to divide the input into. void SetNumberOfStreamDivisions(int num); int GetNumberOfStreamDivisions();</para>
/// </summary>
  int GetNumberOfStreamDivisions();


  // virtual void Update ();this vtkAlgorithm Update 
  void Update();


  // virtual void UpdateWholeExtent ();this vtkAlgorithm UpdateWholeExtent 
  void UpdateWholeExtent();


  // virtual void SetExtentTranslator (vtkExtentTranslator *);
/// <summary>
/// <para>Get the extent translator that will be used to split the requests</para>
/// </summary>
  void SetExtentTranslator(vtkExtentTranslator^ arg0);


  // vtkExtentTranslator *GetExtentTranslator ();
/// <summary>
/// <para>Get the extent translator that will be used to split the requests</para>
/// </summary>
  vtkExtentTranslator^ GetExtentTranslator();


// Did not wrap:  int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageDataStreamer ();


// Did not wrap:  ~vtkImageDataStreamer ();


// Did not wrap:  vtkImageDataStreamer (const vtkImageDataStreamer &);


// Did not wrap:  void vtkImageDataStreamer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageDataStreamer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageDataStreamer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageDataStreamer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageDataStreamer();


};

} // end vtkImaging
