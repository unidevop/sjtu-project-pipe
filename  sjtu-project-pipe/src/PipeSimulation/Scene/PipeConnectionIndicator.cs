using System;
using System.Collections.Generic;
using PipeSimulation.DataModel;
using PipeSimulation.Geometry;
using PipeSimulation.DataQuery;

namespace PipeSimulation.SceneGraph
{
    /// <summary>
    /// abstract class to define a two poins indicator
    /// It uses a implmentation class to do the real graphics representation
    /// </summary>
    public abstract class CTwoPointsIndicators
    {
        private CTwoPointsIndicatorsImpl m_impl;
        public CTwoPointsIndicators(CTwoPointsIndicatorsImpl impl)
        {
            m_impl = impl;
            m_impl.Parent = this;
        }

        private List<CTwoPoints> m_pointsList = new List<CTwoPoints>();
        public IList<CTwoPoints> PointsList
        {
            get { return m_pointsList; }
        }

        public CTwoPointsIndicatorsImpl Impl
        {
            get { return m_impl; }
        }
    }

    /// <summary>
    /// The graphics representation for two point indicator
    /// </summary>
    public class CTwoPointsIndicatorsImpl
    {
        private vtk.vtkActor m_actor = null;
        private CTwoPointsIndicators m_parent = null;

        public CTwoPointsIndicatorsImpl()
        {
            m_actor = new vtk.vtkActor();
            m_actor.GetProperty().SetColor(1, 1, 0); // Yellow
        }

        public virtual void UpatePoints()
        {
        }

        public bool Visible
        {
            get
            {
                if (null == m_actor) return false;
                return (m_actor.GetVisibility() != 0);
            }
            set
            {
                if (null == m_actor) return;
                m_actor.SetVisibility(value ? 1 : 0);
            }
        }

        public vtk.vtkActor Actor
        {
            get { return m_actor; }
        }

        public CTwoPointsIndicators Parent
        {
            protected get { return m_parent; }
            set { m_parent = value; }
        }
    }

    /// <summary>
    /// Line graphic representation for two point indicator
    /// </summary>
    public class CLineTwoPointsIndicatorsImpl : CTwoPointsIndicatorsImpl
    {
        const int LINEWIDTH = 2;
        private vtk.vtkPoints m_points = null;
        public CLineTwoPointsIndicatorsImpl()
        {
            Actor.GetProperty().SetLineWidth(LINEWIDTH);
        }

        public override void UpatePoints()
        {
            // Get Point List
            if (Parent == null) return;
            IList<CTwoPoints> pointsList = Parent.PointsList;

            // Update points
            if (m_points == null)
            {
                m_points = new vtk.vtkPoints();

                // Create Points
                m_points.Reset();
                foreach (CTwoPoints pair in pointsList)
                {
                    m_points.InsertNextPoint(pair.First.Point);
                    m_points.InsertNextPoint(pair.Second.Point);
                }

                vtk.vtkCellArray lines = new vtk.vtkCellArray();
                for (int i = 0; i < pointsList.Count; ++i)
                {
                    // Create Linee
                    vtk.vtkLine line = new vtk.vtkLine();
                    line.GetPointIds().SetId(0, i * 2);
                    line.GetPointIds().SetId(1, i * 2 + 1);

                    lines.InsertNextCell(line);
                }

                vtk.vtkPolyData polyData = new vtk.vtkPolyData();
                polyData.SetPoints(m_points);
                polyData.SetLines(lines);

                vtk.vtkPolyDataMapper dataMapper = new vtk.vtkPolyDataMapper();
                dataMapper.SetInput(polyData);

                Actor.SetMapper(dataMapper);
            }
            else if (m_points.GetNumberOfPoints() != pointsList.Count * 2)
            {
                return;
            }
            else
            {
                m_points.Reset();
                foreach (CTwoPoints pair in pointsList)
                {
                    m_points.InsertNextPoint(pair.First.Point);
                    m_points.InsertNextPoint(pair.Second.Point);
                }
                m_points.Modified();
            }
        }
    }

    /// <summary>
    /// Used for pipe connection indicator
    /// </summary>
    public sealed class CPipeConnectionIndicator : CTwoPointsIndicators
    {
        public CPipeConnectionIndicator(CTwoPointsIndicatorsImpl impl)
            : base(impl)
        {
            this.Impl.Actor.GetProperty().SetLineWidth(ApplicationOptions.Instance().ConnectionPairOption.LineWidth);
            this.Impl.Actor.GetProperty().SetColor(ApplicationOptions.Instance().ConnectionPairOption.LineColor);
        }

        public void SetPoints(IList<CPipeConnectionPointPair> connPointPairList)
        {
            IList<CTwoPoints> pointsList = PointsList;
            pointsList.Clear();
            foreach (CPipeConnectionPointPair pair in connPointPairList)
            {
                pointsList.Add(new CTwoPoints(pair.StartConnectionPoint, pair.EndConnectionPoint));
            }
        }
    }

    /// <summary>
    /// Used for cabling connection
    /// </summary>
    public sealed class CCablingConnectionIndicator : CTwoPointsIndicators
    {
        public CCablingConnectionIndicator(CTwoPointsIndicatorsImpl impl)
            : base(impl)
        {
            this.Impl.Actor.GetProperty().SetLineWidth(ApplicationOptions.Instance().CablingSimulationOption.LineWidth);
            this.Impl.Actor.GetProperty().SetColor(ApplicationOptions.Instance().CablingSimulationOption.LineColor);
        }

        public void SetPoints()
        {
            // Get the pipe info
        }
    }

    public sealed class CPipeBoundaryIndicator : CTwoPointsIndicators
    {
        private CPipeBoundaryModel m_PipeBoundaryModel = null;
        public CPipeBoundaryIndicator(CPipeBoundaryModel pipeBoundaryModel, CTwoPointsIndicatorsImpl impl)
            : base(impl)
        {
            m_PipeBoundaryModel = pipeBoundaryModel;

            this.Impl.Actor.GetProperty().SetLineWidth(ApplicationOptions.Instance().PipeBoundaryOption.LineWidth);
            this.Impl.Actor.GetProperty().SetColor(ApplicationOptions.Instance().PipeBoundaryOption.LineColor);
        }
    }
}