#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);



glLoadIdentity();
glColor3f(0.7, 0.4, 0.3); //boat
	   glBegin(GL_QUADS);
	   glVertex2f(-0.16,0.228);
	   glVertex2f(-0.16,0.2);
       glVertex2f(-0.04,0.2);
       glVertex2f(-0.04,0.228);
	   glEnd();

	   glColor3f(0.7, 0.4, 0.3);
	glBegin(GL_TRIANGLES);
		glVertex2f(-.2, .24);
		glVertex2f(-0.16,0.2);
		glVertex2f(-0.16,0.228);
        glEnd();

        glColor3f(0.7, 0.4, 0.3);
	glBegin(GL_TRIANGLES);
		glVertex2f(-0.04,0.228);
		glVertex2f(-0.04,0.2);
		glVertex2f(0.0, .24);
        glEnd();

        glColor3f(1.0, 0.7, 0.2);
	   glBegin(GL_QUADS);
	   glVertex2f(-0.14,0.248);
	   glVertex2f(-0.14,0.228);
       glVertex2f(-0.06,0.228);
       glVertex2f(-0.06,0.248);
	   glEnd();

	   glTranslatef(.6,.2,0);
	   glColor3f(0.7, 0.4, 0.3); //boat
	   glBegin(GL_QUADS);
	   glVertex2f(-0.16,0.228);
	   glVertex2f(-0.16,0.2);
       glVertex2f(-0.04,0.2);
       glVertex2f(-0.04,0.228);
	   glEnd();

	   glLoadIdentity();
	   glTranslatef(.6,.2,0);
	   glColor3f(0.7, 0.4, 0.3);
	glBegin(GL_TRIANGLES);
		glVertex2f(-.2, .24);
		glVertex2f(-0.16,0.2);
		glVertex2f(-0.16,0.228);
        glEnd();

        glLoadIdentity();
        glTranslatef(.6,.2,0);
        glColor3f(0.7, 0.4, 0.3);
	glBegin(GL_TRIANGLES);
		glVertex2f(-0.04,0.228);
		glVertex2f(-0.04,0.2);
		glVertex2f(0.0, .24);
        glEnd();

        glLoadIdentity();
        glTranslatef(.6,.2,0);
         glColor3f(1.0, 0.7, 0.2);
	   glBegin(GL_QUADS);
	   glVertex2f(-0.14,0.248);
	   glVertex2f(-0.14,0.228);
       glVertex2f(-0.06,0.228);
       glVertex2f(-0.06,0.248);
	   glEnd();

        glFlush();
}



	   int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("My Village");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}

