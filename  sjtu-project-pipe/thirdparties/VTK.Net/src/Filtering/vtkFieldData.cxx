/*=========================================================================

  Program:   Visualization Toolkit
  Module:    $RCSfile: vtkFieldData.cxx,v $

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkFieldData.h"

#include "vtkObjectFactory.h"
#include "vtkIdList.h"

vtkCxxRevisionMacro(vtkFieldData, "$Revision: 1.2 $");
vtkStandardNewMacro(vtkFieldData);

//----------------------------------------------------------------------------
vtkFieldData::BasicIterator::BasicIterator(const int* list, 
                                           unsigned int listSize)
{
  if (list)
    {
    if (listSize>0)
      {
      this->List = new int[listSize];
      memcpy(this->List, list, listSize*sizeof(int));
      }
    else
      {
      this->List = 0;
      }
    this->ListSize = listSize;
    }
  else
    {
    this->ListSize = 0;
    }
  this->Position = 0;
}

//----------------------------------------------------------------------------
vtkFieldData::Iterator::Iterator(vtkFieldData* dsa, const int* list, 
                                 unsigned int listSize)
  : vtkFieldData::BasicIterator(list, listSize)
{
  this->Fields = dsa;
  dsa->Register(0);
  if (!list)
    {
    this->ListSize = dsa->GetNumberOfArrays();
    this->List = new int[this->ListSize];
    for(int i=0; i<this->ListSize; i++) { this->List[i] = i; }
    }
  this->Detached = 0;
}

//----------------------------------------------------------------------------
vtkFieldData::BasicIterator::BasicIterator()
{
  this->List  = 0;
  this->ListSize = 0;
}

//----------------------------------------------------------------------------
vtkFieldData::BasicIterator::BasicIterator(const vtkFieldData::BasicIterator& 
                                           source)
{
  this->ListSize = source.ListSize;

  if (this->ListSize > 0)
    {
    this->List = new int[this->ListSize];
    memcpy(this->List, source.List, this->ListSize*sizeof(int));
    }
  else
    {
    this->List = 0;
    }
}

//----------------------------------------------------------------------------
vtkFieldData::Iterator::Iterator(const vtkFieldData::Iterator& source)
  : vtkFieldData::BasicIterator(source)
{
  this->Detached = source.Detached;
  this->Fields = source.Fields;
  if (this->Fields && !this->Detached)
    {
    this->Fields->Register(0);
    }
}

//----------------------------------------------------------------------------
vtkFieldData::BasicIterator& vtkFieldData::BasicIterator::operator=(
  const vtkFieldData::BasicIterator& source)
{
  if (this == &source)
    {
    return *this;
    }
  delete[] this->List;
  this->ListSize = source.ListSize;
  if (this->ListSize > 0)
    {
    this->List = new int[this->ListSize];
    memcpy(this->List, source.List, this->ListSize*sizeof(int));
    }
  else
    {
    this->List = 0;
    }
  return *this;
}

//----------------------------------------------------------------------------
vtkFieldData::Iterator& vtkFieldData::Iterator::operator=(
  const vtkFieldData::Iterator& source)
{
  if (this == &source)
    {
    return *this;
    }
  this->BasicIterator::operator=(source);
  if (this->Fields && !this->Detached)
    {
    this->Fields->UnRegister(0);
    }
  this->Fields = source.Fields;
  this->Detached = source.Detached;
  if (this->Fields && !this->Detached)
    {
    this->Fields->Register(0);
    }
  return *this;
}

//----------------------------------------------------------------------------
vtkFieldData::BasicIterator::~BasicIterator()
{
  delete[] this->List;
}

//----------------------------------------------------------------------------
vtkFieldData::Iterator::~Iterator()
{
  if (this->Fields && !this->Detached)
    {
    this->Fields->UnRegister(0);
    }
}

//----------------------------------------------------------------------------
void vtkFieldData::Iterator::DetachFieldData()
{
  if (this->Fields && !this->Detached)
    {
    this->Fields->UnRegister(0);
    this->Detached = 1;
    }
}

//----------------------------------------------------------------------------
// Construct object with no data initially.
vtkFieldData::vtkFieldData()
{
  this->NumberOfArrays = 0;
  this->Data = NULL;
  
  this->TupleSize = 0;
  this->Tuple = NULL;

  this->NumberOfActiveArrays = 0;

  this->CopyFieldFlags = 0;
  this->NumberOfFieldFlags = 0;

  this->DoCopyAllOn = 1;
  this->DoCopyAllOff = 0;

  this->CopyAllOn();
}

//----------------------------------------------------------------------------
vtkFieldData::~vtkFieldData()
{
  this->Initialize();
  delete[] this->Tuple;
  this->ClearFieldFlags();
}

//----------------------------------------------------------------------------
// Release all data but do not delete object.
void vtkFieldData::InitializeFields()
{
  int i;

  if ( this->Data )
    {
    for ( i=0; i<this->GetNumberOfArrays(); i++ )
      {
      this->Data[i]->UnRegister(this);
      }
    
    delete [] this->Data;
    this->Data = NULL;
    }

  this->NumberOfArrays = 0;
  this->NumberOfActiveArrays = 0;
  this->Modified();

}

//----------------------------------------------------------------------------
// Release all data but do not delete object.
// Also initialize copy flags.
void vtkFieldData::Initialize()
{
  this->InitializeFields();
  this->CopyAllOn();
  this->ClearFieldFlags();
}

//----------------------------------------------------------------------------
// Allocate data for each array.
int vtkFieldData::Allocate(const vtkIdType sz, const vtkIdType ext)
{
  int i;
  int status = 0;
  
  for ( i=0; i < this->GetNumberOfArrays(); i++ )
    {
    if ( (status = this->Data[i]->Allocate(sz,ext)) == 0 )
      {
      break;
      }
    }

  return status;
}

//----------------------------------------------------------------------------
void vtkFieldData::CopyStructure(vtkFieldData* r)
{
  // Free old fields.
  this->InitializeFields();
  
  // Allocate new fields.
  this->AllocateArrays(r->GetNumberOfArrays());
  this->NumberOfActiveArrays = r->GetNumberOfArrays();
  
  // Copy the data arrays without data.
  int i;
  vtkDataArray *data;
  for(i=0; i < r->GetNumberOfArrays(); ++i)
    {
    data = r->Data[i]->NewInstance();
    data->SetNumberOfComponents(r->Data[i]->GetNumberOfComponents());
    data->SetName(r->Data[i]->GetName());
    this->SetArray(i, data);
    data->Delete();
    }
}

//----------------------------------------------------------------------------
// Set the number of arrays used to define the field.
void vtkFieldData::AllocateArrays(int num)
{
  int i;
  
  if ( num < 0 )
    {
    num = 0;
    }

  if ( num == this->NumberOfArrays )
    {
    return;
    }
  else
    {
    this->Modified();
    }

  if ( num == 0 ) 
    {
    this->Initialize();
    }
  else if ( num < this->NumberOfArrays )
    {
    for ( i=num; i < this->NumberOfArrays; i++)
      {
      this->Data[i]->UnRegister(this);
      }
    this->NumberOfArrays = num;
    }
  else //num > this->NumberOfArrays
    {
    vtkDataArray **data=new vtkDataArray * [num];
    // copy the original data
    for ( i=0; i < this->NumberOfArrays; i++ )
      {
      data[i] = this->Data[i];
      }

    //initialize the new arrays
    for ( i=this->NumberOfArrays; i < num; i++ )
      {
      data[i] = 0;
      }

    // get rid of the old data
    delete [] this->Data;
    
    // update object
    this->Data = data;
    this->NumberOfArrays = num;
    }
}

//----------------------------------------------------------------------------
// Set an array to define the field.
void vtkFieldData::SetArray(int i, vtkDataArray *data)
{
  if (!data || (i > this->NumberOfActiveArrays))
    {
    vtkWarningMacro("Can not set array " << i << " to " << data << endl);
    return;
    }

  int numComp;

  if ( i < 0 )
    {
    vtkWarningMacro("Array index should be >= 0");
    return;
    }
  else if (i >= this->NumberOfArrays)
    {
    this->AllocateArrays(i+1);
    this->NumberOfActiveArrays = i+1;
    }

  if ( this->Data[i] != data )
    {
    this->Modified();
    if ( this->Data[i] != NULL )
      {
      this->Data[i]->UnRegister(this);
      }
    this->Data[i] = data;
    if ( this->Data[i] != NULL )
      {
      this->Data[i]->Register(this);
      }
    }
  
  // adjust scratch tuple array
  numComp = this->GetNumberOfComponents();
  if ( numComp != this->TupleSize )
    {
    this->TupleSize = numComp;
    if ( this->Tuple )
      {
      delete [] this->Tuple;
      }
    this->Tuple = new double[this->TupleSize];
    }
}

//----------------------------------------------------------------------------
// Return the ith array in the field. A NULL is returned if the index i is out
// if range.
vtkDataArray *vtkFieldData::GetArray(int i)
{
  if ( i < 0 || i >= this->GetNumberOfArrays() )
    {
    return 0;
    }
  return this->Data[i];
}

//----------------------------------------------------------------------------
// Copy a field by reference counting the data arrays.
void vtkFieldData::DeepCopy(vtkFieldData *f)
{
  vtkDataArray *data, *newData;

  this->AllocateArrays(f->GetNumberOfArrays());
  for ( int i=0; i < f->GetNumberOfArrays(); i++ )
    {
    data = f->GetArray(i);
    newData = data->NewInstance(); //instantiate same type of object
    newData->DeepCopy(data);
    newData->SetName(data->GetName());
    this->AddArray(newData);
    newData->Delete();
    }
}

//----------------------------------------------------------------------------
// Copy a field by reference counting the data arrays.
void vtkFieldData::ShallowCopy(vtkFieldData *f)
{
  this->AllocateArrays(f->GetNumberOfArrays());
  this->NumberOfActiveArrays = 0;

  for ( int i=0; i < f->GetNumberOfArrays(); i++ )
    {
    this->NumberOfActiveArrays++;
    this->SetArray(i, f->GetArray(i));
    }
  this->CopyFlags(f);
}


//----------------------------------------------------------------------------
// Squeezes each data array in the field (Squeeze() reclaims unused memory.)
void vtkFieldData::Squeeze()
{
  for ( int i=0; i < this->GetNumberOfArrays(); i++ )
    {
    this->Data[i]->Squeeze();
    }
}

//----------------------------------------------------------------------------
// Resets each data array in the field (Reset() does not release memory but
// it makes the arrays look like they are empty.)
void vtkFieldData::Reset()
{
  int i;

  for ( i=0; i < this->GetNumberOfArrays(); i++ )
    {
    this->Data[i]->Reset();
    }
}

//----------------------------------------------------------------------------
// Get a field from a list of ids. Supplied field f should have same
// types and number of data arrays as this one (i.e., like
// CopyStructure() creates).
void vtkFieldData::GetField(vtkIdList *ptIds, vtkFieldData *f)
{
  int i, numIds=ptIds->GetNumberOfIds();

  for (i=0; i < numIds; i++)
    {
    f->InsertTuple(i, this->GetTuple(ptIds->GetId(i)));
    }
}

//----------------------------------------------------------------------------
// Return the array containing the ith component of the field. The return value
// is an integer number n 0<=n<this->NumberOfArrays. Also, an integer value is
// returned indicating the component in the array is returned. Method returns
// -1 if specified component is not in field.
int vtkFieldData::GetArrayContainingComponent(int i, int& arrayComp)
{
  int numComp, count=0;

  for ( int j=0; j < this->GetNumberOfArrays(); j++ )
    {
    if ( this->Data[j] != NULL )
      {
      numComp = this->Data[j]->GetNumberOfComponents();
      if ( j < (numComp + count) )
        {
        arrayComp = i - count;
        return j;
        }
      count += numComp;
      }
    }
  return -1;
}

//----------------------------------------------------------------------------
vtkDataArray *vtkFieldData::GetArray(const char *arrayName, int &index)
{
  int i;
  const char *name;
  index = -1;
  if (!arrayName)
    {
    return NULL;
    }
  for (i=0; i < this->GetNumberOfArrays(); i++)
    {
    name = this->GetArrayName(i);
    if ( name && !strcmp(name,arrayName) )
      {
      index = i;
      return this->GetArray(i);
      }
    }
  return NULL;
}

//----------------------------------------------------------------------------
int vtkFieldData::AddArray(vtkDataArray *array)
{
  if (!array)
    {
    return -1;
    }

  int index;
  this->GetArray(array->GetName(), index);

  if (index == -1)
    {
    index = this->NumberOfActiveArrays;
    this->NumberOfActiveArrays++;
    }
  this->SetArray(index, array);
  return index;
}

//----------------------------------------------------------------------------
void vtkFieldData::RemoveArray(int index)
{
  if ( (index<0) || (index>=this->NumberOfActiveArrays))
    {
    return;
    }
  this->Data[index]->UnRegister(this);
  this->Data[index] = 0;
  this->NumberOfActiveArrays--;
  for(int i=index; i<this->NumberOfActiveArrays; i++)
    {
    this->Data[i] = this->Data[i+1];
    }
  this->Data[this->NumberOfActiveArrays] = 0;
}

//----------------------------------------------------------------------------
unsigned long vtkFieldData::GetActualMemorySize()
{
  unsigned long size=0;

  for ( int i=0; i < this->GetNumberOfArrays(); i++ )
    {
    if ( this->Data[i] != NULL )
      {
      size += this->Data[i]->GetActualMemorySize();
      }
    }

  return size;
}

//----------------------------------------------------------------------------
unsigned long int vtkFieldData::GetMTime()
{
  unsigned long int mTime = this->MTime;
  unsigned long int otherMTime;
  vtkDataArray* da;

  for(int i=0; i < this->NumberOfActiveArrays; i++)
    {
    if ((da=this->Data[i]))
      {
      otherMTime = da->GetMTime();
      if ( otherMTime > mTime )
        {
        mTime = otherMTime;
        }
      }
    }

  return mTime;
}

//----------------------------------------------------------------------------
void vtkFieldData::CopyFieldOnOff(const char* field, int onOff)
{
  if (!field) { return; }
  
  int index;
  // If the array is in the list, simply set IsCopied to onOff
  if ((index=this->FindFlag(field)) != -1)
    {
    if (this->CopyFieldFlags[index].IsCopied != onOff)
      {
      this->CopyFieldFlags[index].IsCopied = onOff;
      this->Modified();
      }
    }
  else
    {
    // We need to reallocate the list of fields
    vtkFieldData::CopyFieldFlag* newFlags =
      new vtkFieldData::CopyFieldFlag[this->NumberOfFieldFlags+1];
    // Copy old flags (pointer copy for name)
    for(int i=0; i<this->NumberOfFieldFlags; i++)
      {
      newFlags[i].ArrayName = this->CopyFieldFlags[i].ArrayName;
      newFlags[i].IsCopied = this->CopyFieldFlags[i].IsCopied;
      }
    // Copy new flag (strcpy)
    char* newName = new char[strlen(field)+1];
    strcpy(newName, field);
    newFlags[this->NumberOfFieldFlags].ArrayName = newName;
    newFlags[this->NumberOfFieldFlags].IsCopied = onOff;
    this->NumberOfFieldFlags++;
    delete[] this->CopyFieldFlags;
    this->CopyFieldFlags = newFlags;
    this->Modified();
    }
}

//----------------------------------------------------------------------------
// Turn on copying of all data.
void vtkFieldData::CopyAllOn()
{
  if ( !DoCopyAllOn || DoCopyAllOff )
    {
    this->DoCopyAllOn = 1;
    this->DoCopyAllOff = 0;
    this->Modified();
    }
}

//----------------------------------------------------------------------------
// Turn off copying of all data.
void vtkFieldData::CopyAllOff()
{
  if ( DoCopyAllOn || !DoCopyAllOff )
    {
    this->DoCopyAllOn = 0;
    this->DoCopyAllOff = 1;
    this->Modified();
    }
}

//----------------------------------------------------------------------------
// Deallocate and clear the list of fields.
void vtkFieldData::ClearFieldFlags()
{
  if (this->NumberOfFieldFlags > 0)
    {
    for(int i=0; i<this->NumberOfFieldFlags; i++)
      {
      delete[] this->CopyFieldFlags[i].ArrayName;
      }
    }
  delete[] this->CopyFieldFlags;
  this->CopyFieldFlags=0;
  this->NumberOfFieldFlags=0;
}

//----------------------------------------------------------------------------
// Find if field is in CopyFieldFlags.
// If it is, it returns the index otherwise it returns -1
int vtkFieldData::FindFlag(const char* field)
{
  if ( !field ) return -1;
  for(int i=0; i<this->NumberOfFieldFlags; i++)
    {
    if (this->CopyFieldFlags[i].ArrayName &&
        !strcmp(field, this->CopyFieldFlags[i].ArrayName))
      {
      return i;
      }
    }
  return -1;
}

//----------------------------------------------------------------------------
// If there is no flag for this array, return -1.
// If there is one: return 0 if off, 1 if on
int vtkFieldData::GetFlag(const char* field)
{
  int index = this->FindFlag(field);
  if ( index == -1 )
    {
    return -1;
    }
  else 
    {
    return  this->CopyFieldFlags[index].IsCopied;
    }
}

//----------------------------------------------------------------------------
// Copy the fields list (with strcpy)
void vtkFieldData::CopyFlags(const vtkFieldData* source)
{
  this->ClearFieldFlags();
  this->NumberOfFieldFlags = source->NumberOfFieldFlags;
  if ( this->NumberOfFieldFlags > 0 )
    {
    this->CopyFieldFlags = new 
      vtkFieldData::CopyFieldFlag[this->NumberOfFieldFlags];
    for(int i=0; i<this->NumberOfFieldFlags; i++)
      {
      this->CopyFieldFlags[i].ArrayName = 
        new char[strlen(source->CopyFieldFlags[i].ArrayName)+1];
      strcpy(this->CopyFieldFlags[i].ArrayName, 
             source->CopyFieldFlags[i].ArrayName);
      }
    }
  else
    {
    this->CopyFieldFlags = 0;
    }
}

//----------------------------------------------------------------------------
void vtkFieldData::PassData(vtkFieldData* fd)
{
  for(int i=0; i<fd->GetNumberOfArrays(); i++)
    {
    const char* arrayName = fd->GetArrayName(i);
    // If there is no blocker for the given array
    // and both CopyAllOff and CopyOn for that array are not true
    if ( (this->GetFlag(arrayName) != 0) &&
         !(this->DoCopyAllOff && (this->GetFlag(arrayName) != 1)) &&
         fd->GetArray(i))
      {
      this->AddArray(fd->GetArray(i));
      }
    }
}

//----------------------------------------------------------------------------
void vtkFieldData::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os,indent);

  os << indent << "Number Of Arrays: " << this->GetNumberOfArrays() << "\n";
  for (int i=0; i<this->GetNumberOfArrays(); i++)
    {
    if (this->GetArrayName(i))
      {
      os << indent << "Array " << i << " name = " 
         << this->GetArrayName(i) << "\n";
      }
    else
      {
      os << indent << "Array " << i << " name = NULL\n";
      }
    }
  os << indent << "Number Of Components: " << this->GetNumberOfComponents() 
     << "\n";
  os << indent << "Number Of Tuples: " << this->GetNumberOfTuples() << "\n";
}

//----------------------------------------------------------------------------
// Get the number of components in the field. This is determined by adding
// up the components in each non-NULL array.
int vtkFieldData::GetNumberOfComponents()
{
  int i, numComp;

  for ( i=numComp=0; i < this->GetNumberOfArrays(); i++ )
    {
    if (this->Data[i])
      {
      numComp += this->Data[i]->GetNumberOfComponents();
      }
    }

  return numComp;
}

//----------------------------------------------------------------------------
// Get the number of tuples in the field.
vtkIdType vtkFieldData::GetNumberOfTuples()
{
  vtkDataArray* da;
  if ((da=this->GetArray(0)))
    {
    return da->GetNumberOfTuples(); 
    }
  else
    {
    return 0;
    }
}

//----------------------------------------------------------------------------
// Set the number of tuples for each data array in the field.
void vtkFieldData::SetNumberOfTuples(const vtkIdType number)
{
  for ( int i=0; i < this->GetNumberOfArrays(); i++ )
    {
    this->Data[i]->SetNumberOfTuples(number);
    }
}

//----------------------------------------------------------------------------
// Return a tuple consisting of a concatentation of all data from all
// the different arrays. Note that everything is converted to and from
// double values.
double *vtkFieldData::GetTuple(const vtkIdType i)
{
  int count=0;

  for ( int j=0; j < this->GetNumberOfArrays(); j++ )
    {
    this->Data[j]->GetTuple(i, this->Tuple + count);
    count += this->Data[j]->GetNumberOfComponents();
    }

  return this->Tuple;
}

//----------------------------------------------------------------------------
// Copy the ith tuple value into a user provided tuple array. Make
// sure that you've allocated enough space for the copy.
void vtkFieldData::GetTuple(const vtkIdType i, double * tuple)
{
  this->GetTuple(i); //side effect fills in this->Tuple
  for (int j=0; j<this->TupleSize; j++)
    {
    tuple[j] = this->Tuple[j];
    }
}

//----------------------------------------------------------------------------
// Set the tuple value at the ith location. Set operations
// mean that no range chaecking is performed, so they're faster.
void vtkFieldData::SetTuple(const vtkIdType i, const double * tuple)
{
  int count=0;

  for ( int j=0; j < this->GetNumberOfArrays(); j++ )
    {
    this->Data[j]->SetTuple(i, tuple + count);
    count += this->Data[j]->GetNumberOfComponents();
    }
}

//----------------------------------------------------------------------------
// Insert the tuple value at the ith location. Range checking is
// performed and memory allocates as necessary.
void vtkFieldData::InsertTuple(const vtkIdType i, const double * tuple)
{
  int count=0;

  for ( int j=0; j < this->GetNumberOfArrays(); j++ )
    {
    this->Data[j]->InsertTuple(i, tuple + count);
    count += this->Data[j]->GetNumberOfComponents();
    }
}

//----------------------------------------------------------------------------
// Insert the tuple value at the end of the tuple matrix. Range
// checking is performed and memory is allocated as necessary.
vtkIdType vtkFieldData::InsertNextTuple(const double * tuple)
{
  vtkIdType id=this->GetNumberOfTuples();

  this->InsertTuple(id, tuple);
  return id;
}

//----------------------------------------------------------------------------
// Get the component value at the ith tuple (or row) and jth component (or column).
double vtkFieldData::GetComponent(const vtkIdType i, const int j)
{
  this->GetTuple(i);
  return this->Tuple[j];
}

//----------------------------------------------------------------------------
// Set the component value at the ith tuple (or row) and jth component (or column).
// Range checking is not performed, so set the object up properly before invoking.
void vtkFieldData::SetComponent(const vtkIdType i, const int j, const double c)
{
  this->GetTuple(i);
  this->Tuple[j] = c;
  this->SetTuple(i,this->Tuple);
}

//----------------------------------------------------------------------------
// Insert the component value at the ith tuple (or row) and jth component (or column).
// Range checking is performed and memory allocated as necessary o hold data.
void vtkFieldData::InsertComponent(const vtkIdType i, const int j,
                                   const double c)
{
  this->GetTuple(i);
  this->Tuple[j] = c;
  this->InsertTuple(i,this->Tuple);
}
