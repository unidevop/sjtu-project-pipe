/*=========================================================================

  Program:   Visualization Toolkit
  Module:    $RCSfile: vtkStructuredPointsCollection.cxx,v $

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkStructuredPointsCollection.h"
#include "vtkObjectFactory.h"

vtkCxxRevisionMacro(vtkStructuredPointsCollection, "$Revision: 1.8 $");
vtkStandardNewMacro(vtkStructuredPointsCollection);

//----------------------------------------------------------------------------
void vtkStructuredPointsCollection::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os,indent);
}
