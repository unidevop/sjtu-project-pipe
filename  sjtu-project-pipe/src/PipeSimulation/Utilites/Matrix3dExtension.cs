using System;
using System.Windows.Media.Media3D;

namespace PipeSimulation.Utility
{
    // This class acts as an extension method to Matrix3D class to return a vtk.vtkTransformation
    public static class Matrix3DExtension
    {
        public static vtk.vtkTransform ToVTKTransformation(this Matrix3D matrix3D)
        {
            double[] matData = new double[16];

            matData[0] = matrix3D.M11;
            matData[1] = matrix3D.M12;
            matData[2] = matrix3D.M13;
            matData[3] = matrix3D.M14;

            matData[4] = matrix3D.M21;
            matData[5] = matrix3D.M22;
            matData[6] = matrix3D.M23;
            matData[7] = matrix3D.M24;

            matData[8] = matrix3D.M31;
            matData[9] = matrix3D.M32;
            matData[10] = matrix3D.M33;
            matData[11] = matrix3D.M34;

            matData[12] = matrix3D.OffsetX;
            matData[13] = matrix3D.OffsetY;
            matData[14] = matrix3D.OffsetZ;
            matData[15] = matrix3D.M44;

            // Set the vtkTransform with a double[16]
            vtk.vtkTransform vtkTransform = new vtk.vtkTransform();
            vtkTransform.SetMatrix(matData);

            return vtkTransform;
        }
    }
}