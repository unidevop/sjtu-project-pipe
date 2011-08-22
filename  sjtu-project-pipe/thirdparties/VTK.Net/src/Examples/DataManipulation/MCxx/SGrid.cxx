/*=========================================================================

Program:   Visualization Toolkit
Module:    $RCSfile: SGrid.cxx,v $

Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
All rights reserved.
See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
// This example shows how to manually create a structured grid.
// The basic idea is to instantiate vtkStructuredGrid, set its dimensions,
// and then assign points defining the grid coordinate. The number of
// points must equal the number of points implicit in the dimensions
// (i.e., dimX*dimY*dimZ). Also, data attributes (either point or cell)
// can be added to the dataset.
//

// No need to include header files. Compiler determines types from
// the managed assembly.

#include <math.h>

using namespace System;

using namespace vtk;

void CheckAbort(vtkObject^ caller, unsigned long eventId,
                Object^ clientData, IntPtr callData)
  {
  vtkRenderWindow^ renWin = dynamic_cast<vtkRenderWindow^>(caller);
  if ( nullptr != renWin )
    {
    renWin->SetAbortRender(1);
    }
  }


int main()
  {
  int i, j, k, kOffset, jOffset, offset;
  array<float>^ x = gcnew array<float>(3);
  array<float>^ v = gcnew array<float>(3);
  float rMin=0.5, rMax=1.0, deltaRad, deltaZ;
  float radius, theta;
  array<int>^ dims = gcnew array<int> {13,11,11};

  // Create the structured grid.
  vtkStructuredGrid ^sgrid = gcnew vtkStructuredGrid();
  sgrid->SetDimensions(dims);

  // We also create the points and vectors. The points
  // form a hemi-cylinder of data.
  vtkFloatArray ^vectors = gcnew vtkFloatArray();
  vectors->SetNumberOfComponents(3);
  vectors->SetNumberOfTuples(dims[0]*dims[1]*dims[2]);
  vtkPoints ^points = gcnew vtkPoints();
  points->Allocate(dims[0]*dims[1]*dims[2], 1000);

  deltaZ = 2.0f / (dims[2]-1);
  deltaRad = (rMax-rMin) / (dims[1]-1);
  v[2]=0.0;
  for ( k=0; k<dims[2]; k++)
    {
    x[2] = -1.0f + k*deltaZ;
    kOffset = k * dims[0] * dims[1];
    for (j=0; j<dims[1]; j++) 
      {
      radius = rMin + j*deltaRad;
      jOffset = j * dims[0];
      for (i=0; i<dims[0]; i++) 
        {
        theta = i * 15.0f * vtkMath::DegreesToRadians();
        x[0] = radius * cos(theta);
        x[1] = radius * sin(theta);
        v[0] = -x[1];
        v[1] = x[0];
        offset = i + jOffset + kOffset;
        points->InsertPoint(offset,x);
        vectors->InsertTuple(offset,v);
        }
      }
    }
  sgrid->SetPoints(points);
  // delete points;
  sgrid->GetPointData()->SetVectors(vectors);
  // delete vectors;

  // We create a simple pipeline to display the data.
  vtkHedgeHog ^hedgehog = gcnew vtkHedgeHog();
  hedgehog->SetInput(sgrid);
  // delete sgrid;
  hedgehog->SetScaleFactor(0.1);

  vtkPolyDataMapper ^sgridMapper = gcnew vtkPolyDataMapper();
  sgridMapper->SetInputConnection(hedgehog->GetOutputPort());
  // delete hedgehog;
  vtkActor ^sgridActor = gcnew vtkActor();
  sgridActor->SetMapper(sgridMapper);
  // delete sgridMapper;
  sgridActor->GetProperty()->SetColor(0,0,0);

  // Create the usual rendering stuff
  vtkRenderer ^renderer = gcnew vtkRenderer();
  vtkRenderWindow ^renWin = gcnew vtkRenderWindow();
  renWin->AddRenderer(renderer);

  vtkRenderWindowInteractor ^iren = gcnew vtkRenderWindowInteractor();
  iren->SetRenderWindow(renWin);

  renderer->AddActor(sgridActor);
  renderer->SetBackground(1,1,1);
  renderer->ResetCamera();
  renderer->GetActiveCamera()->Elevation(60.0);
  renderer->GetActiveCamera()->Azimuth(30.0);
  renderer->GetActiveCamera()->Zoom(1.25);
  renWin->SetSize(300,300);

  renWin->AddObserver(safe_cast<int>(EventIds::AbortCheckEvent),
                      gcnew vtkDotNetCallback(CheckAbort));

  // interact with data
  renWin->Render();
  iren->Start();


  vtkWin32OpenGLRenderWindow^ win32win =
    vtkWin32OpenGLRenderWindow::SafeDownCast(renWin);
  if ( nullptr != win32win ) win32win->Clean();
  
  return 0;
  }
