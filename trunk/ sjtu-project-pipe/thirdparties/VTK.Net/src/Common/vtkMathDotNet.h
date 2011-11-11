#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataArray;

public ref class vtkMath : public vtkObject
{

public:
// Did not wrap:  static vtkMath *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMath *NewInstance ();
  vtkMath^ NewInstance();


  // vtkMath *SafeDownCast (vtkObject* o);
  static vtkMath^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // static float Pi ();return f 
/// <summary>
/// <para>Useful constants.</para>
/// </summary>
  static float Pi();


  // static float DegreesToRadians ();return f 
/// <summary>
/// <para>Useful constants.</para>
/// </summary>
  static float DegreesToRadians();


  // static float RadiansToDegrees ();return f 
/// <summary>
/// <para>Useful constants.</para>
/// </summary>
  static float RadiansToDegrees();


  // static double DoubleDegreesToRadians ();return 
/// <summary>
/// <para>Useful constants. (double-precision version)</para>
/// </summary>
  static double DoubleDegreesToRadians();


  // static double DoublePi ();return 
/// <summary>
/// <para>Useful constants. (double-precision version)</para>
/// </summary>
  static double DoublePi();


  // static double DoubleRadiansToDegrees ();return 
/// <summary>
/// <para>Useful constants. (double-precision version)</para>
/// </summary>
  static double DoubleRadiansToDegrees();


  // static double DoubleTwoPi ();return 
/// <summary>
/// <para>A mathematical constant (double-precision version). This version is 6.283185307179586.</para>
/// </summary>
  static double DoubleTwoPi();


  // static int Round (float f);return static_cast int f f 
/// <summary>
/// <para>Rounds a float to the nearest integer.</para>
/// </summary>
  static int Round(float f);


  // static int Round (double f);return static_cast int f f 
  static int Round(double f);


  // static int Floor (double x);
  static int Floor(double x);


  // static float Dot (const float x[3], const float y[3]);return x y x y x y 
/// <summary>
/// <para>Dot product of two 3-vectors (float version).</para>
/// </summary>
  static float Dot(array<float>^ x, array<float>^ y);


  // static double Dot (const double x[3], const double y[3]);return x y x y x y 
/// <summary>
/// <para>Dot product of two 3-vectors (double-precision version).</para>
/// </summary>
  static double Dot(array<double>^ x, array<double>^ y);


  // static void Cross (const float x[3], const float y[3], float z[3]);
/// <summary>
/// <para>Cross product of two 3-vectors. Result vector in z[3].</para>
/// </summary>
  static void Cross(array<float>^ x, array<float>^ y, array<float>^ z);


  // static void Cross (const double x[3], const double y[3], double z[3]);
/// <summary>
/// <para>Cross product of two 3-vectors. Result vector in z[3]. (double-precision version)</para>
/// </summary>
  static void Cross(array<double>^ x, array<double>^ y, array<double>^ z);


  // static float Norm (const float *x, int n);
/// <summary>
/// <para>Compute the norm of n-vector.</para>
/// </summary>
  static float Norm(array<float>^ x, int n);


  // static double Norm (const double *x, int n);
/// <summary>
/// <para>Compute the norm of n-vector.</para>
/// </summary>
  static double Norm(array<double>^ x, int n);


  // static float Norm (const float x[3]);return static_cast float sqrt x x x x x x 
/// <summary>
/// <para>Compute the norm of 3-vector.</para>
/// </summary>
  static float Norm(array<float>^ x);


  // static double Norm (const double x[3]);return sqrt x x x x x x 
/// <summary>
/// <para>Compute the norm of 3-vector (double-precision version).</para>
/// </summary>
  static double Norm(array<double>^ x);


  // static float Normalize (float x[3]);
/// <summary>
/// <para>Normalize (in place) a 3-vector. Returns norm of vector.</para>
/// </summary>
  static float Normalize(array<float>^ x);


  // static double Normalize (double x[3]);
/// <summary>
/// <para>Normalize (in place) a 3-vector. Returns norm of vector (double-precision version).</para>
/// </summary>
  static double Normalize(array<double>^ x);


  // static void Perpendiculars (const double x[3], double y[3], double z[3], double theta);
/// <summary>
/// <para>Given a unit vector x, find two unit vectors y and z such that  x cross y = z (i.e. the vectors are perpendicular to each other). There is an infinite number of such vectors, specify an angle theta  to choose one set.  If you want only one perpendicular vector,  specify NULL for z.</para>
/// </summary>
  static void Perpendiculars(array<double>^ x, array<double>^ y, array<double>^ z, double theta);


  // static void Perpendiculars (const float x[3], float y[3], float z[3], double theta);
/// <summary>
/// <para>Given a unit vector x, find two unit vectors y and z such that  x cross y = z (i.e. the vectors are perpendicular to each other). There is an infinite number of such vectors, specify an angle theta  to choose one set.  If you want only one perpendicular vector,  specify NULL for z.</para>
/// </summary>
  static void Perpendiculars(array<float>^ x, array<float>^ y, array<float>^ z, double theta);


  // static float Distance2BetweenPoints (const float x[3], const float y[3]);
/// <summary>
/// <para>Compute distance squared between two points.</para>
/// </summary>
  static float Distance2BetweenPoints(array<float>^ x, array<float>^ y);


  // static double Distance2BetweenPoints (const double x[3], const double y[3]);
/// <summary>
/// <para>Compute distance squared between two points (double precision version).</para>
/// </summary>
  static double Distance2BetweenPoints(array<double>^ x, array<double>^ y);


  // static float Dot2D (const float x[3], const float y[3]);return x y x y 
/// <summary>
/// <para>Dot product of two 2-vectors. The third (z) component is ignored.</para>
/// </summary>
  static float Dot2D(array<float>^ x, array<float>^ y);


  // static double Dot2D (const double x[3], const double y[3]);return x y x y 
/// <summary>
/// <para>Dot product of two 2-vectors. The third (z) component is ignored (double-precision version).</para>
/// </summary>
  static double Dot2D(array<double>^ x, array<double>^ y);


  // static float Norm2D (const float x[3]);return static_cast float sqrt x x x x 
/// <summary>
/// <para>Compute the norm of a 2-vector. Ignores z-component.</para>
/// </summary>
  static float Norm2D(array<float>^ x);


  // static double Norm2D (const double x[3]);return sqrt x x x x 
/// <summary>
/// <para>Compute the norm of a 2-vector. Ignores z-component (double-precision version).</para>
/// </summary>
  static double Norm2D(array<double>^ x);


  // static float Normalize2D (float x[3]);
/// <summary>
/// <para>Normalize (in place) a 2-vector. Returns norm of vector. Ignores z-component.</para>
/// </summary>
  static float Normalize2D(array<float>^ x);


  // static double Normalize2D (double x[3]);
/// <summary>
/// <para>Normalize (in place) a 2-vector. Returns norm of vector. Ignores z-component (double-precision version).</para>
/// </summary>
  static double Normalize2D(array<double>^ x);


  // static float Determinant2x2 (const float c1[2], const float c2[2]);return c1 c2 c2 c1 
/// <summary>
/// <para>Compute determinant of 2x2 matrix. Two columns of matrix are input.</para>
/// </summary>
  static float Determinant2x2(array<float>^ c1, array<float>^ c2);


  // static double Determinant2x2 (double a, double b, double c, double d);return a d b c 
/// <summary>
/// <para>Calculate the determinant of a 2x2 matrix: | a b | | c d |</para>
/// </summary>
  static double Determinant2x2(double a, double b, double c, double d);


  // static double Determinant2x2 (const double c1[2], const double c2[2]);return c1 c2 c2 c1 
/// <summary>
/// <para>Calculate the determinant of a 2x2 matrix: | a b | | c d |</para>
/// </summary>
  static double Determinant2x2(array<double>^ c1, array<double>^ c2);


  // static void LUFactor3x3 (float A[3][3], int index[3]);
/// <summary>
/// <para>LU Factorization of a 3x3 matrix.  The diagonal elements are the multiplicative inverse of those in the standard LU factorization.</para>
/// </summary>
  static void LUFactor3x3(array<float,2>^ A, array<int>^ index);


  // static void LUFactor3x3 (double A[3][3], int index[3]);
/// <summary>
/// <para>LU Factorization of a 3x3 matrix.  The diagonal elements are the multiplicative inverse of those in the standard LU factorization.</para>
/// </summary>
  static void LUFactor3x3(array<double,2>^ A, array<int>^ index);


  // static void LUSolve3x3 (const float A[3][3], const int index[3], float x[3]);
/// <summary>
/// <para>LU back substitution for a 3x3 matrix.  The diagonal elements are the multiplicative inverse of those in the standard LU factorization.</para>
/// </summary>
  static void LUSolve3x3(array<float,2>^ A, array<int>^ arg1, array<float>^ x);


  // static void LUSolve3x3 (const double A[3][3], const int index[3], double x[3]);
/// <summary>
/// <para>LU back substitution for a 3x3 matrix.  The diagonal elements are the multiplicative inverse of those in the standard LU factorization.</para>
/// </summary>
  static void LUSolve3x3(array<double,2>^ A, array<int>^ arg1, array<double>^ x);


  // static void LinearSolve3x3 (const float A[3][3], const float x[3], float y[3]);
/// <summary>
/// <para>Solve Ay = x for y and place the result in y.  The matrix A is destroyed in the process.</para>
/// </summary>
  static void LinearSolve3x3(array<float,2>^ A, array<float>^ x, array<float>^ y);


  // static void LinearSolve3x3 (const double A[3][3], const double x[3], double y[3]);
/// <summary>
/// <para>Solve Ay = x for y and place the result in y.  The matrix A is destroyed in the process.</para>
/// </summary>
  static void LinearSolve3x3(array<double,2>^ A, array<double>^ x, array<double>^ y);


  // static void Multiply3x3 (const float A[3][3], const float in[3], float out[3]);
/// <summary>
/// <para>Multiply a vector by a 3x3 matrix.  The result is placed in out.</para>
/// </summary>
  static void Multiply3x3(array<float,2>^ A, array<float>^ in, array<float>^ out);


  // static void Multiply3x3 (const double A[3][3], const double in[3], double out[3]);
/// <summary>
/// <para>Multiply a vector by a 3x3 matrix.  The result is placed in out.</para>
/// </summary>
  static void Multiply3x3(array<double,2>^ A, array<double>^ in, array<double>^ out);


  // static void Multiply3x3 (const float A[3][3], const float B[3][3], float C[3][3]);
/// <summary>
/// <para>Mutltiply one 3x3 matrix by another according to C = AB.</para>
/// </summary>
  static void Multiply3x3(array<float,2>^ A, array<float,2>^ B, array<float,2>^ C);


  // static void Multiply3x3 (const double A[3][3], const double B[3][3], double C[3][3]);
/// <summary>
/// <para>Mutltiply one 3x3 matrix by another according to C = AB.</para>
/// </summary>
  static void Multiply3x3(array<double,2>^ A, array<double,2>^ B, array<double,2>^ C);


  // static void Transpose3x3 (const float A[3][3], float AT[3][3]);
/// <summary>
/// <para>Transpose a 3x3 matrix.</para>
/// </summary>
  static void Transpose3x3(array<float,2>^ A, array<float,2>^ AT);


  // static void Transpose3x3 (const double A[3][3], double AT[3][3]);
/// <summary>
/// <para>Transpose a 3x3 matrix.</para>
/// </summary>
  static void Transpose3x3(array<double,2>^ A, array<double,2>^ AT);


  // static void Invert3x3 (const float A[3][3], float AI[3][3]);
/// <summary>
/// <para>Invert a 3x3 matrix.</para>
/// </summary>
  static void Invert3x3(array<float,2>^ A, array<float,2>^ AI);


  // static void Invert3x3 (const double A[3][3], double AI[3][3]);
/// <summary>
/// <para>Invert a 3x3 matrix.</para>
/// </summary>
  static void Invert3x3(array<double,2>^ A, array<double,2>^ AI);


  // static void Identity3x3 (float A[3][3]);
/// <summary>
/// <para>Set A to the identity matrix.</para>
/// </summary>
  static void Identity3x3(array<float,2>^ A);


  // static void Identity3x3 (double A[3][3]);
/// <summary>
/// <para>Set A to the identity matrix.</para>
/// </summary>
  static void Identity3x3(array<double,2>^ A);


  // static double Determinant3x3 (float A[3][3]);
/// <summary>
/// <para>Return the determinant of a 3x3 matrix.</para>
/// </summary>
  static double Determinant3x3(array<float,2>^ A);


  // static double Determinant3x3 (double A[3][3]);
/// <summary>
/// <para>Return the determinant of a 3x3 matrix.</para>
/// </summary>
  static double Determinant3x3(array<double,2>^ A);


  // static float Determinant3x3 (const float c1[3], const float c2[3], const float c3[3]);
/// <summary>
/// <para>Compute determinant of 3x3 matrix. Three columns of matrix are input.</para>
/// </summary>
  static float Determinant3x3(array<float>^ c1, array<float>^ c2, array<float>^ c3);


  // static double Determinant3x3 (const double c1[3], const double c2[3], const double c3[3]);
/// <summary>
/// <para>Compute determinant of 3x3 matrix. Three columns of matrix are input.</para>
/// </summary>
  static double Determinant3x3(array<double>^ c1, array<double>^ c2, array<double>^ c3);


  // static double Determinant3x3 (double a1, double a2, double a3, double b1, double b2, double b3, double c1, double c2, double c3);
/// <summary>
/// <para>Calculate the determinant of a 3x3 matrix in the form:     | a1,  b1,  c1 |     | a2,  b2,  c2 |     | a3,  b3,  c3 |</para>
/// </summary>
  static double Determinant3x3(double a1, double a2, double a3, double b1, double b2, double b3, double c1, double c2, double c3);


  // static void QuaternionToMatrix3x3 (const float quat[4], float A[3][3]);
/// <summary>
/// <para>Convert a quaternion to a 3x3 rotation matrix.  The quaternion does not have to be normalized beforehand.</para>
/// </summary>
  static void QuaternionToMatrix3x3(array<float>^ quat, array<float,2>^ A);


  // static void QuaternionToMatrix3x3 (const double quat[4], double A[3][3]);
/// <summary>
/// <para>Convert a quaternion to a 3x3 rotation matrix.  The quaternion does not have to be normalized beforehand.</para>
/// </summary>
  static void QuaternionToMatrix3x3(array<double>^ quat, array<double,2>^ A);


  // static void Matrix3x3ToQuaternion (const float A[3][3], float quat[4]);
/// <summary>
/// <para>Convert a 3x3 matrix into a quaternion.  This will provide the best possible answer even if the matrix is not a pure rotation matrix. The method used is that of B.K.P. Horn.</para>
/// </summary>
  static void Matrix3x3ToQuaternion(array<float,2>^ A, array<float>^ quat);


  // static void Matrix3x3ToQuaternion (const double A[3][3], double quat[4]);
/// <summary>
/// <para>Convert a 3x3 matrix into a quaternion.  This will provide the best possible answer even if the matrix is not a pure rotation matrix. The method used is that of B.K.P. Horn.</para>
/// </summary>
  static void Matrix3x3ToQuaternion(array<double,2>^ A, array<double>^ quat);


  // static void Orthogonalize3x3 (const float A[3][3], float B[3][3]);
/// <summary>
/// <para>Orthogonalize a 3x3 matrix and put the result in B.  If matrix A has a negative determinant, then B will be a rotation plus a flip i.e. it will have a determinant of -1.</para>
/// </summary>
  static void Orthogonalize3x3(array<float,2>^ A, array<float,2>^ B);


  // static void Orthogonalize3x3 (const double A[3][3], double B[3][3]);
/// <summary>
/// <para>Orthogonalize a 3x3 matrix and put the result in B.  If matrix A has a negative determinant, then B will be a rotation plus a flip i.e. it will have a determinant of -1.</para>
/// </summary>
  static void Orthogonalize3x3(array<double,2>^ A, array<double,2>^ B);


  // static void Diagonalize3x3 (const float A[3][3], float w[3], float V[3][3]);
/// <summary>
/// <para>Diagonalize a symmetric 3x3 matrix and return the eigenvalues in w and the eigenvectors in the columns of V.  The matrix V will  have a positive determinant, and the three eigenvectors will be aligned as closely as possible with the x, y, and z axes.</para>
/// </summary>
  static void Diagonalize3x3(array<float,2>^ A, array<float>^ w, array<float,2>^ V);


  // static void Diagonalize3x3 (const double A[3][3], double w[3], double V[3][3]);
/// <summary>
/// <para>Diagonalize a symmetric 3x3 matrix and return the eigenvalues in w and the eigenvectors in the columns of V.  The matrix V will  have a positive determinant, and the three eigenvectors will be aligned as closely as possible with the x, y, and z axes.</para>
/// </summary>
  static void Diagonalize3x3(array<double,2>^ A, array<double>^ w, array<double,2>^ V);


  // static void SingularValueDecomposition3x3 (const float A[3][3], float U[3][3], float w[3], float VT[3][3]);
/// <summary>
/// <para>Perform singular value decomposition on a 3x3 matrix.  This is not done using a conventional SVD algorithm, instead it is done using Orthogonalize3x3 and Diagonalize3x3.  Both output matrices U and VT will have positive determinants, and the w values will be arranged such that the three rows of VT are aligned as closely as possible with the x, y, and z axes respectively.  If the determinant of A is negative, then the three w values will be negative.</para>
/// </summary>
  static void SingularValueDecomposition3x3(array<float,2>^ A, array<float,2>^ U, array<float>^ w, array<float,2>^ VT);


  // static void SingularValueDecomposition3x3 (const double A[3][3], double U[3][3], double w[3], double VT[3][3]);
/// <summary>
/// <para>Perform singular value decomposition on a 3x3 matrix.  This is not done using a conventional SVD algorithm, instead it is done using Orthogonalize3x3 and Diagonalize3x3.  Both output matrices U and VT will have positive determinants, and the w values will be arranged such that the three rows of VT are aligned as closely as possible with the x, y, and z axes respectively.  If the determinant of A is negative, then the three w values will be negative.</para>
/// </summary>
  static void SingularValueDecomposition3x3(array<double,2>^ A, array<double,2>^ U, array<double>^ w, array<double,2>^ VT);


// Did not wrap:  static int SolveLinearSystem (double *A, double *x, int size);


// Did not wrap:  static int InvertMatrix (double *A, double *AI, int size);


// Did not wrap:  static int InvertMatrix (double *A, double *AI, int size, int *tmp1Size, double *tmp2Size);


// Did not wrap:  static int LUFactorLinearSystem (double *A, int *index, int size);


// Did not wrap:  static int LUFactorLinearSystem (double *A, int *index, int size, double *tmpSize);


// Did not wrap:  static void LUSolveLinearSystem (double *A, int *index, double *x, int size);


// Did not wrap:  static double EstimateMatrixCondition (double *A, int size);


  // static void RandomSeed (long s);
/// <summary>
/// <para>Initialize seed value. NOTE: Random() has the bad property that  the first random number returned after RandomSeed() is called  is proportional to the seed value! To help solve this, call  RandomSeed() a few times inside seed. This doesn't ruin the  repeatability of Random().</para>
/// </summary>
  static void RandomSeed(long s);


  // static double Random ();
/// <summary>
/// <para>Generate random numbers between 0.0 and 1.0. This is used to provide portability across different systems.</para>
/// </summary>
  static double Random();


  // static double Random (double min, double max);
/// <summary>
/// <para>Generate random number between (min,max).</para>
/// </summary>
  static double Random(double min, double max);


// Did not wrap:  static int Jacobi (float *a, float *w, float *v);


// Did not wrap:  static int Jacobi (double *a, double *w, double *v);


// Did not wrap:  static int JacobiN (float *a, int n, float *w, float *v);


// Did not wrap:  static int JacobiN (double *a, int n, double *w, double *v);


  // static double *SolveCubic (double c0, double c1, double c2, double c3);
/// <summary>
/// <para>Solves a cubic equation c0*t^3 + c1*t^2 + c2*t + c3 = 0 when c0, c1, c2, and c3 are REAL.  Solution is motivated by Numerical Recipes In C 2nd Ed.  Return array contains number of (real) roots (counting multiple roots as one) followed by roots themselves. The value in roots[4] is a integer giving further information about the roots (see return codes for int SolveCubic()).</para>
/// </summary>
  static array<double>^ SolveCubic(double c0, double c1, double c2, double c3);


  // static double *SolveQuadratic (double c0, double c1, double c2);
/// <summary>
/// <para>Solves a quadratic equation c1*t^2 + c2*t + c3 = 0 when c1, c2, and c3 are REAL.  Solution is motivated by Numerical Recipes In C 2nd Ed. Return array contains number of (real) roots (counting multiple roots as one) followed by roots themselves. Note that roots[3] contains a return code further describing solution - see documentation for SolveCubic() for meaning of return codes.</para>
/// </summary>
  static array<double>^ SolveQuadratic(double c0, double c1, double c2);


  // static double *SolveLinear (double c0, double c1);
/// <summary>
/// <para>Solves a linear equation c2*t  + c3 = 0 when c2 and c3 are REAL. Solution is motivated by Numerical Recipes In C 2nd Ed. Return array contains number of roots followed by roots themselves.</para>
/// </summary>
  static array<double>^ SolveLinear(double c0, double c1);


  // static int SolveCubic (double c0, double c1, double c2, double c3, double *r1, double *r2, double *r3, int *num_roots);
/// <summary>
/// <para>Solves a cubic equation when c0, c1, c2, And c3 Are REAL.  Solution is motivated by Numerical Recipes In C 2nd Ed.  Roots and number of real roots are stored in user provided variables r1, r2, r3, and num_roots. Note that the function can return the following integer values describing the roots: (0)-no solution; (-1)-infinite number of solutions; (1)-one distinct real root of multiplicity 3 (stored in r1); (2)-two distinct real roots, one of multiplicity 2 (stored in r1 &amp; r2); (3)-three distinct real roots; (-2)-quadratic equation with complex conjugate solution (real part of root returned in r1, imaginary in r2); (-3)-one real root and a complex conjugate pair (real root in r1 and real part of pair in r2 and imaginary in r3).</para>
/// </summary>
  static int SolveCubic(double c0, double c1, double c2, double c3, array<double>^ r1, array<double>^ r2, array<double>^ r3, array<int>^ num_roots);


  // static int SolveQuadratic (double c0, double c1, double c2, double *r1, double *r2, int *num_roots);
/// <summary>
/// <para>Solves A Quadratic Equation c1*t^2  + c2*t  + c3 = 0 when  c1, c2, and c3 are REAL. Solution is motivated by Numerical Recipes In C 2nd Ed. Roots and number of roots are stored in user provided variables r1, r2, num_roots</para>
/// </summary>
  static int SolveQuadratic(double c0, double c1, double c2, array<double>^ r1, array<double>^ r2, array<int>^ num_roots);


  // static int SolveLinear (double c0, double c1, double *r1, int *num_roots);
/// <summary>
/// <para>Solves a linear equation c2*t + c3 = 0 when c2 and c3 are REAL. Solution is motivated by Numerical Recipes In C 2nd Ed. Root and number of (real) roots are stored in user provided variables r2 and num_roots.</para>
/// </summary>
  static int SolveLinear(double c0, double c1, array<double>^ r1, array<int>^ num_roots);


// Did not wrap:  static int SolveHomogeneousLeastSquares (int numberOfSamples, double *xt, int xOrder, double *mt);


// Did not wrap:  static int SolveLeastSquares (int numberOfSamples, double *xt, int xOrder, double *yt, int yOrder, double *mt, int checkHomogeneous);


  // static void RGBToHSV (float rgb[3], float hsv[3]);RGBToHSV rgb rgb rgb hsv hsv hsv 
/// <summary>
/// <para>Convert color in RGB format (Red, Green, Blue) to HSV format (Hue, Saturation, Value). The input color is not modified.</para>
/// </summary>
  static void RGBToHSV(array<float>^ rgb, array<float>^ hsv);


  // static void RGBToHSV (float r, float g, float b, float *h, float *s, float *v);
/// <summary>
/// <para>Convert color in RGB format (Red, Green, Blue) to HSV format (Hue, Saturation, Value). The input color is not modified.</para>
/// </summary>
  static void RGBToHSV(float r, float g, float b, array<float>^ h, array<float>^ s, array<float>^ v);


  // static double *RGBToHSV (double rgb[3]);
/// <summary>
/// <para>Convert color in RGB format (Red, Green, Blue) to HSV format (Hue, Saturation, Value). The input color is not modified.</para>
/// </summary>
  static array<double>^ RGBToHSV(array<double>^ rgb);


  // static double *RGBToHSV (double r, double g, double b);
/// <summary>
/// <para>Convert color in RGB format (Red, Green, Blue) to HSV format (Hue, Saturation, Value). The input color is not modified.</para>
/// </summary>
  static array<double>^ RGBToHSV(double r, double g, double b);


  // static void RGBToHSV (double rgb[3], double hsv[3]);RGBToHSV rgb rgb rgb hsv hsv hsv 
/// <summary>
/// <para>Convert color in RGB format (Red, Green, Blue) to HSV format (Hue, Saturation, Value). The input color is not modified.</para>
/// </summary>
  static void RGBToHSV(array<double>^ rgb, array<double>^ hsv);


  // static void RGBToHSV (double r, double g, double b, double *h, double *s, double *v);
/// <summary>
/// <para>Convert color in RGB format (Red, Green, Blue) to HSV format (Hue, Saturation, Value). The input color is not modified.</para>
/// </summary>
  static void RGBToHSV(double r, double g, double b, array<double>^ h, array<double>^ s, array<double>^ v);


  // static void HSVToRGB (float hsv[3], float rgb[3]);HSVToRGB hsv hsv hsv rgb rgb rgb 
/// <summary>
/// <para>Convert color in HSV format (Hue, Saturation, Value) to RGB format (Red, Green, Blue). The input color is not modified.</para>
/// </summary>
  static void HSVToRGB(array<float>^ hsv, array<float>^ rgb);


  // static void HSVToRGB (float h, float s, float v, float *r, float *g, float *b);
/// <summary>
/// <para>Convert color in HSV format (Hue, Saturation, Value) to RGB format (Red, Green, Blue). The input color is not modified.</para>
/// </summary>
  static void HSVToRGB(float h, float s, float v, array<float>^ r, array<float>^ g, array<float>^ b);


  // static double *HSVToRGB (double hsv[3]);
/// <summary>
/// <para>Convert color in HSV format (Hue, Saturation, Value) to RGB format (Red, Green, Blue). The input color is not modified.</para>
/// </summary>
  static array<double>^ HSVToRGB(array<double>^ hsv);


  // static double *HSVToRGB (double h, double s, double v);
/// <summary>
/// <para>Convert color in HSV format (Hue, Saturation, Value) to RGB format (Red, Green, Blue). The input color is not modified.</para>
/// </summary>
  static array<double>^ HSVToRGB(double h, double s, double v);


  // static void HSVToRGB (double hsv[3], double rgb[3]);HSVToRGB hsv hsv hsv rgb rgb rgb 
/// <summary>
/// <para>Convert color in HSV format (Hue, Saturation, Value) to RGB format (Red, Green, Blue). The input color is not modified.</para>
/// </summary>
  static void HSVToRGB(array<double>^ hsv, array<double>^ rgb);


  // static void HSVToRGB (double h, double s, double v, double *r, double *g, double *b);
/// <summary>
/// <para>Convert color in HSV format (Hue, Saturation, Value) to RGB format (Red, Green, Blue). The input color is not modified.</para>
/// </summary>
  static void HSVToRGB(double h, double s, double v, array<double>^ r, array<double>^ g, array<double>^ b);


  // static void LabToXYZ (double lab[3], double xyz[3]);
/// <summary>
/// <para>Convert color from Lab to XYZ system, and vice-versa</para>
/// </summary>
  static void LabToXYZ(array<double>^ lab, array<double>^ xyz);


  // static void XYZToRGB (double xyz[3], double rgb[3]);
/// <summary>
/// <para>Convert color from Lab to XYZ system, and vice-versa</para>
/// </summary>
  static void XYZToRGB(array<double>^ xyz, array<double>^ rgb);


  // static void UninitializeBounds (double bounds[6]);bounds bounds bounds bounds bounds bounds 
/// <summary>
/// <para>Are the bounds initialized?</para>
/// </summary>
  static void UninitializeBounds(array<double>^ bounds);


  // static int AreBoundsInitialized (double bounds[6]);if bounds bounds return return 
/// <summary>
/// <para>Clamp some values against a range The method without 'clamped_values' will perform in-place clamping.</para>
/// </summary>
  static int AreBoundsInitialized(array<double>^ bounds);


  // static void ClampValue (double *value, const double range[2]);
/// <summary>
/// <para>Clamp some values against a range The method without 'clamped_values' will perform in-place clamping.</para>
/// </summary>
  static void ClampValue(array<double>^ value, array<double>^ range);


  // static void ClampValue (double value, const double range[2], double *clamped_value);
/// <summary>
/// <para>Clamp some values against a range The method without 'clamped_values' will perform in-place clamping.</para>
/// </summary>
  static void ClampValue(double value, array<double>^ range, array<double>^ clamped_value);


  // static void ClampValues (double *values, int nb_values, const double range[2]);
/// <summary>
/// <para>Clamp some values against a range The method without 'clamped_values' will perform in-place clamping.</para>
/// </summary>
  static void ClampValues(array<double>^ values, int nb_values, array<double>^ range);


  // static void ClampValues (const double *values, int nb_values, const double range[2], double *clamped_values);
/// <summary>
/// <para>Clamp some values against a range The method without 'clamped_values' will perform in-place clamping.</para>
/// </summary>
  static void ClampValues(array<double>^ values, int nb_values, array<double>^ range, array<double>^ clamped_values);


  // static int GetScalarTypeFittingRange (double range_min, double range_max, double scale, double shift);
/// <summary>
/// <para>Return the scalar type that is most likely to have enough precision  to store a given range of data once it has been scaled and shifted  (i.e. [range_min * scale + shift, range_max * scale + shift].  If any one of the parameters is not an integer number (decimal part != 0), the search will default to float types only (float or double) Return -1 on error or no scalar type found.</para>
/// </summary>
  static int GetScalarTypeFittingRange(double range_min, double range_max, double scale, double shift);


  // static int GetAdjustedScalarRange (vtkDataArray *array, int comp, double range[2]);
/// <summary>
/// <para>Get a vtkDataArray's scalar range for a given component.  If the vtkDataArray's data type is unsigned char (VTK_UNSIGNED_CHAR) the range is adjusted to the whole data type range [0, 255.0].  Same goes for unsigned short (VTK_UNSIGNED_SHORT) but the upper bound  is also adjusted down to 4095.0 if was between ]255, 4095.0]. Return 1 on success, 0 otherwise.</para>
/// </summary>
  static int GetAdjustedScalarRange(vtkDataArray^ arg0, int comp, array<double>^ range);


  // static int ExtentIsWithinOtherExtent (int extent1[6], int extent2[6]);
/// <summary>
/// <para>Return true if first 3D extent is within second 3D extent Extent is x-min, x-max, y-min, y-max, z-min, z-max</para>
/// </summary>
  static int ExtentIsWithinOtherExtent(array<int>^ extent1, array<int>^ extent2);


  // static int BoundsIsWithinOtherBounds (double bounds1[6], double bounds2[6], double delta[3]);
/// <summary>
/// <para>Return true if first 3D bounds is within the second 3D bounds Bounds is x-min, x-max, y-min, y-max, z-min, z-max Delta is the error margin along each axis (usually a small number)</para>
/// </summary>
  static int BoundsIsWithinOtherBounds(array<double>^ bounds1, array<double>^ bounds2, array<double>^ delta);


  // static int PointIsWithinBounds (double point[3], double bounds[6], double delta[3]);
/// <summary>
/// <para>Return true if point is within the given 3D bounds Bounds is x-min, x-max, y-min, y-max, z-min, z-max Delta is the error margin along each axis (usually a small number)</para>
/// </summary>
  static int PointIsWithinBounds(array<double>^ point, array<double>^ bounds, array<double>^ delta);


// Did not wrap:  vtkMath ();


// Did not wrap:  ~vtkMath ();


// Did not wrap:  vtkMath (const vtkMath &);


// Did not wrap:  void vtkMath 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMath(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMath(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMath();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMath();


};

} // end vtkCommon
