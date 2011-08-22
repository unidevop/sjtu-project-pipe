#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageRectilinearWipe : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageRectilinearWipe *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageRectilinearWipe *NewInstance ();
  vtkImageRectilinearWipe^ NewInstance();


  // vtkImageRectilinearWipe *SafeDownCast (vtkObject* o);
  static vtkImageRectilinearWipe^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetPosition (int , int );
/// <summary>
/// <para>Set/Get the location of the image transition. Note that position is specified in pixels.</para>
/// </summary>
  void SetPosition(int arg0, int arg1);


  // void SetPosition (int  a[2]);
/// <summary>
/// <para>Set/Get the location of the image transition. Note that position is specified in pixels.</para>
/// </summary>
  void SetPosition(array<int>^ a);


  // int  *GetPosition ();
/// <summary>
/// <para>Set/Get the location of the image transition. Note that position is specified in pixels.</para>
/// </summary>
  array<int>^ GetPosition();


  // virtual void SetInput1 (vtkDataObject *in);this SetInput in 
/// <summary>
/// <para>Set the two inputs to this filter.</para>
/// </summary>
  void SetInput1(vtkDataObject^ in);


  // virtual void SetInput2 (vtkDataObject *in);this SetInput in 
/// <summary>
/// <para>Specify the wipe mode. This mode determnis how input 0 and input 1 are combined to produce the output. Each mode uses one or both of the values stored in Position.   SetWipeToQuad - alternate input 0 and input 1 horizontally and     vertically. The Position specifies the location of the quad     intersection.   SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one     input and 1 of the other. Select the location of input 0 to the     LowerLeft{LowerRight,UpperLeft,UpperRight}. Position     selects the location of the corner.   SetWipeToHorizontal - alternate input 0 and input 1 with a vertical     split. Position[0] specifies the location of the vertical     transition between input 0 and input 1.   SetWipeToVertical - alternate input 0 and input 1 with a     horizontal split. Position[1] specifies the location of the     horizonal transition between input 0 and input 1.</para>
/// </summary>
  void SetInput2(vtkDataObject^ in);


  // void SetWipe (int );
/// <summary>
/// <para>Specify the wipe mode. This mode determnis how input 0 and input 1 are combined to produce the output. Each mode uses one or both of the values stored in Position.   SetWipeToQuad - alternate input 0 and input 1 horizontally and     vertically. The Position specifies the location of the quad     intersection.   SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one     input and 1 of the other. Select the location of input 0 to the     LowerLeft{LowerRight,UpperLeft,UpperRight}. Position     selects the location of the corner.   SetWipeToHorizontal - alternate input 0 and input 1 with a vertical     split. Position[0] specifies the location of the vertical     transition between input 0 and input 1.   SetWipeToVertical - alternate input 0 and input 1 with a     horizontal split. Position[1] specifies the location of the     horizonal transition between input 0 and input 1.</para>
/// </summary>
  void SetWipe(int arg0);


  // int GetWipeMinValue ();
/// <summary>
/// <para>Specify the wipe mode. This mode determnis how input 0 and input 1 are combined to produce the output. Each mode uses one or both of the values stored in Position.   SetWipeToQuad - alternate input 0 and input 1 horizontally and     vertically. The Position specifies the location of the quad     intersection.   SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one     input and 1 of the other. Select the location of input 0 to the     LowerLeft{LowerRight,UpperLeft,UpperRight}. Position     selects the location of the corner.   SetWipeToHorizontal - alternate input 0 and input 1 with a vertical     split. Position[0] specifies the location of the vertical     transition between input 0 and input 1.   SetWipeToVertical - alternate input 0 and input 1 with a     horizontal split. Position[1] specifies the location of the     horizonal transition between input 0 and input 1.</para>
/// </summary>
  int GetWipeMinValue();


  // int GetWipeMaxValue ();
/// <summary>
/// <para>Specify the wipe mode. This mode determnis how input 0 and input 1 are combined to produce the output. Each mode uses one or both of the values stored in Position.   SetWipeToQuad - alternate input 0 and input 1 horizontally and     vertically. The Position specifies the location of the quad     intersection.   SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one     input and 1 of the other. Select the location of input 0 to the     LowerLeft{LowerRight,UpperLeft,UpperRight}. Position     selects the location of the corner.   SetWipeToHorizontal - alternate input 0 and input 1 with a vertical     split. Position[0] specifies the location of the vertical     transition between input 0 and input 1.   SetWipeToVertical - alternate input 0 and input 1 with a     horizontal split. Position[1] specifies the location of the     horizonal transition between input 0 and input 1.</para>
/// </summary>
  int GetWipeMaxValue();


  // int GetWipe ();
/// <summary>
/// <para>Specify the wipe mode. This mode determnis how input 0 and input 1 are combined to produce the output. Each mode uses one or both of the values stored in Position.   SetWipeToQuad - alternate input 0 and input 1 horizontally and     vertically. The Position specifies the location of the quad     intersection.   SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one     input and 1 of the other. Select the location of input 0 to the     LowerLeft{LowerRight,UpperLeft,UpperRight}. Position     selects the location of the corner.   SetWipeToHorizontal - alternate input 0 and input 1 with a vertical     split. Position[0] specifies the location of the vertical     transition between input 0 and input 1.   SetWipeToVertical - alternate input 0 and input 1 with a     horizontal split. Position[1] specifies the location of the     horizonal transition between input 0 and input 1.</para>
/// </summary>
  int GetWipe();


  // void SetWipeToQuad ();this SetWipe VTK_WIPE_QUAD 
/// <summary>
/// <para>Specify the wipe mode. This mode determnis how input 0 and input 1 are combined to produce the output. Each mode uses one or both of the values stored in Position.   SetWipeToQuad - alternate input 0 and input 1 horizontally and     vertically. The Position specifies the location of the quad     intersection.   SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one     input and 1 of the other. Select the location of input 0 to the     LowerLeft{LowerRight,UpperLeft,UpperRight}. Position     selects the location of the corner.   SetWipeToHorizontal - alternate input 0 and input 1 with a vertical     split. Position[0] specifies the location of the vertical     transition between input 0 and input 1.   SetWipeToVertical - alternate input 0 and input 1 with a     horizontal split. Position[1] specifies the location of the     horizonal transition between input 0 and input 1.</para>
/// </summary>
  void SetWipeToQuad();


  // void SetWipeToHorizontal ();this SetWipe VTK_WIPE_HORIZONTAL 
/// <summary>
/// <para>Specify the wipe mode. This mode determnis how input 0 and input 1 are combined to produce the output. Each mode uses one or both of the values stored in Position.   SetWipeToQuad - alternate input 0 and input 1 horizontally and     vertically. The Position specifies the location of the quad     intersection.   SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one     input and 1 of the other. Select the location of input 0 to the     LowerLeft{LowerRight,UpperLeft,UpperRight}. Position     selects the location of the corner.   SetWipeToHorizontal - alternate input 0 and input 1 with a vertical     split. Position[0] specifies the location of the vertical     transition between input 0 and input 1.   SetWipeToVertical - alternate input 0 and input 1 with a     horizontal split. Position[1] specifies the location of the     horizonal transition between input 0 and input 1.</para>
/// </summary>
  void SetWipeToHorizontal();


  // void SetWipeToVertical ();this SetWipe VTK_WIPE_VERTICAL 
/// <summary>
/// <para>Specify the wipe mode. This mode determnis how input 0 and input 1 are combined to produce the output. Each mode uses one or both of the values stored in Position.   SetWipeToQuad - alternate input 0 and input 1 horizontally and     vertically. The Position specifies the location of the quad     intersection.   SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one     input and 1 of the other. Select the location of input 0 to the     LowerLeft{LowerRight,UpperLeft,UpperRight}. Position     selects the location of the corner.   SetWipeToHorizontal - alternate input 0 and input 1 with a vertical     split. Position[0] specifies the location of the vertical     transition between input 0 and input 1.   SetWipeToVertical - alternate input 0 and input 1 with a     horizontal split. Position[1] specifies the location of the     horizonal transition between input 0 and input 1.</para>
/// </summary>
  void SetWipeToVertical();


  // void SetWipeToLowerLeft ();this SetWipe VTK_WIPE_LOWER_LEFT 
/// <summary>
/// <para>Specify the wipe mode. This mode determnis how input 0 and input 1 are combined to produce the output. Each mode uses one or both of the values stored in Position.   SetWipeToQuad - alternate input 0 and input 1 horizontally and     vertically. The Position specifies the location of the quad     intersection.   SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one     input and 1 of the other. Select the location of input 0 to the     LowerLeft{LowerRight,UpperLeft,UpperRight}. Position     selects the location of the corner.   SetWipeToHorizontal - alternate input 0 and input 1 with a vertical     split. Position[0] specifies the location of the vertical     transition between input 0 and input 1.   SetWipeToVertical - alternate input 0 and input 1 with a     horizontal split. Position[1] specifies the location of the     horizonal transition between input 0 and input 1.</para>
/// </summary>
  void SetWipeToLowerLeft();


  // void SetWipeToLowerRight ();this SetWipe VTK_WIPE_LOWER_RIGHT 
/// <summary>
/// <para>Specify the wipe mode. This mode determnis how input 0 and input 1 are combined to produce the output. Each mode uses one or both of the values stored in Position.   SetWipeToQuad - alternate input 0 and input 1 horizontally and     vertically. The Position specifies the location of the quad     intersection.   SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one     input and 1 of the other. Select the location of input 0 to the     LowerLeft{LowerRight,UpperLeft,UpperRight}. Position     selects the location of the corner.   SetWipeToHorizontal - alternate input 0 and input 1 with a vertical     split. Position[0] specifies the location of the vertical     transition between input 0 and input 1.   SetWipeToVertical - alternate input 0 and input 1 with a     horizontal split. Position[1] specifies the location of the     horizonal transition between input 0 and input 1.</para>
/// </summary>
  void SetWipeToLowerRight();


  // void SetWipeToUpperLeft ();this SetWipe VTK_WIPE_UPPER_LEFT 
/// <summary>
/// <para>Specify the wipe mode. This mode determnis how input 0 and input 1 are combined to produce the output. Each mode uses one or both of the values stored in Position.   SetWipeToQuad - alternate input 0 and input 1 horizontally and     vertically. The Position specifies the location of the quad     intersection.   SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one     input and 1 of the other. Select the location of input 0 to the     LowerLeft{LowerRight,UpperLeft,UpperRight}. Position     selects the location of the corner.   SetWipeToHorizontal - alternate input 0 and input 1 with a vertical     split. Position[0] specifies the location of the vertical     transition between input 0 and input 1.   SetWipeToVertical - alternate input 0 and input 1 with a     horizontal split. Position[1] specifies the location of the     horizonal transition between input 0 and input 1.</para>
/// </summary>
  void SetWipeToUpperLeft();


  // void SetWipeToUpperRight ();this SetWipe VTK_WIPE_UPPER_RIGHT 
  void SetWipeToUpperRight();


// Did not wrap:  vtkImageRectilinearWipe ();


// Did not wrap:  ~vtkImageRectilinearWipe ();


// Did not wrap:  virtual void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int threadId);


// Did not wrap:  vtkImageRectilinearWipe (const vtkImageRectilinearWipe &);


// Did not wrap:  void vtkImageRectilinearWipe 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageRectilinearWipe(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageRectilinearWipe(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageRectilinearWipe();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageRectilinearWipe();


};

} // end vtkImaging
