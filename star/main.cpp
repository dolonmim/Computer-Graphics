#include <windows.h>
#include <GL/glut.h>


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5);

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.48f, 0.2f);
	glVertex2f(-0.6f, 0.0f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.6f, 0.0f);
	glVertex2f(-0.8f, 0.0f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.8f, 0.0f);
	glVertex2f(-0.6f, -0.12f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.6f, -0.12f);
	glVertex2f(-0.8f, -0.32f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.8f, -0.32f);
	glVertex2f(-0.52f, -0.2f);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.52f, -0.2f);
	glVertex2f(-0.32f, -0.32f); //
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.32f, -0.32f);
	glVertex2f(-0.4f, -0.12f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(-0.4f, -0.12f);
     glVertex2f(-0.16f, 0.0f);


    glEnd();


    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(-0.16f, 0.0f);
     glVertex2f(-0.36f, 0.0f);



    glEnd();


    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(-0.36f, 0.0f);
     glVertex2f(-0.48f, 0.2f);
     glVertex2f(-0.8f, -0.32f);


    glEnd();




    glBegin(GL_POLYGON); //green star



	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.36f, 0.0f);
	glVertex2f(0.48f, 0.2f);
	glVertex2f(0.6f, 0.0f);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(0.6f, -0.12f);
	glVertex2f(0.8f, -0.32f);
	glVertex2f(0.52f, -0.2f);
	glVertex2f(0.32f, -0.32f);
	glVertex2f(0.4f, -0.12f);
	glVertex2f(0.16f, 0.0f);


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

