About the .NET Wrappers for VTK

Drew Dolgert ajd27@cornell.edu 

There are two techniques to wrap C++ code for .NET, PInvoke and managed 
C++. Managed C++ lets you intermingle wrapper code with native C++ that 
would be needed to support either style of wrapping, so I chose managed 
C++. I first wrapped the code using v1.0 of managed C++, but it was 
fragile to compile and mixed native code into the namespace, so it 
wasn't very usable. This wrapper is written in Managed C++ v2.0, so it 
requires Microsoft Visual Studio 2005, known as Microsoft Visual Studio 
8. 

The wrapper uses CMake definitions and macros as close as possible to 
those of Python, Tcl, and Java. The most significant change to the CMake 
entries is that this wrapper needs to know which kits depend on which 
other kits. Without this knowledge, methods such as 
vtkProperty2D::Render(vtkViewport*) in Common will fail to compile 
because vtkViewport is in the Filtering kit. 

vtkWrapDotNet.cxx is written in C++ using STL because I found it more 
helpful to handle the complexity. For instance, in managed C++, a source 
file includes headers for other classes in its own assembly but does not 
include headers for classes in other assemblies because their 
information comes straight from the assembly reference. 

Following Python, the wrappers use the vtk namespace. By setting a 
definition, DOTNET_KIT_IS_NAMESPACE, in both the vtkWrapDotNet project 
and the wrapper projects, types are split into namespaces called 
vtkCommon, vtkFiltering, vtkGraphics, and so on. I did not make this an 
option in CMake because I'm guessing using the vtk namespace will 
suffice. 

A pointer to the native type is stored in vtk.vtkObjectBase. It is saved 
as an IntPtr because only CLI types are available outside an assembly. 
If it were saved as a protected ::vtkObjectBase*, then it would be 
invisible to derived classes in other assemblies. If you forget "#using 
vtk;" in C#, then you get a message that a type is "inaccessible due to 
its protection level." C# sees the private native type without its 
namespace, but you really want the managed type in the vtk namespace. 

There are two ways to create types, either using gcnew vtk.vtkObject() 
or using gcnew vtk.vtkObject(IntPtr native, bool const). 

The void constructor calls ::vtkObject::New() to create a managed type. 
Managed C++ v2.0 maps the delete operator to a Dispose() method in MSIL 
and a bang destructor, vtkObject::!vtkObject() to Finalize() in MSIL. 
Using delete, one can release resources immediately. The finalizer is 
called by the garbage collector. Because it is the most derived class 
that calls ::New() on the native type, it has to tell its base classes 
not to do so. It does this by calling a constructor taking only a single 
bool argument. 

The two-parameter constructor, vtk.vtkObject(IntPtr native, bool const), 
is used when receiving a return value from a native method. In order 
that the object not disappear while the managed wrapper uses it, we 
first Register() the class to increase its reference count. 

.NET requires derived classes to specify explicitly whether a method 
overrides a subclass method or it replaces it with a new vtable entry. 
In C# and managed C++, this is done by placing the keyword "new" or 
"override" after the method declaration, in the same place one would put 
"const." In order to discern for wrapper classes whether a method 
overrides a method in any of its base classes, we would have to process 
every base class. There is no switch to specify default behavior. Since 
this wrapper doesn't search all base classes, managed C++ issues warning 
C4487 during compilation. The macro supplied to convert wrapper projects 
into managed projects also disables this warning. 

When a vtkCommand returns a vtkObject, the framework has to create an 
object of the correct type. VTK/Common/vtkDotNetFactory.cxx does this by 
asking the object its name, with vtkObject->GetClassName(), and then 
asking the .NET type system to create a type with the given name. This 
process is successful but also slow. I timed it as follows. 

I created and destroyed nine managed types from nine kits a thousand 
times. The native types were already allocated, so all of the work was 
creating the managed type. Using gcnew, this took 0.036 seconds. Using 
reflection, it took 0.36 seconds. That's ten times faster, but that 
amounts to 4 microseconds versus 40 microseconds per instantiation. 
Currently, the reflection code is used only when creating arguments to a 
callback from vtkObject::AddObserver().

We could decide to create new wrapper classes with a static 
constructor, New(), as it is done in the C++ library. This would use the 
.NET type system to ensure that every wrapper class is of the most 
derived type. The drawback would be a speed penalty. The benefit would 
be allowing the use of dynamic_cast in managed C++ or the "is" operator 
in C# instead of forcing the use of SafeDownCast. 

Because .NET has no concept of constness, it has to be handled 
explicitly by throwing exceptions when calling non-const methods of 
const objects. Until I teach the lexer to report constness of functions, 
I cannot support this check. Fortunately, there are exactly three 
methods in all of VTK that return const objects, all in 
vtkOrientedGlyphFocalPlaneContourRepresentation. 

What happens when you copy a managed wrapper? In managed code, you copy 
only the name unless the class implements its own deep copy. In the 
words of Stanley Lippman, "every object is an implicit duple." Copying 
wrappers does not impact management of native resources. 

TESTING

Release and debug builds for six C# examples and a managed C++ program. 
stl.cs fails to load the model, but it clearly shows its window and 
background, so that may not be the fault of the wrapper. The widgets in 
tutorial step 6 work fine. 

Testing with VTK_DEBUG_LEAKS showed no problems.

I have not tested Examples\Build\vtkLocal and vtkMy, but I added wrapper 
code to their CMakeLists.txt. I have not tested the Patented or Parallel 
kits. 

The vtkFormsWindowControl works if you add it in the code but doesn't seem
to work well in the design window. I have not figured out how to rerender
the control at design time.
