#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataObjectToDataSetFilter : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkDataObjectToDataSetFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataObjectToDataSetFilter *NewInstance ();
  vtkDataObjectToDataSetFilter^ NewInstance();


  // vtkDataObjectToDataSetFilter *SafeDownCast (vtkObject* o);
  static vtkDataObjectToDataSetFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkDataObject *GetInput ();
/// <summary>
/// <para>Get the input to the filter.</para>
/// </summary>
  vtkDataObject^ GetInput();


  // void SetDataSetType (int );
/// <summary>
/// <para>Control what type of data is generated for output.</para>
/// </summary>
  void SetDataSetType(int arg0);


  // int GetDataSetType ();
/// <summary>
/// <para>Control what type of data is generated for output.</para>
/// </summary>
  int GetDataSetType();


  // void SetDataSetTypeToPolyData ();this SetDataSetType VTK_POLY_DATA 
/// <summary>
/// <para>Control what type of data is generated for output.</para>
/// </summary>
  void SetDataSetTypeToPolyData();


  // void SetDataSetTypeToStructuredPoints ();this SetDataSetType VTK_STRUCTURED_POINTS 
/// <summary>
/// <para>Control what type of data is generated for output.</para>
/// </summary>
  void SetDataSetTypeToStructuredPoints();


  // void SetDataSetTypeToStructuredGrid ();this SetDataSetType VTK_STRUCTURED_GRID 
/// <summary>
/// <para>Control what type of data is generated for output.</para>
/// </summary>
  void SetDataSetTypeToStructuredGrid();


  // void SetDataSetTypeToRectilinearGrid ();this SetDataSetType VTK_RECTILINEAR_GRID 
/// <summary>
/// <para>Control what type of data is generated for output.</para>
/// </summary>
  void SetDataSetTypeToRectilinearGrid();


  // void SetDataSetTypeToUnstructuredGrid ();this SetDataSetType VTK_UNSTRUCTURED_GRID 
/// <summary>
/// <para>Control what type of data is generated for output.</para>
/// </summary>
  void SetDataSetTypeToUnstructuredGrid();


  // vtkDataSet *GetOutput ();
/// <summary>
/// <para>Get the output in different forms. The particular method invoked should be consistent with the SetDataSetType() method. (Note: GetOutput() will always return a type consistent with  SetDataSetType(). Also, GetOutput() will return NULL if the filter aborted due to inconsistent data.)</para>
/// </summary>
  vtkDataSet^ GetOutput();


  // vtkDataSet *GetOutput (int idx);
/// <summary>
/// <para>Get the output in different forms. The particular method invoked should be consistent with the SetDataSetType() method. (Note: GetOutput() will always return a type consistent with  SetDataSetType(). Also, GetOutput() will return NULL if the filter aborted due to inconsistent data.)</para>
/// </summary>
  vtkDataSet^ GetOutput(int idx);


  // vtkPolyData *GetPolyDataOutput ();
/// <summary>
/// <para>Get the output in different forms. The particular method invoked should be consistent with the SetDataSetType() method. (Note: GetOutput() will always return a type consistent with  SetDataSetType(). Also, GetOutput() will return NULL if the filter aborted due to inconsistent data.)</para>
/// </summary>
  vtkPolyData^ GetPolyDataOutput();


  // vtkStructuredPoints *GetStructuredPointsOutput ();
/// <summary>
/// <para>Get the output in different forms. The particular method invoked should be consistent with the SetDataSetType() method. (Note: GetOutput() will always return a type consistent with  SetDataSetType(). Also, GetOutput() will return NULL if the filter aborted due to inconsistent data.)</para>
/// </summary>
  vtkStructuredPoints^ GetStructuredPointsOutput();


  // vtkStructuredGrid *GetStructuredGridOutput ();
/// <summary>
/// <para>Get the output in different forms. The particular method invoked should be consistent with the SetDataSetType() method. (Note: GetOutput() will always return a type consistent with  SetDataSetType(). Also, GetOutput() will return NULL if the filter aborted due to inconsistent data.)</para>
/// </summary>
  vtkStructuredGrid^ GetStructuredGridOutput();


  // vtkUnstructuredGrid *GetUnstructuredGridOutput ();
/// <summary>
/// <para>Get the output in different forms. The particular method invoked should be consistent with the SetDataSetType() method. (Note: GetOutput() will always return a type consistent with  SetDataSetType(). Also, GetOutput() will return NULL if the filter aborted due to inconsistent data.)</para>
/// </summary>
  vtkUnstructuredGrid^ GetUnstructuredGridOutput();


  // vtkRectilinearGrid *GetRectilinearGridOutput ();
/// <summary>
/// <para>Get the output in different forms. The particular method invoked should be consistent with the SetDataSetType() method. (Note: GetOutput() will always return a type consistent with  SetDataSetType(). Also, GetOutput() will return NULL if the filter aborted due to inconsistent data.)</para>
/// </summary>
  vtkRectilinearGrid^ GetRectilinearGridOutput();


  // void SetPointComponent (int comp, char *arrayName, int arrayComp, int min, int max, int normalize);
/// <summary>
/// <para>Define the component of the field to be used for the x, y, and z values of the points. Note that the parameter comp must lie between (0,2) and refers to the x-y-z (i.e., 0,1,2) components of the points. To define the field component to use you can specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract. (This method should be used for vtkPolyData, vtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.) A convenience method, SetPointComponent(),is also provided which does not require setting the (min,max) component range or the normalize flag (normalize is set to DefaulatNormalize value).</para>
/// </summary>
  void SetPointComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize);


  // void SetPointComponent (int comp, char *arrayName, int arrayComp);this SetPointComponent comp arrayName arrayComp this DefaultNormalize 
/// <summary>
/// <para>Define the component of the field to be used for the x, y, and z values of the points. Note that the parameter comp must lie between (0,2) and refers to the x-y-z (i.e., 0,1,2) components of the points. To define the field component to use you can specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract. (This method should be used for vtkPolyData, vtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.) A convenience method, SetPointComponent(),is also provided which does not require setting the (min,max) component range or the normalize flag (normalize is set to DefaulatNormalize value).</para>
/// </summary>
  void SetPointComponent(int comp, System::String^ arrayName, int arrayComp);


  // const char *GetPointComponentArrayName (int comp);
/// <summary>
/// <para>Define the component of the field to be used for the x, y, and z values of the points. Note that the parameter comp must lie between (0,2) and refers to the x-y-z (i.e., 0,1,2) components of the points. To define the field component to use you can specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract. (This method should be used for vtkPolyData, vtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.) A convenience method, SetPointComponent(),is also provided which does not require setting the (min,max) component range or the normalize flag (normalize is set to DefaulatNormalize value).</para>
/// </summary>
  System::String^ GetPointComponentArrayName(int comp);


  // int GetPointComponentArrayComponent (int comp);
/// <summary>
/// <para>Define the component of the field to be used for the x, y, and z values of the points. Note that the parameter comp must lie between (0,2) and refers to the x-y-z (i.e., 0,1,2) components of the points. To define the field component to use you can specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract. (This method should be used for vtkPolyData, vtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.) A convenience method, SetPointComponent(),is also provided which does not require setting the (min,max) component range or the normalize flag (normalize is set to DefaulatNormalize value).</para>
/// </summary>
  int GetPointComponentArrayComponent(int comp);


  // int GetPointComponentMinRange (int comp);
/// <summary>
/// <para>Define the component of the field to be used for the x, y, and z values of the points. Note that the parameter comp must lie between (0,2) and refers to the x-y-z (i.e., 0,1,2) components of the points. To define the field component to use you can specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract. (This method should be used for vtkPolyData, vtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.) A convenience method, SetPointComponent(),is also provided which does not require setting the (min,max) component range or the normalize flag (normalize is set to DefaulatNormalize value).</para>
/// </summary>
  int GetPointComponentMinRange(int comp);


  // int GetPointComponentMaxRange (int comp);
/// <summary>
/// <para>Define the component of the field to be used for the x, y, and z values of the points. Note that the parameter comp must lie between (0,2) and refers to the x-y-z (i.e., 0,1,2) components of the points. To define the field component to use you can specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract. (This method should be used for vtkPolyData, vtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.) A convenience method, SetPointComponent(),is also provided which does not require setting the (min,max) component range or the normalize flag (normalize is set to DefaulatNormalize value).</para>
/// </summary>
  int GetPointComponentMaxRange(int comp);


  // int GetPointComponentNormailzeFlag (int comp);
/// <summary>
/// <para>Define the component of the field to be used for the x, y, and z values of the points. Note that the parameter comp must lie between (0,2) and refers to the x-y-z (i.e., 0,1,2) components of the points. To define the field component to use you can specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract. (This method should be used for vtkPolyData, vtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.) A convenience method, SetPointComponent(),is also provided which does not require setting the (min,max) component range or the normalize flag (normalize is set to DefaulatNormalize value).</para>
/// </summary>
  int GetPointComponentNormailzeFlag(int comp);


  // void SetVertsComponent (char *arrayName, int arrayComp, int min, int max);
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  void SetVertsComponent(System::String^ arrayName, int arrayComp, int min, int max);


  // void SetVertsComponent (char *arrayName, int arrayComp);this SetVertsComponent arrayName arrayComp 
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  void SetVertsComponent(System::String^ arrayName, int arrayComp);


  // const char *GetVertsComponentArrayName ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  System::String^ GetVertsComponentArrayName();


  // int GetVertsComponentArrayComponent ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetVertsComponentArrayComponent();


  // int GetVertsComponentMinRange ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetVertsComponentMinRange();


  // int GetVertsComponentMaxRange ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetVertsComponentMaxRange();


  // void SetLinesComponent (char *arrayName, int arrayComp, int min, int max);
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  void SetLinesComponent(System::String^ arrayName, int arrayComp, int min, int max);


  // void SetLinesComponent (char *arrayName, int arrayComp);this SetLinesComponent arrayName arrayComp 
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  void SetLinesComponent(System::String^ arrayName, int arrayComp);


  // const char *GetLinesComponentArrayName ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  System::String^ GetLinesComponentArrayName();


  // int GetLinesComponentArrayComponent ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetLinesComponentArrayComponent();


  // int GetLinesComponentMinRange ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetLinesComponentMinRange();


  // int GetLinesComponentMaxRange ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetLinesComponentMaxRange();


  // void SetPolysComponent (char *arrayName, int arrayComp, int min, int max);
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  void SetPolysComponent(System::String^ arrayName, int arrayComp, int min, int max);


  // void SetPolysComponent (char *arrayName, int arrayComp);this SetPolysComponent arrayName arrayComp 
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  void SetPolysComponent(System::String^ arrayName, int arrayComp);


  // const char *GetPolysComponentArrayName ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  System::String^ GetPolysComponentArrayName();


  // int GetPolysComponentArrayComponent ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetPolysComponentArrayComponent();


  // int GetPolysComponentMinRange ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetPolysComponentMinRange();


  // int GetPolysComponentMaxRange ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetPolysComponentMaxRange();


  // void SetStripsComponent (char *arrayName, int arrayComp, int min, int max);
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  void SetStripsComponent(System::String^ arrayName, int arrayComp, int min, int max);


  // void SetStripsComponent (char *arrayName, int arrayComp);this SetStripsComponent arrayName arrayComp 
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  void SetStripsComponent(System::String^ arrayName, int arrayComp);


  // const char *GetStripsComponentArrayName ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  System::String^ GetStripsComponentArrayName();


  // int GetStripsComponentArrayComponent ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetStripsComponentArrayComponent();


  // int GetStripsComponentMinRange ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetStripsComponentMinRange();


  // int GetStripsComponentMaxRange ();
/// <summary>
/// <para>Define cell connectivity when creating vtkPolyData. You can define vertices, lines, polygons, and/or triangle strips via these methods. These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of values that (for each cell) includes the number of  points per cell, and then the cell connectivity. (This is the vtk file  format described in in the textbook or User's Guide.)</para>
/// </summary>
  int GetStripsComponentMaxRange();


  // void SetCellTypeComponent (char *arrayName, int arrayComp, int min, int max);
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  void SetCellTypeComponent(System::String^ arrayName, int arrayComp, int min, int max);


  // void SetCellTypeComponent (char *arrayName, int arrayComp);this SetCellTypeComponent arrayName arrayComp 
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  void SetCellTypeComponent(System::String^ arrayName, int arrayComp);


  // const char *GetCellTypeComponentArrayName ();
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  System::String^ GetCellTypeComponentArrayName();


  // int GetCellTypeComponentArrayComponent ();
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  int GetCellTypeComponentArrayComponent();


  // int GetCellTypeComponentMinRange ();
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  int GetCellTypeComponentMinRange();


  // int GetCellTypeComponentMaxRange ();
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  int GetCellTypeComponentMaxRange();


  // void SetCellConnectivityComponent (char *arrayName, int arrayComp, int min, int max);
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  void SetCellConnectivityComponent(System::String^ arrayName, int arrayComp, int min, int max);


  // void SetCellConnectivityComponent (char *arrayName, int arrayComp);this SetCellConnectivityComponent arrayName arrayComp 
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  void SetCellConnectivityComponent(System::String^ arrayName, int arrayComp);


  // const char *GetCellConnectivityComponentArrayName ();
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  System::String^ GetCellConnectivityComponentArrayName();


  // int GetCellConnectivityComponentArrayComponent ();
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  int GetCellConnectivityComponentArrayComponent();


  // int GetCellConnectivityComponentMinRange ();
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  int GetCellConnectivityComponentMinRange();


  // int GetCellConnectivityComponentMaxRange ();
/// <summary>
/// <para>Define cell types and cell connectivity when creating unstructured grid data.  These methods are similar to those for defining points, except that no normalization of the data is possible. Basically, you need to define an array of cell types (an integer value per cell), and another array consisting (for each cell) of a number of points per cell, and then the cell connectivity. (This is the vtk file format described in  in the textbook or User's Guide.)</para>
/// </summary>
  int GetCellConnectivityComponentMaxRange();


  // void SetDefaultNormalize (int );
/// <summary>
/// <para>Set the default Normalize() flag for those methods setting a default Normalize value (e.g., SetPointComponent).</para>
/// </summary>
  void SetDefaultNormalize(int arg0);


  // int GetDefaultNormalize ();
/// <summary>
/// <para>Set the default Normalize() flag for those methods setting a default Normalize value (e.g., SetPointComponent).</para>
/// </summary>
  int GetDefaultNormalize();


  // void DefaultNormalizeOn ();
/// <summary>
/// <para>Set the default Normalize() flag for those methods setting a default Normalize value (e.g., SetPointComponent).</para>
/// </summary>
  void DefaultNormalizeOn();


  // void DefaultNormalizeOff ();
/// <summary>
/// <para>Set the default Normalize() flag for those methods setting a default Normalize value (e.g., SetPointComponent).</para>
/// </summary>
  void DefaultNormalizeOff();


  // void SetDimensions (int , int , int );
  void SetDimensions(int arg0, int arg1, int arg2);


  // void SetDimensions (int  a[3]);
  void SetDimensions(array<int>^ a);


  // int  *GetDimensions ();
  array<int>^ GetDimensions();


  // void SetOrigin (double , double , double );
  void SetOrigin(double arg0, double arg1, double arg2);


  // void SetOrigin (double  a[3]);
  void SetOrigin(array<double>^ a);


  // double  *GetOrigin ();
  array<double>^ GetOrigin();


  // void SetSpacing (double , double , double );
  void SetSpacing(double arg0, double arg1, double arg2);


  // void SetSpacing (double  a[3]);
  void SetSpacing(array<double>^ a);


  // double  *GetSpacing ();
  array<double>^ GetSpacing();


  // void SetDimensionsComponent (char *arrayName, int arrayComp, int min, int max);
  void SetDimensionsComponent(System::String^ arrayName, int arrayComp, int min, int max);


  // void SetDimensionsComponent (char *arrayName, int arrayComp);this SetDimensionsComponent arrayName arrayComp 
  void SetDimensionsComponent(System::String^ arrayName, int arrayComp);


  // void SetSpacingComponent (char *arrayName, int arrayComp, int min, int max);
  void SetSpacingComponent(System::String^ arrayName, int arrayComp, int min, int max);


  // void SetSpacingComponent (char *arrayName, int arrayComp);this SetSpacingComponent arrayName arrayComp 
  void SetSpacingComponent(System::String^ arrayName, int arrayComp);


  // void SetOriginComponent (char *arrayName, int arrayComp, int min, int max);
  void SetOriginComponent(System::String^ arrayName, int arrayComp, int min, int max);


  // void SetOriginComponent (char *arrayName, int arrayComp);this SetOriginComponent arrayName arrayComp 
  void SetOriginComponent(System::String^ arrayName, int arrayComp);


// Did not wrap:  vtkDataObjectToDataSetFilter ();


// Did not wrap:  ~vtkDataObjectToDataSetFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual int RequestDataObject (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void SetArrayName (char &name, char *newName);


// Did not wrap:  vtkIdType ConstructPoints (vtkDataObject *input, vtkPointSet *ps);


// Did not wrap:  vtkIdType ConstructPoints (vtkDataObject *input, vtkRectilinearGrid *rg);


// Did not wrap:  int ConstructCells (vtkDataObject *input, vtkPolyData *pd);


// Did not wrap:  int ConstructCells (vtkDataObject *input, vtkUnstructuredGrid *ug);


// Did not wrap:  vtkCellArray *ConstructCellArray (vtkDataArray *da, int comp, vtkIdType compRange[2]);


// Did not wrap:  void ConstructDimensions (vtkDataObject *input);


// Did not wrap:  void ConstructSpacing (vtkDataObject *input);


// Did not wrap:  void ConstructOrigin (vtkDataObject *input);


// Did not wrap:  vtkDataObjectToDataSetFilter (const vtkDataObjectToDataSetFilter &);


// Did not wrap:  void vtkDataObjectToDataSetFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataObjectToDataSetFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataObjectToDataSetFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataObjectToDataSetFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataObjectToDataSetFilter();


};

} // end vtkGraphics
