using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

using vtk;

namespace ControlTest
{
    public partial class Form1 : Form
    {
        vtk.vtkFormsWindowControl m_picture;

        void CreateFlamingo()
        {
            string VTK_DATA_ROOT = @"C:/Program Files/VTKData"; //vtkGetDataRoot();

            // Create the standard renderer, render window and interactor
            vtkRenderer ren = new vtk.vtkRenderer();
            vtkRenderWindow renWin = m_picture.GetRenderWindow();
            renWin.AddRenderer(ren);
            vtkRenderWindowInteractor iren = m_picture.GetInteractor();

            // Create the reader for the data
            vtkStructuredPointsReader reader = new vtk.vtkStructuredPointsReader();
            reader.SetFileName(VTK_DATA_ROOT + "/Data/ironProt.vtk");

            // Create transfer mapping scalar value to opacity
            vtkPiecewiseFunction opacityTransferFunction = new vtk.vtkPiecewiseFunction();
            opacityTransferFunction.AddPoint(20, 0.0);
            opacityTransferFunction.AddPoint(255, 0.2);

            // Create transfer mapping scalar value to color
            vtkColorTransferFunction colorTransferFunction = new vtk.vtkColorTransferFunction();
            colorTransferFunction.AddRGBPoint(0.0, 0.0, 0.0, 0.0);
            colorTransferFunction.AddRGBPoint(64.0, 1.0, 0.0, 0.0);
            colorTransferFunction.AddRGBPoint(128.0, 0.0, 0.0, 1.0);
            colorTransferFunction.AddRGBPoint(192.0, 0.0, 1.0, 0.0);
            colorTransferFunction.AddRGBPoint(255.0, 0.0, 0.2, 0.0);

            // The property describes how the data will look
            vtkVolumeProperty volumeProperty = new vtk.vtkVolumeProperty();
            volumeProperty.SetColor(colorTransferFunction);
            volumeProperty.SetScalarOpacity(opacityTransferFunction);
            volumeProperty.ShadeOn();
            volumeProperty.SetInterpolationTypeToLinear();

            // The mapper / ray cast function know how to render the data
            vtkVolumeRayCastCompositeFunction compositeFunction = new vtk.vtkVolumeRayCastCompositeFunction();
            vtkVolumeRayCastMapper volumeMapper = new vtk.vtkVolumeRayCastMapper();
            volumeMapper.SetVolumeRayCastFunction(compositeFunction);
            volumeMapper.SetInputConnection(reader.GetOutputPort());

            // The volume holds the mapper and the property and
            // can be used to position/orient the volume
            vtkVolume volume = new vtk.vtkVolume();
            volume.SetMapper(volumeMapper);
            volume.SetProperty(volumeProperty);

            ren.AddVolume(volume);
            ren.SetBackground(1, 1, 1);
        }


        public Form1()
        {
            InitializeComponent();

            m_picture = new vtk.vtkFormsWindowControl();
            this.SuspendLayout();
            m_picture.Dock = DockStyle.Fill;
            m_picture.Location = new Point(0, 0);
            m_picture.Name = "VTK Control";
            m_picture.Size = new Size(400, 400);
            m_picture.TabIndex = 0;
            m_picture.TabStop = false;
            this.Controls.Add(m_picture);
            this.ResumeLayout();
        }

        protected override void OnLoad(EventArgs e)
        {
            CreateFlamingo();
        }
    }
}