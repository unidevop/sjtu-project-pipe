#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkFieldDataToAttributeDataFilter : public vtkDataSetAlgorithm
{

public:
  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFieldDataToAttributeDataFilter *NewInstance ();
  vtkFieldDataToAttributeDataFilter^ NewInstance();


  // vtkFieldDataToAttributeDataFilter *SafeDownCast (vtkObject* o);
  static vtkFieldDataToAttributeDataFilter^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkFieldDataToAttributeDataFilter *New ();


  // void SetInputField (int );
/// <summary>
/// <para>Specify which field data to use to generate the output attribute data. There are three choices: the field data associated with the vtkDataObject superclass; the point field attribute data; and the cell field attribute data.</para>
/// </summary>
  void SetInputField(int arg0);


  // int GetInputField ();
/// <summary>
/// <para>Specify which field data to use to generate the output attribute data. There are three choices: the field data associated with the vtkDataObject superclass; the point field attribute data; and the cell field attribute data.</para>
/// </summary>
  int GetInputField();


  // void SetInputFieldToDataObjectField ();this SetInputField VTK_DATA_OBJECT_FIELD 
/// <summary>
/// <para>Specify which field data to use to generate the output attribute data. There are three choices: the field data associated with the vtkDataObject superclass; the point field attribute data; and the cell field attribute data.</para>
/// </summary>
  void SetInputFieldToDataObjectField();


  // void SetInputFieldToPointDataField ();this SetInputField VTK_POINT_DATA_FIELD 
/// <summary>
/// <para>Specify which field data to use to generate the output attribute data. There are three choices: the field data associated with the vtkDataObject superclass; the point field attribute data; and the cell field attribute data.</para>
/// </summary>
  void SetInputFieldToPointDataField();


  // void SetInputFieldToCellDataField ();this SetInputField VTK_CELL_DATA_FIELD 
/// <summary>
/// <para>Specify which field data to use to generate the output attribute data. There are three choices: the field data associated with the vtkDataObject superclass; the point field attribute data; and the cell field attribute data.</para>
/// </summary>
  void SetInputFieldToCellDataField();


  // void SetOutputAttributeData (int );
/// <summary>
/// <para>Specify which attribute data to output: point or cell data attributes.</para>
/// </summary>
  void SetOutputAttributeData(int arg0);


  // int GetOutputAttributeData ();
/// <summary>
/// <para>Specify which attribute data to output: point or cell data attributes.</para>
/// </summary>
  int GetOutputAttributeData();


  // void SetOutputAttributeDataToCellData ();this SetOutputAttributeData VTK_CELL_DATA 
/// <summary>
/// <para>Specify which attribute data to output: point or cell data attributes.</para>
/// </summary>
  void SetOutputAttributeDataToCellData();


  // void SetOutputAttributeDataToPointData ();this SetOutputAttributeData VTK_POINT_DATA 
/// <summary>
/// <para>Specify which attribute data to output: point or cell data attributes.</para>
/// </summary>
  void SetOutputAttributeDataToPointData();


  // void SetScalarComponent (int comp, const char *arrayName, int arrayComp, int min, int max, int normalize);
/// <summary>
/// <para>Define the component(s) of the field to be used for the scalar components.  Note that the parameter comp must lie between (0,4). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  void SetScalarComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize);


  // void SetScalarComponent (int comp, const char *arrayName, int arrayComp);this SetScalarComponent comp arrayName arrayComp this DefaultNormalize 
/// <summary>
/// <para>Define the component(s) of the field to be used for the scalar components.  Note that the parameter comp must lie between (0,4). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  void SetScalarComponent(int comp, System::String^ arrayName, int arrayComp);


  // const char *GetScalarComponentArrayName (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the scalar components.  Note that the parameter comp must lie between (0,4). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  System::String^ GetScalarComponentArrayName(int comp);


  // int GetScalarComponentArrayComponent (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the scalar components.  Note that the parameter comp must lie between (0,4). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetScalarComponentArrayComponent(int comp);


  // int GetScalarComponentMinRange (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the scalar components.  Note that the parameter comp must lie between (0,4). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetScalarComponentMinRange(int comp);


  // int GetScalarComponentMaxRange (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the scalar components.  Note that the parameter comp must lie between (0,4). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetScalarComponentMaxRange(int comp);


  // int GetScalarComponentNormalizeFlag (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the scalar components.  Note that the parameter comp must lie between (0,4). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetScalarComponentNormalizeFlag(int comp);


  // void SetVectorComponent (int comp, const char *arrayName, int arrayComp, int min, int max, int normalize);
/// <summary>
/// <para>Define the component(s) of the field to be used for the vector components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  void SetVectorComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize);


  // void SetVectorComponent (int comp, const char *arrayName, int arrayComp);this SetVectorComponent comp arrayName arrayComp this DefaultNormalize 
/// <summary>
/// <para>Define the component(s) of the field to be used for the vector components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  void SetVectorComponent(int comp, System::String^ arrayName, int arrayComp);


  // const char *GetVectorComponentArrayName (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the vector components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  System::String^ GetVectorComponentArrayName(int comp);


  // int GetVectorComponentArrayComponent (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the vector components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetVectorComponentArrayComponent(int comp);


  // int GetVectorComponentMinRange (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the vector components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetVectorComponentMinRange(int comp);


  // int GetVectorComponentMaxRange (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the vector components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetVectorComponentMaxRange(int comp);


  // int GetVectorComponentNormalizeFlag (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the vector components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetVectorComponentNormalizeFlag(int comp);


  // void SetNormalComponent (int comp, const char *arrayName, int arrayComp, int min, int max, int normalize);
/// <summary>
/// <para>Define the component(s) of the field to be used for the normal components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  void SetNormalComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize);


  // void SetNormalComponent (int comp, const char *arrayName, int arrayComp);this SetNormalComponent comp arrayName arrayComp this DefaultNormalize 
/// <summary>
/// <para>Define the component(s) of the field to be used for the normal components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  void SetNormalComponent(int comp, System::String^ arrayName, int arrayComp);


  // const char *GetNormalComponentArrayName (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the normal components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  System::String^ GetNormalComponentArrayName(int comp);


  // int GetNormalComponentArrayComponent (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the normal components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetNormalComponentArrayComponent(int comp);


  // int GetNormalComponentMinRange (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the normal components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetNormalComponentMinRange(int comp);


  // int GetNormalComponentMaxRange (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the normal components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetNormalComponentMaxRange(int comp);


  // int GetNormalComponentNormalizeFlag (int comp);
/// <summary>
/// <para>Define the component(s) of the field to be used for the normal components.  Note that the parameter comp must lie between (0,3). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetNormalComponentNormalizeFlag(int comp);


  // void SetTensorComponent (int comp, const char *arrayName, int arrayComp, int min, int max, int normalize);
/// <summary>
/// <para>Define the components of the field to be used for the tensor components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  void SetTensorComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize);


  // void SetTensorComponent (int comp, const char *arrayName, int arrayComp);this SetTensorComponent comp arrayName arrayComp this DefaultNormalize 
/// <summary>
/// <para>Define the components of the field to be used for the tensor components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  void SetTensorComponent(int comp, System::String^ arrayName, int arrayComp);


  // const char *GetTensorComponentArrayName (int comp);
/// <summary>
/// <para>Define the components of the field to be used for the tensor components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  System::String^ GetTensorComponentArrayName(int comp);


  // int GetTensorComponentArrayComponent (int comp);
/// <summary>
/// <para>Define the components of the field to be used for the tensor components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetTensorComponentArrayComponent(int comp);


  // int GetTensorComponentMinRange (int comp);
/// <summary>
/// <para>Define the components of the field to be used for the tensor components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetTensorComponentMinRange(int comp);


  // int GetTensorComponentMaxRange (int comp);
/// <summary>
/// <para>Define the components of the field to be used for the tensor components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetTensorComponentMaxRange(int comp);


  // int GetTensorComponentNormalizeFlag (int comp);
/// <summary>
/// <para>Define the components of the field to be used for the tensor components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetTensorComponentNormalizeFlag(int comp);


  // void SetTCoordComponent (int comp, const char *arrayName, int arrayComp, int min, int max, int normalize);
/// <summary>
/// <para>Define the components of the field to be used for the cell texture coord components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  void SetTCoordComponent(int comp, System::String^ arrayName, int arrayComp, int min, int max, int normalize);


  // void SetTCoordComponent (int comp, const char *arrayName, int arrayComp);this SetTCoordComponent comp arrayName arrayComp this DefaultNormalize 
/// <summary>
/// <para>Define the components of the field to be used for the cell texture coord components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  void SetTCoordComponent(int comp, System::String^ arrayName, int arrayComp);


  // const char *GetTCoordComponentArrayName (int comp);
/// <summary>
/// <para>Define the components of the field to be used for the cell texture coord components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  System::String^ GetTCoordComponentArrayName(int comp);


  // int GetTCoordComponentArrayComponent (int comp);
/// <summary>
/// <para>Define the components of the field to be used for the cell texture coord components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetTCoordComponentArrayComponent(int comp);


  // int GetTCoordComponentMinRange (int comp);
/// <summary>
/// <para>Define the components of the field to be used for the cell texture coord components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetTCoordComponentMinRange(int comp);


  // int GetTCoordComponentMaxRange (int comp);
/// <summary>
/// <para>Define the components of the field to be used for the cell texture coord components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetTCoordComponentMaxRange(int comp);


  // int GetTCoordComponentNormalizeFlag (int comp);
/// <summary>
/// <para>Define the components of the field to be used for the cell texture coord components.  Note that the parameter comp must lie between (0,9). To define the field component to use you specify an array name and the component in that array. The (min,max) values are the range of data in the component you wish to extract.</para>
/// </summary>
  int GetTCoordComponentNormalizeFlag(int comp);


  // void SetDefaultNormalize (int );
/// <summary>
/// <para>Set the default Normalize() flag for those methods setting a default Normalize value (e.g., SetScalarComponents).</para>
/// </summary>
  void SetDefaultNormalize(int arg0);


  // int GetDefaultNormalize ();
/// <summary>
/// <para>Set the default Normalize() flag for those methods setting a default Normalize value (e.g., SetScalarComponents).</para>
/// </summary>
  int GetDefaultNormalize();


  // void DefaultNormalizeOn ();
/// <summary>
/// <para>Set the default Normalize() flag for those methods setting a default Normalize value (e.g., SetScalarComponents).</para>
/// </summary>
  void DefaultNormalizeOn();


  // void DefaultNormalizeOff ();
/// <summary>
/// <para>Set the default Normalize() flag for those methods setting a default Normalize value (e.g., SetScalarComponents).</para>
/// </summary>
  void DefaultNormalizeOff();


// Did not wrap:  static int GetComponentsType (int numComp, vtkDataArray *arrays);


  // static int ConstructArray (vtkDataArray *da, int comp, vtkDataArray *frray, int fieldComp, vtkIdType min, vtkIdType max, int normalize);
/// <summary>
/// <para>Construct a portion of a data array (the comp portion) from another data array and its component. The variables min and max control the range of the data to use from the other data array; normalize is a flag that when set will normalize the data between (0,1).</para>
/// </summary>
  static int ConstructArray(vtkDataArray^ da, int comp, vtkDataArray^ frray, int fieldComp, int min, int max, int normalize);


  // static vtkDataArray *GetFieldArray (vtkFieldData *fd, char *name, int comp);
/// <summary>
/// <para>Return an array of a particular name from field data and do error checking.</para>
/// </summary>
  static vtkDataArray^ GetFieldArray(vtkFieldData^ fd, System::String^ name, int comp);


// Did not wrap:  static void SetArrayName (vtkObject *self, char &name, const char *newName);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkFieldDataToAttributeDataFilter ();


// Did not wrap:  ~vtkFieldDataToAttributeDataFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ConstructScalars (int num, vtkFieldData *fd, vtkDataSetAttributes *attr, vtkIdType componentRange[4][2], char *arrays[4], int arrayComponents[4], int normalize[4], int numComp);


// Did not wrap:  void ConstructVectors (int num, vtkFieldData *fd, vtkDataSetAttributes *attr, vtkIdType componentRange[3][2], char *arrays[3], int arrayComponents[3], int normalize[3]);


// Did not wrap:  void ConstructGhostLevels (int num, vtkFieldData *fd, vtkDataSetAttributes *attr, vtkIdType componentRange[2], char *array, int arrayComponent, int normalize);


// Did not wrap:  void ConstructNormals (int num, vtkFieldData *fd, vtkDataSetAttributes *attr, vtkIdType componentRange[3][2], char *arrays[3], int arrayComponents[3], int normalize[3]);


// Did not wrap:  void ConstructTCoords (int num, vtkFieldData *fd, vtkDataSetAttributes *attr, vtkIdType componentRange[3][2], char *arrays[3], int arrayComponents[3], int normalize[3], int numComp);


// Did not wrap:  void ConstructTensors (int num, vtkFieldData *fd, vtkDataSetAttributes *attr, vtkIdType componentRange[9][2], char *arrays[9], int arrayComponents[9], int normalize[9]);


// Did not wrap:  void ConstructFieldData (int num, vtkDataSetAttributes *attr);


// Did not wrap:  vtkFieldDataToAttributeDataFilter (const vtkFieldDataToAttributeDataFilter &);


// Did not wrap:  void vtkFieldDataToAttributeDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFieldDataToAttributeDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFieldDataToAttributeDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFieldDataToAttributeDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFieldDataToAttributeDataFilter();


};

} // end vtkGraphics
