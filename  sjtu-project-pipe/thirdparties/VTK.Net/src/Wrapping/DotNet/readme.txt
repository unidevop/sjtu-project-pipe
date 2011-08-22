How to compile and use .NET wrapper for VTK 

Using the .NET wrapper, you can include VTK in managed projects using 
Microsoft Visual Studio 2005. This includes C#, Visual Basic, J#, and 
Managed C++. In order to compile VTK with the wrappers, you need 
Microsoft Visual Studio 2005. 

HOW TO DOWNLOAD AND COMPILE 

Source files are at http://www.tc.cornell.edu/~ajd27/VTK/DotNet.html. If 
you wish to use the latest version of VTK from the source tree, download 
VTK-5-0 from the repository and apply the patch file. You can also 
download complete source from the web page above. 

In order to compile the .NET wrappers, specify CMake configuration 
options to build shared libraries and to build VTK_WRAP_DOTNET. When you 
open the solution in Visual Studio, you will need to modify the wrapper 
projects, vtkCommonDotNet, vtkFilteringDotNet and friends, in order for 
Visual Studio to recognize them as managed C++. 

The simplest way to mark the projects as managed is to load macros 
provided in VTK/Wrapping/DotNet/VTK.vb. Go to tools->Macros->Macros 
IDE... Select MyMacros. Select Project->Add Existing Item... Choose file 
VTK/Wrapping/DotNet/VTK.vb. Also add a project reference to 
Microsoft.VisualStudio.VCProjectEngine to the macro project. The macro, 
ConvertVTKToManaged, converts the whole VTK.sln so that the managed 
projects used managed C++. (AddVTKReferencesToProject allows you to add 
vtkCommonDotNet.dll and all the others to a project using C #, VB, J#, 
or managed C++.) 

Now run ConvertVTKToManaged by double-clicking it. This will take a few 
minutes while it modifies the wrapper projects by turning on /CLR and 
adding references. 

When Visual Studio informs you that the projects have been modified 
outside the environment, click Ignore. You must do this once for each 
wrapper. CMake has overwritten the project files you just asked your 
macro to modify, and you don't want to accept those changes. 

If you have a dual processor or multi-threaded machine, Visual Studio 
will attempt to build with more than one thread and fail to handle 
dependencies correctly. Disable this feature with the menu item, 
Tools->Options->Projects and Solutions->Build and Run. Set to 1 the 
maximum number of parallel project builds. 

Finally, check whether you are building the release or debug build, and 
build the project. The only output files you need are the dlls, 
vtkCommonDotNet.dll, vtkFilteringDotNet.dll, and so on. 

In the nightly cvs version I used, vtkHyperOctreeCutter in Graphics had a
method declaration without a definition. This should be a transient problem.


HOW TO USE THE WRAPPERS 

When you create a project in C#, VB, or managed C++, add to that project 
references to the VTK .NET dlls. All of the typical VTK classes are in a 
namespace vtk, so the render window becomes vtk.vtkRenderWindow. 

An easy way to add references to a project is to use the macro 
AddVTKReferencesToProject. It should work for C#, VB, J# and C++. You 
can call it from the Visual Studio command line with arguments or edit 
the macro to change the arguments. The first argument is the name of the 
project, and the second is the directory in which to find the wrapper 
dlls. 

Both wrapper dlls and all other VTK shared libraries must be where your 
application can find them. For .NET assemblies like these wrappers, the 
application directory is a good place to put them. 

The wrapper classes do not specify default arguments for methods. When 
translating examples, you may need to add those default arguments. 

If you need to downcast a vtkObject, for instance, downcasting 
vtkRenderWindow to a vtkWin32OpenGLRenderWindow, use SafeDownCast 
instead of dynamic_cast. In C#, this becomes 

vtkWin32OpenGLRenderWindow win32win = 
vtkWin32OpenGLRenderWindow.SafeDownCast(renWin); 

In managed C++, it becomes 

vtkWin32OpenGLRenderWindow^ win32win = 
vtkWin32OpenGLRenderWindow::SafeDownCast(renWin); 

In order to add a callback to a vtkObject, use AddObserver with a 
delegate. 

public static void CheckAbort(vtkObject caller, uint eventId, 
                              object clientData, IntPtr callData)
{
  if (caller is vtkRenderWindow) 
  {
    vtkRenderWindow renWin = (vtkRenderWindow)caller; 
    renWin.SetAbortRender(1);
  }
}
and to add this delegate, use the following. 

renWin.AddObserver((uint) EventIds.AbortCheckEvent, CheckAbort); 

Before destroying the vtkRenderWindow, the vtkWin32OpenGLRenderWindow, 
which Windows always uses, requires that you give it an opportunity to 
clean up. If you fail to do this, there will be an error message on the 
output window. There are two ways to clean up a render window. You can 
either delete the vtkRenderWindow and vtkRenderWindowInteractor before 
the program exits, 

(in C#) renWin.Dispose(); iren.Dispose(); (in MC++) delete renWin; 
delete iren; or you can call the Clean() method on the render window. 

(in C#) vtkWin32OpenGLRenderWindow win32Win = 
vtkWin32OpenGLRenderWindow.SafeDownCast(renWin); win32Win.Clean(); 

Either one will save you from seeing an error message when the window is 
destroyed. 

If you see an error message in C# that a type "is inaccessible due to 
its protection level," it means that you forgot a #using directive. 

An error message, before a C# program loads, indicating "An unhandled 
exception of type 'System.IO.FileNotFoundException' occurred in 
mscorlib.dll" means that the native dlls were not found. You can put 
them in your path or, more likely, copy them to the same directory as 
the managed dlls. For Visual Studio projects, you may need to copy them 
into the same directory as the executable during debugging. 

