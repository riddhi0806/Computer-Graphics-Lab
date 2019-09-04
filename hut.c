#include<GL/glut.h>
#include<stdio.h>
//
// void drawHut()
// {
//   // glClearColor(1.0,1.0,1.0,1.0); /*specifies red,green,blue and alpha (opacity) values used by glclear to clear the color buffers*/
//   glClear(GL_COLOR_BUFFER_BIT);/*performs clear operation on one or more buffers at the same time*/
//
//   glColor3f(0.0,2.0,0.5);/* indicates the color for red, green and blue*/
//   //glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);/* indicates the clipping value for left, right , bottom, top, nearest and farthest value*/
//   glBegin(GL_POLYGON);
//   glVertex2f(-0.4,0.5);
//   glVertex2f(-0.75,0);
//   glVertex2f(0,0);
//   glEnd();
//
//   glColor3f(2.0,0.0,0.5);
//   glBegin(GL_POLYGON);
//   glVertex2f(-0.4,0.5);
//   glColor3f(0.0,1.0,0.0);
//   glVertex2f(0,0.4);
//   glVertex2f(0.4,0);
//   //glColor3f(2.0,0.0,0.5);
//   glVertex2f(0.7,0.5);
//   glVertex2f(1,0);
//   glVertex2f(0,0);
//   glEnd();
//
//   glColor3f(2.0,2.0,0.0);
//   glBegin(GL_POLYGON);
//   glVertex2f(-0.75,0);
//   glVertex2f(-0.75,-0.7);
//   glVertex2f(0,-0.7);
//   glVertex2f(0,0);
//   glEnd();
//
//   glColor3f(0.5,1.0,1.5);
//   glBegin(GL_POLYGON);
//   glVertex2f(0,0);
//   glVertex2f(1,0);
//   glVertex2f(1,-0.7);
//   glVertex2f(0,-0.7);
//   glEnd();
//
//   glFlush();
// }
//
// int main (int argc, char** argv){
//   glutInit(&argc,argv); //initializes the OpenGL Utility toolkit
//   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//set the display mode
//   glutInitWindowPosition(300,300);//set the window position on the screen
//   glutCreateWindow("Drawing Hut"); //Decides the title of the window
//   glutDisplayFunc(drawHut); //screen window is redrawn
//   glutInitWindowSize(700,500);//set the window size
//   glutMainLoop();
// }
// =======
void myinit(void)
{
 glClearColor(1.0,1.0,1.0,0.0);/*specifies red,green,blue and alpha (opacity) values used by glclear to clear the color buffers*/
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);/* indicates the clipping value for left, right , bottom, top, nearest and farthest value*/
 }

 void hut(void)
 {
glClear(GL_COLOR_BUFFER_BIT);/*performs clear operation on one or more buffers at the same time*/
glColor3f(0.1,0.2,0.3); /* indicates the color for red, green and blue*/
//rectangle
	glBegin(GL_POLYGON);
  	glVertex2f (0.1, 0.1);
    glVertex2f (0.4, 0.1);
    glVertex2f (0.4, 0.5);
    glVertex2f (0.1, 0.5);
  glEnd();
glColor3f(1.0,0.2,0.1);
//triangle
	glBegin(GL_POLYGON);
	glVertex2f (0.10, 0.5);
        glVertex2f (0.4, 0.5);
        glVertex2f (0.25, 0.75);
       glEnd();
glColor3f(0.2,1.0,0.2);
//right rectangle
	glBegin(GL_POLYGON);
	glVertex2f (0.4, 0.1);
        glVertex2f (0.8, 0.4);
        glVertex2f (0.8, 0.75);
        glVertex2f (0.4, 0.5);
    glEnd();
glColor3f(0.4,0.2,0.4);
//upper rectangle
	glBegin(GL_POLYGON);
	glVertex2f (0.4, 0.5);
        glVertex2f (0.8, 0.75);
        glVertex2f (0.62, 0.93);
        glVertex2f (0.25, 0.75);
    glEnd();

glColor3f(0.2,1.0,0.2);
//inner rectangle
	glBegin(GL_POLYGON);
	glVertex2f (0.15, 0.25);
        glVertex2f (0.25, 0.25);
        glVertex2f (0.25, 0.35);
        glVertex2f (0.15, 0.35);
    glEnd();
glColor3f(0.22,0.12,0.14);
	glBegin(GL_POLYGON);
	glVertex2f (0.6, 0.25);
        glVertex2f (0.7, 0.3);
        glVertex2f (0.6, 0.25);
        glVertex2f (0.7, 0.25);
    glEnd();
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);/*initialize the toolkit*/
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);/*set the display mode*/
glutInitWindowPosition(50,100);//set the window position on the screen
glutInitWindowSize(640,480);//set the window size
glutCreateWindow("hut");//open window with a title
myinit();
glutDisplayFunc(hut);//screen window is redrawn
glutMainLoop();
// >>>>>>> e300a7c5b8ed03ac20b5629c6d5ddc0f2ac22093
}
