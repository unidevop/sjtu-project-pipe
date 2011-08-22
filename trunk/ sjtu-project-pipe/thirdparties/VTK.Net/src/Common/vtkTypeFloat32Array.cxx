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
#include "vtkTypeFloat32Array.h"

#include "vtkObjectFactory.h"

//----------------------------------------------------------------------------
vtkCxxRevisionMacro(vtkTypeFloat32Array, "$Revision: 1.1 $");
vtkStandardNewMacro(vtkTypeFloat32Array);

//----------------------------------------------------------------------------
vtkTypeFloat32Array::vtkTypeFloat32Array(vtkIdType numComp): Superclass(numComp)
{
}

//----------------------------------------------------------------------------
vtkTypeFloat32Array::~vtkTypeFloat32Array()
{
}

//----------------------------------------------------------------------------
void vtkTypeFloat32Array::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os,indent);
}
