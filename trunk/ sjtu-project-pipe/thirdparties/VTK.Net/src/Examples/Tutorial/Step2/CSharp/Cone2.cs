using System;
using System.Collections.Generic;
using System.Text;

using vtk;

namespace Cone2
{
	class Cone2
	{
		static void PrintCameraPosition(vtkObject caller, uint eventId,
											object clientData, IntPtr callData)
		{
			System.Diagnostics.Debug.WriteLine("Callback has been called.");
			if ( caller is vtkRenderer )
			{
				vtkRenderer ren = (vtkRenderer) caller;
                double[] position = ren.GetActiveCamera().GetPosition();
				Console.WriteLine(String.Format("{0}, {1}, {2}",

					position[0], position[1], position[2]));
			}
			else
			{
				System.Diagnostics.Debug.WriteLine("Caller is not a renderer.");
			}
		}


		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		[STAThread]
		static void Main(string[] args)
		{
			// 
			// Next we create an instance of vtkConeSource and set some of its
			// properties. The instance of vtkConeSource "cone" is part of a visualization
			// pipeline (it is a source process object); it produces data (output type is
			// vtkPolyData) which other filters may process.
			//
			vtkConeSource cone = new vtkConeSource();
			cone.SetHeight( 3.0f );
			cone.SetRadius( 1.0f );
			cone.SetResolution( 10 );
  
			// 
			// In this example we terminate the pipeline with a mapper process object.
			// (Intermediate filters such as vtkShrinkPolyData could be inserted in
			// between the source and the mapper.)  We create an instance of
			// vtkPolyDataMapper to map the polygonal data into graphics primitives. We
			// connect the output of the cone souece to the input of this mapper.
			//
			vtkPolyDataMapper coneMapper = new vtkPolyDataMapper();
			coneMapper.SetInput( cone.GetOutput() );

			// 
			// Create an actor to represent the cone. The actor orchestrates rendering of
			// the mapper's graphics primitives. An actor also refers to properties via a
			// vtkProperty instance, and includes an internal transformation matrix. We
			// set this actor's mapper to be coneMapper which we created above.
			//
			vtkActor coneActor = new vtkActor();
			coneActor.SetMapper( coneMapper );

			//
			// Create the Renderer and assign actors to it. A renderer is like a
			// viewport. It is part or all of a window on the screen and it is
			// responsible for drawing the actors it has.  We also set the background
			// color here
			//
			vtkRenderer ren1 = new vtkRenderer();
			ren1.AddActor( coneActor );
			ren1.SetBackground( 0.1f, 0.2f, 0.4f );

			//
			// Finally we create the render window which will show up on the screen
			// We put our renderer into the render window using AddRenderer. We also
			// set the size to be 300 pixels by 300
			//
			vtkRenderWindow renWin = new vtkRenderWindow();
			renWin.AddRenderer( ren1 );
			renWin.SetSize( 300, 300 );

			// Add an observer to the render window.
			ren1.AddObserver((uint) EventIds.StartEvent,
				new vtkDotNetCallback(PrintCameraPosition));

			//
			// now we loop over 360 degreeees and render the cone each time
			//
			for ( int i=0; i<360; i++ )
			{
				System.Threading.Thread.Sleep(30);

				renWin.Render();
				ren1.GetActiveCamera().Azimuth( 1 );
			}

            vtkWin32OpenGLRenderWindow win32win =
                vtkWin32OpenGLRenderWindow.SafeDownCast(renWin);
            if (null != win32win) win32win.Clean();
        }
	}
}
