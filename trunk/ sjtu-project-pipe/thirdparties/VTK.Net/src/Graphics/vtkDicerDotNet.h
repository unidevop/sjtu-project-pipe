#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDicer : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDicer *NewInstance ();
  vtkDicer^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFieldData (int );
/// <summary>
/// <para>Set/Get the flag which controls whether to generate point scalar data or point field data. If this flag is off, scalar data is generated.  Otherwise, field data is generated. Note that the generated the data are integer numbers indicating which piece a particular point belongs to.</para>
/// </summary>
  void SetFieldData(int arg0);


  // int GetFieldData ();
/// <summary>
/// <para>Set/Get the flag which controls whether to generate point scalar data or point field data. If this flag is off, scalar data is generated.  Otherwise, field data is generated. Note that the generated the data are integer numbers indicating which piece a particular point belongs to.</para>
/// </summary>
  int GetFieldData();


  // void FieldDataOn ();
/// <summary>
/// <para>Set/Get the flag which controls whether to generate point scalar data or point field data. If this flag is off, scalar data is generated.  Otherwise, field data is generated. Note that the generated the data are integer numbers indicating which piece a particular point belongs to.</para>
/// </summary>
  void FieldDataOn();


  // void FieldDataOff ();
/// <summary>
/// <para>Set/Get the flag which controls whether to generate point scalar data or point field data. If this flag is off, scalar data is generated.  Otherwise, field data is generated. Note that the generated the data are integer numbers indicating which piece a particular point belongs to.</para>
/// </summary>
  void FieldDataOff();


  // void SetDiceMode (int );
/// <summary>
/// <para>Specify the method to determine how many pieces the data should be broken into. By default, the number of points per piece is used.</para>
/// </summary>
  void SetDiceMode(int arg0);


  // int GetDiceModeMinValue ();
/// <summary>
/// <para>Specify the method to determine how many pieces the data should be broken into. By default, the number of points per piece is used.</para>
/// </summary>
  int GetDiceModeMinValue();


  // int GetDiceModeMaxValue ();
/// <summary>
/// <para>Specify the method to determine how many pieces the data should be broken into. By default, the number of points per piece is used.</para>
/// </summary>
  int GetDiceModeMaxValue();


  // int GetDiceMode ();
/// <summary>
/// <para>Specify the method to determine how many pieces the data should be broken into. By default, the number of points per piece is used.</para>
/// </summary>
  int GetDiceMode();


  // void SetDiceModeToNumberOfPointsPerPiece ();this SetDiceMode VTK_DICE_MODE_NUMBER_OF_POINTS 
/// <summary>
/// <para>Specify the method to determine how many pieces the data should be broken into. By default, the number of points per piece is used.</para>
/// </summary>
  void SetDiceModeToNumberOfPointsPerPiece();


  // void SetDiceModeToSpecifiedNumberOfPieces ();this SetDiceMode VTK_DICE_MODE_SPECIFIED_NUMBER 
/// <summary>
/// <para>Specify the method to determine how many pieces the data should be broken into. By default, the number of points per piece is used.</para>
/// </summary>
  void SetDiceModeToSpecifiedNumberOfPieces();


  // void SetDiceModeToMemoryLimitPerPiece ();this SetDiceMode VTK_DICE_MODE_MEMORY_LIMIT 
/// <summary>
/// <para>Specify the method to determine how many pieces the data should be broken into. By default, the number of points per piece is used.</para>
/// </summary>
  void SetDiceModeToMemoryLimitPerPiece();


  // int GetNumberOfActualPieces ();
/// <summary>
/// <para>Use the following method after the filter has updated to determine the actual number of pieces the data was separated into.</para>
/// </summary>
  int GetNumberOfActualPieces();


  // void SetNumberOfPointsPerPiece (int );
/// <summary>
/// <para>Control piece size based on the maximum number of points per piece. (This ivar has effect only when the DiceMode is set to  SetDiceModeToNumberOfPoints().)</para>
/// </summary>
  void SetNumberOfPointsPerPiece(int arg0);


  // int GetNumberOfPointsPerPieceMinValue ();
/// <summary>
/// <para>Control piece size based on the maximum number of points per piece. (This ivar has effect only when the DiceMode is set to  SetDiceModeToNumberOfPoints().)</para>
/// </summary>
  int GetNumberOfPointsPerPieceMinValue();


  // int GetNumberOfPointsPerPieceMaxValue ();
/// <summary>
/// <para>Control piece size based on the maximum number of points per piece. (This ivar has effect only when the DiceMode is set to  SetDiceModeToNumberOfPoints().)</para>
/// </summary>
  int GetNumberOfPointsPerPieceMaxValue();


  // int GetNumberOfPointsPerPiece ();
/// <summary>
/// <para>Control piece size based on the maximum number of points per piece. (This ivar has effect only when the DiceMode is set to  SetDiceModeToNumberOfPoints().)</para>
/// </summary>
  int GetNumberOfPointsPerPiece();


  // void SetNumberOfPieces (int );
/// <summary>
/// <para>Set/Get the number of pieces the object is to be separated into. (This ivar has effect only when the DiceMode is set to SetDiceModeToSpecifiedNumber()). Note that the ivar NumberOfPieces is a target - depending on the particulars of the data, more or less number of pieces than the target value may be created.</para>
/// </summary>
  void SetNumberOfPieces(int arg0);


  // int GetNumberOfPiecesMinValue ();
/// <summary>
/// <para>Set/Get the number of pieces the object is to be separated into. (This ivar has effect only when the DiceMode is set to SetDiceModeToSpecifiedNumber()). Note that the ivar NumberOfPieces is a target - depending on the particulars of the data, more or less number of pieces than the target value may be created.</para>
/// </summary>
  int GetNumberOfPiecesMinValue();


  // int GetNumberOfPiecesMaxValue ();
/// <summary>
/// <para>Set/Get the number of pieces the object is to be separated into. (This ivar has effect only when the DiceMode is set to SetDiceModeToSpecifiedNumber()). Note that the ivar NumberOfPieces is a target - depending on the particulars of the data, more or less number of pieces than the target value may be created.</para>
/// </summary>
  int GetNumberOfPiecesMaxValue();


  // int GetNumberOfPieces ();
/// <summary>
/// <para>Set/Get the number of pieces the object is to be separated into. (This ivar has effect only when the DiceMode is set to SetDiceModeToSpecifiedNumber()). Note that the ivar NumberOfPieces is a target - depending on the particulars of the data, more or less number of pieces than the target value may be created.</para>
/// </summary>
  int GetNumberOfPieces();


  // void SetMemoryLimit (unsigned long );
/// <summary>
/// <para>Control piece size based on a memory limit.  (This ivar has effect only when the DiceMode is set to SetDiceModeToMemoryLimit()). The memory limit should be set in kilobytes.</para>
/// </summary>
  void SetMemoryLimit(unsigned long arg0);


  // unsigned GetMemoryLimitMinValue ();
/// <summary>
/// <para>Control piece size based on a memory limit.  (This ivar has effect only when the DiceMode is set to SetDiceModeToMemoryLimit()). The memory limit should be set in kilobytes.</para>
/// </summary>
  unsigned long GetMemoryLimitMinValue();


  // unsigned GetMemoryLimitMaxValue ();
/// <summary>
/// <para>Control piece size based on a memory limit.  (This ivar has effect only when the DiceMode is set to SetDiceModeToMemoryLimit()). The memory limit should be set in kilobytes.</para>
/// </summary>
  unsigned long GetMemoryLimitMaxValue();


  // long unsigned GetMemoryLimit ();
/// <summary>
/// <para>Control piece size based on a memory limit.  (This ivar has effect only when the DiceMode is set to SetDiceModeToMemoryLimit()). The memory limit should be set in kilobytes.</para>
/// </summary>
  unsigned long GetMemoryLimit();


// Did not wrap:  vtkDicer ();


// Did not wrap:  ~vtkDicer ();


// Did not wrap:  virtual void UpdatePieceMeasures (vtkDataSet *input);


// Did not wrap:  vtkDicer (const vtkDicer &);


// Did not wrap:  void vtkDicer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDicer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDicer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDicer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDicer();


};

} // end vtkGraphics
