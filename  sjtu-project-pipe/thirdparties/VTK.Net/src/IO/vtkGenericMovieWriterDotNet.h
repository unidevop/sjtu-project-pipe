#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGenericMovieWriter : public vtkProcessObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericMovieWriter *NewInstance ();
  vtkGenericMovieWriter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkImageData *input);
/// <summary>
/// <para>Set/Get the input object from the image pipeline.</para>
/// </summary>
  void SetInput(vtkImageData^ input);


  // virtual vtkImageData *GetInput ();
/// <summary>
/// <para>Set/Get the input object from the image pipeline.</para>
/// </summary>
  vtkImageData^ GetInput();


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name of avi file.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name of avi file.</para>
/// </summary>
  System::String^ GetFileName();


  // virtual void Start () = 0;
/// <summary>
/// <para>These methods start writing an Movie file, write a frame to the file and then end the writing process.</para>
/// </summary>
  void Start();


  // virtual void Write () = 0;
/// <summary>
/// <para>These methods start writing an Movie file, write a frame to the file and then end the writing process.</para>
/// </summary>
  void Write();


  // virtual void End () = 0;
/// <summary>
/// <para>These methods start writing an Movie file, write a frame to the file and then end the writing process.</para>
/// </summary>
  void End();


  // int GetError ();
/// <summary>
/// <para>Was there an error on the last read performed?</para>
/// </summary>
  int GetError();


// Did not wrap:  vtkGenericMovieWriter ();


// Did not wrap:  ~vtkGenericMovieWriter ();


// Did not wrap:  vtkGenericMovieWriter (const vtkGenericMovieWriter &);


// Did not wrap:  void vtkGenericMovieWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericMovieWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericMovieWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericMovieWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericMovieWriter();


};

} // end vtkIO
