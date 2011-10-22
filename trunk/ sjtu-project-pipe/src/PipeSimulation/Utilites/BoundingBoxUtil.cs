using System;
using PipeSimulation.DataModel;
using PipeSimulation.SceneGraph;
using PipeSimulation.PipeApp;

namespace PipeSimulation.Utility
{
    public static class CBoundingBoxUtil
    {
        public static double[] GetBounds(vtk.vtkRenderer render)
        {
            // Always return GetAllVisiblePropBounds for main render
            if (render == IApp.theApp.RendererManager.MainRenderer)
            {
                return GetAllVisiblePropBounds(render);
            }

            // Get Bouding box for none main render
            bool bConsideOnlyPipe = ApplicationOptions.Instance().ViewOptions.GetBoundsOnlyForPipeModels;
            if (bConsideOnlyPipe)
            {
                bool bIncludeInvisible = ApplicationOptions.Instance().ViewOptions.IncludeInvisibleBounds;
                if (IApp.theApp.DataModel.PipeModels.Count != 0)
                {
                    bool bSuccess = true;
                    double[] bounds = GetPipeModelBounds(bIncludeInvisible, ref bSuccess);
                    if (bSuccess)
                    {
                        return bounds;
                    }

                    // Else 
                    // get all visible prop bounds
                }
            }

            return GetAllVisiblePropBounds(render);
        }

        private static double[] GetAllVisiblePropBounds(vtk.vtkRenderer render)
        {
            return render.ComputeVisiblePropBounds();
        }

        private static double[] GetPipeModelBounds(bool bIncludeInvisible, ref bool bSuccess)
        {
            double[] allBounds = new double[6];
            allBounds[0] = allBounds[2] = allBounds[4] = 1.0e+299;
            allBounds[1] = allBounds[3] = allBounds[5] = -1.0e+299;

            bool bNothingVisible = true;

            // Calculate the pipe objects bounds
            foreach (CPipeModel pipeModel in IApp.theApp.DataModel.PipeModels)
            {
                CModelNode modelNode = pipeModel.ModelNode;
                double[] bounds = modelNode.GetBounds(bIncludeInvisible);
                if (null == bounds) continue;

                if (bounds[0] < allBounds[0])
                {
                    allBounds[0] = bounds[0];
                }
                if (bounds[1] > allBounds[1])
                {
                    allBounds[1] = bounds[1];
                }
                if (bounds[2] < allBounds[2])
                {
                    allBounds[2] = bounds[2];
                }
                if (bounds[3] > allBounds[3])
                {
                    allBounds[3] = bounds[3];
                }
                if (bounds[4] < allBounds[4])
                {
                    allBounds[4] = bounds[4];
                }
                if (bounds[5] > allBounds[5])
                {
                    allBounds[5] = bounds[5];
                }

                bNothingVisible = false;
            }

            if (bNothingVisible)
            {
                bSuccess = false;
                vtk.vtkMath.UninitializeBounds(allBounds);
            }
            else
            {
                bSuccess = true;
            }

            return allBounds;
        }
    }
}