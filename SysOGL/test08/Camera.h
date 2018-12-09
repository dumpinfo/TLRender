//Camera.h
#ifndef CAMERA_H
#define CAMERA_H

#include "Node.h"

class Camera: public Node
{
 public:
  Camera(Enum CType);

  void Render();
  void SetValuev(Enum PName, float *v);
  void SetValue(Enum PName, float v1, float v2, float v3);
  void SetValue(Enum PName, float v);
  
 private:
  Enum Type;
  bool Changed[2];
  float Position[3];
  float AimAt[3];
  float UpDirection[3];
  float Near;
  float Far;
  float Height;
  float Aspect;
  float YAngle;
  
};

inline Camera::Camera(Enum CType)
{
  int i;
  
  Type=CType;
  KeepMatrix=true;

  for(i=0; i<3; i++)
    {
      if(i<2)
	Changed[i]=false;
      Position[i]=0.0;
      AimAt[i]=0.0;
      UpDirection[i]=0.0;
    }
  UpDirection[1]=1.0;
  AimAt[2]=-100.0;  

}

void inline 
Camera::SetValuev(Enum PName, float *v)
{
  float *temp=NULL;
  int i;

  switch(PName)
    {
    case POSITION:
      Changed[0]=true;
      temp=Position;
      break;
    case AIMAT:
      Changed[0]=true;
      temp=AimAt;
      break;
    case UPDIRECTION:
      Changed[0]=true;
      temp=UpDirection;
      break;
    default:
      break;
    }

  for(i=0; i<3; i++)
    temp[i]=v[i];
}

void inline 
Camera::SetValue(Enum PName, float v1, float v2, float v3)
{
  float temp[]={v1, v2, v3};
  
  SetValuev(PName, temp);
}

void inline 
Camera::SetValue(Enum PName, float v)
{
  switch(PName)
    {
    case ASPECT:
      Changed[1]=true;
      Aspect=v;
      break;
    case NEAR:
      Changed[1]=true;
      Near=v;
      break;
    case FAR:
      Changed[1]=true;
      Far=v;
      break;
    case HEIGHT:
      if(Type==ORTHO)
	{
	  Changed[1]=true;
	  Height=v;
	}
      break;
    case YANGLE:
      if(Type==PERSPECTIVE)
	{
	  Changed[1]=true;
	  YAngle=v;
	}
      break;
    default:
      break;
    }
}

void inline Camera::Render()
{
  printf("%s name:%s\n",(char*)nodespace.c_str(),(char*)nodename.c_str());
  float x2=Height*Aspect/2;
  float x1=(-1)*x2;
  float y2=Height/2;
  float y1=(-1)*y2;

  if(Changed[1])
    {
      glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
      if(Type==ORTHO)
	glOrtho(x1, x2, y1, y2, Near, Far);
      else
	gluPerspective(YAngle, Aspect, Near, Far);
      glMatrixMode(GL_MODELVIEW);
    }
  if(Changed[0])
    {
      glLoadIdentity();
      gluLookAt(Position[0], Position[1], Position[2], AimAt[0],
		AimAt[1], AimAt[2], UpDirection[0], UpDirection[1],
		UpDirection[2]);
    }
}
#endif
