#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    gluOrtho2D(0.0,500.0,0.0,400.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}
void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT); // clears the screen
    glColor3f(0.5f,1.0f,1.0f) ;// set the drawing colour
    glPointSize(4.0);
    glBegin(GL_POLYGON);
    glVertex2i (20, 20);
    glVertex2i (320, 20);
    glVertex2i (20, 200);
    glVertex2i (320, 200);
    glVertex2i (20, 200);
    glVertex2i (20, 20);
    glVertex2i (320, 200);
    glVertex2i (320, 20);

    glEnd();
    glColor3f(1.0f,0.0f,1.0f) ;
    glPointSize(4.0);
    glRectf(30,30,100,100);
    glColor3f(1.0f,0.0f,1.0f) ;
    glBegin(GL_POLYGON);
    glVertex2i (200,30);
    glVertex2i (200, 100);
    glVertex2i (200, 100);
    glVertex2i (300, 100);
    glVertex2i (300, 100);
    glVertex2i (300, 30);
    glVertex2i (300, 30);
    glVertex2i (200, 30);
    glEnd();
    glColor3f(1.0f,0.0f,0.0f) ;
    glBegin(GL_POLYGON);
    glVertex2i (120,30);
    glVertex2i (120, 100);
    glVertex2i (120, 100);
    glVertex2i (170, 100);
    glVertex2i (170, 100);
    glVertex2i (170, 30);
    glVertex2i (120, 30);
    glVertex2i (170, 30);

    glEnd();

    glColor3f(0.5f,0.0f,1.0f) ;
    glBegin(GL_POLYGON);
    glVertex2i (20, 200);
    glVertex2i (320, 200);
    glVertex2i (200, 310);
    glVertex2i (320, 200);
    glVertex2i (20, 200);
    glVertex2i (200, 310);

    glEnd();
    glFlush();
    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(10,10);
    glutInitWindowSize(640,480);
    glutCreateWindow("Lab Task");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}