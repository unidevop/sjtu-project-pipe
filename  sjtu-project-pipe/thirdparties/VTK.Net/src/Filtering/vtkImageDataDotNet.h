#pragma once

// managed includes
#include "vtkDataSetDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;
ref class vtkDataObject;
ref class vtkGenericCell;
ref class vtkInformation;

public ref class vtkImageData : public vtkDataSet
{

public:
// Did not wrap:  static vtkImageData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageData *NewInstance ();
  vtkImageData^ NewInstance();


  // vtkImageData *SafeDownCast (vtkObject* o);
  static vtkImageData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void CopyStructure (vtkDataSet *ds);
/// <summary>
/// <para>Copy the geometric and topological structure of an input image data object.</para>
/// </summary>
  void CopyStructure(vtkDataSet^ ds);


  // virtual int GetDataObjectType ();return VTK_IMAGE_DATA 
/// <summary>
/// <para>Return what type of dataset this is.</para>
/// </summary>
  int GetDataObjectType();


  // virtual vtkIdType GetNumberOfCells ();
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetNumberOfCells();


  // virtual vtkIdType GetNumberOfPoints ();
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetNumberOfPoints();


  // virtual double *GetPoint (vtkIdType ptId);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  array<double>^ GetPoint(int ptId);


  // virtual void GetPoint (vtkIdType id, double x[3]);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetPoint(int id, array<double>^ x);


  // virtual vtkCell *GetCell (vtkIdType cellId);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  vtkCell^ GetCell(int cellId);


  // virtual void GetCell (vtkIdType cellId, vtkGenericCell *cell);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetCell(int cellId, vtkGenericCell^ cell);


  // virtual void GetCellBounds (vtkIdType cellId, double bounds[6]);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetCellBounds(int cellId, array<double>^ bounds);


  // virtual vtkIdType FindPoint (double x, double y, double z);return this vtkDataSet FindPoint x y z 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int FindPoint(double x, double y, double z);


  // virtual vtkIdType FindPoint (double x[3]);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int FindPoint(array<double>^ x);


  // virtual vtkIdType FindCell (double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int FindCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // virtual vtkIdType FindCell (double x[3], vtkCell *cell, vtkGenericCell *gencell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int FindCell(array<double>^ x, vtkCell^ cell, vtkGenericCell^ gencell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // virtual vtkCell *FindAndGetCell (double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  vtkCell^ FindAndGetCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // virtual int GetCellType (vtkIdType cellId);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetCellType(int cellId);


  // virtual void GetCellPoints (vtkIdType cellId, vtkIdList *ptIds);vtkStructuredData GetCellPoints cellId ptIds this DataDescription this GetDimensions 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetCellPoints(int cellId, vtkIdList^ ptIds);


  // virtual void GetPointCells (vtkIdType ptId, vtkIdList *cellIds);vtkStructuredData GetPointCells ptId cellIds this GetDimensions 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetPointCells(int ptId, vtkIdList^ cellIds);


  // virtual void ComputeBounds ();
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void ComputeBounds();


  // virtual int GetMaxCellSize ();return 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetMaxCellSize();


  // virtual void Initialize ();
/// <summary>
/// <para>Restore data object to initial state,</para>
/// </summary>
  void Initialize();


  // virtual void SetDimensions (int i, int j, int k);
/// <summary>
/// <para>Set dimensions of structured points dataset.</para>
/// </summary>
  void SetDimensions(int i, int j, int k);


  // virtual void SetDimensions (int dims[3]);
/// <summary>
/// <para>Set dimensions of structured points dataset.</para>
/// </summary>
  void SetDimensions(array<int>^ dims);


  // virtual int *GetDimensions ();
/// <summary>
/// <para>Get dimensions of this structured points dataset. It is the number of points on each axis. Dimensions are computed from Extents during this call.</para>
/// </summary>
  array<int>^ GetDimensions();


  // virtual void GetDimensions (int dims[3]);
/// <summary>
/// <para>Get dimensions of this structured points dataset. It is the number of points on each axis. Dimensions are computed from Extents during this call.</para>
/// </summary>
  void GetDimensions(array<int>^ dims);


  // virtual int ComputeStructuredCoordinates (double x[3], int ijk[3], double pcoords[3]);
/// <summary>
/// <para>Convenience function computes the structured coordinates for a point x[3]. The voxel is specified by the array ijk[3], and the parametric coordinates in the cell are specified with pcoords[3]. The function returns a 0 if the point x is outside of the volume, and a 1 if inside the volume.</para>
/// </summary>
  int ComputeStructuredCoordinates(array<double>^ x, array<int>^ ijk, array<double>^ pcoords);


  // virtual void GetVoxelGradient (int i, int j, int k, vtkDataArray *s, vtkDataArray *g);
/// <summary>
/// <para>Given structured coordinates (i,j,k) for a voxel cell, compute the eight  gradient values for the voxel corners. The order in which the gradient vectors are arranged corresponds to the ordering of the voxel points.  Gradient vector is computed by central differences (except on edges of  volume where forward difference is used). The scalars s are the scalars from which the gradient is to be computed. This method will treat  only 3D structured point datasets (i.e., volumes).</para>
/// </summary>
  void GetVoxelGradient(int i, int j, int k, vtkDataArray^ s, vtkDataArray^ g);


  // virtual void GetPointGradient (int i, int j, int k, vtkDataArray *s, double g[3]);
/// <summary>
/// <para>Given structured coordinates (i,j,k) for a point in a structured point  dataset, compute the gradient vector from the scalar data at that point.  The scalars s are the scalars from which the gradient is to be computed. This method will treat structured point datasets of any dimension.</para>
/// </summary>
  void GetPointGradient(int i, int j, int k, vtkDataArray^ s, array<double>^ g);


  // virtual int GetDataDimension ();
/// <summary>
/// <para>Return the dimensionality of the data.</para>
/// </summary>
  int GetDataDimension();


  // virtual vtkIdType ComputePointId (int ijk[3]);return vtkStructuredData ComputePointId this GetDimensions ijk 
/// <summary>
/// <para>Given a location in structured coordinates (i-j-k), return the point id.</para>
/// </summary>
  int ComputePointId(array<int>^ ijk);


  // virtual vtkIdType ComputeCellId (int ijk[3]);return vtkStructuredData ComputeCellId this GetDimensions ijk 
/// <summary>
/// <para>Given a location in structured coordinates (i-j-k), return the cell id.</para>
/// </summary>
  int ComputeCellId(array<int>^ ijk);


  // virtual void SetAxisUpdateExtent (int axis, int min, int max);
/// <summary>
/// <para>Set / Get the extent on just one axis</para>
/// </summary>
  void SetAxisUpdateExtent(int axis, int min, int max);


  // virtual void GetAxisUpdateExtent (int axis, int &min, int &max);
/// <summary>
/// <para>Set / Get the extent on just one axis</para>
/// </summary>
  void GetAxisUpdateExtent(int axis, int% min, int% max);


  // virtual void UpdateInformation ();
/// <summary>
/// <para>Override to copy information from pipeline information to data information for backward compatibility.  See vtkDataObject::UpdateInformation for details.</para>
/// </summary>
  void UpdateInformation();


  // virtual void SetExtent (int extent[6]);
/// <summary>
/// <para>Set/Get the extent. On each axis, the extent is defined by the index of the first point and the index of the last point.  The extent should be set before the &quot;Scalars&quot; are set or allocated.  The Extent is stored in the order (X, Y, Z).</para>
/// </summary>
  void SetExtent(array<int>^ extent);


  // virtual void SetExtent (int x1, int x2, int y1, int y2, int z1, int z2);
/// <summary>
/// <para>Set/Get the extent. On each axis, the extent is defined by the index of the first point and the index of the last point.  The extent should be set before the &quot;Scalars&quot; are set or allocated.  The Extent is stored in the order (X, Y, Z).</para>
/// </summary>
  void SetExtent(int x1, int x2, int y1, int y2, int z1, int z2);


  // int  *GetExtent ();
/// <summary>
/// <para>Set/Get the extent. On each axis, the extent is defined by the index of the first point and the index of the last point.  The extent should be set before the &quot;Scalars&quot; are set or allocated.  The Extent is stored in the order (X, Y, Z).</para>
/// </summary>
  array<int>^ GetExtent();


  // virtual unsigned long GetEstimatedMemorySize ();
/// <summary>
/// <para>Get the estimated size of this data object itself. Should be called after UpdateInformation() and PropagateUpdateExtent() have both been  called. This estimate should be fairly accurate since this is structured data.</para>
/// </summary>
  unsigned long GetEstimatedMemorySize();


  // virtual double GetScalarTypeMin ();
/// <summary>
/// <para>These returns the minimum and maximum values the ScalarType can hold without overflowing.</para>
/// </summary>
  double GetScalarTypeMin();


  // virtual double GetScalarTypeMax ();
/// <summary>
/// <para>These returns the minimum and maximum values the ScalarType can hold without overflowing.</para>
/// </summary>
  double GetScalarTypeMax();


  // virtual int GetScalarSize ();
/// <summary>
/// <para>Set the size of the scalar type in bytes.</para>
/// </summary>
  int GetScalarSize();


  // virtual vtkIdType *GetIncrements ();
/// <summary>
/// <para>Different ways to get the increments for moving around the data. GetIncrements() calls ComputeIncrements() to ensure the increments are up to date.</para>
/// </summary>
  array<int>^ GetIncrements();


  // virtual void GetIncrements (vtkIdType &incX, vtkIdType &incY, vtkIdType &incZ);
/// <summary>
/// <para>Different ways to get the increments for moving around the data. GetIncrements() calls ComputeIncrements() to ensure the increments are up to date.</para>
/// </summary>
  void GetIncrements(int% incX, int% incY, int% incZ);


  // virtual void GetIncrements (vtkIdType inc[3]);
/// <summary>
/// <para>Different ways to get the increments for moving around the data. GetIncrements() calls ComputeIncrements() to ensure the increments are up to date.</para>
/// </summary>
  void GetIncrements(array<int>^ arg0);


  // virtual void GetContinuousIncrements (int extent[6], vtkIdType &incX, vtkIdType &incY, vtkIdType &incZ);
/// <summary>
/// <para>Different ways to get the increments for moving around the data. incX is always returned with 0.  incY is returned with the increment needed to move from the end of one X scanline of data to the start of the next line.  incZ is filled in with the increment needed to move from the end of one image to the start of the next.  The proper way to use these values is to for a loop over Z, Y, X, C, incrementing the pointer by 1 after each component.  When the end of the component is reached, the pointer is set to the beginning of the next pixel, thus incX is properly set to 0.</para>
/// </summary>
  void GetContinuousIncrements(array<int>^ extent, int% incX, int% incY, int% incZ);


  // virtual void *GetScalarPointerForExtent (int extent[6]);
/// <summary>
/// <para>Access the native pointer for the scalar data</para>
/// </summary>
  System::IntPtr GetScalarPointerForExtent(array<int>^ extent);


  // virtual void *GetScalarPointer (int coordinates[3]);
/// <summary>
/// <para>Access the native pointer for the scalar data</para>
/// </summary>
  System::IntPtr GetScalarPointer(array<int>^ coordinates);


  // virtual void *GetScalarPointer (int x, int y, int z);
/// <summary>
/// <para>Access the native pointer for the scalar data</para>
/// </summary>
  System::IntPtr GetScalarPointer(int x, int y, int z);


  // virtual void *GetScalarPointer ();
/// <summary>
/// <para>Access the native pointer for the scalar data</para>
/// </summary>
  System::IntPtr GetScalarPointer();


  // virtual float GetScalarComponentAsFloat (int x, int y, int z, int component);
/// <summary>
/// <para>For access to data from tcl</para>
/// </summary>
  float GetScalarComponentAsFloat(int x, int y, int z, int component);


  // virtual void SetScalarComponentFromFloat (int x, int y, int z, int component, float v);
/// <summary>
/// <para>For access to data from tcl</para>
/// </summary>
  void SetScalarComponentFromFloat(int x, int y, int z, int component, float v);


  // virtual double GetScalarComponentAsDouble (int x, int y, int z, int component);
/// <summary>
/// <para>For access to data from tcl</para>
/// </summary>
  double GetScalarComponentAsDouble(int x, int y, int z, int component);


  // virtual void SetScalarComponentFromDouble (int x, int y, int z, int component, double v);
/// <summary>
/// <para>For access to data from tcl</para>
/// </summary>
  void SetScalarComponentFromDouble(int x, int y, int z, int component, double v);


  // virtual void AllocateScalars ();
/// <summary>
/// <para>Allocate the vtkScalars object associated with this object.</para>
/// </summary>
  void AllocateScalars();


  // virtual void CopyAndCastFrom (vtkImageData *inData, int extent[6]);
/// <summary>
/// <para>This method is passed a input and output region, and executes the filter algorithm to fill the output from the input. It just executes a switch statement to call the correct function for the regions data types.</para>
/// </summary>
  void CopyAndCastFrom(vtkImageData^ inData, array<int>^ extent);


  // virtual void CopyAndCastFrom (vtkImageData *inData, int x0, int x1, int y0, int y1, int z0, int z1);int e e x0 e x1 e y0 e y1 e z0 e z1 this CopyAndCastFrom inData e 
/// <summary>
/// <para>Reallocates and copies to set the Extent to the UpdateExtent. This is used internally when the exact extent is requested,  and the source generated more than the update extent. </para>
/// </summary>
  void CopyAndCastFrom(vtkImageData^ inData, int x0, int x1, int y0, int y1, int z0, int z1);


  // virtual void Crop ();
/// <summary>
/// <para>Reallocates and copies to set the Extent to the UpdateExtent. This is used internally when the exact extent is requested,  and the source generated more than the update extent. </para>
/// </summary>
  void Crop();


  // virtual unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the actual size of the data in kilobytes. This number is valid only after the pipeline has updated. The memory size returned is guaranteed to be greater than or equal to the memory required to represent the data (e.g., extra space in arrays, etc. are not included in the return value). THIS METHOD IS THREAD SAFE.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // void SetSpacing (double , double , double );
/// <summary>
/// <para>Set the spacing (width,height,length) of the cubical cells that compose the data set.</para>
/// </summary>
  void SetSpacing(double arg0, double arg1, double arg2);


  // void SetSpacing (double  a[3]);
/// <summary>
/// <para>Set the spacing (width,height,length) of the cubical cells that compose the data set.</para>
/// </summary>
  void SetSpacing(array<double>^ a);


  // double  *GetSpacing ();
/// <summary>
/// <para>Set the spacing (width,height,length) of the cubical cells that compose the data set.</para>
/// </summary>
  array<double>^ GetSpacing();


  // void SetOrigin (double , double , double );
/// <summary>
/// <para>Set the origin of the data. The origin plus spacing determine the position in space of the points.</para>
/// </summary>
  void SetOrigin(double arg0, double arg1, double arg2);


  // void SetOrigin (double  a[3]);
/// <summary>
/// <para>Set the origin of the data. The origin plus spacing determine the position in space of the points.</para>
/// </summary>
  void SetOrigin(array<double>^ a);


  // double  *GetOrigin ();
/// <summary>
/// <para>Set the origin of the data. The origin plus spacing determine the position in space of the points.</para>
/// </summary>
  array<double>^ GetOrigin();


  // void SetScalarTypeToFloat ();this SetScalarType VTK_FLOAT 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToFloat();


  // void SetScalarTypeToDouble ();this SetScalarType VTK_DOUBLE 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToDouble();


  // void SetScalarTypeToInt ();this SetScalarType VTK_INT 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToInt();


  // void SetScalarTypeToUnsignedInt ();this SetScalarType VTK_UNSIGNED_INT 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToUnsignedInt();


  // void SetScalarTypeToLong ();this SetScalarType VTK_LONG 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToLong();


  // void SetScalarTypeToUnsignedLong ();this SetScalarType VTK_UNSIGNED_LONG 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToUnsignedLong();


  // void SetScalarTypeToShort ();this SetScalarType VTK_SHORT 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToShort();


  // void SetScalarTypeToUnsignedShort ();this SetScalarType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToUnsignedShort();


  // void SetScalarTypeToUnsignedChar ();this SetScalarType VTK_UNSIGNED_CHAR 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToUnsignedChar();


  // void SetScalarTypeToChar ();this SetScalarType VTK_CHAR 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToChar();


  // void SetScalarType (int );
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarType(int arg0);


  // int GetScalarType ();
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  int GetScalarType();


  // const char *GetScalarTypeAsString ();return vtkImageScalarTypeNameMacro this GetScalarType 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  System::String^ GetScalarTypeAsString();


  // void SetNumberOfScalarComponents (int n);
/// <summary>
/// <para>Set/Get the number of scalar components for points. As with the SetScalarType method this is setting pipeline info.</para>
/// </summary>
  void SetNumberOfScalarComponents(int n);


  // int GetNumberOfScalarComponents ();
/// <summary>
/// <para>Set/Get the number of scalar components for points. As with the SetScalarType method this is setting pipeline info.</para>
/// </summary>
  int GetNumberOfScalarComponents();


  // virtual void CopyTypeSpecificInformation (vtkDataObject *image);
  void CopyTypeSpecificInformation(vtkDataObject^ image);


  // virtual void CopyInformationToPipeline (vtkInformation *request, vtkInformation *input);
/// <summary>
/// <para>Override these to handle origin, spacing, scalar type, and scalar number of components.  See vtkDataObject for details.</para>
/// </summary>
  void CopyInformationToPipeline(vtkInformation^ request, vtkInformation^ input);


  // virtual void CopyInformationFromPipeline (vtkInformation *request);
/// <summary>
/// <para>Override these to handle origin, spacing, scalar type, and scalar number of components.  See vtkDataObject for details.</para>
/// </summary>
  void CopyInformationFromPipeline(vtkInformation^ request);


  // virtual void PrepareForNewData ();
/// <summary>
/// <para>make the output data ready for new data to be inserted. For most  objects we just call Initialize. But for image data we leave the old data in case the memory can be reused.</para>
/// </summary>
  void PrepareForNewData();


  // virtual void ShallowCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.</para>
/// </summary>
  void ShallowCopy(vtkDataObject^ src);


  // virtual void DeepCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.</para>
/// </summary>
  void DeepCopy(vtkDataObject^ src);


  // void *GetArrayPointerForExtent (vtkDataArray *array, int extent[6]);
/// <summary>
/// <para>These are convenience methods for getting a pointer from any filed array.  It is a start at expanding image filters to process any array (not just scalars).</para>
/// </summary>
  System::IntPtr GetArrayPointerForExtent(vtkDataArray^ arg0, array<int>^ extent);


  // void *GetArrayPointer (vtkDataArray *array, int coordinates[3]);
/// <summary>
/// <para>These are convenience methods for getting a pointer from any filed array.  It is a start at expanding image filters to process any array (not just scalars).</para>
/// </summary>
  System::IntPtr GetArrayPointer(vtkDataArray^ arg0, array<int>^ coordinates);


  // void GetArrayIncrements (vtkDataArray *array, vtkIdType increments[3]);
/// <summary>
/// <para>Since various arrays have different number of components, the will have different increments.</para>
/// </summary>
  void GetArrayIncrements(vtkDataArray^ arg0, array<int>^ arg1);


  // void ComputeInternalExtent (int *intExt, int *tgtExt, int *bnds);
/// <summary>
/// <para>Given how many pixel are required on a side for bounrary conditions (in bnds), the target extent to traverse, compute the internal extent (the extent for this ImageData that does nto suffer from any boundary conditions) and place it in intExt</para>
/// </summary>
  void ComputeInternalExtent(array<int>^ intExt, array<int>^ tgtExt, array<int>^ bnds);


  // virtual int GetExtentType ();return VTK_3D_EXTENT 
/// <summary>
/// <para>The extent type is a 3D extent</para>
/// </summary>
  int GetExtentType();


// Did not wrap:  vtkImageData ();


// Did not wrap:  ~vtkImageData ();


// Did not wrap:  void ComputeIncrements ();


// Did not wrap:  void CopyOriginAndSpacingFromPipeline ();


// Did not wrap:  void InternalImageDataCopy (vtkImageData *src);


// Did not wrap:  vtkImageData (const vtkImageData &);


// Did not wrap:  void vtkImageData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageData();


};

} // end vtkFiltering
