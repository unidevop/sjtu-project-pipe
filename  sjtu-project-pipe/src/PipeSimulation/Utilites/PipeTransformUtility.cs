using System;

namespace PipeSimulation.Utility
{
    public static class CPipeTransformUtility
    {
        // 
        public static vtk.vtkMatrix4x4 TransformGPSMatrix(vtk.vtkMatrix4x4 gpsTransform, vtk.vtkMatrix4x4 currentGPSTransform)
        {
            vtk.vtkMatrix4x4 transform = new vtk.vtkMatrix4x4();
            transform.DeepCopy(gpsTransform);

            transform.Transpose();
            currentGPSTransform.Transpose();
            // gpsTransform.Invert * currentGPSTransform
            transform.Invert();

            vtk.vtkMatrix4x4 transformTemp = new vtk.vtkMatrix4x4();
            vtk.vtkMatrix4x4.Multiply4x4(currentGPSTransform, transform, transformTemp);
            //vtk.vtkMatrix4x4.Multiply4x4(transform, gpsTransform, transform);

            //// Test 1
            //double[] pos1 = gpsTransform.MultiplyDoublePoint(new double[4] { 0, 0, 0,1 });
            //double[] pos1Transform = transform.MultiplyDoublePoint(pos1);

            //// Pos1 == pos1transform

            //// Test 2
            //double[] vec1 = gpsTransform.MultiplyDoublePoint(new double[] {1, 0, 0,0 });
            //double[] vec1Transform = transform.MultiplyDoublePoint(vec1);

            //// Test 3
            //double[] vec2 = gpsTransform.MultiplyDoublePoint(new double[] {0, 1, 0, 0 });
            //double[] vec2Transform = transform.MultiplyDoublePoint(vec2);
            
            //// Test 3
            //double[] vec3 = gpsTransform.MultiplyDoublePoint(new double[] { 0, 0, 1, 0 });
            //double[] vec3Transform = transform.MultiplyDoublePoint(vec3);


            return transformTemp;
        }

        public static vtk.vtkTransform TransformGPSMatrix(vtk.vtkTransform gpsTransform, vtk.vtkTransform currentGPSTransform)
        {
            //vtk.vtkTransform transform = new vtk.vtkTransform();
            //transform.SetMatrix(TransformGPSMatrix(gpsTransform.GetMatrix(), currentGPSTransform.GetMatrix()));

            vtk.vtkTransform transform = new vtk.vtkTransform();
            //transform.RotateZ(90);
            //transform.Translate(100, 0, 0);

            //transform.Translate(gpsTransform.GetPosition());

            vtk.vtkTransform transform2 = new vtk.vtkTransform();
           //transform2.Translate(250, 0, 0);
            //transform2.RotateX(-45);
            transform2.Translate(currentGPSTransform.GetPosition());

            transform.SetMatrix(TransformGPSMatrix(gpsTransform.GetMatrix(), currentGPSTransform.GetMatrix()));
            return transform;
        }
    }
}