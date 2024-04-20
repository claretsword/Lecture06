#include "MObject.h"
#include <GLFW/glfw3.h>

class Star : public MObject
{
	void update()
	{

	}
	void render() 
	{
        // º°À» ±×¸®´Â ºÎºÐ
        glBegin(GL_TRIANGLES);
        // »ï°¢Çü 1
        glColor3f(0.7f, 0.8f, 0.85f);
        glVertex2f(-0.3f , 0.3f ); 
        glColor3f(0.7f, 0.8f, 0.85f);
        glVertex2f(0.2f, -0.5f ); 
        glColor3f(0.7f, 0.8f, 0.85f);
        glVertex2f(0.1f , 0.1f ); 
        glEnd();

        // »ï°¢Çü 2
        glBegin(GL_TRIANGLES);
        glColor3f(0.7f, 0.8f, 0.85f);
        glVertex2f(0.3f, 0.3f ); 
        glColor3f(0.7f, 0.8f, 0.85f);
        glVertex2f(-0.2f , -0.5f ); 
        glColor3f(0.7f, 0.8f, 0.85f);
        glVertex2f(-0.1f , 0.1f ); 
        glEnd();

        // »ï°¢Çü 3
        glBegin(GL_TRIANGLES);
        glColor3f(0.7f, 0.8f, 0.85f);
        glVertex2f(0.0f, 0.58f ); 
        glColor3f(0.7f, 0.8f, 0.85f);
        glVertex2f(0.1f , 0.1f );
        glColor3f(0.7f, 0.8f, 0.85f);
        glVertex2f(-0.1f , 0.1f ); 
        glEnd();

        
	}
};