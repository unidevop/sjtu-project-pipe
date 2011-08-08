/*=========================================================================

  Program:   Visualization Toolkit
  Module:    $RCSfile: vtkCharArray.cxx,v $

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
// Instantiate superclass first to give the template a DLL interface.
#include "vtkDataArrayTemplate.txx"
VTK_DATA_ARRAY_TEMPLATE_INSTANTIATE(char);

#define __vtkCharArray_cxx
#include "vtkCharArray.h"

#include "vtkObjectFactory.h"

//----------------------------------------------------------------------------
vtkCxxRevisionMacro(vtkCharArray, "$Revision: 1.39 $");
vtkStandardNewMacro(vtkCharArray);

//----------------------------------------------------------------------------
vtkCharArray::vtkCharArray(vtkIdType numComp): RealSuperclass(numComp)
{
}

//----------------------------------------------------------------------------
vtkCharArray::~vtkCharArray()
{
}

//----------------------------------------------------------------------------
void vtkCharArray::PrintSelf(ostream& os, vtkIndent indent)
{
  this->RealSuperclass::PrintSelf(os,indent);
}
