Imports System
Imports EnvDTE
Imports EnvDTE80
Imports System.Diagnostics
Imports VSLangProj
Imports Microsoft.VisualStudio.VCProjectEngine

Public Module VTK

    Function FindSingleProject(ByVal kitName As String, ByVal projects As EnvDTE.Projects) As VCProject
        Dim kitProject As VCProject

        Try
            For projIdx As Integer = 1 To projects.Count
                Dim aproj As VCProject = projects.Item(projIdx).Object
                If aproj.Name = "vtk" & kitName & "DotNet" Then
                    Return aproj
                End If
            Next
        Catch
            ' This will fail when the project list runs out. It is okay.
        End Try

        Return (Nothing)
    End Function

    Function FindProjectByName(ByVal kitName As String(), ByVal projects As EnvDTE.Projects) As Collection
        Dim kitProjects As Collection = New Collection

        Try
            For projIdx As Integer = 1 To projects.Count
                Dim aproj As VCProject = projects.Item(projIdx).Object
                Dim projectName As String = aproj.Name
                For Each findKit As String In kitName
                    If projectName = "vtk" & findKit & "DotNet" Then
                        kitProjects.Add(aproj, findKit)
                    End If
                Next
            Next
        Catch
            ' This will fail when the project list runs out. It is okay.
        End Try

        Return (kitProjects)
    End Function


    Sub AddReferencesToProject(ByVal name As String, ByVal refs As String(), ByVal projects As Collection)
        Dim prj As VCProject
        Dim prjRef As VCProject
        Dim tool As VCCLCompilerTool

        prj = projects.Item(name)

        If Not prj Is Nothing Then
            For Each acfg As VCConfiguration In prj.Configurations
                acfg.ManagedExtensions = compileAsManagedOptions.managedAssembly
                tool = acfg.Tools("VCCLCompilerTool")
                ' The BasicRuntimeChecks is a compiler option for native code
                ' not permitted when using managed C++.
                tool.BasicRuntimeChecks = basicRuntimeCheckOption.runtimeBasicCheckNone
                ' This warns when a derived class overrides a method in a base class.
                ' There are over 10,000 of these warnings.
                tool.DisableSpecificWarnings = "4487"
            Next

            prj.References.Add("System.dll")

            For Each ref As String In refs
                prjRef = projects.Item(ref)
                If prj.CanAddProjectReference(prjRef) Then
                    prj.AddProjectReference(prjRef)
                End If
            Next
        End If
    End Sub

    Sub ConvertVTKToManaged()
        Dim MyString As String
        Dim prj As VCProject
        Dim prjRef As VCProject
        Dim cfgs As IVCCollection
        Dim cfg As VCConfiguration
        Dim MyDbg As VCDebugSettings

        ' 11 projects including Parallel
        Dim kits As String() = New String() {"Common", "Filtering", "Graphics", "Imaging", "IO", "Rendering", _
          "Hybrid", "Widgets", "VolumeRendering", "GenericFiltering", "Parallel"}

        Dim projects As Collection
        projects = FindProjectByName(kits, DTE.Solution.Projects)
        If projects.Count < 10 Then
            MsgBox("Found only " & CStr(projects.Count) & " projects.")
            Return
        End If

        Dim common As String() = New String() {}
        Dim filtering As String() = New String() {"Common"}
        Dim graphics As String() = New String() {"Common", "Filtering"}
        Dim IO As String() = New String() {"Common", "Filtering"}
        Dim imaging As String() = New String() {"Common", "Filtering"}
        Dim genericFiltering As String() = New String() {"Common", "Filtering", "Graphics"}
        Dim rendering As String() = New String() {"Common", "Filtering", "Graphics", "Imaging", "IO"}
        Dim hybrid As String() = New String() {"Common", "Filtering", "Graphics", "Imaging", "IO", "Rendering"}
        Dim volumeRendering As String() = New String() {"Common", "Filtering", "Graphics", "Imaging", "IO", "Rendering"}
        Dim widgets As String() = New String() {"Common", "Filtering", "Graphics", "Imaging", "IO", "Rendering", "Hybrid"}
        Dim parallel As String() = New String() {"Common", "Filtering", "Graphics", "Imaging", "IO", "Rendering"}

        AddReferencesToProject("Common", common, projects)
        AddReferencesToProject("Filtering", filtering, projects)
        AddReferencesToProject("Graphics", graphics, projects)
        AddReferencesToProject("IO", IO, projects)
        AddReferencesToProject("Imaging", imaging, projects)
        AddReferencesToProject("GenericFiltering", genericFiltering, projects)
        AddReferencesToProject("Rendering", rendering, projects)
        AddReferencesToProject("Hybrid", hybrid, projects)
        AddReferencesToProject("VolumeRendering", volumeRendering, projects)
        AddReferencesToProject("Widgets", widgets, projects)
        Try
            AddReferencesToProject("Parallel", widgets, projects)
        Catch
        End Try
    End Sub

    Function FindSingleVSProject(ByVal kitName As String) As VSProject
        Dim kitProject As VSProject

        Dim projects As EnvDTE.Projects = DTE.Solution.Projects
        Try
            For projIdx As Integer = 1 To projects.Count
                Try
                    Dim aproj As VSProject = projects.Item(projIdx).Object
                    If aproj.Project.Name = kitName Then
                        Return aproj
                    End If
                Catch
                End Try
            Next
        Catch
            ' This will fail when the project list runs out. It is okay.
        End Try

        Return (Nothing)
    End Function

    Function FindSingleVCProject(ByVal kitName As String) As VCProject
        Dim kitProject As VCProject

        Dim projects As EnvDTE.Projects = DTE.Solution.Projects
        Try
            For projIdx As Integer = 1 To projects.Count
                Try
                    Dim aproj As VCProject = projects.Item(projIdx).Object
                    If aproj.Name = kitName Then
                        Return aproj
                    End If
                Catch
                End Try
            Next
        Catch
            ' Always get an exception before the end of the projects list.
        End Try

        Return (Nothing)
    End Function


    Sub AddVTKReferencesToProject(Optional ByVal projName As String = "", Optional ByVal refDir As String = "")
        Dim vsproj As VSProject
        Dim vcproj As VCProject

        If (String.IsNullOrEmpty(projName)) Then
            projName = InputBox("Enter the project name")
            If (String.IsNullOrEmpty(projName)) Then
                Return
            End If
        End If

        If (String.IsNullOrEmpty(refDir)) Then
            refDir = InputBox("Enter the folder path to import references")
            If (String.IsNullOrEmpty(refDir)) Then
                Return
            End If
        End If

        If (System.IO.Directory.Exists(refDir) = False) Then
            MsgBox("The folder " & refDir & " could not be found. Macro ending.")
            Return
        End If

        vsproj = FindSingleVSProject(projName)
        If Nothing Is vsproj Then
            vcproj = FindSingleVCProject(projName)
            If Nothing Is vcproj Then
                MsgBox("The specified project could not be found. Macro ending.")
                Return
            End If
        End If

        Dim kits As String() = New String() {"Common", "Filtering", "Graphics", "Imaging", "IO", "Rendering", _
           "Hybrid", "Widgets", "VolumeRendering", "GenericFiltering"}
        Dim kit As String

        If Not Nothing Is vsproj Then
            For Each kit In kits
                Dim filename As String = System.IO.Path.Combine(refDir, "vtk" & kit & "DotNet.dll")
                vsproj.References.Add(filename)
            Next
        Else
            For Each kit In kits
                Dim filename As String = System.IO.Path.Combine(refDir, "vtk" & kit & "DotNet.dll")
                vcproj.References.Add(filename)
            Next
        End If
    End Sub
End Module



