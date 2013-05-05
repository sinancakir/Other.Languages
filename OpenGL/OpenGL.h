#include "stdafx.h"
#include <GL/glut.h>
#include <math.h>

void init()
{
	glClearColor(0.0,0.0,0.0,1.0);
}
void koordinat()
{
	glBegin(GL_LINES);
     glVertex2f(0.0,-1.0);
     glVertex2f(0.0,1.0);
     glVertex2f(1.0,0.0);
     glVertex2f(-1.0,0.0);
	glEnd();
}
void astroid()
{
	float x,y;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
	float a=1;
	for(float t=-4.4;t<=4.4;t+=0.01)
	{
		x=a*cos(t)*cos(t)*cos(t);
		y=a*sin(t)*sin(t)*sin(t);
		glVertex2f(x, y);
	}
	glEnd();
	koordinat();
	glFlush();
}
void cardiod()
{
	float x,y;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
	float a=0.3;
	for(float t=-4.4;t<=4.4;t+=0.01)
	{
		x=a*(2*cos(t)-cos(2*t));
		y=a*(2*sin(t)-sin(2*t));
		glVertex2f(x, y);
	}
	glEnd();
	koordinat();
	glFlush();
}
void epitrochoid()
{
	float x,y,a,b,c;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.4,0.2);
	a=0.6;
	b=0.06;
	c=0.25;
	glBegin(GL_POINTS);
	for(float t=-4;t<=4;t+=0.001)
	{
		x = (a + b)*cos(t)-(c*cos((a/b+1)*t));
		y = (a + b)*sin(t)-(c*sin((a/b+1)*t));
		glVertex2f(x, y);		
	}
	glEnd();
	koordinat();
	glFlush();
}
void hypotrochoid()
{
	float x,y,a,b,c;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	a=0.8;
	b=0.08;
	c=0.3;
	glBegin(GL_POINTS);
    for(float t=-4;t<=4;t+=0.001)
	{
		x = (a - b)*cos(t)+(c*cos((a/b-1.0)*t));
		y = (a - b)*sin(t)-(c*sin((a/b-1.0)*t));
		glVertex2f(x, y);		
	}
	glEnd();
	koordinat();
	glFlush();
}
void InvoluteOfACicle()
{
	float x,y;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
	float a=0.02;
	for(float t=0;t<=30;t+=0.01)
	{
		x = a*(cos(t)+t*sin(t));
		y = a*(sin(t)-t*cos(t));
		glVertex2f(x, y);
	}
	glEnd();
	koordinat();
	glFlush();
}
int _tmain(int argc, char** argv) 
{
	glutInit(&argc,argv);
	glShadeModel(GL_FLAT);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(0,0);
    glutCreateWindow("opengl");
	init();
	glutDisplayFunc(astroid);
    glutMainLoop();
	return 0;
}

