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
#include "vtkTypeFloat64Array.h"

#include "vtkObjectFactory.h"

//----------------------------------------------------------------------------
vtkCxxRevisionMacro(vtkTypeFloat64Array, "$Revision: 1.1 $");
vtkStandardNewMacro(vtkTypeFloat64Array);

//----------------------------------------------------------------------------
vtkTypeFloat64Array::vtkTypeFloat64Array(vtkIdType numComp): Superclass(numComp)
{
}

//----------------------------------------------------------------------------
vtkTypeFloat64Array::~vtkTypeFloat64Array()
{
}

//----------------------------------------------------------------------------
void vtkTypeFloat64Array::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os,indent);
}