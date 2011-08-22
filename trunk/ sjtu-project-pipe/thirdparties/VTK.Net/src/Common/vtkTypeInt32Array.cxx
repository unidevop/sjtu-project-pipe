/*=========================================================================

  Program:   Visualization Toolkit
  Module:    $RCSfile: vtkTypedArray.cxx.in,v $

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkTypeInt32Array.h"

#include "vtkObjectFactory.h"

//----------------------------------------------------------------------------
vtkCxxRevisionMacro(vtkTypeInt32Array, "$Revision: 1.1 $");
vtkStandardNewMacro(vtkTypeInt32Array);

//----------------------------------------------------------------------------
vtkTypeInt32Array::vtkTypeInt32Array(vtkIdType numComp): Superclass(numComp)
{
}

//----------------------------------------------------------------------------
vtkTypeInt32Array::~vtkTypeInt32Array()
{
}

//----------------------------------------------------------------------------
void vtkTypeInt32Array::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os,indent);
}
