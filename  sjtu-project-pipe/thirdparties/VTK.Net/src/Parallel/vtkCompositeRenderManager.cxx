/*=========================================================================

  Program:   Visualization Toolkit
  Module:    $RCSfile: vtkCompositeRenderManager.cxx,v $

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkCompositeRenderManager.h"

#include "vtkCompressCompositer.h"
#include "vtkFloatArray.h"
#include "vtkMultiProcessController.h"
#include "vtkObjectFactory.h"
#include "vtkRenderer.h"
#include "vtkRenderWindow.h"
#include "vtkTimerLog.h"
#include "vtkUnsignedCharArray.h"

vtkCxxRevisionMacro(vtkCompositeRenderManager, "$Revision: 1.7 $");
vtkStandardNewMacro(vtkCompositeRenderManager);

vtkCxxSetObjectMacro(vtkCompositeRenderManager, Compositer, vtkCompositer);

//----------------------------------------------------------------------------
vtkCompositeRenderManager::vtkCompositeRenderManager()
{
  this->Compositer = vtkCompressCompositer::New();
  this->Compositer->Register( this );
  this->Compositer->Delete();

  this->DepthData = vtkFloatArray::New();
  this->TmpPixelData = vtkUnsignedCharArray::New();
  this->TmpDepthData = vtkFloatArray::New();

  this->DepthData->SetNumberOfComponents(1);
  this->TmpPixelData->SetNumberOfComponents(4);
  this->TmpDepthData->SetNumberOfComponents(1);
}

//----------------------------------------------------------------------------
vtkCompositeRenderManager::~vtkCompositeRenderManager()
{
  this->SetCompositer(NULL);
  this->DepthData->Delete();
  this->TmpPixelData->Delete();
  this->TmpDepthData->Delete();
}

//----------------------------------------------------------------------------
void vtkCompositeRenderManager::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);

  os << indent << "ImageProcessingTime: " << this->ImageProcessingTime << endl;
  os << indent << "Compositer: " << endl;
  this->Compositer->PrintSelf(os, indent.GetNextIndent());
}

//----------------------------------------------------------------------------
void vtkCompositeRenderManager::PreRenderProcessing()
{
}

//----------------------------------------------------------------------------
void vtkCompositeRenderManager::PostRenderProcessing()
{
  if (this->Controller->GetNumberOfProcesses() > 1)
    {
    // Read in data.
    this->ReadReducedImage();
    this->Timer->StartTimer();
    this->RenderWindow->GetZbufferData(0, 0, this->ReducedImageSize[0]-1,
                                       this->ReducedImageSize[1]-1,
                                       this->DepthData);

    // Set up temporary buffers.
    this->TmpPixelData->SetNumberOfComponents
      (this->ReducedImage->GetNumberOfComponents());
    this->TmpPixelData->SetNumberOfTuples
      (this->ReducedImage->GetNumberOfTuples());
    this->TmpDepthData->SetNumberOfComponents
      (this->DepthData->GetNumberOfComponents());
    this->TmpDepthData->SetNumberOfTuples(this->DepthData->GetNumberOfTuples());

    // Do composite
    this->Compositer->SetController(this->Controller);
    this->Compositer->CompositeBuffer(this->ReducedImage, this->DepthData,
                                      this->TmpPixelData, this->TmpDepthData);

    this->Timer->StopTimer();
    this->ImageProcessingTime = this->Timer->GetElapsedTime();
    }

  this->WriteFullImage();
}


