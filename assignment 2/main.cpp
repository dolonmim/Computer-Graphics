#include <windows.h>
#include <GL/glut.h>



void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);

    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.6f);
	glVertex2f(0.8f, -0.14f);
	glVertex2f(0.68f, -0.12f);
	glVertex2f(0.52f, -0.2f);
	glVertex2f(0.4f, -0.24f);
	glVertex2f(0.4f, -0.4f);
	glVertex2f(0.8f, -0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(0.56f, -0.24f);
	glVertex2f(0.56f, -0.4f);
	glVertex2f(0.64f, -0.4f);
	glVertex2f(0.64f, -0.24f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(0.68f, -0.24f);
	glVertex2f(0.68f, -0.4f);
	glVertex2f(0.76f, -0.4f);
	glVertex2f(0.76f, -0.24f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(0.68f, 0.48f);
	glVertex2f(0.6f, 0.52f);
	glVertex2f(0.5f, 0.52f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.6f, -0.2f);
	glVertex2f(0.68f, -0.18f);
	glEnd();

	glBegin(GL_QUADS);  //window
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(0.54f, 0.4f);
	glVertex2f(0.54f, 0.36f);
	glVertex2f(0.58f, 0.36f);
	glVertex2f(0.58f, 0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(0.54f, 0.28f);
	glVertex2f(0.54f, 0.24f);
	glVertex2f(0.58f, 0.24f);
	glVertex2f(0.58f, 0.28f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(0.54f, 0.16f);
	glVertex2f(0.54f, 0.12f);
	glVertex2f(0.58f, 0.12f);
	glVertex2f(0.58f, 0.16f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(0.54f, 0.04f);
	glVertex2f(0.54f, 0.0f);
	glVertex2f(0.58f, 0.0f);
	glVertex2f(0.58f, 0.04f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(0.54f, -0.08f);
	glVertex2f(0.54f, -0.12f);
	glVertex2f(0.58f, -0.12f);
	glVertex2f(0.58f, -0.08f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.52f, 0.42f);
	glVertex2f(0.48f, 0.44f);
	glVertex2f(0.36f, 0.44f);
	glVertex2f(0.36f, -0.4f);
	glVertex2f(0.52f, -0.4f);
	glEnd();

	//First block
	glBegin(GL_QUADS);
	glColor3f(0.9f, 1.0f, 0.8f);
	glVertex2f(-0.36f, 0.48f);
	glVertex2f(-0.36f, 0.2f);
	glVertex2f(0.48f, 0.16f);
	glVertex2f(0.48f, 0.44f);
	glEnd();

	glBegin(GL_QUADS);                 //Black
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.28f, 0.44f);
	glVertex2f(-0.28f, 0.4f);
	glVertex2f(0.48f, 0.36f);
	glVertex2f(0.48f, 0.4f);
	glEnd();

	glBegin(GL_QUADS);               //Blue
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(-0.28f, 0.4f);
	glVertex2f(-0.28f, 0.36f);
	glVertex2f(0.48f, 0.32f);
	glVertex2f(0.48f, 0.36f);
	glEnd();

	glBegin(GL_QUADS);                   //Blue
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(-0.28f, 0.32f);
	glVertex2f(-0.28f, 0.28f);
	glVertex2f(0.48f, 0.24f);
	glVertex2f(0.48f, 0.28f);
	glEnd();

	glBegin(GL_QUADS);                 //Blue
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(-0.28f, 0.24f);
	glVertex2f(-0.28f, 0.2f);
	glVertex2f(0.48f, 0.16f);
	glVertex2f(0.48f, 0.2f);
	glEnd();

	//Second block
	glBegin(GL_QUADS);                     //White
	glColor3f(0.9f, 1.0f, 0.8f);
	glVertex2f(-0.4f, 0.2f);
	glVertex2f(-0.4f, -0.04f);
	glVertex2f(0.4f, -0.08f);
	glVertex2f(0.4f, 0.16f);
	glEnd();

	glBegin(GL_QUADS);               //Blue
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(-0.4f, 0.16f);
	glVertex2f(-0.4f, 0.12f);
	glVertex2f(0.4f, 0.08f);
	glVertex2f(0.4f, 0.12f);
	glEnd();

	glBegin(GL_QUADS);               //Blue
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(-0.4f, 0.08f);
	glVertex2f(-0.4f, 0.04f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(0.4f, 0.04f);
	glEnd();

	glBegin(GL_QUADS);               //Blue
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.4f, -0.04f);
	glVertex2f(0.4f, -0.08f);
	glVertex2f(0.4f, -0.04f);
	glEnd();

	//Third block
	glBegin(GL_QUADS);                     //White
	glColor3f(0.9f, 1.0f, 0.8f);
	glVertex2f(-0.44f, -0.02f);
	glVertex2f(-0.44f, -0.32f);
	glVertex2f(0.36f, -0.4f);
	glVertex2f(0.36f, -0.08f);
	glEnd();

	glBegin(GL_QUADS);               //Blue
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(-0.44f, -0.06f);
	glVertex2f(-0.44f, -0.1f);
	glVertex2f(0.36f, -0.16f);
	glVertex2f(0.36f, -0.12f);
	glEnd();

	glBegin(GL_QUADS);               //Blue
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(-0.44f, -0.14f);
	glVertex2f(-0.44f, -0.18f);
	glVertex2f(0.36f, -0.24f);
	glVertex2f(0.36f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);               //Blue
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(-0.44f, -0.22f);
	glVertex2f(-0.44f, -0.26f);
	glVertex2f(0.36f, -0.32f);
	glVertex2f(0.36f, -0.28f);
	glEnd();

	glBegin(GL_QUADS);               //Blue
	glColor3f(0.1f, 0.6f, 0.7f);
	glVertex2f(-0.44f, -0.3f);
	glVertex2f(-0.44f, -0.34f);
	glVertex2f(0.36f, -0.36f);
	glVertex2f(0.36f, -0.4f);
	glEnd();


    glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("AIUB D Building");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

