#include <windows.h>
#include <GL/glut.h>



void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);


	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.2f, 0.1f);
	glVertex2f(0.2f, 0.1f);
	glVertex2f(0.2f, 0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.2f, 0.1f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(0.2f, 0.0f);
	glVertex2f(0.2f, 0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.8f, 0.0f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.2f, -0.1f);
	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.2f, 0.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex2f(-0.2f, -0.2f);
	glVertex2f(-0.2f, -0.3f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex2f(-0.2f, -0.2f);
	glVertex2f(-0.14f, -0.24f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex2f(-0.14f, -0.24f);
	glVertex2f(-0.1f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex2f(-0.1f, -0.2f);
	glVertex2f(-0.1f, -0.3f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex2f(-0.04f, -0.2f);
	glVertex2f(0.04f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex2f(0.0f, -0.2f);
	glVertex2f(0.0f, -0.3f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex2f(-0.04f, -0.3f);
	glVertex2f(0.04f, -0.3f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex2f(0.1f, -0.2f);
	glVertex2f(0.1f, -0.3f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex2f(0.1f, -0.2f);
	glVertex2f(0.16f, -0.24f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex2f(0.2f, -0.2f);
	glVertex2f(0.16f, -0.24f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex2f(0.2f, -0.2f);
	glVertex2f(0.2f, -0.3f);
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

