/*=========================================================================

  Program:   Visualization Toolkit
  Module:    $RCSfile: vtkLongLongArray.cxx,v $

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
// Instantiate superclass first to give the template a DLL interface.
#include "vtkDataArrayTemplate.txx"
VTK_DATA_ARRAY_TEMPLATE_INSTANTIATE(long long);

#define __vtkLongLongArray_cxx
#include "vtkLongLongArray.h"

#include "vtkObjectFactory.h"

//----------------------------------------------------------------------------
vtkCxxRevisionMacro(vtkLongLongArray, "$Revision: 1.1 $");
vtkStandardNewMacro(vtkLongLongArray);

//----------------------------------------------------------------------------
vtkLongLongArray::vtkLongLongArray(vtkIdType numComp): RealSuperclass(numComp)
{
}

//----------------------------------------------------------------------------
vtkLongLongArray::~vtkLongLongArray()
{
}

//----------------------------------------------------------------------------
void vtkLongLongArray::PrintSelf(ostream& os, vtkIndent indent)
{
  this->RealSuperclass::PrintSelf(os,indent);
}
