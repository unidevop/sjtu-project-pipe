#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMedicalImageProperties : public vtkObject
{

public:
// Did not wrap:  static vtkMedicalImageProperties *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMedicalImageProperties *NewInstance ();
  vtkMedicalImageProperties^ NewInstance();


  // vtkMedicalImageProperties *SafeDownCast (vtkObject* o);
  static vtkMedicalImageProperties^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Clear ();
/// <summary>
/// <para>Convenience method to reset all fields to an emptry string/value</para>
/// </summary>
  void Clear();


  // void SetPatientName (char *);
/// <summary>
/// <para>Patient name For ex: DICOM (0010,0010) = DOE,JOHN</para>
/// </summary>
  void SetPatientName(System::String^ arg0);


  // char *GetPatientName ();
/// <summary>
/// <para>Patient name For ex: DICOM (0010,0010) = DOE,JOHN</para>
/// </summary>
  System::String^ GetPatientName();


  // void SetPatientID (char *);
/// <summary>
/// <para>Patient ID For ex: DICOM (0010,0020) = 1933197</para>
/// </summary>
  void SetPatientID(System::String^ arg0);


  // char *GetPatientID ();
/// <summary>
/// <para>Patient ID For ex: DICOM (0010,0020) = 1933197</para>
/// </summary>
  System::String^ GetPatientID();


  // void SetPatientAge (char *);
/// <summary>
/// <para>Patient age Format: nnnD, nnW, nnnM or nnnY (eventually nnD, nnW, nnY)         with D (day), M (month), W (week), Y (year) For ex: DICOM (0010,1010) = 031Y</para>
/// </summary>
  void SetPatientAge(System::String^ arg0);


  // char *GetPatientAge ();
/// <summary>
/// <para>Patient age Format: nnnD, nnW, nnnM or nnnY (eventually nnD, nnW, nnY)         with D (day), M (month), W (week), Y (year) For ex: DICOM (0010,1010) = 031Y</para>
/// </summary>
  System::String^ GetPatientAge();


  // static int GetAgeAsFields (const char *age, int &year, int &month, int &week, int &day);
/// <summary>
/// <para>Take as input a string in VR=AS (DICOM PS3.5) and extract either different fields namely: year month week day Return 0 on error, 1 on success One can test fields if they are different from -1 upon success</para>
/// </summary>
  static int GetAgeAsFields(System::String^ age, int% year, int% month, int% week, int% day);


  // int GetPatientAgeYear ();
  int GetPatientAgeYear();


  // int GetPatientAgeMonth ();
  int GetPatientAgeMonth();


  // int GetPatientAgeWeek ();
  int GetPatientAgeWeek();


  // int GetPatientAgeDay ();
  int GetPatientAgeDay();


  // void SetPatientSex (char *);
/// <summary>
/// <para>Patient sex For ex: DICOM (0010,0040) = M</para>
/// </summary>
  void SetPatientSex(System::String^ arg0);


  // char *GetPatientSex ();
/// <summary>
/// <para>Patient sex For ex: DICOM (0010,0040) = M</para>
/// </summary>
  System::String^ GetPatientSex();


  // void SetPatientBirthDate (char *);
/// <summary>
/// <para>Patient birth date Format: yyyymmdd For ex: DICOM (0010,0030) = 19680427</para>
/// </summary>
  void SetPatientBirthDate(System::String^ arg0);


  // char *GetPatientBirthDate ();
/// <summary>
/// <para>Patient birth date Format: yyyymmdd For ex: DICOM (0010,0030) = 19680427</para>
/// </summary>
  System::String^ GetPatientBirthDate();


  // int GetPatientBirthDateYear ();
  int GetPatientBirthDateYear();


  // int GetPatientBirthDateMonth ();
  int GetPatientBirthDateMonth();


  // int GetPatientBirthDateDay ();
  int GetPatientBirthDateDay();


  // void SetAcquisitionDate (char *);
/// <summary>
/// <para>Acquisition Date Format: yyyymmdd For ex: DICOM (0008,0022) = 20030617</para>
/// </summary>
  void SetAcquisitionDate(System::String^ arg0);


  // char *GetAcquisitionDate ();
/// <summary>
/// <para>Acquisition Date Format: yyyymmdd For ex: DICOM (0008,0022) = 20030617</para>
/// </summary>
  System::String^ GetAcquisitionDate();


  // int GetAcquisitionDateYear ();
  int GetAcquisitionDateYear();


  // int GetAcquisitionDateMonth ();
  int GetAcquisitionDateMonth();


  // int GetAcquisitionDateDay ();
  int GetAcquisitionDateDay();


  // void SetAcquisitionTime (char *);
/// <summary>
/// <para>Acquisition time Format: hhmmss.frac (any trailing component(s) can be ommited) For ex: DICOM (0008,0032) = 162552.0705 or 230012, or 0012</para>
/// </summary>
  void SetAcquisitionTime(System::String^ arg0);


  // char *GetAcquisitionTime ();
/// <summary>
/// <para>Acquisition time Format: hhmmss.frac (any trailing component(s) can be ommited) For ex: DICOM (0008,0032) = 162552.0705 or 230012, or 0012</para>
/// </summary>
  System::String^ GetAcquisitionTime();


  // void SetImageDate (char *);
/// <summary>
/// <para>Image Date Format: yyyymmdd For ex: DICOM (0008,0023) = 20030617</para>
/// </summary>
  void SetImageDate(System::String^ arg0);


  // char *GetImageDate ();
/// <summary>
/// <para>Image Date Format: yyyymmdd For ex: DICOM (0008,0023) = 20030617</para>
/// </summary>
  System::String^ GetImageDate();


  // int GetImageDateYear ();
  int GetImageDateYear();


  // int GetImageDateMonth ();
  int GetImageDateMonth();


  // int GetImageDateDay ();
  int GetImageDateDay();


  // static int GetDateAsFields (const char *date, int &year, int &month, int &day);
/// <summary>
/// <para>Take as input a string in ISO 8601 date (YYYY/MM/DD) and extract the different fields namely: year month day Return 0 on error, 1 on success</para>
/// </summary>
  static int GetDateAsFields(System::String^ date, int% year, int% month, int% day);


  // static int GetDateAsLocale (const char *date, char *locale);
/// <summary>
/// <para>Take as input a string in ISO 8601 date (YYYY/MM/DD) and construct a locale date based on the different fields (see GetDateAsFields to extract different fields) Return 0 on error, 1 on success</para>
/// </summary>
  static int GetDateAsLocale(System::String^ date, System::String^ locale);


  // void SetImageTime (char *);
/// <summary>
/// <para>Image Time Format: hhmmss.frac (any trailing component(s) can be ommited) For ex: DICOM (0008,0033) = 162552.0705 or 230012, or 0012</para>
/// </summary>
  void SetImageTime(System::String^ arg0);


  // char *GetImageTime ();
/// <summary>
/// <para>Image Time Format: hhmmss.frac (any trailing component(s) can be ommited) For ex: DICOM (0008,0033) = 162552.0705 or 230012, or 0012</para>
/// </summary>
  System::String^ GetImageTime();


  // void SetImageNumber (char *);
/// <summary>
/// <para>Image number For ex: DICOM (0020,0013) = 1</para>
/// </summary>
  void SetImageNumber(System::String^ arg0);


  // char *GetImageNumber ();
/// <summary>
/// <para>Image number For ex: DICOM (0020,0013) = 1</para>
/// </summary>
  System::String^ GetImageNumber();


  // void SetSeriesNumber (char *);
/// <summary>
/// <para>Series number For ex: DICOM (0020,0011) = 902</para>
/// </summary>
  void SetSeriesNumber(System::String^ arg0);


  // char *GetSeriesNumber ();
/// <summary>
/// <para>Series number For ex: DICOM (0020,0011) = 902</para>
/// </summary>
  System::String^ GetSeriesNumber();


  // void SetSeriesDescription (char *);
/// <summary>
/// <para>Series Description User provided description of the Series For ex: DICOM (0008,103e) = SCOUT</para>
/// </summary>
  void SetSeriesDescription(System::String^ arg0);


  // char *GetSeriesDescription ();
/// <summary>
/// <para>Series Description User provided description of the Series For ex: DICOM (0008,103e) = SCOUT</para>
/// </summary>
  System::String^ GetSeriesDescription();


  // void SetStudyID (char *);
/// <summary>
/// <para>Study ID For ex: DICOM (0020,0010) = 37481</para>
/// </summary>
  void SetStudyID(System::String^ arg0);


  // char *GetStudyID ();
/// <summary>
/// <para>Study ID For ex: DICOM (0020,0010) = 37481</para>
/// </summary>
  System::String^ GetStudyID();


  // void SetStudyDescription (char *);
/// <summary>
/// <para>Study description For ex: DICOM (0008,1030) = BRAIN/C-SP/FACIAL</para>
/// </summary>
  void SetStudyDescription(System::String^ arg0);


  // char *GetStudyDescription ();
/// <summary>
/// <para>Study description For ex: DICOM (0008,1030) = BRAIN/C-SP/FACIAL</para>
/// </summary>
  System::String^ GetStudyDescription();


  // void SetModality (char *);
/// <summary>
/// <para>Modality For ex: DICOM (0008,0060)= CT</para>
/// </summary>
  void SetModality(System::String^ arg0);


  // char *GetModality ();
/// <summary>
/// <para>Modality For ex: DICOM (0008,0060)= CT</para>
/// </summary>
  System::String^ GetModality();


  // void SetManufacturer (char *);
/// <summary>
/// <para>Manufacturer For ex: DICOM (0008,0070) = Siemens</para>
/// </summary>
  void SetManufacturer(System::String^ arg0);


  // char *GetManufacturer ();
/// <summary>
/// <para>Manufacturer For ex: DICOM (0008,0070) = Siemens</para>
/// </summary>
  System::String^ GetManufacturer();


  // void SetManufacturerModelName (char *);
/// <summary>
/// <para>Manufacturer's Model Name For ex: DICOM (0008,1090) = LightSpeed QX/i</para>
/// </summary>
  void SetManufacturerModelName(System::String^ arg0);


  // char *GetManufacturerModelName ();
/// <summary>
/// <para>Manufacturer's Model Name For ex: DICOM (0008,1090) = LightSpeed QX/i</para>
/// </summary>
  System::String^ GetManufacturerModelName();


  // void SetStationName (char *);
/// <summary>
/// <para>Station Name For ex: DICOM (0008,1010) = LSPD_OC8</para>
/// </summary>
  void SetStationName(System::String^ arg0);


  // char *GetStationName ();
/// <summary>
/// <para>Station Name For ex: DICOM (0008,1010) = LSPD_OC8</para>
/// </summary>
  System::String^ GetStationName();


  // void SetInstitutionName (char *);
/// <summary>
/// <para>Institution Name For ex: DICOM (0008,0080) = FooCity Medical Center</para>
/// </summary>
  void SetInstitutionName(System::String^ arg0);


  // char *GetInstitutionName ();
/// <summary>
/// <para>Institution Name For ex: DICOM (0008,0080) = FooCity Medical Center</para>
/// </summary>
  System::String^ GetInstitutionName();


  // void SetConvolutionKernel (char *);
/// <summary>
/// <para>Convolution Kernel (or algorithm used to reconstruct the data) For ex: DICOM (0018,1210) = Bone</para>
/// </summary>
  void SetConvolutionKernel(System::String^ arg0);


  // char *GetConvolutionKernel ();
/// <summary>
/// <para>Convolution Kernel (or algorithm used to reconstruct the data) For ex: DICOM (0018,1210) = Bone</para>
/// </summary>
  System::String^ GetConvolutionKernel();


  // void SetSliceThickness (char *);
/// <summary>
/// <para>Slice Thickness (Nominal reconstructed slice thickness, in mm) For ex: DICOM (0018,0050) = 0.273438</para>
/// </summary>
  void SetSliceThickness(System::String^ arg0);


  // char *GetSliceThickness ();
/// <summary>
/// <para>Slice Thickness (Nominal reconstructed slice thickness, in mm) For ex: DICOM (0018,0050) = 0.273438</para>
/// </summary>
  System::String^ GetSliceThickness();


  // virtual double GetSliceThicknessAsDouble ();
/// <summary>
/// <para>Slice Thickness (Nominal reconstructed slice thickness, in mm) For ex: DICOM (0018,0050) = 0.273438</para>
/// </summary>
  double GetSliceThicknessAsDouble();


  // void SetKVP (char *);
/// <summary>
/// <para>Peak kilo voltage output of the (x-ray) generator used For ex: DICOM (0018,0060) = 120</para>
/// </summary>
  void SetKVP(System::String^ arg0);


  // char *GetKVP ();
/// <summary>
/// <para>Peak kilo voltage output of the (x-ray) generator used For ex: DICOM (0018,0060) = 120</para>
/// </summary>
  System::String^ GetKVP();


  // void SetGantryTilt (char *);
/// <summary>
/// <para>Gantry/Detector tilt (Nominal angle of tilt in degrees of the scanning gantry.) For ex: DICOM (0018,1120) = 15</para>
/// </summary>
  void SetGantryTilt(System::String^ arg0);


  // char *GetGantryTilt ();
/// <summary>
/// <para>Gantry/Detector tilt (Nominal angle of tilt in degrees of the scanning gantry.) For ex: DICOM (0018,1120) = 15</para>
/// </summary>
  System::String^ GetGantryTilt();


  // virtual double GetGantryTiltAsDouble ();
/// <summary>
/// <para>Gantry/Detector tilt (Nominal angle of tilt in degrees of the scanning gantry.) For ex: DICOM (0018,1120) = 15</para>
/// </summary>
  double GetGantryTiltAsDouble();


  // void SetEchoTime (char *);
/// <summary>
/// <para>Echo Time (Time in ms between the middle of the excitation pulse and the peak of the echo produced) For ex: DICOM (0018,0081) = 105</para>
/// </summary>
  void SetEchoTime(System::String^ arg0);


  // char *GetEchoTime ();
/// <summary>
/// <para>Echo Time (Time in ms between the middle of the excitation pulse and the peak of the echo produced) For ex: DICOM (0018,0081) = 105</para>
/// </summary>
  System::String^ GetEchoTime();


  // void SetEchoTrainLength (char *);
/// <summary>
/// <para>Echo Train Length (Number of lines in k-space acquired per excitation per image) For ex: DICOM (0018,0091) = 35</para>
/// </summary>
  void SetEchoTrainLength(System::String^ arg0);


  // char *GetEchoTrainLength ();
/// <summary>
/// <para>Echo Train Length (Number of lines in k-space acquired per excitation per image) For ex: DICOM (0018,0091) = 35</para>
/// </summary>
  System::String^ GetEchoTrainLength();


  // void SetRepetitionTime (char *);
/// <summary>
/// <para>Repetition Time The period of time in msec between the beginning of a pulse sequence and the beginning of the succeeding (essentially identical) pulse sequence. For ex: DICOM (0018,0080) = 2040</para>
/// </summary>
  void SetRepetitionTime(System::String^ arg0);


  // char *GetRepetitionTime ();
/// <summary>
/// <para>Repetition Time The period of time in msec between the beginning of a pulse sequence and the beginning of the succeeding (essentially identical) pulse sequence. For ex: DICOM (0018,0080) = 2040</para>
/// </summary>
  System::String^ GetRepetitionTime();


  // void SetExposureTime (char *);
/// <summary>
/// <para>Exposure time (time of x-ray exposure in msec) For ex: DICOM (0018,1150) = 5</para>
/// </summary>
  void SetExposureTime(System::String^ arg0);


  // char *GetExposureTime ();
/// <summary>
/// <para>Exposure time (time of x-ray exposure in msec) For ex: DICOM (0018,1150) = 5</para>
/// </summary>
  System::String^ GetExposureTime();


  // void SetXRayTubeCurrent (char *);
/// <summary>
/// <para>X-ray tube current (in mA) For ex: DICOM (0018,1151) = 400</para>
/// </summary>
  void SetXRayTubeCurrent(System::String^ arg0);


  // char *GetXRayTubeCurrent ();
/// <summary>
/// <para>X-ray tube current (in mA) For ex: DICOM (0018,1151) = 400</para>
/// </summary>
  System::String^ GetXRayTubeCurrent();


  // void SetExposure (char *);
/// <summary>
/// <para>Exposure (The exposure expressed in mAs, for example calculated from Exposure Time and X-ray Tube Current) For ex: DICOM (0018,1152) = 114</para>
/// </summary>
  void SetExposure(System::String^ arg0);


  // char *GetExposure ();
/// <summary>
/// <para>Exposure (The exposure expressed in mAs, for example calculated from Exposure Time and X-ray Tube Current) For ex: DICOM (0018,1152) = 114</para>
/// </summary>
  System::String^ GetExposure();


  // virtual void DeepCopy (vtkMedicalImageProperties *p);
/// <summary>
/// <para>Copy the contents of p to this instance.</para>
/// </summary>
  void DeepCopy(vtkMedicalImageProperties^ p);


  // virtual void AddWindowLevelPreset (double w, double l);
/// <summary>
/// <para>Add/Remove/Query the window/level presets that may have been associated to a medical image. Window is also known as 'width', level is also known as 'center'. The same window/level pair can not be added twice. As a convenience, a comment can be associated to a preset. For ex: DICOM Window Center (0028,1050) = 00045\000470         DICOM Window Width  (0028,1051) = 0106\03412</para>
/// </summary>
  void AddWindowLevelPreset(double w, double l);


  // virtual void RemoveWindowLevelPreset (double w, double l);
/// <summary>
/// <para>Add/Remove/Query the window/level presets that may have been associated to a medical image. Window is also known as 'width', level is also known as 'center'. The same window/level pair can not be added twice. As a convenience, a comment can be associated to a preset. For ex: DICOM Window Center (0028,1050) = 00045\000470         DICOM Window Width  (0028,1051) = 0106\03412</para>
/// </summary>
  void RemoveWindowLevelPreset(double w, double l);


  // virtual void RemoveAllWindowLevelPresets ();
/// <summary>
/// <para>Add/Remove/Query the window/level presets that may have been associated to a medical image. Window is also known as 'width', level is also known as 'center'. The same window/level pair can not be added twice. As a convenience, a comment can be associated to a preset. For ex: DICOM Window Center (0028,1050) = 00045\000470         DICOM Window Width  (0028,1051) = 0106\03412</para>
/// </summary>
  void RemoveAllWindowLevelPresets();


  // virtual int GetNumberOfWindowLevelPresets ();
/// <summary>
/// <para>Add/Remove/Query the window/level presets that may have been associated to a medical image. Window is also known as 'width', level is also known as 'center'. The same window/level pair can not be added twice. As a convenience, a comment can be associated to a preset. For ex: DICOM Window Center (0028,1050) = 00045\000470         DICOM Window Width  (0028,1051) = 0106\03412</para>
/// </summary>
  int GetNumberOfWindowLevelPresets();


  // virtual int HasWindowLevelPreset (double w, double l);
/// <summary>
/// <para>Add/Remove/Query the window/level presets that may have been associated to a medical image. Window is also known as 'width', level is also known as 'center'. The same window/level pair can not be added twice. As a convenience, a comment can be associated to a preset. For ex: DICOM Window Center (0028,1050) = 00045\000470         DICOM Window Width  (0028,1051) = 0106\03412</para>
/// </summary>
  int HasWindowLevelPreset(double w, double l);


  // virtual int GetNthWindowLevelPreset (int idx, double *w, double *l);
/// <summary>
/// <para>Add/Remove/Query the window/level presets that may have been associated to a medical image. Window is also known as 'width', level is also known as 'center'. The same window/level pair can not be added twice. As a convenience, a comment can be associated to a preset. For ex: DICOM Window Center (0028,1050) = 00045\000470         DICOM Window Width  (0028,1051) = 0106\03412</para>
/// </summary>
  int GetNthWindowLevelPreset(int idx, array<double>^ w, array<double>^ l);


  // virtual double *GetNthWindowLevelPreset (int idx);
/// <summary>
/// <para>Add/Remove/Query the window/level presets that may have been associated to a medical image. Window is also known as 'width', level is also known as 'center'. The same window/level pair can not be added twice. As a convenience, a comment can be associated to a preset. For ex: DICOM Window Center (0028,1050) = 00045\000470         DICOM Window Width  (0028,1051) = 0106\03412</para>
/// </summary>
  array<double>^ GetNthWindowLevelPreset(int idx);


  // virtual void SetNthWindowLevelPresetComment (int idx, const char *comment);
/// <summary>
/// <para>Add/Remove/Query the window/level presets that may have been associated to a medical image. Window is also known as 'width', level is also known as 'center'. The same window/level pair can not be added twice. As a convenience, a comment can be associated to a preset. For ex: DICOM Window Center (0028,1050) = 00045\000470         DICOM Window Width  (0028,1051) = 0106\03412</para>
/// </summary>
  void SetNthWindowLevelPresetComment(int idx, System::String^ comment);


  // virtual const char *GetNthWindowLevelPresetComment (int idx);
/// <summary>
/// <para>Add/Remove/Query the window/level presets that may have been associated to a medical image. Window is also known as 'width', level is also known as 'center'. The same window/level pair can not be added twice. As a convenience, a comment can be associated to a preset. For ex: DICOM Window Center (0028,1050) = 00045\000470         DICOM Window Width  (0028,1051) = 0106\03412</para>
/// </summary>
  System::String^ GetNthWindowLevelPresetComment(int idx);


// Did not wrap:  vtkMedicalImageProperties ();


// Did not wrap:  ~vtkMedicalImageProperties ();


// Did not wrap:  vtkMedicalImageProperties (const vtkMedicalImageProperties &);


// Did not wrap:  void vtkMedicalImageProperties 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMedicalImageProperties(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMedicalImageProperties(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMedicalImageProperties();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMedicalImageProperties();


};

} // end vtkIO
