/*=========================================================================

  Program:   Visualization Toolkit
  Module:    $RCSfile: vtkLight.cxx,v $

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkLight.h"

#include "vtkMath.h"
#include "vtkMatrix4x4.h"
#include "vtkGraphicsFactory.h"

vtkCxxRevisionMacro(vtkLight, "$Revision: 1.52 $");

vtkCxxSetObjectMacro(vtkLight,TransformMatrix,vtkMatrix4x4);

//----------------------------------------------------------------------------
// Needed when we don't use the vtkStandardNewMacro.
vtkInstantiatorNewMacro(vtkLight);

// Create a light with the focal point at the origin and its position
// set to (0,0,1). The lights color is white, intensity=1, and the light 
// is turned on. 
vtkLight::vtkLight()
{
  this->FocalPoint[0] = 0.0;
  this->FocalPoint[1] = 0.0;
  this->FocalPoint[2] = 0.0;

  this->Position[0] = 0.0;
  this->Position[1] = 0.0;
  this->Position[2] = 1.0;

  // GL default.
  this->AmbientColor[0] = 0.0;
  this->AmbientColor[1] = 0.0;
  this->AmbientColor[2] = 0.0;

  this->DiffuseColor[0] = 1.0;
  this->DiffuseColor[1] = 1.0;
  this->DiffuseColor[2] = 1.0;

  this->SpecularColor[0] = 1.0;
  this->SpecularColor[1] = 1.0;
  this->SpecularColor[2] = 1.0;

  this->Switch = 1;

  this->Intensity = 1.0;
  this->Positional = 0;
  this->ConeAngle = 30;
  this->AttenuationValues[0] = 1;
  this->AttenuationValues[1] = 0;
  this->AttenuationValues[2] = 0;
  this->Exponent = 1;

  this->LightType = VTK_LIGHT_TYPE_SCENE_LIGHT;

  this->TransformMatrix = (vtkMatrix4x4 *)NULL;
}

vtkLight::~vtkLight()
{
  if(this->TransformMatrix != NULL)
    {
      this->TransformMatrix->UnRegister(this);
      this->TransformMatrix = NULL;
    }
}

void vtkLight::SetDirectionAngle(double elevation, double azimuth)
{
  elevation *= vtkMath::DegreesToRadians();
  azimuth   *= vtkMath::DegreesToRadians();

  this->SetPosition(cos(elevation)*sin(azimuth), 
                    sin(elevation), 
                    cos(elevation)*cos(azimuth));

  this->SetFocalPoint(0.0, 0.0, 0.0);
  this->SetPositional(0);
}


// return the correct type of light 
vtkLight *vtkLight::New()
{ 
  // First try to create the object from the vtkObjectFactory
  vtkObject* ret = vtkGraphicsFactory::CreateInstance("vtkLight");
  return (vtkLight*)ret;
}

// Preserve VTK's old way of setting light color
// which affected only diffuse and specular components. 
void vtkLight::SetColor(double R, double G, double B)
{
  this->SetDiffuseColor(R, G, B);
  this->SetSpecularColor(R, G, B);
}

// This method assumes that the SetColor() method was called which sets both
// the specular and diffuse colors to the same value. In the future, we may
// want to change this to compute the composite light color, similar to
// vtkProperty.
double *vtkLight::GetColor()
{
  return this->DiffuseColor;
}

void vtkLight::GetColor(double rgb[3])
{
  // May want to change this to compute the composite
  // light color, similar to vtkProperty.
  rgb[0] = this->DiffuseColor[0];
  rgb[1] = this->DiffuseColor[1];
  rgb[2] = this->DiffuseColor[2];
}

int vtkLight::LightTypeIsHeadlight()
{
  return this->LightType == VTK_LIGHT_TYPE_HEADLIGHT;
}

int vtkLight::LightTypeIsCameraLight()
{
  return this->LightType == VTK_LIGHT_TYPE_CAMERA_LIGHT;
}

int vtkLight::LightTypeIsSceneLight()
{
  return this->LightType == VTK_LIGHT_TYPE_SCENE_LIGHT;
}

void vtkLight::GetTransformedPosition(double a[3]) 
{
  if(this->TransformMatrix)
    {
    double f[4];
    f[0] = this->Position[0];
    f[1] = this->Position[1];
    f[2] = this->Position[2];
    f[3] = 1.0;

    this->TransformMatrix->MultiplyPoint(f, f);

    a[0] = f[0];
    a[1] = f[1];
    a[2] = f[2];
    }
  else
    {
    a[0] = this->Position[0];
    a[1] = this->Position[1];
    a[2] = this->Position[2];
    }
}

void vtkLight::GetTransformedPosition(double &x, double &y, double &z) 
{
  double a[3];

  this->GetTransformedPosition(a);
  x = a[0];
  y = a[1];
  z = a[2];
}

double *vtkLight::GetTransformedPosition() 
{
  this->GetTransformedPosition(this->TransformedPositionReturn);
  return this->TransformedPositionReturn;
}

void vtkLight::GetTransformedFocalPoint(double a[3]) 
{
  if(this->TransformMatrix)
    {
    double f[4];
    f[0] = this->FocalPoint[0];
    f[1] = this->FocalPoint[1];
    f[2] = this->FocalPoint[2];
    f[3] = 1.0;

    this->TransformMatrix->MultiplyPoint(f, f);

    a[0] = f[0];
    a[1] = f[1];
    a[2] = f[2];
    }
  else
    {
    a[0] = this->FocalPoint[0];
    a[1] = this->FocalPoint[1];
    a[2] = this->FocalPoint[2];
    }
}

void vtkLight::GetTransformedFocalPoint(double &x, double &y, double &z)
{
  double a[3];

  this->GetTransformedFocalPoint(a);
  x = a[0];
  y = a[1];
  z = a[2];
}

double *vtkLight::GetTransformedFocalPoint() 
{
  this->GetTransformedFocalPoint(this->TransformedFocalPointReturn);
  return this->TransformedFocalPointReturn;
}

void vtkLight::DeepCopy(vtkLight *light)
{
  this->SetFocalPoint(light->GetFocalPoint());
  this->SetPosition(light->GetPosition());
  this->SetIntensity(light->GetIntensity());
  this->SetAmbientColor(light->GetAmbientColor());
  this->SetDiffuseColor(light->GetDiffuseColor());
  this->SetSpecularColor(light->GetSpecularColor());
  this->SetSwitch(light->GetSwitch());
  this->SetPositional(light->GetPositional());
  this->SetExponent(light->GetExponent());
  this->SetConeAngle(light->GetConeAngle());
  this->SetAttenuationValues(light->GetAttenuationValues());
}

void vtkLight::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os,indent);

  os << indent << "AttenuationValues: (" << this->AttenuationValues[0] << ", " 
     << this->AttenuationValues[1] << ", " 
     << this->AttenuationValues[2] << ")\n";
  os << indent << "AmbientColor: (" << this->AmbientColor[0] << ", " 
     << this->AmbientColor[1] << ", " << this->AmbientColor[2] << ")\n";
  os << indent << "DiffuseColor: (" << this->DiffuseColor[0] << ", " 
     << this->DiffuseColor[1] << ", " << this->DiffuseColor[2] << ")\n";
  os << indent << "SpecularColor: (" << this->SpecularColor[0] << ", " 
     << this->SpecularColor[1] << ", " << this->SpecularColor[2] << ")\n";
  os << indent << "Cone Angle: " << this->ConeAngle << "\n";
  os << indent << "Exponent: " << this->Exponent << "\n";
  os << indent << "Focal Point: (" << this->FocalPoint[0] << ", " 
     << this->FocalPoint[1] << ", " << this->FocalPoint[2] << ")\n";
  os << indent << "Intensity: " << this->Intensity << "\n";
  os << indent << "Position: (" << this->Position[0] << ", " 
     << this->Position[1] << ", " << this->Position[2] << ")\n";
  os << indent << "Positional: " << (this->Positional ? "On\n" : "Off\n");
  os << indent << "Switch: " << (this->Switch ? "On\n" : "Off\n");

  os << indent << "LightType: ";
  if (this->LightType == VTK_LIGHT_TYPE_HEADLIGHT) 
    {
    os << "Headlight\n";
    }
  else if (this->LightType == VTK_LIGHT_TYPE_CAMERA_LIGHT)
    {
    os << "CameraLight\n";
    }
  else if (this->LightType == VTK_LIGHT_TYPE_SCENE_LIGHT)
    {
    os << "SceneLight\n";
    }
  else
    {
    os << "(unknown light type)\n";
    }

  os << indent << "TransformMatrix: ";
  if(this->TransformMatrix != NULL)
    {
    os << this->TransformMatrix << "\n";
    }
  else
    {
    os << "(none)\n";
    }
}

void vtkLight::WriteSelf(ostream& os)
{
  os << this->FocalPoint[0] << " " << this->FocalPoint[1] << " "
     << this->FocalPoint[2] << " ";
  os << this->Position[0] << " " << this->Position[1] << " "
     << this->Position[2] << " ";
  os << this->Intensity << " ";
  os << this->AmbientColor[0] << " " << this->AmbientColor[1] << " "
     << this->AmbientColor[2] << " ";
  os << this->DiffuseColor[0] << " " << this->DiffuseColor[1] << " "
     << this->DiffuseColor[2] << " ";
  os << this->SpecularColor[0] << " " << this->SpecularColor[1] << " "
     << this->SpecularColor[2] << " ";
  os << this->Switch << " ";
  os << this->Switch << " ";
  os << this->Positional << " ";
  os << this->Exponent << " ";
  os << this->ConeAngle << " ";
  os << this->AttenuationValues[0] << " " << this->AttenuationValues[1] << " "
     << this->AttenuationValues[2] << " ";
  // XXX - LightType, TransformMatrix ???
}

void vtkLight::ReadSelf(istream& is)
{
  is >> this->FocalPoint[0] >> this->FocalPoint[1] >> this->FocalPoint[2] ;
  is >> this->Position[0] >> this->Position[1] >> this->Position[2];
  is >> this->Intensity;
  is >> this->AmbientColor[0] >> this->AmbientColor[1] >> this->AmbientColor[2];
  is >> this->DiffuseColor[0] >> this->DiffuseColor[1] >> this->DiffuseColor[2];
  is >> this->SpecularColor[0] >> this->SpecularColor[1] >> this->SpecularColor[2];
  is >> this->Switch;
  is >> this->Positional;
  is >> this->Exponent;
  is >> this->ConeAngle;
  is >> this->AttenuationValues[0] >> this->AttenuationValues[1] 
     >> this->AttenuationValues[2];
  // XXX - LightType, TransformMatrix ???
}



