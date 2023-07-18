#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>

#include<math.h>>

# define PI           3.14159265358979323846



GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}



void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);




glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();




   int i;

	GLfloat x=-.12f; GLfloat y=-.28f; GLfloat radius =.08f;
	int triangleAmount = 20;


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0,0.0,1.0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();





int j;

	GLfloat x1=.12f; GLfloat y1=-.28f; GLfloat radius1 =.08f;
	int triangleAmount1 = 20;

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0,0.0,1.0);
		glVertex2f(x1, y1);
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();






glPopMatrix();



   glFlush();
}




int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display);


   glutTimerFunc(100, update, 0);


   glutMainLoop();
   return 0;
}

