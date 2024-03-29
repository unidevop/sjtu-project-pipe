/*=========================================================================

  Program:   Visualization Toolkit
  Module:    $RCSfile: vtkWriter.cxx,v $

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkWriter.h"

#include "vtkCommand.h"
#include "vtkDataObject.h"
#include "vtkDemandDrivenPipeline.h"
#include "vtkErrorCode.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"

vtkCxxRevisionMacro(vtkWriter, "$Revision: 1.43 $");

// Construct with no start and end write methods or arguments.
vtkWriter::vtkWriter()
{
  this->SetNumberOfInputPorts(1);
  this->SetNumberOfOutputPorts(0);
}

vtkWriter::~vtkWriter()
{
}

void vtkWriter::SetInput(vtkDataObject *input)
{
  this->SetInput(0, input);
}

void vtkWriter::SetInput(int index, vtkDataObject *input)
{
  if (input)
    {
    this->SetInputConnection(index, input->GetProducerPort());
    }
  else
    {
    // Setting a NULL input remove the connection.
    this->SetInputConnection(index, 0);
    }
}

vtkDataObject *vtkWriter::GetInput()
{
  return this->GetInput(0);
}

vtkDataObject *vtkWriter::GetInput(int port)
{
  if (this->GetNumberOfInputConnections(port) < 1)
    {
    return NULL;
    }
  return this->GetExecutive()->GetInputData(port, 0);
}


// Write data to output. Method executes subclasses WriteData() method, as 
// well as StartMethod() and EndMethod() methods.
int vtkWriter::Write()
{
  // Make sure we have input.
  if (this->GetNumberOfInputConnections(0) < 1)
    {
    vtkErrorMacro("No input provided!");
    return 0;
    }

  // always write even if the data hasn't changed
  this->Modified();
  this->UpdateWholeExtent();
  return 1;
}

int vtkWriter::ProcessRequest(vtkInformation *request,
                              vtkInformationVector **inputVector,
                              vtkInformationVector *outputVector)
{
  // generate the data
  if(request->Has(vtkDemandDrivenPipeline::REQUEST_DATA()))
    {
    return this->RequestData(request, inputVector, outputVector);
    }

  return this->Superclass::ProcessRequest(request, inputVector, outputVector);
}

int vtkWriter::RequestData(
  vtkInformation *,
  vtkInformationVector **,
  vtkInformationVector *)
{
  this->SetErrorCode(vtkErrorCode::NoError);
  
  vtkDataObject *input = this->GetInput();
  int idx;

  // make sure input is available
  if ( !input )
    {
    vtkErrorMacro(<< "No input!");
    return 0;
    }

  for (idx = 0; idx < this->GetNumberOfInputPorts(); ++idx)
    {
    if (this->GetInput(idx) != NULL)
      {
      this->GetInput(idx)->Update();
      }
    }

  unsigned long lastUpdateTime =  this->GetInput(0)->GetUpdateTime();
  for (idx = 1; idx < this->GetNumberOfInputPorts(); ++idx)
    {
    unsigned long updateTime = this->GetInput(idx)->GetUpdateTime();
    if ( updateTime > lastUpdateTime )
      {
      lastUpdateTime = updateTime;
      }
    }

  if (lastUpdateTime < this->WriteTime && this->GetMTime() < this->WriteTime)
    {
    // we are up to date
    return 1;
    }

  this->InvokeEvent(vtkCommand::StartEvent,NULL);
  this->WriteData();
  this->InvokeEvent(vtkCommand::EndEvent,NULL);

  // Release any inputs if marked for release
  for (idx = 0; idx < this->GetNumberOfInputPorts(); ++idx)
    {
    if (this->GetInput(idx) && this->GetInput(idx)->ShouldIReleaseData())
      {
      this->GetInput(idx)->ReleaseData();
      }
    }

  this->WriteTime.Modified();

  return 1;
}

void vtkWriter::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os,indent);

}

void vtkWriter::EncodeArrayName(char* resname, const char* name)
{
  if ( !name || !resname )
    {   
    return;
    }
  int cc = 0;
  ostrstream str;

  char buffer[10];

  while( name[cc] )
    {
    // Encode spaces and %'s (and most non-printable ascii characters)
    // The reader does not support spaces in array names.
    if ( name[cc] < 33  || name[cc] > 126 ||
         name[cc] == '\"' || name[cc] == '%' )
      {
      sprintf(buffer, "%2X", name[cc]);
      str << "%%" << buffer; // Two % because it goes through printf format
      }
    else
      {
      str << name[cc];
      }
    cc++;
    }
  str << ends;
  strcpy(resname, str.str());
  str.rdbuf()->freeze(0);
}
