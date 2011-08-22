#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCutter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCutter *NewInstance ();
  vtkCutter^ NewInstance();


  // vtkCutter *SafeDownCast (vtkObject* o);
  static vtkCutter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCutter *New ();


  // void SetValue (int i, double value);this ContourValues SetValue i value 
/// <summary>
/// <para>Get the ith contour value.</para>
/// </summary>
  void SetValue(int i, double value);


  // double GetValue (int i);return this ContourValues GetValue i 
/// <summary>
/// <para>Get a pointer to an array of contour values. There will be GetNumberOfContours() values in the list.</para>
/// </summary>
  double GetValue(int i);


// Did not wrap:  double *GetValues ();return this ContourValues GetValues 


  // void GetValues (double *contourValues);this ContourValues GetValues contourValues 
/// <summary>
/// <para>Set the number of contours to place into the list. You only really need to use this method to reduce list size. The method SetValue() will automatically increase list size as needed.</para>
/// </summary>
  void GetValues(array<double>^ contourValues);


  // void SetNumberOfContours (int number);this ContourValues SetNumberOfContours number 
/// <summary>
/// <para>Get the number of contours in the list of contour values.</para>
/// </summary>
  void SetNumberOfContours(int number);


  // int GetNumberOfContours ();return this ContourValues GetNumberOfContours 
/// <summary>
/// <para>Generate numContours equally spaced contour values between specified range. Contour values will include min/max range values.</para>
/// </summary>
  int GetNumberOfContours();


  // void GenerateValues (int numContours, double range[2]);this ContourValues GenerateValues numContours range 
/// <summary>
/// <para>Generate numContours equally spaced contour values between specified range. Contour values will include min/max range values.</para>
/// </summary>
  void GenerateValues(int numContours, array<double>^ range);


  // void GenerateValues (int numContours, double rangeStart, double rangeEnd);this ContourValues GenerateValues numContours rangeStart rangeEnd 
/// <summary>
/// <para>Override GetMTime because we delegate to vtkContourValues and refer to vtkImplicitFunction.</para>
/// </summary>
  void GenerateValues(int numContours, double rangeStart, double rangeEnd);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override GetMTime because we delegate to vtkContourValues and refer to vtkImplicitFunction.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void SetCutFunction (vtkImplicitFunction *);
  void SetCutFunction(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetCutFunction ();
  vtkImplicitFunction^ GetCutFunction();


  // void SetGenerateCutScalars (int );
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be interpolated from the implicit function values, and not the input scalar data.</para>
/// </summary>
  void SetGenerateCutScalars(int arg0);


  // int GetGenerateCutScalars ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be interpolated from the implicit function values, and not the input scalar data.</para>
/// </summary>
  int GetGenerateCutScalars();


  // void GenerateCutScalarsOn ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be interpolated from the implicit function values, and not the input scalar data.</para>
/// </summary>
  void GenerateCutScalarsOn();


  // void GenerateCutScalarsOff ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be interpolated from the implicit function values, and not the input scalar data.</para>
/// </summary>
  void GenerateCutScalarsOff();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Specify a spatial locator for merging points. By default,  an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Specify a spatial locator for merging points. By default,  an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void SetSortBy (int );
/// <summary>
/// <para>Set the sorting order for the generated polydata. There are two possibilities:   Sort by value = 0 - This is the most efficient sort. For each cell,      all contour values are processed. This is the default.   Sort by cell = 1 - For each contour value, all cells are processed.      This order should be used if the extracted polygons must be rendered      in a back-to-front or front-to-back order. This is very problem       dependent. For most applications, the default order is fine (and faster).</para>
/// <para>Sort by cell is going to have a problem if the input has 2D and 3D cells. Cell data will be scrambled becauses with  vtkPolyData output, verts and lines have lower cell ids than triangles.</para>
/// </summary>
  void SetSortBy(int arg0);


  // int GetSortByMinValue ();
/// <summary>
/// <para>Set the sorting order for the generated polydata. There are two possibilities:   Sort by value = 0 - This is the most efficient sort. For each cell,      all contour values are processed. This is the default.   Sort by cell = 1 - For each contour value, all cells are processed.      This order should be used if the extracted polygons must be rendered      in a back-to-front or front-to-back order. This is very problem       dependent. For most applications, the default order is fine (and faster).</para>
/// <para>Sort by cell is going to have a problem if the input has 2D and 3D cells. Cell data will be scrambled becauses with  vtkPolyData output, verts and lines have lower cell ids than triangles.</para>
/// </summary>
  int GetSortByMinValue();


  // int GetSortByMaxValue ();
/// <summary>
/// <para>Set the sorting order for the generated polydata. There are two possibilities:   Sort by value = 0 - This is the most efficient sort. For each cell,      all contour values are processed. This is the default.   Sort by cell = 1 - For each contour value, all cells are processed.      This order should be used if the extracted polygons must be rendered      in a back-to-front or front-to-back order. This is very problem       dependent. For most applications, the default order is fine (and faster).</para>
/// <para>Sort by cell is going to have a problem if the input has 2D and 3D cells. Cell data will be scrambled becauses with  vtkPolyData output, verts and lines have lower cell ids than triangles.</para>
/// </summary>
  int GetSortByMaxValue();


  // int GetSortBy ();
/// <summary>
/// <para>Set the sorting order for the generated polydata. There are two possibilities:   Sort by value = 0 - This is the most efficient sort. For each cell,      all contour values are processed. This is the default.   Sort by cell = 1 - For each contour value, all cells are processed.      This order should be used if the extracted polygons must be rendered      in a back-to-front or front-to-back order. This is very problem       dependent. For most applications, the default order is fine (and faster).</para>
/// <para>Sort by cell is going to have a problem if the input has 2D and 3D cells. Cell data will be scrambled becauses with  vtkPolyData output, verts and lines have lower cell ids than triangles.</para>
/// </summary>
  int GetSortBy();


  // void SetSortByToSortByValue ();this SetSortBy VTK_SORT_BY_VALUE 
/// <summary>
/// <para>Set the sorting order for the generated polydata. There are two possibilities:   Sort by value = 0 - This is the most efficient sort. For each cell,      all contour values are processed. This is the default.   Sort by cell = 1 - For each contour value, all cells are processed.      This order should be used if the extracted polygons must be rendered      in a back-to-front or front-to-back order. This is very problem       dependent. For most applications, the default order is fine (and faster).</para>
/// <para>Sort by cell is going to have a problem if the input has 2D and 3D cells. Cell data will be scrambled becauses with  vtkPolyData output, verts and lines have lower cell ids than triangles.</para>
/// </summary>
  void SetSortByToSortByValue();


  // void SetSortByToSortByCell ();this SetSortBy VTK_SORT_BY_CELL 
/// <summary>
/// <para>Set the sorting order for the generated polydata. There are two possibilities:   Sort by value = 0 - This is the most efficient sort. For each cell,      all contour values are processed. This is the default.   Sort by cell = 1 - For each contour value, all cells are processed.      This order should be used if the extracted polygons must be rendered      in a back-to-front or front-to-back order. This is very problem       dependent. For most applications, the default order is fine (and faster).</para>
/// <para>Sort by cell is going to have a problem if the input has 2D and 3D cells. Cell data will be scrambled becauses with  vtkPolyData output, verts and lines have lower cell ids than triangles.</para>
/// </summary>
  void SetSortByToSortByCell();


  // const char *GetSortByAsString ();
/// <summary>
/// <para>Set the sorting order for the generated polydata. There are two possibilities:   Sort by value = 0 - This is the most efficient sort. For each cell,      all contour values are processed. This is the default.   Sort by cell = 1 - For each contour value, all cells are processed.      This order should be used if the extracted polygons must be rendered      in a back-to-front or front-to-back order. This is very problem       dependent. For most applications, the default order is fine (and faster).</para>
/// <para>Sort by cell is going to have a problem if the input has 2D and 3D cells. Cell data will be scrambled becauses with  vtkPolyData output, verts and lines have lower cell ids than triangles.</para>
/// </summary>
  System::String^ GetSortByAsString();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified. The  locator is used to merge coincident points.</para>
/// </summary>
  void CreateDefaultLocator();


  // static void GetCellTypeDimensions (unsigned char *cellTypeDimensions);
/// <summary>
/// <para>Normally I would put this in a different class, but since This is a temporary fix until we convert this class and contour filter to generate unstructured grid output instead of poly data, I am leaving it here.</para>
/// </summary>
  static void GetCellTypeDimensions(array<unsigned char>^ cellTypeDimensions);


// Did not wrap:  vtkCutter (vtkImplicitFunction *cfNULL);


// Did not wrap:  ~vtkCutter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void UnstructuredGridCutter (vtkDataSet *input, vtkPolyData *output);


// Did not wrap:  void DataSetCutter (vtkDataSet *input, vtkPolyData *output);


// Did not wrap:  void StructuredPointsCutter (vtkDataSet *, vtkPolyData *, vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void StructuredGridCutter (vtkDataSet *, vtkPolyData *);


// Did not wrap:  void RectilinearGridCutter (vtkDataSet *, vtkPolyData *);


// Did not wrap:  vtkCutter (const vtkCutter &);


// Did not wrap:  void vtkCutter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCutter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCutter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCutter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCutter();


};

} // end vtkGraphics
