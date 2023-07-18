#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.08f, 0.32f);
	glVertex2f(-0.08f, 0.08f);
	glVertex2f(0.08f, 0.08f);
	glVertex2f(0.08f, 0.32f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.24f, 0.16f);
	glVertex2f(-0.24f, 0.0f);
	glVertex2f(0.24f, 0.0f);
	glVertex2f(0.24f, 0.16f);


	glEnd();




	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.04f, 0.16f);
	glVertex2f(-0.04f, 0.0f);
	glVertex2f(0.04f, 0.0f);
	glVertex2f(0.04f, 0.16f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.12f, 0.08f);
	glVertex2f(-0.12f, -0.08f);
	glVertex2f(-0.04f, -0.08f);
	glVertex2f(-0.04f, 0.08f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.12f, 0.08f);
	glVertex2f(0.12f, -0.08f);
	glVertex2f(0.04f, -0.08f);
	glVertex2f(0.04f, 0.08f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-0.2f, 0.16f);
	glVertex2f(-0.2f, 0.08f);
	glVertex2f(-0.12f, 0.08f);
	glVertex2f(-0.12f, 0.16f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.2f, 0.16f);
	glVertex2f(0.2f, 0.08f);
	glVertex2f(0.12f, 0.08f);
	glVertex2f(0.12f, 0.16f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-0.28f, 0.08f);
	glVertex2f(-0.28f, 0.0f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.2f, 0.08f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.28f, 0.08f);
	glVertex2f(0.28f, 0.0f);
	glVertex2f(0.2f, 0.0f);
	glVertex2f(0.2f, 0.08f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.04f, 0.56f);
	glVertex2f(-0.04f, 0.32f);
	glVertex2f(0.04f, 0.32f);
	glVertex2f(0.04f, 0.56f);


	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.04f, 0.0f);
	glVertex2f(-0.04f, -0.32f);
	glVertex2f(0.04f, -0.32f);
	glVertex2f(0.04f, 0.0f);


	glEnd();







	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

