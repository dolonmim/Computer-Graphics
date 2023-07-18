#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846


void display()
 {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);

	glColor3f(0.6, 0.6, 0.2);
	glBegin(GL_QUADS);
    glVertex2f(-0.08,0.48);
    glVertex2f(-0.08,0.16);
    glVertex2f(0.08,0.16);
    glVertex2f(0.08,.48);
    glEnd();

    glColor3f(0.6, 0.6, 0.2);
	glBegin(GL_QUADS);
    glVertex2f(-0.08,0.16);
    glVertex2f(-0.04,0.0);
    glVertex2f(0.04,0.0);
    glVertex2f(0.08,.16);
    glEnd();

    glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_QUADS);
    glVertex2f(0.0,0.6);
    glVertex2f(-0.08,0.48);
    glVertex2f(0.0,0.52);
    glVertex2f(0.08,.48);
    glEnd();

    glColor3f(0.6, 0.6, 0.2); //right wings
	glBegin(GL_QUADS);
    glVertex2f(0.08,0.28);
    glVertex2f(0.08,0.16);
    glVertex2f(0.24,0.16);
    glVertex2f(0.24,.28);
    glEnd();

    glColor3f(0.6, 0.6, 0.2);
	glBegin(GL_QUADS);
    glVertex2f(0.24,.28);
    glVertex2f(0.24,0.16);
    glVertex2f(0.4,0.16);
    glVertex2f(0.34,0.256);
    glEnd();



    glColor3f(0.6, 0.6, 0.2); //left wings
	glBegin(GL_QUADS);
    glVertex2f(-0.08,0.28);
    glVertex2f(-0.08,0.16);
    glVertex2f(-0.24,0.16);
    glVertex2f(-0.24,.28);
    glEnd();

    glColor3f(0.6, 0.6, 0.2);
	glBegin(GL_QUADS);
    glVertex2f(-0.24,.28);
    glVertex2f(-0.24,0.16);
    glVertex2f(-0.4,0.16);
    glVertex2f(-0.34,0.256);
    glEnd();

    glColor3f(0.6, 0.6, 0.2);
	glBegin(GL_QUADS);
    glVertex2f(-0.12,-0.28);
    glVertex2f(-0.12,-0.36);
    glVertex2f(0.12,-0.36);
    glVertex2f(0.12,-0.28);

    glEnd();

    int j;
        GLfloat x5=-0.12f; GLfloat y5=-0.32f; GLfloat radius5 =.04f;
	    int triangleAmount5 = 20;
        GLfloat twicePi5 = 2.0f * PI;


        glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.6, 0.6, 0.2);
		glVertex2f(x5, y5);
		for(j = 0; j <= triangleAmount5;j++) {
			glVertex2f(
		            x5 + (radius5 * cos(j *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(j * twicePi5 / triangleAmount5))
			);
		}
	glEnd();

	int i;
        GLfloat x50=0.12f; GLfloat y50=-0.32f; GLfloat radius50 =.04f;
	    int triangleAmount50 = 20;
        GLfloat twicePi50 = 2.0f * PI;


        glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.6, 0.6, 0.2);
		glVertex2f(x50, y50);
		for(i = 0; i <= triangleAmount50;i++) {
			glVertex2f(
		            x50 + (radius50 * cos(i *  twicePi50 / triangleAmount50)),
			    y50 + (radius50 * sin(i * twicePi50 / triangleAmount50))
			);
		}
	glEnd();

	glColor3f(0.6, 0.5, 0.2); //right
	glBegin(GL_QUADS);
    glVertex2f(0.12,0.28);
    glVertex2f(0.12,0.16);
    glVertex2f(0.16,0.16);
    glVertex2f(0.16,0.28);

    glEnd();

    glColor3f(0.6, 0.5, 0.2);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.16,0.16);
    glVertex2f(0.12,0.16);
    glVertex2f(0.14,-0.4);
    glEnd();

    glColor3f(0.6, 0.5, 0.2);
	glBegin(GL_QUADS);
    glVertex2f(0.1,0.32);
    glVertex2f(0.1,0.28);
    glVertex2f(0.18,0.28);
    glVertex2f(0.18,0.32);

    glEnd();

    glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.14,0.34);
    glVertex2f(0.128,0.32);
    glVertex2f(0.152,0.32);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);//fan of fan right
	glBegin(GL_TRIANGLES);
    glVertex2f(0.168,0.352);
    glVertex2f(0.128,0.32);
    glVertex2f(0.152,0.32);
    glEnd();






    glColor3f(0.6, 0.5, 0.2); //Left
	glBegin(GL_QUADS);
    glVertex2f(-0.12,0.28);
    glVertex2f(-0.12,0.16);
    glVertex2f(-0.16,0.16);
    glVertex2f(-0.16,0.28);

    glEnd();

    glColor3f(0.6, 0.5, 0.2);
	glBegin(GL_TRIANGLES);
    glVertex2f(-0.16,0.16);
    glVertex2f(-0.12,0.16);
    glVertex2f(-0.14,-0.4);
    glEnd();

    glColor3f(0.6, 0.5, 0.2);
	glBegin(GL_QUADS);
    glVertex2f(-0.1,0.32);
    glVertex2f(-0.1,0.28);
    glVertex2f(-0.18,0.28);
    glVertex2f(-0.18,0.32);

    glEnd();

glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_TRIANGLES);
    glVertex2f(-0.14,0.34);
    glVertex2f(-0.128,0.32);
    glVertex2f(-0.152,0.32);
    glEnd();

     glColor3f(0.0, 0.0, 0.0);//fan of fan left
	glBegin(GL_TRIANGLES);
    glVertex2f(-0.168,0.352);
    glVertex2f(-0.128,0.32);
    glVertex2f(-0.152,0.32);
    glEnd();



	glFlush();
}

int main(int argc, char** argv)
 {
	glutInit(&argc, argv);
	glutCreateWindow("Lab");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}
