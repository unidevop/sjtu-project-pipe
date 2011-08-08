#pragma once

// managed includes
#include "vtkImageReader2DotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDICOMImageReader : public vtkImageReader2
{

public:
// Did not wrap:  static vtkDICOMImageReader *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Static method for construction.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Static method for construction.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkDICOMImageReader *NewInstance ();
/// <summary>
/// <para>Static method for construction.</para>
/// </summary>
  vtkDICOMImageReader^ NewInstance();


  // vtkDICOMImageReader *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Static method for construction.</para>
/// </summary>
  static vtkDICOMImageReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (const char *fn);if this DirectoryName delete this DirectoryName if this FileName delete this FileName this DirectoryName NULL this FileName NULL this vtkImageReader2 SetFileName fn 
/// <summary>
/// <para>Set the directory name for the reader to look in for DICOM files. If this method is used, the reader will try to find all the DICOM files in a directory. It will select the subset corresponding to the first series UID it stumbles across and it will try to build an ordered volume from them based on the slice number. The volume building will be upgraded to something more sophisticated in the future.</para>
/// </summary>
  void SetFileName(System::String^ fn);


  // void SetDirectoryName (const char *dn);
/// <summary>
/// <para>Set the directory name for the reader to look in for DICOM files. If this method is used, the reader will try to find all the DICOM files in a directory. It will select the subset corresponding to the first series UID it stumbles across and it will try to build an ordered volume from them based on the slice number. The volume building will be upgraded to something more sophisticated in the future.</para>
/// </summary>
  void SetDirectoryName(System::String^ dn);


  // char *GetDirectoryName ();
/// <summary>
/// <para>Returns the directory name.</para>
/// </summary>
  System::String^ GetDirectoryName();


// Did not wrap:  double *GetPixelSpacing ();


  // int GetWidth ();
/// <summary>
/// <para>Returns the image width.</para>
/// </summary>
  int GetWidth();


  // int GetHeight ();
/// <summary>
/// <para>Returns the image height.</para>
/// </summary>
  int GetHeight();


// Did not wrap:  float *GetImagePositionPatient ();


  // int GetBitsAllocated ();
/// <summary>
/// <para>Get the number of bits allocated for each pixel in the file.</para>
/// </summary>
  int GetBitsAllocated();


  // int GetPixelRepresentation ();
/// <summary>
/// <para>Get the pixel representation of the last image processed by the DICOMParser. A zero is a unsigned quantity.  A one indicates a signed quantity</para>
/// </summary>
  int GetPixelRepresentation();


  // int GetNumberOfComponents ();
/// <summary>
/// <para>Get the number of components of the image data for the last image processed.</para>
/// </summary>
  int GetNumberOfComponents();


  // const char *GetTransferSyntaxUID ();
/// <summary>
/// <para>Get the transfer syntax UID for the last image processed.</para>
/// </summary>
  System::String^ GetTransferSyntaxUID();


  // float GetRescaleSlope ();
/// <summary>
/// <para>Get the rescale slope for the pixel data.</para>
/// </summary>
  float GetRescaleSlope();


  // float GetRescaleOffset ();
/// <summary>
/// <para>Get the rescale offset for the pixel data.</para>
/// </summary>
  float GetRescaleOffset();


  // const char *GetPatientName ();
/// <summary>
/// <para>Get the patient name for the last image processed.</para>
/// </summary>
  System::String^ GetPatientName();


  // const char *GetStudyUID ();
/// <summary>
/// <para>Get the study uid for the last image processed.</para>
/// </summary>
  System::String^ GetStudyUID();


  // const char *GetStudyID ();
/// <summary>
/// <para>Get the Study ID for the last image processed.</para>
/// </summary>
  System::String^ GetStudyID();


  // float GetGantryAngle ();
/// <summary>
/// <para>Get the gantry angle for the last image processed.</para>
/// </summary>
  float GetGantryAngle();


  // virtual int CanReadFile (const char *fname);
  int CanReadFile(System::String^ fname);


// Did not wrap:  void SetupOutputInformation (int num_slices);


// Did not wrap:  virtual const char *GetFileExtensions ();return 


// Did not wrap:  virtual const char *GetDescriptiveName ();return 


// Did not wrap:  virtual void ExecuteInformation ();


// Did not wrap:  virtual void ExecuteData (vtkDataObject *out);


// Did not wrap:  vtkDICOMImageReader ();


// Did not wrap:  virtual ~vtkDICOMImageReader ();


// Did not wrap:  int GetNumberOfDICOMFileNames ();


// Did not wrap:  const char *GetDICOMFileName (int index);


// Did not wrap:  vtkDICOMImageReader (const vtkDICOMImageReader &);


// Did not wrap:  void vtkDICOMImageReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDICOMImageReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDICOMImageReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDICOMImageReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDICOMImageReader();


};

} // end vtkIO
