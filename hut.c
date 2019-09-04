#include <GL/glut.h> 
void renderFunction() 
{ 
glClearColor(0.0,0.0,0.0,0.0); /*specifies red,green,blue and alpha (opacity) values used by glclear to clear the color buffers*/ 
glClear(GL_COLOR_BUFFER_BIT);/*performs clear operation on one or more buffers at the same time*/ 
glColor3f(1.0,1.0,0.0);/* indicates the color for red, green and blue*/ 
//glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);/* indicates the clipping value for left, right , bottom, top, nearest and farthest value*/ 
glBegin(GL_POLYGON); 
glVertex2f(-0.5,-0.5);/*origin of line with two vertices of float */ 
glVertex2f(-0.5,0.0); 
glVertex2f(0.0,0.0); 
glVertex2f(0.0,-0.5);/* representing square*/ 
glEnd(); 
glColor3f(0.4,0.2,0.1);
glBegin(GL_POLYGON); 
glVertex2f(-0.25,0.5); 
glVertex2f(-0.5,0.0); 
glVertex2f(0.0,0.0);//represents triangle 
glEnd(); 
glColor3f(0.2,1.0,0.2);
glBegin(GL_POLYGON); 
glVertex2f(-0.15,-0.25);/*origin of line with two vertices of float */ 
glVertex2f(-0.35,-0.25); 
glVertex2f(-0.35,-0.5); 
glVertex2f(-0.15,-0.5);/* representing gate*/ 
glEnd();
glColor3f(1.0,0.0,0.2);
glBegin(GL_POLYGON);
glVertex2f(-0.25,0.5);/*origin of line with two vertices of float */ 
glVertex2f(0.75,0.5); 
glVertex2f(1.0,0.0); 
glVertex2f(0.0,0.0);

glEnd(); 
glColor3f(0.4,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(0.0,-0.5);/*origin of line with two vertices of float */ 
glVertex2f(1.0,-0.5); 
glVertex2f(1.0,0.0); 
glVertex2f(0.0,0.0);
glColor3f(1.0,0.2,1.0);

glEnd(); 
glBegin(GL_POLYGON); 
glVertex2f(0.25,-0.15);/*origin of line with two vertices of float */ 
glVertex2f(0.65,-0.15); 
glVertex2f(0.25,-0.35); 
glVertex2f(0.65,-0.35);/* representing window(square)*/ 
glEnd(); 
glColor3f(0.4,0.2,0.1);


glFlush(); 
} 
int main (int argc, char** argv) 
{ 
glutInit(&argc,argv); /*initialize the toolkit*/ 
glutInitDisplayMode(GLUT_SINGLE);/*set the display mode*/ 
glutInitWindowSize(1000,800);//set the window size 
glutInitWindowPosition(100,100);//set the window position on the screen 
glutCreateWindow("Hut"); //open window with a title 
glutDisplayFunc(renderFunction); //screen window is redrawn 
glutMainLoop(); 
}
