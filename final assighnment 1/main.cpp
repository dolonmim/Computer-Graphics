#include<cstdio>

#include <GL/gl.h>
#include <windows.h>
#include <GL/glut.h>

GLfloat m = 0.0f;

GLfloat position = 0.0f;
GLfloat speed = 0.1f;


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}







void Idle()
{
    glutPostRedisplay();
}




void first()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();



    glPushMatrix();

    glTranslatef(0.0,0.0f, 0.0f);





    //fan
    glColor3f(0.3, 0.0, 0.0);
	glBegin(GL_QUADS);

	glVertex2f(-0.01,.4);
	glVertex2f(-0.01,0.0);
	glVertex2f(.01,0.0);
	glVertex2f(.01,0.4);
	glEnd();



	 glPushMatrix();



    glRotatef(m,0,0,.2);

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.0);
	glVertex2f(-0.2,-0.08);
	glVertex2f(-0.08,-0.2);

	glEnd();

	glPopMatrix();


    m+=0.5f;

    glLoadIdentity();




	glPushMatrix();



    glRotatef(m,0,0,.2);


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(-0.04,0.2);
	glVertex2f(-0.2,0.2);
	glVertex2f(0.0,0.0);

	glEnd();

	glPopMatrix();


    m+=0.5f;

    glLoadIdentity();




	glPushMatrix();

    glRotatef(m,0,0,.2);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.22,0.04);
    glVertex2f(0.0,0.0);
	glVertex2f(0.2,-0.1);


	glEnd();

	glPopMatrix();


    m+=0.5f;

    glLoadIdentity();






    glFlush();
}





void slow()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();



    glPushMatrix();

    glTranslatef(0.0,0.0f, 0.0f);





    //fan
    glColor3f(0.3, 0.0, 0.0);
	glBegin(GL_QUADS);

	glVertex2f(-0.01,.4);
	glVertex2f(-0.01,0.0);
	glVertex2f(.01,0.0);
	glVertex2f(.01,0.4);
	glEnd();



	 glPushMatrix();



    glRotatef(m,0,0,.2);

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.0);
	glVertex2f(-0.2,-0.08);
	glVertex2f(-0.08,-0.2);

	glEnd();

	glPopMatrix();


    m+=0.1f;

    glLoadIdentity();




	glPushMatrix();



    glRotatef(m,0,0,.2);


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(-0.04,0.2);
	glVertex2f(-0.2,0.2);
	glVertex2f(0.0,0.0);

	glEnd();

	glPopMatrix();


    m+=0.1f;

    glLoadIdentity();




	glPushMatrix();

    glRotatef(m,0,0,.2);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.22,0.04);
    glVertex2f(0.0,0.0);
	glVertex2f(0.2,-0.1);


	glEnd();

	glPopMatrix();


    m+=0.1f;

    glLoadIdentity();






    glFlush();
}






void medium()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();



    glPushMatrix();

    glTranslatef(0.0,0.0f, 0.0f);





    //fan
    glColor3f(0.3, 0.0, 0.0);
	glBegin(GL_QUADS);

	glVertex2f(-0.01,.4);
	glVertex2f(-0.01,0.0);
	glVertex2f(.01,0.0);
	glVertex2f(.01,0.4);
	glEnd();



	 glPushMatrix();



    glRotatef(m,0,0,.2);

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.0);
	glVertex2f(-0.2,-0.08);
	glVertex2f(-0.08,-0.2);

	glEnd();

	glPopMatrix();


    m+=0.3f;

    glLoadIdentity();




	glPushMatrix();



    glRotatef(m,0,0,.2);


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(-0.04,0.2);
	glVertex2f(-0.2,0.2);
	glVertex2f(0.0,0.0);

	glEnd();

	glPopMatrix();


    m+=0.3f;

    glLoadIdentity();




	glPushMatrix();

    glRotatef(m,0,0,.2);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.22,0.04);
    glVertex2f(0.0,0.0);
	glVertex2f(0.2,-0.1);


	glEnd();

	glPopMatrix();


    m+=0.3f;

    glLoadIdentity();






    glFlush();
}



void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'm':


   glutDisplayFunc(medium);
   glutPostRedisplay();

    break;
case 's':
   glutDisplayFunc(slow);
glutPostRedisplay();
    break;


    case 'f':
   glutDisplayFunc(first);
glutPostRedisplay();
    break;



	}
}




int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(medium);

    glutIdleFunc(Idle);

    //keyboard
       init();
       glutKeyboardFunc(handleKeypress);





    glutMainLoop();
    return 0;}
