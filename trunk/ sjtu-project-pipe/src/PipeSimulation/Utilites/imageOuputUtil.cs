using System;

namespace PipeSimulation
{
    namespace Utility
    {
        static public class CImageOutputUtil
        {
            static public void OutputImageFromCurrentSence(vtk.vtkRenderWindow renderWin, string outputPath)
            {
               // Create a window to image filter
                using (vtk.vtkWindowToImageFilter filterImage = new vtk.vtkWindowToImageFilter())
                {
                    filterImage.SetInput(renderWin);

                    // PNG Writer
                    using (vtk.vtkPNGWriter pngWriter = new vtk.vtkPNGWriter())
                    {
                        pngWriter.SetFileName(outputPath);
                        pngWriter.SetInput(filterImage.GetOutput());
                        pngWriter.Write();
                    }
                }
            }
        }
    }
}