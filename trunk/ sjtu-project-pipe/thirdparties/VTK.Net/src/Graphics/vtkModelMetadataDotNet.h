#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkModelMetadata : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkModelMetadata *NewInstance ();
  vtkModelMetadata^ NewInstance();


  // vtkModelMetadata *SafeDownCast (vtkObject* o);
  static vtkModelMetadata^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkModelMetadata *New ();


  // virtual void PrintGlobalInformation ();
  void PrintGlobalInformation();


  // virtual void PrintLocalInformation ();
  void PrintLocalInformation();


  // void SetTitle (char *);
/// <summary>
/// <para>The title of the dataset.</para>
/// </summary>
  void SetTitle(System::String^ arg0);


// Did not wrap:  myVtkGetStringMacro (Title );


// Did not wrap:  void SetInformationLines (int numLines, char *lines);


  // void AddInformationLine (char *info);
/// <summary>
/// <para>Add an information line. </para>
/// </summary>
  void AddInformationLine(System::String^ info);


// Did not wrap:  int GetInformationLines (char *lines) const;


// Did not wrap:  myVtkGetMacro (NumberOfInformationLines , int );


// Did not wrap:  void SetQARecords (int numberOfRecords, char *QARecords[4][]);


  // void AddQARecord (char *name, char *version, char *date, char *time);
/// <summary>
/// <para>Add a QA record.  They fields are:    The code name    The code version number    The date (MM/DD/YY or NULL for today)    The time (HH:MM:SS or NULL for right now)</para>
/// </summary>
  void AddQARecord(System::String^ name, System::String^ version, System::String^ date, System::String^ time);


// Did not wrap:  void GetQARecord (int which, char *name, char *version, char *date, char *time) const;


// Did not wrap:  myVtkGetMacro (NumberOfQARecords , int );


  // void SetTimeStepIndex (int );
/// <summary>
/// <para>Set the index of the time step represented by the results    data in the file attached to this ModelMetadata object.  Time    step indices start at 0 in this file, they start at 1 in    an Exodus file.</para>
/// </summary>
  void SetTimeStepIndex(int arg0);


// Did not wrap:  myVtkGetMacro (TimeStepIndex , int );


  // void SetTimeSteps (int numberOfTimeSteps, float *timeStepValues);
/// <summary>
/// <para>Set the total number of time steps in the file,    and the value at each time step.  We use your time    step value array and delete it when we're done.</para>
/// </summary>
  void SetTimeSteps(int numberOfTimeSteps, array<float>^ timeStepValues);


// Did not wrap:  myVtkGetMacro (NumberOfTimeSteps , int );


// Did not wrap:  float *GetTimeStepValues () const;return this TimeStepValues 


// Did not wrap:  void SetCoordinateNames (int dimension, char *);


// Did not wrap:  char *GetCoordinateNames () const;return this CoordinateNames 


// Did not wrap:  myVtkGetMacro (Dimension , int );


  // void SetNumberOfBlocks (int );
/// <summary>
/// <para>The number of blocks in the file.  Set this before setting   any of the block arrays.</para>
/// </summary>
  void SetNumberOfBlocks(int arg0);


// Did not wrap:  myVtkGetMacro (NumberOfBlocks , int );


  // void SetBlockIds (int *);
/// <summary>
/// <para>An arbitrary integer ID for each block.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  void SetBlockIds(array<int>^ arg0);


// Did not wrap:  int *GetBlockIds () const;return this BlockIds 


// Did not wrap:  void SetBlockElementType (char *);


// Did not wrap:  char *GetBlockElementType () const;return this BlockElementType 


  // int SetBlockNumberOfElements (int *nelts);
/// <summary>
/// <para>Set or get a pointer to a list of the number of elements in   each block.   We use your pointers, and free the memory when the object is freed.</para>
/// </summary>
  int SetBlockNumberOfElements(array<int>^ nelts);


// Did not wrap:  int *GetBlockNumberOfElements () const;return this BlockNumberOfElements 


  // void SetBlockNodesPerElement (int *);
/// <summary>
/// <para>Set or get a pointer to a list of the number of nodes in the   elements of  each block.   We use your pointers, and free the memory when the object is freed.</para>
/// </summary>
  void SetBlockNodesPerElement(array<int>^ arg0);


// Did not wrap:  int *GetBlockNodesPerElement () const;return this BlockNodesPerElement 


  // void SetBlockElementIdList (int *);
/// <summary>
/// <para>Set or get a pointer to a list global element IDs for the   elements in each block.    We use your pointers, and free the memory when the object is freed.</para>
/// </summary>
  void SetBlockElementIdList(array<int>^ arg0);


// Did not wrap:  int *GetBlockElementIdList () const;return this BlockElementIdList 


// Did not wrap:  myVtkGetMacro (SumElementsPerBlock , int );


// Did not wrap:  int *GetBlockElementIdListIndex () const;return this BlockElementIdListIndex 


  // int SetBlockNumberOfAttributesPerElement (int *natts);
/// <summary>
/// <para>Set or get a pointer to a list of the number of attributes   stored for the elements in each block.   We use your pointers, and free the memory when the object is freed.</para>
/// </summary>
  int SetBlockNumberOfAttributesPerElement(array<int>^ natts);


// Did not wrap:  int *GetBlockNumberOfAttributesPerElement () const;return this BlockNumberOfAttributesPerElement 


  // void SetBlockAttributes (float *);
/// <summary>
/// <para>Set or get a pointer to a list of the attributes for all    blocks.  The order of the list should be by block, by element    within the block, by attribute.  Omit blocks that don't    have element attributes.</para>
/// </summary>
  void SetBlockAttributes(array<float>^ arg0);


// Did not wrap:  float *GetBlockAttributes () const;return this BlockAttributes 


// Did not wrap:  myVtkGetMacro (SizeBlockAttributeArray , int );


// Did not wrap:  int *GetBlockAttributesIndex () const;return this BlockAttributesIndex 


  // void SetNumberOfNodeSets (int );
/// <summary>
/// <para>The number of node sets in the file.  Set this value before   setting the various node set arrays.</para>
/// </summary>
  void SetNumberOfNodeSets(int arg0);


// Did not wrap:  myVtkGetMacro (NumberOfNodeSets , int );


  // void SetNodeSetIds (int *);
/// <summary>
/// <para>Set or get the list the IDs for each node set.   Length of list is the number of node sets.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  void SetNodeSetIds(array<int>^ arg0);


// Did not wrap:  int *GetNodeSetIds () const;return this NodeSetIds 


  // int SetNodeSetSize (int *);
/// <summary>
/// <para>Set or get a pointer to a list of the number of nodes in each node set.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  int SetNodeSetSize(array<int>^ arg0);


// Did not wrap:  int *GetNodeSetSize () const;return this NodeSetSize 


  // void SetNodeSetNodeIdList (int *);
/// <summary>
/// <para>Set or get a pointer to a concatenated list of the   IDs of all nodes in each node set.  First list all IDs in   node set 0, then all IDs in node set 1, and so on.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  void SetNodeSetNodeIdList(array<int>^ arg0);


// Did not wrap:  int *GetNodeSetNodeIdList () const;return this NodeSetNodeIdList 


  // int SetNodeSetNumberOfDistributionFactors (int *);
/// <summary>
/// <para>Set or get a list of the number of distribution factors stored   by each node set.  This is either 0 or equal to the number of   nodes in the node set.    Length of list is number of node sets.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  int SetNodeSetNumberOfDistributionFactors(array<int>^ arg0);


// Did not wrap:  int *GetNodeSetNumberOfDistributionFactors () const;return this NodeSetNumberOfDistributionFactors 


  // void SetNodeSetDistributionFactors (float *);
/// <summary>
/// <para>Set or get a list of the distribution factors for the node sets.   The list is organized by node set, and within node set by node.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  void SetNodeSetDistributionFactors(array<float>^ arg0);


// Did not wrap:  float *GetNodeSetDistributionFactors () const;return this NodeSetDistributionFactors 


// Did not wrap:  myVtkGetMacro (SumNodesPerNodeSet , int );


// Did not wrap:  myVtkGetMacro (SumDistFactPerNodeSet , int );


// Did not wrap:  int *GetNodeSetNodeIdListIndex () const;return this NodeSetNodeIdListIndex 


// Did not wrap:  int *GetNodeSetDistributionFactorIndex () const;return this NodeSetDistributionFactorIndex 


  // void SetNumberOfSideSets (int );
/// <summary>
/// <para>Set or get the number of side sets.  Set this value before   setting any of the other side set arrays.</para>
/// </summary>
  void SetNumberOfSideSets(int arg0);


// Did not wrap:  myVtkGetMacro (NumberOfSideSets , int );


  // void SetSideSetIds (int *);
/// <summary>
/// <para>Set or get a pointer to a list giving the ID of each side set.    We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  void SetSideSetIds(array<int>^ arg0);


// Did not wrap:  int *GetSideSetIds () const;return this SideSetIds 


  // int SetSideSetSize (int *sizes);
/// <summary>
/// <para>Set or get a pointer to a list of the number of sides  in each side set.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  int SetSideSetSize(array<int>^ sizes);


// Did not wrap:  int *GetSideSetSize () const;return this SideSetSize 


  // int SetSideSetNumberOfDistributionFactors (int *df);
/// <summary>
/// <para>Set or get a pointer to a list of the number of distribution   factors stored by each side set.   Each side set has either   no distribution factors, or 1 per node in the side set.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  int SetSideSetNumberOfDistributionFactors(array<int>^ df);


// Did not wrap:  int *GetSideSetNumberOfDistributionFactors () const;return this SideSetNumberOfDistributionFactors 


  // void SetSideSetElementList (int *);
/// <summary>
/// <para>Set or get a pointer to a list of the elements containing each   side in each side set.  The list is organized by side set, and   within side set by element.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  void SetSideSetElementList(array<int>^ arg0);


// Did not wrap:  int *GetSideSetElementList () const;return this SideSetElementList 


  // void SetSideSetSideList (int *);
/// <summary>
/// <para>Set or get a pointer to the element side for each side in the side set.   (See the manual for the convention for numbering sides in different   types of cells.)  Side Ids are arranged by side set and within   side set by side, and correspond to the SideSetElementList.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  void SetSideSetSideList(array<int>^ arg0);


// Did not wrap:  int *GetSideSetSideList () const;return this SideSetSideList 


  // void SetSideSetNumDFPerSide (int *numNodes);
/// <summary>
/// <para>Set or get a pointer to a list of the number of nodes in each   side of each side set.  This list is organized by side set, and   within side set by side.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  void SetSideSetNumDFPerSide(array<int>^ numNodes);


// Did not wrap:  int *GetSideSetNumDFPerSide () const;return this SideSetNumDFPerSide 


  // void SetSideSetDistributionFactors (float *);
/// <summary>
/// <para>Set or get a pointer to a list of all the distribution factors.   For every side set that has distribution factors, the number of   factors per node was given in the SideSetNumberOfDistributionFactors   array.  If this number for a given side set is N, then for that   side set we have N floating point values for each node for each   side in the side set.  If nodes are repeated in more than one   side, we repeat the distribution factors.  So this list is in order   by side set, by node.   We use your pointer, and free the memory when the object is freed.</para>
/// </summary>
  void SetSideSetDistributionFactors(array<float>^ arg0);


// Did not wrap:  float *GetSideSetDistributionFactors () const;return this SideSetDistributionFactors 


// Did not wrap:  myVtkGetMacro (SumSidesPerSideSet , int );


// Did not wrap:  myVtkGetMacro (SumDistFactPerSideSet , int );


// Did not wrap:  int *GetSideSetListIndex () const;return this SideSetListIndex 


// Did not wrap:  int *GetSideSetDistributionFactorIndex () const;return this SideSetDistributionFactorIndex 


// Did not wrap:  myVtkGetMacro (NumberOfBlockProperties , int );


// Did not wrap:  void SetBlockPropertyNames (int numProp, char *names);


// Did not wrap:  char *GetBlockPropertyNames () const;return this BlockPropertyNames 


  // void SetBlockPropertyValue (int *);
/// <summary>
/// <para>Set or get value for each variable for each block.  List   the integer values in order by variable and within variable   by block.</para>
/// </summary>
  void SetBlockPropertyValue(array<int>^ arg0);


// Did not wrap:  int *GetBlockPropertyValue () const;return this BlockPropertyValue 


// Did not wrap:  myVtkGetMacro (NumberOfNodeSetProperties , int );


// Did not wrap:  void SetNodeSetPropertyNames (int numProp, char *names);


// Did not wrap:  char *GetNodeSetPropertyNames () const;return this NodeSetPropertyNames 


  // void SetNodeSetPropertyValue (int *);
/// <summary>
/// <para>Set or get value for each variable for each node set.  List   the integer values in order by variable and within variable   by node set.</para>
/// </summary>
  void SetNodeSetPropertyValue(array<int>^ arg0);


// Did not wrap:  int *GetNodeSetPropertyValue () const;return this NodeSetPropertyValue 


// Did not wrap:  myVtkGetMacro (NumberOfSideSetProperties , int );


// Did not wrap:  void SetSideSetPropertyNames (int numProp, char *names);


// Did not wrap:  char *GetSideSetPropertyNames () const;return this SideSetPropertyNames 


  // void SetSideSetPropertyValue (int *);
/// <summary>
/// <para>Set or get value for each variable for each side set.  List   the integer values in order by variable and within variable   by side set.</para>
/// </summary>
  void SetSideSetPropertyValue(array<int>^ arg0);


// Did not wrap:  int *GetSideSetPropertyValue () const;return this SideSetPropertyValue 


// Did not wrap:  myVtkGetMacro (NumberOfGlobalVariables , int );


// Did not wrap:  void SetGlobalVariableNames (int numVarNames, char *n);


// Did not wrap:  char *GetGlobalVariableNames () const;return this GlobalVariableNames 


  // void SetGlobalVariableValue (float *f);
/// <summary>
/// <para>Set or get the values of the global variables at the current   time step.</para>
/// </summary>
  void SetGlobalVariableValue(array<float>^ f);


// Did not wrap:  float *GetGlobalVariableValue () const;return this GlobalVariableValue 


// Did not wrap:  void SetElementVariableInfo (int numOrigNames, char *origNames, int numNames, char *names, int *numComp, int *map);


// Did not wrap:  void SetNodeVariableInfo (int numOrigNames, char *origNames, int numNames, char *names, int *numComp, int *map);


  // void SetElementVariableTruthTable (int *);
/// <summary>
/// <para>A truth table indicating which element variables are   defined for which blocks. The variables are all the original   element variables that were in the file.   The table is by block ID and within block ID by variable.</para>
/// </summary>
  void SetElementVariableTruthTable(array<int>^ arg0);


// Did not wrap:  int *GetElementVariableTruthTable () const;return this ElementVariableTruthTable 


  // void SetAllVariablesDefinedInAllBlocks (int );
/// <summary>
/// <para>Instead of a truth table of all &quot;1&quot;s, you can set this   instance variable to indicate that all variables are   defined in all blocks.</para>
/// </summary>
  void SetAllVariablesDefinedInAllBlocks(int arg0);


// Did not wrap:  myVtkGetMacro (AllVariablesDefinedInAllBlocks , int );


  // void AllVariablesDefinedInAllBlocksOn ();
/// <summary>
/// <para>Instead of a truth table of all &quot;1&quot;s, you can set this   instance variable to indicate that all variables are   defined in all blocks.</para>
/// </summary>
  void AllVariablesDefinedInAllBlocksOn();


  // void AllVariablesDefinedInAllBlocksOff ();
/// <summary>
/// <para>Instead of a truth table of all &quot;1&quot;s, you can set this   instance variable to indicate that all variables are   defined in all blocks.</para>
/// </summary>
  void AllVariablesDefinedInAllBlocksOff();


  // int ElementVariableIsDefinedInBlock (char *varname, int blockId);
/// <summary>
/// <para>If the element variable named is defined for the block Id   provided (in the element variable truth table) return a   1, otherwise return a 0.  If the variable name or block Id   are unrecognized, the default value of 1 is returned.   (This is an &quot;original&quot; variable name, from the file,   not a name created for the vtkUnstructuredGrid.  Use   FindOriginal*VariableName to map between the two.)</para>
/// </summary>
  int ElementVariableIsDefinedInBlock(System::String^ varname, int blockId);


// Did not wrap:  myVtkGetMacro (OriginalNumberOfElementVariables , int );


// Did not wrap:  char *GetOriginalElementVariableNames () const;return this OriginalElementVariableNames 


// Did not wrap:  myVtkGetMacro (NumberOfElementVariables , int );


// Did not wrap:  char *GetElementVariableNames () const;return this ElementVariableNames 


// Did not wrap:  int *GetElementVariableNumberOfComponents () const;return this ElementVariableNumberOfComponents 


// Did not wrap:  int *GetMapToOriginalElementVariableNames () const;return this MapToOriginalElementVariableNames 


// Did not wrap:  myVtkGetMacro (OriginalNumberOfNodeVariables , int );


// Did not wrap:  char *GetOriginalNodeVariableNames () const;return this OriginalNodeVariableNames 


// Did not wrap:  myVtkGetMacro (NumberOfNodeVariables , int );


// Did not wrap:  char *GetNodeVariableNames () const;return this NodeVariableNames 


// Did not wrap:  int *GetNodeVariableNumberOfComponents () const;return this NodeVariableNumberOfComponents 


// Did not wrap:  int *GetMapToOriginalNodeVariableNames () const;return this MapToOriginalNodeVariableNames 


  // char *FindOriginalElementVariableName (const char *name, int component);
/// <summary>
/// <para>Given the name of an element variable the vtkUnstructuredGrid   described by this ModelMetadata, and a component number, give    the name of the scalar array in the original   file that turned into that component when the file was   read into VTK.</para>
/// </summary>
  System::String^ FindOriginalElementVariableName(System::String^ name, int component);


  // char *FindOriginalNodeVariableName (const char *name, int component);
/// <summary>
/// <para>Given the name of an node variable the vtkUnstructuredGrid   described by this ModelMetadata, and a component number, give    the name of the scalar array in the original   file that turned into that component when the file was   read into VTK.</para>
/// </summary>
  System::String^ FindOriginalNodeVariableName(System::String^ name, int component);


  // static int HasMetadata (vtkDataSet *grid);
/// <summary>
/// <para>Static function that returns 1 if the vtkUnstructuredGrid   has metadata packed into it's field arrays, and 0 otherwise.</para>
/// </summary>
  static int HasMetadata(vtkDataSet^ grid);


  // static void RemoveMetadata (vtkDataSet *grid);
/// <summary>
/// <para>Static function that removes the packed metadata arrays   from a dataset.</para>
/// </summary>
  static void RemoveMetadata(vtkDataSet^ grid);


  // void Pack (vtkDataSet *ugrid);
/// <summary>
/// <para>Pack this object's metadata into a field array of a dataset.</para>
/// </summary>
  void Pack(vtkDataSet^ ugrid);


  // int Unpack (vtkDataSet *ugrid, int deleteIt);
/// <summary>
/// <para>Unpack the metadata stored in a dataset,   and initialize this object with it.  Return 1 if there's   no metadata packed into the grid, 0 if OK.   If deleteIt is ON, then delete the grid's packed data after   unpacking it into the object.</para>
/// </summary>
  int Unpack(vtkDataSet^ ugrid, int deleteIt);


  // int AddUGridElementVariable (char *ugridVarName, char *origName, int numComponents);
/// <summary>
/// <para>In order to write Exodus files from vtkUnstructuredGrid   objects that were read from Exodus files, we need to know   the mapping from variable names in the UGrid to variable   names in the Exodus file.  (The Exodus reader combines   scalar variables with similar names into vectors in the   UGrid.)  When building the UGrid to which this   ModelMetadata refers, add each element and node variable   name with this call, including the name of original variable   that yielded it's first component, and the number of components.   If a variable is removed from the UGrid, remove it from   the ModelMetadata.  (If this information is missing or   incomplete, the ExodusIIWriter can still do something   sensible in creating names for variables.)</para>
/// </summary>
  int AddUGridElementVariable(System::String^ ugridVarName, System::String^ origName, int numComponents);


  // int RemoveUGridElementVariable (char *ugridVarName);
/// <summary>
/// <para>In order to write Exodus files from vtkUnstructuredGrid   objects that were read from Exodus files, we need to know   the mapping from variable names in the UGrid to variable   names in the Exodus file.  (The Exodus reader combines   scalar variables with similar names into vectors in the   UGrid.)  When building the UGrid to which this   ModelMetadata refers, add each element and node variable   name with this call, including the name of original variable   that yielded it's first component, and the number of components.   If a variable is removed from the UGrid, remove it from   the ModelMetadata.  (If this information is missing or   incomplete, the ExodusIIWriter can still do something   sensible in creating names for variables.)</para>
/// </summary>
  int RemoveUGridElementVariable(System::String^ ugridVarName);


  // int AddUGridNodeVariable (char *ugridVarName, char *origName, int numComponents);
  int AddUGridNodeVariable(System::String^ ugridVarName, System::String^ origName, int numComponents);


  // int RemoveUGridNodeVariable (char *ugridVarName);
  int RemoveUGridNodeVariable(System::String^ ugridVarName);


  // int MergeModelMetadata (const vtkModelMetadata *em);
/// <summary>
/// <para>In VTK we take vtkUnstructuredGrids and perform   operations on them, including subsetting and merging   grids.  We need to modify the metadata object    when this happens.  MergeModelMetadata merges the supplied   model (both global and local metadata) into this model.     The models must be from the same file set.</para>
/// <para>MergeModelMetadata assumes that no element in one metadata   object appears in the other.  (It doesn't test for duplicate   elements when merging the two metadata objects.) </para>
/// </summary>
  int MergeModelMetadata(vtkModelMetadata^ em);


  // int MergeGlobalInformation (const vtkModelMetadata *em);
/// <summary>
/// <para>The metadata is divided into global metadata and local   metadata.  MergeGlobalInformation merges just the   global metadata of the supplied object into the   global metadata of this object.</para>
/// </summary>
  int MergeGlobalInformation(vtkModelMetadata^ em);


  // vtkModelMetadata *ExtractModelMetadata (vtkIntArray *globalCellIdList, vtkDataSet *grid, const char *globalCellIdArrayName, const char *globalNodeIdArrayName);
/// <summary>
/// <para>Create and return a new metadata object which contains   the information for the subset of global cell IDs provided.   We need the grid containing the cells so we can find point   Ids as well, and also the name of the global cell ID array   and the name of the global point ID array.</para>
/// </summary>
  vtkModelMetadata^ ExtractModelMetadata(vtkIntArray^ globalCellIdList, vtkDataSet^ grid, System::String^ globalCellIdArrayName, System::String^ globalNodeIdArrayName);


  // vtkModelMetadata *ExtractGlobalMetadata ();
/// <summary>
/// <para>Create and return a new metadata object containing only the   global metadata of this metadata object.  </para>
/// </summary>
  vtkModelMetadata^ ExtractGlobalMetadata();


  // void FreeAllGlobalData ();
/// <summary>
/// <para>Free selected portions of the metadata when updating values   in the vtkModelMetadata object.  Resetting a particular field,   (i.e. SetNodeSetIds) frees the previous setting, but if you   are not setting every field, you may want to do a wholesale   &quot;Free&quot; first.</para>
/// <para>FreeAllGlobalData frees all the fields which don't depend on     which time step, which blocks, or which variables are in the input.   FreeAllLocalData frees all the fields which do depend on which     time step, blocks or variables are in the input.   FreeBlockDependentData frees all metadata fields which depend on     which blocks were read in.</para>
/// </summary>
  void FreeAllGlobalData();


  // void FreeAllLocalData ();
/// <summary>
/// <para>Free selected portions of the metadata when updating values   in the vtkModelMetadata object.  Resetting a particular field,   (i.e. SetNodeSetIds) frees the previous setting, but if you   are not setting every field, you may want to do a wholesale   &quot;Free&quot; first.</para>
/// <para>FreeAllGlobalData frees all the fields which don't depend on     which time step, which blocks, or which variables are in the input.   FreeAllLocalData frees all the fields which do depend on which     time step, blocks or variables are in the input.   FreeBlockDependentData frees all metadata fields which depend on     which blocks were read in.</para>
/// </summary>
  void FreeAllLocalData();


  // void FreeBlockDependentData ();
/// <summary>
/// <para>Free selected portions of the metadata when updating values   in the vtkModelMetadata object.  Resetting a particular field,   (i.e. SetNodeSetIds) frees the previous setting, but if you   are not setting every field, you may want to do a wholesale   &quot;Free&quot; first.</para>
/// <para>FreeAllGlobalData frees all the fields which don't depend on     which time step, which blocks, or which variables are in the input.   FreeAllLocalData frees all the fields which do depend on which     time step, blocks or variables are in the input.   FreeBlockDependentData frees all metadata fields which depend on     which blocks were read in.</para>
/// </summary>
  void FreeBlockDependentData();


  // void FreeOriginalElementVariableNames ();
/// <summary>
/// <para>Free selected portions of the metadata when updating values   in the vtkModelMetadata object.  Resetting a particular field,   (i.e. SetNodeSetIds) frees the previous setting, but if you   are not setting every field, you may want to do a wholesale   &quot;Free&quot; first.</para>
/// <para>FreeAllGlobalData frees all the fields which don't depend on     which time step, which blocks, or which variables are in the input.   FreeAllLocalData frees all the fields which do depend on which     time step, blocks or variables are in the input.   FreeBlockDependentData frees all metadata fields which depend on     which blocks were read in.</para>
/// </summary>
  void FreeOriginalElementVariableNames();


  // void FreeOriginalNodeVariableNames ();
/// <summary>
/// <para>Free selected portions of the metadata when updating values   in the vtkModelMetadata object.  Resetting a particular field,   (i.e. SetNodeSetIds) frees the previous setting, but if you   are not setting every field, you may want to do a wholesale   &quot;Free&quot; first.</para>
/// <para>FreeAllGlobalData frees all the fields which don't depend on     which time step, which blocks, or which variables are in the input.   FreeAllLocalData frees all the fields which do depend on which     time step, blocks or variables are in the input.   FreeBlockDependentData frees all metadata fields which depend on     which blocks were read in.</para>
/// </summary>
  void FreeOriginalNodeVariableNames();


  // void FreeUsedElementVariableNames ();
/// <summary>
/// <para>Free selected portions of the metadata when updating values   in the vtkModelMetadata object.  Resetting a particular field,   (i.e. SetNodeSetIds) frees the previous setting, but if you   are not setting every field, you may want to do a wholesale   &quot;Free&quot; first.</para>
/// <para>FreeAllGlobalData frees all the fields which don't depend on     which time step, which blocks, or which variables are in the input.   FreeAllLocalData frees all the fields which do depend on which     time step, blocks or variables are in the input.   FreeBlockDependentData frees all metadata fields which depend on     which blocks were read in.</para>
/// </summary>
  void FreeUsedElementVariableNames();


  // void FreeUsedNodeVariableNames ();
/// <summary>
/// <para>Free selected portions of the metadata when updating values   in the vtkModelMetadata object.  Resetting a particular field,   (i.e. SetNodeSetIds) frees the previous setting, but if you   are not setting every field, you may want to do a wholesale   &quot;Free&quot; first.</para>
/// <para>FreeAllGlobalData frees all the fields which don't depend on     which time step, which blocks, or which variables are in the input.   FreeAllLocalData frees all the fields which do depend on which     time step, blocks or variables are in the input.   FreeBlockDependentData frees all metadata fields which depend on     which blocks were read in.</para>
/// </summary>
  void FreeUsedNodeVariableNames();


  // void FreeUsedElementVariables ();
/// <summary>
/// <para>Free selected portions of the metadata when updating values   in the vtkModelMetadata object.  Resetting a particular field,   (i.e. SetNodeSetIds) frees the previous setting, but if you   are not setting every field, you may want to do a wholesale   &quot;Free&quot; first.</para>
/// <para>FreeAllGlobalData frees all the fields which don't depend on     which time step, which blocks, or which variables are in the input.   FreeAllLocalData frees all the fields which do depend on which     time step, blocks or variables are in the input.   FreeBlockDependentData frees all metadata fields which depend on     which blocks were read in.</para>
/// </summary>
  void FreeUsedElementVariables();


  // void FreeUsedNodeVariables ();
/// <summary>
/// <para>Free selected portions of the metadata when updating values   in the vtkModelMetadata object.  Resetting a particular field,   (i.e. SetNodeSetIds) frees the previous setting, but if you   are not setting every field, you may want to do a wholesale   &quot;Free&quot; first.</para>
/// <para>FreeAllGlobalData frees all the fields which don't depend on     which time step, which blocks, or which variables are in the input.   FreeAllLocalData frees all the fields which do depend on which     time step, blocks or variables are in the input.   FreeBlockDependentData frees all metadata fields which depend on     which blocks were read in.</para>
/// </summary>
  void FreeUsedNodeVariables();


  // void Reset ();
/// <summary>
/// <para>Set the object back to it's initial state</para>
/// </summary>
  void Reset();


  // int GetBlockLocalIndex (int id);
/// <summary>
/// <para>Block information is stored in arrays.  This method returns   the array index for a given block ID.</para>
/// </summary>
  int GetBlockLocalIndex(int id);


// Did not wrap:  vtkModelMetadata ();


// Did not wrap:  ~vtkModelMetadata ();


// Did not wrap:  void InitializeAllMetadata ();


// Did not wrap:  void InitializeAllIvars ();


// Did not wrap:  void FreeAllMetadata ();


// Did not wrap:  void FreeAllIvars ();


// Did not wrap:  void FreeQARecords ();


// Did not wrap:  int BuildBlockElementIdListIndex ();


// Did not wrap:  int BuildBlockAttributesIndex ();


// Did not wrap:  int BuildNodeSetNodeIdListIndex ();


// Did not wrap:  int BuildNodeSetDistributionFactorIndex ();


// Did not wrap:  int BuildSideSetListIndex ();


// Did not wrap:  int BuildSideSetDistributionFactorIndex ();


// Did not wrap:  int InitializeFromSizeArray (vtkIntArray *ia, int &maxStr, int &maxLine);


// Did not wrap:  vtkIntArray *PackSizeArray (int maxStr, int maxLine);


// Did not wrap:  int InitializeFromIntArray (vtkModelMetadata *sizes, vtkIntArray *ia);


// Did not wrap:  vtkIntArray *PackIntArray ();


// Did not wrap:  int InitializeFromCharArray (vtkModelMetadata *sizes, vtkCharArray *uca, int maxStr, int maxLine);


// Did not wrap:  vtkCharArray *PackCharArray (int maxStr, int maxLine);


// Did not wrap:  int InitializeFromFloatArray (vtkFloatArray *fa);


// Did not wrap:  vtkFloatArray *PackFloatArray ();


// Did not wrap:  static char *StrDupWithNew (const char *s);


// Did not wrap:  static char *WriteLines (char *p, int maxLines, int maxLen, char *lines);


// Did not wrap:  static char *ReadLines (char *to, int maxLines, int maxLen, char *from);


// Did not wrap:  static char *CopyLines (char *lines, int num);


// Did not wrap:  static int *CopyInts (int *vals, int num);


// Did not wrap:  static int FindNameOnList (char *name, char *list, int listLen);


// Did not wrap:  int MergeIdLists (int numSubLists, int *id1, int *id1Idx, int id1Len, float *dist1, int *dist1Idx, int dist1Len, int *id2, int *id2Idx, int id2Len, float *dist2, int *dist2Idx, int dist2Len, int *idNew, int *idNewIdx, int *idNewLen, float *distNew, int *distNewIdx, int *distNewLen);


// Did not wrap:  int AppendFloatLists (int numSubLists, float *id1, int *id1Idx, int id1Len, float *id2, int *id2Idx, int id2Len, float *idNew, int *idNewIdx, int *idNewLen);


// Did not wrap:  int AppendIntegerLists (int numSubLists, int *id1, int *id1Idx, int id1Len, int *id2, int *id2Idx, int id2Len, int *idNew, int *idNewIdx, int *idNewLen);


// Did not wrap:  void ExtractCellsFromBlockData (vtkModelMetadataSTLCloak *idset, vtkModelMetadata *mmd);


// Did not wrap:  void ExtractNodesFromNodeSetData (vtkModelMetadataSTLCloak *idset, vtkModelMetadata *mmd);


// Did not wrap:  void ExtractSidesFromSideSetData (vtkModelMetadataSTLCloak *idset, vtkModelMetadata *mmd);


// Did not wrap:  void ShowFloats (const char *what, int num, float *f);


// Did not wrap:  void ShowLines (const char *what, int num, char *l);


// Did not wrap:  void ShowIntArray (const char *what, int numx, int numy, int *id);


// Did not wrap:  void ShowInts (const char *what, int num, int *id);


// Did not wrap:  void ShowListsOfInts (const char *what, int *list, int nlists, int *idx, int len, int verbose);


// Did not wrap:  void ShowListsOfFloats (const char *what, float *list, int nlists, int *idx, int len, int verbose);


// Did not wrap:  void SetOriginalElementVariableNames (int nvars, char *names);


// Did not wrap:  void SetElementVariableNames (int nvars, char *names);


// Did not wrap:  void SetElementVariableNumberOfComponents (int *comp);


// Did not wrap:  void SetMapToOriginalElementVariableNames (int *map);


// Did not wrap:  void SetOriginalNodeVariableNames (int nvars, char *names);


// Did not wrap:  void SetNodeVariableNames (int nvars, char *names);


// Did not wrap:  void SetNodeVariableNumberOfComponents (int *comp);


// Did not wrap:  void SetMapToOriginalNodeVariableNames (int *map);


// Did not wrap:  int CalculateMaximumLengths (int &maxString, int &maxLine);


// Did not wrap:  vtkModelMetadata (const vtkModelMetadata &);


// Did not wrap:  void vtkModelMetadata 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkModelMetadata(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkModelMetadata(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkModelMetadata();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkModelMetadata();


};

} // end vtkGraphics
