#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDSPFilterDefinition;
ref class vtkExodusModel;

public ref class vtkExodusReader : public vtkUnstructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkExodusReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExodusReader *NewInstance ();
  vtkExodusReader^ NewInstance();


  // vtkExodusReader *SafeDownCast (vtkObject* o);
  static vtkExodusReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name of the Exodus file.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name of the Exodus file.</para>
/// </summary>
  System::String^ GetFileName();


  // void SetXMLFileName (const char *filename);
/// <summary>
/// <para>Specify file name of the xml file.</para>
/// </summary>
  void SetXMLFileName(System::String^ filename);


  // char *GetXMLFileName ();
/// <summary>
/// <para>Specify file name of the xml file.</para>
/// </summary>
  System::String^ GetXMLFileName();


  // void SetTimeStep (int );
/// <summary>
/// <para>Which TimeStep to read.    </para>
/// </summary>
  void SetTimeStep(int arg0);


  // int GetTimeStep ();
/// <summary>
/// <para>Which TimeStep to read.    </para>
/// </summary>
  int GetTimeStep();


  // void SetGenerateBlockIdCellArray (int );
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is ON.  The value of the array is the integer id found in the exodus file. The name of the array is returned by  GetBlockIdArrayName()</para>
/// </summary>
  void SetGenerateBlockIdCellArray(int arg0);


  // int GetGenerateBlockIdCellArray ();
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is ON.  The value of the array is the integer id found in the exodus file. The name of the array is returned by  GetBlockIdArrayName()</para>
/// </summary>
  int GetGenerateBlockIdCellArray();


  // void GenerateBlockIdCellArrayOn ();
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is ON.  The value of the array is the integer id found in the exodus file. The name of the array is returned by  GetBlockIdArrayName()</para>
/// </summary>
  void GenerateBlockIdCellArrayOn();


  // void GenerateBlockIdCellArrayOff ();
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is ON.  The value of the array is the integer id found in the exodus file. The name of the array is returned by  GetBlockIdArrayName()</para>
/// </summary>
  void GenerateBlockIdCellArrayOff();


  // const char *GetBlockIdArrayName ();return 
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is off.  The value of the array is the integer global id of the cell. The name of the array is returned by GetGlobalElementIdArrayName()</para>
/// </summary>
  System::String^ GetBlockIdArrayName();


  // void SetGenerateGlobalElementIdArray (int );
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is off.  The value of the array is the integer global id of the cell. The name of the array is returned by GetGlobalElementIdArrayName()</para>
/// </summary>
  void SetGenerateGlobalElementIdArray(int arg0);


  // int GetGenerateGlobalElementIdArray ();
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is off.  The value of the array is the integer global id of the cell. The name of the array is returned by GetGlobalElementIdArrayName()</para>
/// </summary>
  int GetGenerateGlobalElementIdArray();


  // void GenerateGlobalElementIdArrayOn ();
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is off.  The value of the array is the integer global id of the cell. The name of the array is returned by GetGlobalElementIdArrayName()</para>
/// </summary>
  void GenerateGlobalElementIdArrayOn();


  // void GenerateGlobalElementIdArrayOff ();
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is off.  The value of the array is the integer global id of the cell. The name of the array is returned by GetGlobalElementIdArrayName()</para>
/// </summary>
  void GenerateGlobalElementIdArrayOff();


  // static const char *GetGlobalElementIdArrayName ();return 
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is off.  The value of the array is the integer global id of the cell. The name of the array is returned by GetGlobalElementIdArrayName()</para>
/// </summary>
  static System::String^ GetGlobalElementIdArrayName();


  // static int GetGlobalElementID (vtkDataSet *data, int localID);
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is off.  The value of the array is the integer global id of the cell. The name of the array is returned by GetGlobalElementIdArrayName()</para>
/// </summary>
  static int GetGlobalElementID(vtkDataSet^ data, int localID);


  // static int GetGlobalElementID (vtkDataSet *data, int localID, int searchType);
/// <summary>
/// <para>Extra cell data array that can be generated.  By default, this array is off.  The value of the array is the integer global id of the cell. The name of the array is returned by GetGlobalElementIdArrayName()</para>
/// </summary>
  static int GetGlobalElementID(vtkDataSet^ data, int localID, int searchType);


  // void SetGenerateGlobalNodeIdArray (int );
/// <summary>
/// <para>Extra point data array that can be generated.  By default, this array is ON.  The value of the array is the integer id of the node. The id is relative to the entire data set. The name of the array is returned by GlobalNodeIdArrayName().</para>
/// </summary>
  void SetGenerateGlobalNodeIdArray(int arg0);


  // int GetGenerateGlobalNodeIdArray ();
/// <summary>
/// <para>Extra point data array that can be generated.  By default, this array is ON.  The value of the array is the integer id of the node. The id is relative to the entire data set. The name of the array is returned by GlobalNodeIdArrayName().</para>
/// </summary>
  int GetGenerateGlobalNodeIdArray();


  // void GenerateGlobalNodeIdArrayOn ();
/// <summary>
/// <para>Extra point data array that can be generated.  By default, this array is ON.  The value of the array is the integer id of the node. The id is relative to the entire data set. The name of the array is returned by GlobalNodeIdArrayName().</para>
/// </summary>
  void GenerateGlobalNodeIdArrayOn();


  // void GenerateGlobalNodeIdArrayOff ();
/// <summary>
/// <para>Extra point data array that can be generated.  By default, this array is ON.  The value of the array is the integer id of the node. The id is relative to the entire data set. The name of the array is returned by GlobalNodeIdArrayName().</para>
/// </summary>
  void GenerateGlobalNodeIdArrayOff();


  // static const char *GetGlobalNodeIdArrayName ();return 
/// <summary>
/// <para>Extra point data array that can be generated.  By default, this array is ON.  The value of the array is the integer id of the node. The id is relative to the entire data set. The name of the array is returned by GlobalNodeIdArrayName().</para>
/// </summary>
  static System::String^ GetGlobalNodeIdArrayName();


  // static int GetGlobalNodeID (vtkDataSet *data, int localID);
/// <summary>
/// <para>Extra point data array that can be generated.  By default, this array is ON.  The value of the array is the integer id of the node. The id is relative to the entire data set. The name of the array is returned by GlobalNodeIdArrayName().</para>
/// </summary>
  static int GetGlobalNodeID(vtkDataSet^ data, int localID);


  // static int GetGlobalNodeID (vtkDataSet *data, int localID, int searchType);
/// <summary>
/// <para>Extra point data array that can be generated.  By default, this array is ON.  The value of the array is the integer id of the node. The id is relative to the entire data set. The name of the array is returned by GlobalNodeIdArrayName().</para>
/// </summary>
  static int GetGlobalNodeID(vtkDataSet^ data, int localID, int searchType);


  // void SetApplyDisplacements (int );
/// <summary>
/// <para>Geometric locations can include displacements.  By default,  this is ON.  The nodal positions are 'displaced' by the standard exodus displacment vector. If displacements are turned 'off', the user can explicitly add them by applying a warp filter.</para>
/// </summary>
  void SetApplyDisplacements(int arg0);


  // int GetApplyDisplacements ();
/// <summary>
/// <para>Geometric locations can include displacements.  By default,  this is ON.  The nodal positions are 'displaced' by the standard exodus displacment vector. If displacements are turned 'off', the user can explicitly add them by applying a warp filter.</para>
/// </summary>
  int GetApplyDisplacements();


  // void ApplyDisplacementsOn ();
/// <summary>
/// <para>Geometric locations can include displacements.  By default,  this is ON.  The nodal positions are 'displaced' by the standard exodus displacment vector. If displacements are turned 'off', the user can explicitly add them by applying a warp filter.</para>
/// </summary>
  void ApplyDisplacementsOn();


  // void ApplyDisplacementsOff ();
/// <summary>
/// <para>Geometric locations can include displacements.  By default,  this is ON.  The nodal positions are 'displaced' by the standard exodus displacment vector. If displacements are turned 'off', the user can explicitly add them by applying a warp filter.</para>
/// </summary>
  void ApplyDisplacementsOff();


  // void SetDisplacementMagnitude (float );
/// <summary>
/// <para>Geometric locations can include displacements.  By default,  this is ON.  The nodal positions are 'displaced' by the standard exodus displacment vector. If displacements are turned 'off', the user can explicitly add them by applying a warp filter.</para>
/// </summary>
  void SetDisplacementMagnitude(float arg0);


  // float GetDisplacementMagnitude ();
/// <summary>
/// <para>Geometric locations can include displacements.  By default,  this is ON.  The nodal positions are 'displaced' by the standard exodus displacment vector. If displacements are turned 'off', the user can explicitly add them by applying a warp filter.</para>
/// </summary>
  float GetDisplacementMagnitude();


  // char *GetTitle ();
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  System::String^ GetTitle();


  // int GetDimensionality ();
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  int GetDimensionality();


  // int GetNumberOfTimeSteps ();
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  int GetNumberOfTimeSteps();


  // int GetNumberOfElements ();return this NumberOfUsedElements 
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  int GetNumberOfElements();


  // int GetNumberOfNodeSets ();
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  int GetNumberOfNodeSets();


  // int GetNumberOfSideSets ();
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  int GetNumberOfSideSets();


  // int GetNumberOfBlocks ();
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  int GetNumberOfBlocks();


  // int  *GetTimeStepRange ();
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  array<int>^ GetTimeStepRange();


  // void SetTimeStepRange (int , int );
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  void SetTimeStepRange(int arg0, int arg1);


  // void SetTimeStepRange (int  a[2]);
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  void SetTimeStepRange(array<int>^ a);


  // int GetNumberOfNodes ();return this NumberOfUsedNodes 
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  int GetNumberOfNodes();


  // int GetNumberOfElementsInBlock (int block_idx);
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  int GetNumberOfElementsInBlock(int block_idx);


  // int GetBlockId (int block_idx);
/// <summary>
/// <para>Access to meta data generated by UpdateInformation.</para>
/// </summary>
  int GetBlockId(int block_idx);


  // int GetNumberOfPointArrays ();
  int GetNumberOfPointArrays();


  // const char *GetPointArrayName (int index);
  System::String^ GetPointArrayName(int index);


  // int GetPointArrayID (const char *name);
  int GetPointArrayID(System::String^ name);


  // int GetPointArrayNumberOfComponents (int index);
  int GetPointArrayNumberOfComponents(int index);


  // void SetPointArrayStatus (int index, int flag);
  void SetPointArrayStatus(int index, int flag);


  // void SetPointArrayStatus (const char *, int flag);
  void SetPointArrayStatus(System::String^ arg0, int flag);


  // int GetPointArrayStatus (int index);
  int GetPointArrayStatus(int index);


  // int GetPointArrayStatus (const char *);
  int GetPointArrayStatus(System::String^ arg0);


  // int GetNumberOfCellArrays ();
  int GetNumberOfCellArrays();


  // const char *GetCellArrayName (int index);
  System::String^ GetCellArrayName(int index);


  // int GetCellArrayID (const char *name);
  int GetCellArrayID(System::String^ name);


  // int GetCellArrayNumberOfComponents (int index);
  int GetCellArrayNumberOfComponents(int index);


  // void SetCellArrayStatus (int index, int flag);
  void SetCellArrayStatus(int index, int flag);


  // void SetCellArrayStatus (const char *, int flag);
  void SetCellArrayStatus(System::String^ arg0, int flag);


  // int GetCellArrayStatus (int index);
  int GetCellArrayStatus(int index);


  // int GetCellArrayStatus (const char *);
  int GetCellArrayStatus(System::String^ arg0);


  // int GetNumberOfBlockArrays ();
  int GetNumberOfBlockArrays();


  // const char *GetBlockArrayName (int index);
  System::String^ GetBlockArrayName(int index);


  // int GetBlockArrayID (const char *name);
  int GetBlockArrayID(System::String^ name);


  // void SetBlockArrayStatus (int index, int flag);
  void SetBlockArrayStatus(int index, int flag);


  // void SetBlockArrayStatus (const char *, int flag);
  void SetBlockArrayStatus(System::String^ arg0, int flag);


  // int GetBlockArrayStatus (int index);
  int GetBlockArrayStatus(int index);


  // int GetBlockArrayStatus (const char *);
  int GetBlockArrayStatus(System::String^ arg0);


  // int GetNumberOfNodeSetArrays ();return this GetNumberOfNodeSets 
/// <summary>
/// <para>By default Node/Side sets are not loaded, These methods allow the user to select which Node/Side sets they want to load. NumberOfNodeSets and NumberOfSideSets (set by vtk macros) are stored in vtkExodusReader  but other Node/Side set metadata are stored in vtkExodusMetaData Note: GetNumberOfNodeSetArrays and GetNumberOfSideSetArrays are just syntatic sugar for paraview server xml</para>
/// </summary>
  int GetNumberOfNodeSetArrays();


  // int GetNodeSetArrayStatus (int index);
/// <summary>
/// <para>By default Node/Side sets are not loaded, These methods allow the user to select which Node/Side sets they want to load. NumberOfNodeSets and NumberOfSideSets (set by vtk macros) are stored in vtkExodusReader  but other Node/Side set metadata are stored in vtkExodusMetaData Note: GetNumberOfNodeSetArrays and GetNumberOfSideSetArrays are just syntatic sugar for paraview server xml</para>
/// </summary>
  int GetNodeSetArrayStatus(int index);


  // int GetNodeSetArrayStatus (const char *name);
/// <summary>
/// <para>By default Node/Side sets are not loaded, These methods allow the user to select which Node/Side sets they want to load. NumberOfNodeSets and NumberOfSideSets (set by vtk macros) are stored in vtkExodusReader  but other Node/Side set metadata are stored in vtkExodusMetaData Note: GetNumberOfNodeSetArrays and GetNumberOfSideSetArrays are just syntatic sugar for paraview server xml</para>
/// </summary>
  int GetNodeSetArrayStatus(System::String^ name);


  // void SetNodeSetArrayStatus (int index, int flag);
/// <summary>
/// <para>By default Node/Side sets are not loaded, These methods allow the user to select which Node/Side sets they want to load. NumberOfNodeSets and NumberOfSideSets (set by vtk macros) are stored in vtkExodusReader  but other Node/Side set metadata are stored in vtkExodusMetaData Note: GetNumberOfNodeSetArrays and GetNumberOfSideSetArrays are just syntatic sugar for paraview server xml</para>
/// </summary>
  void SetNodeSetArrayStatus(int index, int flag);


  // void SetNodeSetArrayStatus (const char *name, int flag);
/// <summary>
/// <para>By default Node/Side sets are not loaded, These methods allow the user to select which Node/Side sets they want to load. NumberOfNodeSets and NumberOfSideSets (set by vtk macros) are stored in vtkExodusReader  but other Node/Side set metadata are stored in vtkExodusMetaData Note: GetNumberOfNodeSetArrays and GetNumberOfSideSetArrays are just syntatic sugar for paraview server xml</para>
/// </summary>
  void SetNodeSetArrayStatus(System::String^ name, int flag);


  // const char *GetNodeSetArrayName (int index);
/// <summary>
/// <para>By default Node/Side sets are not loaded, These methods allow the user to select which Node/Side sets they want to load. NumberOfNodeSets and NumberOfSideSets (set by vtk macros) are stored in vtkExodusReader  but other Node/Side set metadata are stored in vtkExodusMetaData Note: GetNumberOfNodeSetArrays and GetNumberOfSideSetArrays are just syntatic sugar for paraview server xml</para>
/// </summary>
  System::String^ GetNodeSetArrayName(int index);


  // int GetNumberOfSideSetArrays ();return this GetNumberOfSideSets 
  int GetNumberOfSideSetArrays();


  // int GetSideSetArrayStatus (int index);
  int GetSideSetArrayStatus(int index);


  // int GetSideSetArrayStatus (const char *name);
  int GetSideSetArrayStatus(System::String^ name);


  // void SetSideSetArrayStatus (int index, int flag);
  void SetSideSetArrayStatus(int index, int flag);


  // void SetSideSetArrayStatus (const char *name, int flag);
  void SetSideSetArrayStatus(System::String^ name, int flag);


  // const char *GetSideSetArrayName (int index);
  System::String^ GetSideSetArrayName(int index);


  // int GetNumberOfPartArrays ();
  int GetNumberOfPartArrays();


  // const char *GetPartArrayName (int arrayIdx);
  System::String^ GetPartArrayName(int arrayIdx);


  // int GetPartArrayID (const char *name);
  int GetPartArrayID(System::String^ name);


  // const char *GetPartBlockInfo (int arrayIdx);
  System::String^ GetPartBlockInfo(int arrayIdx);


  // void SetPartArrayStatus (int index, int flag);
  void SetPartArrayStatus(int index, int flag);


  // void SetPartArrayStatus (const char *, int flag);
  void SetPartArrayStatus(System::String^ arg0, int flag);


  // int GetPartArrayStatus (int index);
  int GetPartArrayStatus(int index);


  // int GetPartArrayStatus (const char *);
  int GetPartArrayStatus(System::String^ arg0);


  // int GetNumberOfMaterialArrays ();
  int GetNumberOfMaterialArrays();


  // const char *GetMaterialArrayName (int arrayIdx);
  System::String^ GetMaterialArrayName(int arrayIdx);


  // int GetMaterialArrayID (const char *name);
  int GetMaterialArrayID(System::String^ name);


  // void SetMaterialArrayStatus (int index, int flag);
  void SetMaterialArrayStatus(int index, int flag);


  // void SetMaterialArrayStatus (const char *, int flag);
  void SetMaterialArrayStatus(System::String^ arg0, int flag);


  // int GetMaterialArrayStatus (int index);
  int GetMaterialArrayStatus(int index);


  // int GetMaterialArrayStatus (const char *);
  int GetMaterialArrayStatus(System::String^ arg0);


  // int GetNumberOfAssemblyArrays ();
  int GetNumberOfAssemblyArrays();


  // const char *GetAssemblyArrayName (int arrayIdx);
  System::String^ GetAssemblyArrayName(int arrayIdx);


  // int GetAssemblyArrayID (const char *name);
  int GetAssemblyArrayID(System::String^ name);


  // void SetAssemblyArrayStatus (int index, int flag);
  void SetAssemblyArrayStatus(int index, int flag);


  // void SetAssemblyArrayStatus (const char *, int flag);
  void SetAssemblyArrayStatus(System::String^ arg0, int flag);


  // int GetAssemblyArrayStatus (int index);
  int GetAssemblyArrayStatus(int index);


  // int GetAssemblyArrayStatus (const char *);
  int GetAssemblyArrayStatus(System::String^ arg0);


  // int GetNumberOfHierarchyArrays ();
  int GetNumberOfHierarchyArrays();


  // const char *GetHierarchyArrayName (int arrayIdx);
  System::String^ GetHierarchyArrayName(int arrayIdx);


  // void SetHierarchyArrayStatus (int index, int flag);
  void SetHierarchyArrayStatus(int index, int flag);


  // void SetHierarchyArrayStatus (const char *, int flag);
  void SetHierarchyArrayStatus(System::String^ arg0, int flag);


  // int GetHierarchyArrayStatus (int index);
  int GetHierarchyArrayStatus(int index);


  // int GetHierarchyArrayStatus (const char *);
  int GetHierarchyArrayStatus(System::String^ arg0);


  // int GetDisplayType ();
  int GetDisplayType();


  // virtual void SetDisplayType (int type);
  void SetDisplayType(int type);


  // void ExodusModelMetadataOn ();
  void ExodusModelMetadataOn();


  // void ExodusModelMetadataOff ();
  void ExodusModelMetadataOff();


  // void SetExodusModelMetadata (int );
  void SetExodusModelMetadata(int arg0);


  // int GetExodusModelMetadata ();
  int GetExodusModelMetadata();


  // vtkExodusModel *GetExodusModel ();return this ExodusModel 
  vtkExodusModel^ GetExodusModel();


  // void SetPackExodusModelOntoOutput (int );
  void SetPackExodusModelOntoOutput(int arg0);


  // int GetPackExodusModelOntoOutput ();
  int GetPackExodusModelOntoOutput();


  // void PackExodusModelOntoOutputOn ();
  void PackExodusModelOntoOutputOn();


  // void PackExodusModelOntoOutputOff ();
  void PackExodusModelOntoOutputOff();


  // int IsValidVariable (const char *type, const char *name);
  int IsValidVariable(System::String^ type, System::String^ name);


  // int GetVariableID (const char *type, const char *name);
  int GetVariableID(System::String^ type, System::String^ name);


  // void SetAllAssemblyArrayStatus (int status);
  void SetAllAssemblyArrayStatus(int status);


  // void SetAllBlockArrayStatus (int status);
  void SetAllBlockArrayStatus(int status);


  // void SetAllCellArrayStatus (int status);
  void SetAllCellArrayStatus(int status);


  // void SetAllHierarchyArrayStatus (int status);
  void SetAllHierarchyArrayStatus(int status);


  // void SetAllMaterialArrayStatus (int status);
  void SetAllMaterialArrayStatus(int status);


  // void SetAllPartArrayStatus (int status);
  void SetAllPartArrayStatus(int status);


  // void SetAllPointArrayStatus (int status);
  void SetAllPointArrayStatus(int status);


  // void SetArrayStatus (const char *type, const char *name, int flag);this SetArrayStatus this GetArrayTypeID type name flag 
  void SetArrayStatus(System::String^ type, System::String^ name, int flag);


  // int GetArrayStatus (const char *type, const char *name);return this GetArrayStatus this GetArrayTypeID type name 
  int GetArrayStatus(System::String^ type, System::String^ name);


  // static int StringsEqual (const char *s1, char *s2);
  static int StringsEqual(System::String^ s1, System::String^ s2);


  // static void StringUppercase (const char *str, char *upperstr);
  static void StringUppercase(System::String^ str, System::String^ upperstr);


  // static char *StrDupWithNew (const char *s);
  static System::String^ StrDupWithNew(System::String^ s);


  // int GetTimeSeriesData (int ID, const char *vName, const char *vType, vtkFloatArray *result);
  int GetTimeSeriesData(int ID, System::String^ vName, System::String^ vType, vtkFloatArray^ result);


  // int GetNumberOfVariableArrays ();
  int GetNumberOfVariableArrays();


  // const char *GetVariableArrayName (int a_which);
  System::String^ GetVariableArrayName(int a_which);


  // void EnableDSPFiltering ();
  void EnableDSPFiltering();


  // void AddFilter (vtkDSPFilterDefinition *a_filter);
  void AddFilter(vtkDSPFilterDefinition^ a_filter);


  // void StartAddingFilter ();
  void StartAddingFilter();


  // void AddFilterInputVar (char *name);
  void AddFilterInputVar(System::String^ name);


  // void AddFilterOutputVar (char *name);
  void AddFilterOutputVar(System::String^ name);


  // void AddFilterNumeratorWeight (double weight);
  void AddFilterNumeratorWeight(double weight);


  // void AddFilterForwardNumeratorWeight (double weight);
  void AddFilterForwardNumeratorWeight(double weight);


  // void AddFilterDenominatorWeight (double weight);
  void AddFilterDenominatorWeight(double weight);


  // void FinishAddingFilter ();
  void FinishAddingFilter();


  // void RemoveFilter (char *a_outputVariableName);
  void RemoveFilter(System::String^ a_outputVariableName);


  // void GetDSPOutputArrays (int exoid, vtkUnstructuredGrid *output);
  void GetDSPOutputArrays(int exoid, vtkUnstructuredGrid^ output);


// Did not wrap:  vtkExodusReader ();


// Did not wrap:  ~vtkExodusReader ();


// Did not wrap:  void NewExodusModel ();


// Did not wrap:  void ReadGeometry (int exoid, vtkUnstructuredGrid *output);


// Did not wrap:  void ReadCells (int exoid, vtkUnstructuredGrid *output);


// Did not wrap:  void ReadPoints (int exoid, vtkUnstructuredGrid *output);


// Did not wrap:  void ReadArrays (int exoid, vtkUnstructuredGrid *output);


// Did not wrap:  void ReadNodeAndSideSets (int exoid, vtkUnstructuredGrid *output);


// Did not wrap:  vtkDataArray *ReadPointArray (int exoid, int varIndex);


// Did not wrap:  vtkDataArray *ReadPointVector (int handle, int varIndex, int dim);


// Did not wrap:  vtkDataArray *ReadCellArray (int exoid, int varIndex);


// Did not wrap:  vtkDataArray *ReadCellVector (int handle, int varIndex, int dim);


// Did not wrap:  void ReadNodeSetMetadata ();


// Did not wrap:  void ReadSideSetMetadata ();


// Did not wrap:  static int GetIDHelper (const char *arrayName, vtkDataSet *data, int localID, int searchType);


// Did not wrap:  static int GetGlobalID (const char *arrayName, vtkDataSet *data, int localID, int searchType);


// Did not wrap:  int GetExtraCellCountForNodeSideSets ();


// Did not wrap:  void GenerateExtraArrays (vtkUnstructuredGrid *output);


// Did not wrap:  void SetTitle (char *);


// Did not wrap:  void SetCurrentFileName (char *);


// Did not wrap:  void SetCurrentXMLFileName (char *);


// Did not wrap:  int OpenCurrentFile ();


// Did not wrap:  void CloseCurrentFile ();


// Did not wrap:  void SetUpPointMap (int num_points);


// Did not wrap:  int GetPointMapIndex (int point_id);


// Did not wrap:  void SetGlobalElementIdCache (int *list);


// Did not wrap:  void GetAllTimes (vtkInformationVector *);


// Did not wrap:  int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkExodusReader (const vtkExodusReader &);


// Did not wrap:  void vtkExodusReader 


// Did not wrap:  void AddDisplacements (vtkUnstructuredGrid *output);


// Did not wrap:  void RemoveBeginningAndTrailingSpaces (char *names, int len);


// Did not wrap:  void FixMetadataTruthTable (int *table, int len);


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExodusReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExodusReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExodusReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExodusReader();


};

} // end vtkHybrid
