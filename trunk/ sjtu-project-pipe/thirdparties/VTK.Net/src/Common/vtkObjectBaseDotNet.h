#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkObjectBase : public System::Object
{

protected:
  IntPtr m_instance;
  bool m_const;

public:
// Did not wrap:  virtual const char *GetClassNameInternal () const;return 


  // const char *GetClassName () const;
/// <summary>
/// <para>Return the class name as a string. This method is defined in all subclasses of vtkObjectBase with the vtkTypeRevisionMacro found in vtkSetGet.h.</para>
/// </summary>
  System::String^ GetClassName();


  // static int IsTypeOf (const char *name);
/// <summary>
/// <para>Return 1 if this class type is the same type of (or a subclass of) the named class. Returns 0 otherwise. This method works in combination with vtkTypeRevisionMacro found in vtkSetGet.h.</para>
/// </summary>
  static int IsTypeOf(System::String^ name);


  // virtual int IsA (const char *name);
/// <summary>
/// <para>Return 1 if this class is the same type of (or a subclass of) the named class. Returns 0 otherwise. This method works in combination with vtkTypeRevisionMacro found in vtkSetGet.h.</para>
/// </summary>
  int IsA(System::String^ name);


// Did not wrap:  virtual void Delete ();


  // virtual void FastDelete ();
/// <summary>
/// <para>Delete a reference to this object.  This version will not invoke garbage collection and can potentially leak the object if it is part of a reference loop.  Use this method only when it is known that the object has another reference and would not be collected if a full garbage collection check were done.</para>
/// </summary>
  void FastDelete();


// Did not wrap:  static vtkObjectBase *New ();return new vtkObjectBase 


// Did not wrap:  void *new size_t tSize 


// Did not wrap:  void delete void p 


// Did not wrap:  void Print (ostream &os);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  virtual void PrintHeader (ostream &os, vtkIndent indent);


// Did not wrap:  virtual void PrintTrailer (ostream &os, vtkIndent indent);


  // virtual void Register (vtkObjectBase *o);
/// <summary>
/// <para>Increase the reference count (mark as used by another object).</para>
/// </summary>
  void Register(vtkObjectBase^ o);


  // virtual void UnRegister (vtkObjectBase *o);
/// <summary>
/// <para>Decrease the reference count (release by another object). This has the same effect as invoking Delete() (i.e., it reduces the reference count by 1).</para>
/// </summary>
  void UnRegister(vtkObjectBase^ o);


  // int GetReferenceCount ();return this ReferenceCount 
/// <summary>
/// <para>Sets the reference count. (This is very dangerous, use with care.)</para>
/// </summary>
  int GetReferenceCount();


  // void SetReferenceCount (int );
/// <summary>
/// <para>Sets the reference count. (This is very dangerous, use with care.)</para>
/// </summary>
  void SetReferenceCount(int arg0);


// Did not wrap:  void PrintRevisions (ostream &os);


// Did not wrap:  vtkObjectBase ();


// Did not wrap:  virtual ~vtkObjectBase ();


// Did not wrap:  virtual void CollectRevisions (ostream &os);


// Did not wrap:  virtual void RegisterInternal (vtkObjectBase *, int check);


// Did not wrap:  virtual void UnRegisterInternal (vtkObjectBase *, int check);


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


/// <summary>
/// Returns a pointer to the instance contained by this wrapper.
/// Will be null if the instance is const.
/// </summary>
virtual System::IntPtr GetNativePointer();
/// <summary>
/// Returns a pointer to the instance contained by this wrapper.
/// </summary>
virtual System::IntPtr GetNativeConstPointer();
vtkObjectBase();
vtkObjectBase(bool donothing);
vtkObjectBase(System::IntPtr ptr, bool bConst);
/// <summary>
/// This method allows a derived class to set the instance
/// contained by this wrapper.
/// </summary>
void SetNativePointer(IntPtr ptr);
~vtkObjectBase();
!vtkObjectBase();
private:
void SetNativePointer(IntPtr ptr, bool bConst, bool bOwn);



};

} // end vtkCommon
