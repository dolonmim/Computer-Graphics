#include <windows.h>
#include <GL/glut.h>


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);

	glColor3f(0.3, 0.4, 1);//sky
	glBegin(GL_POLYGON);
	glVertex2d(-200,0);
	glVertex2d(-200,200);
	glVertex2d(200,200);
	glVertex2d(200,0);
	glEnd();

glColor3f(0.6, 0.9, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(111,0);
	glVertex2d(113,34);
	glVertex2d(108,51);
	glVertex2d(111,56);
	glVertex2d(84,56);
	glVertex2d(86,49);
	glVertex2d(84,43);
	glVertex2d(88,43);
	glVertex2d(90,21);
	glVertex2d(80,0);
	glEnd();



	glEnd();









glFlush();


}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("House");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

