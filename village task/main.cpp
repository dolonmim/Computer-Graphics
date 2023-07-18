#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846



void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);


	glColor3f(1, 1, 0.4);//sky
	glBegin(GL_POLYGON);
	glVertex2f(-1,1);
	glVertex2f(-1,.35);
	glVertex2f(1,.35);
	glVertex2f(1,1);
	glEnd();

	//shurjo
	int j;
        GLfloat x5=0.48f; GLfloat y5=0.35f; GLfloat radius5 =.1f;
	    int triangleAmount5 = 20;
        GLfloat twicePi5 = 2.0f * PI;


        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1, 0.1, 0.1);
		glVertex2f(x5, y5);
		for(j = 0; j <= triangleAmount5;j++) {
			glVertex2f(
		            x5 + (radius5 * cos(j *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(j * twicePi5 / triangleAmount5))
			);
		}
	glEnd();


	glColor3f(0.6, 1.0, 0.4);//mati
	glBegin(GL_POLYGON);
	glVertex2f(-1,0);
	glVertex2f(-1,-1);
	glVertex2f(1,-1);
	glVertex2f(1,0);
	glEnd();

	glColor3f(0.6, 0.9, 1.0);//nodi
	glBegin(GL_POLYGON);
	glVertex2f(1,.35);
	glVertex2f(-1,.35);
	glVertex2f(-1,-.2);
    glVertex2f(-.28,-.08);
	glVertex2f(0,-.2);
	glVertex2f(.2,-.08);
	glVertex2f(.6,-.2);
	glVertex2f(1,-.08);

	glEnd();




         // daner ghor

glColor3f(.2, 0.1, 1);
	glBegin(GL_QUADS);
		glVertex2f(-.36, -.32);
		glVertex2f(-.48, -.4);
		glVertex2f(-.4, -.4);
		glVertex2f(-.32, -.36);
	glEnd();

glColor3f(.2, 0.1, 1);
	glBegin(GL_QUADS);
		glVertex2f(-.36, -.32);
		glVertex2f(-.28, -.4);
		glVertex2f(-.08, -.4);
		glVertex2f(-.16, -.32);
        glEnd();

glColor3f(1, 0.8, .7);
	glBegin(GL_POLYGON);
	    glVertex2f(-.28, -.4);
		glVertex2f(-.32, -.36);
		glVertex2f(-.4, -.4);
		glVertex2f(-.4, -.56);
		glVertex2f(-.12, -.56);
		glVertex2f(-.12, -.4);
         glEnd();

         glColor3f(0, 0, 0);  //door
	glBegin(GL_QUADS);
		glVertex2f(-.36, -.48);
		glVertex2f(-.36, -.56);
		glVertex2f(-.32, -.56);
		glVertex2f(-.32, -.48);
        glEnd();

        glColor3f(0, 0, 0); //left window
	glBegin(GL_QUADS);
		glVertex2f(-.24, -.44);
		glVertex2f(-.24, -.48);
		glVertex2f(-.2, -.48);
		glVertex2f(-.2, -.44);
        glEnd();
glColor3f(0, 0, 0); //right window
	glBegin(GL_QUADS);
		glVertex2f(-.16, -.44);
		glVertex2f(-.16, -.48);
		glVertex2f(-.12, -.48);
		glVertex2f(-.12, -.44);
        glEnd();


        // bamer ghor



glColor3f(1, 0.3, .1);
	glBegin(GL_QUADS);
		glVertex2f(-.72, -.48);
		glVertex2f(-.68, -.48);
		glVertex2f(-.6, -.44);
		glVertex2f(-.64, -.4);
	glEnd();




glColor3f(1, 0.3, .1);
	glBegin(GL_QUADS);
		glVertex2f(-.64, -.4);
		glVertex2f(-.56, -.48);
		glVertex2f(-.36, -.48);
		glVertex2f(-.44, -.4);
        glEnd();


glColor3f(1, 0.8, .7);
	glBegin(GL_POLYGON);
	    glVertex2f(-.56, -.48);
		glVertex2f(-.6, -.44);
		glVertex2f(-.68, -.48);
		glVertex2f(-.68, -.6);
		glVertex2f(-.4, -.6);
		glVertex2f(-.4, -.48);
         glEnd();



         glColor3f(0, 0, 0);  //door
	glBegin(GL_QUADS);
		glVertex2f(-.56, -.52);
		glVertex2f(-.56, -.6);
		glVertex2f(-.48, -.6);
		glVertex2f(-.48, -.52);
        glEnd();


        glColor3f(0, 0, 0); //right window
	glBegin(GL_QUADS);
		glVertex2f(-.44, -.52);
		glVertex2f(-.44, -.56);
		glVertex2f(-.4, -.56);
		glVertex2f(-.4, -.52);
        glEnd();


        glColor3f(0, 0, 0); //left window
	glBegin(GL_QUADS);
		glVertex2f(-.64, -.52);
		glVertex2f(-.64, -.56);
		glVertex2f(-.6, -.56);
		glVertex2f(-.6, -.52);
        glEnd();



       glColor3f(0.7, 0.5, 0.2);//gacher dal
	   glBegin(GL_TRIANGLES);
	   glVertex2f(0.0,-0.4);
	   glVertex2f(0.08,-0.48);
	   glVertex2f(0.16,-0.48);
	   glEnd();

	   glColor3f(0.7, 0.5, 0.2);
	   glBegin(GL_TRIANGLES);
	   glVertex2f(.2,-0.4);
	   glVertex2f(.08,-0.48);
       glVertex2f(0.16,-0.48);
	   glEnd();

	   glColor3f(0.7, 0.5, 0.2);
	   glBegin(GL_QUADS);
	   glVertex2f(.08,-0.48);
	   glVertex2f(.1,-0.5);
       glVertex2f(0.16,-0.5);
        glVertex2f(0.16,-0.48);
	   glEnd();

	   glColor3f(0.7, 0.5, 0.2);
	   glBegin(GL_QUADS);
	   glVertex2f(.1,-0.5);
	   glVertex2f(.1,-0.56);
       glVertex2f(0.16,-0.56);
       glVertex2f(0.16,-0.5);
	   glEnd();


	    //gacher pata
	    int i;
        GLfloat x=0.0f; GLfloat y=-.36f; GLfloat radius =.08f;
	    int triangleAmount = 20;
        GLfloat twicePi = 2.0f * PI;


        glBegin(GL_TRIANGLE_FAN);
        glColor3f(0, 0.7, 0.2);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();






	GLfloat x2=0.16f; GLfloat y2=-.36f; GLfloat radius2 =.08f;
	    int triangleAmount2 = 20;
        GLfloat twicePi2 = 2.0f * PI;


        glBegin(GL_TRIANGLE_FAN);
        glColor3f(0, 0.7, 0.2);
		glVertex2f(x2, y2);
		for(i = 0; i <= triangleAmount2;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

	GLfloat x1=0.08f; GLfloat y1=-.32f; GLfloat radius1 =.08f;
	    int triangleAmount1 = 20;
        GLfloat twicePi1 = 2.0f * PI;


        glBegin(GL_TRIANGLE_FAN);
        glColor3f(0, 0.7, 0.2);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(i * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	//khorer gada
	glColor3f(0.9, 0.8, 0.2);
	   glBegin(GL_QUADS);
	   glVertex2f(-0.92,-0.52);
	   glVertex2f(-0.92,-0.6);
       glVertex2f(-0.72,-0.6);
       glVertex2f(-0.72,-0.52);
	   glEnd();

	   glColor3f(0.9, 0.8, 0.2);
	   glBegin(GL_QUADS);
	   glVertex2f(-0.9,-0.5);
	   glVertex2f(-0.92,-0.52);
       glVertex2f(-0.72,-0.52);
       glVertex2f(-0.74,-0.5);
	   glEnd();

	   glColor3f(0.9, 0.8, 0.2);
	   glBegin(GL_QUADS);
	   glVertex2f(-0.84,-0.4);
	   glVertex2f(-0.9,-0.5);
       glVertex2f(-0.74,-0.5);
       glVertex2f(-0.8,-0.4);
	   glEnd();

	   glColor3f(0.0, 0.0, 0.0);
	   glBegin(GL_QUADS);
	   glVertex2f(-0.82,-0.38);
	   glVertex2f(-0.82,-0.4);
       glVertex2f(-0.8,-0.4);
       glVertex2f(-0.8,-0.38);
	   glEnd();

	    glColor3f(0, 0, 0); //Right bird
	glBegin(GL_TRIANGLES);
		glVertex2f(-.64, .48);
		glVertex2f(-.6, .44);
		glVertex2f(-.6, .46);
        glEnd();

        glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
		glVertex2f(-.6, .46);
		glVertex2f(-.6, .44);
		glVertex2f(-.56, .48);
        glEnd();


	    glColor3f(0, 0, 0); //left bird
	glBegin(GL_TRIANGLES);
		glVertex2f(-.84, .56);
		glVertex2f(-.8, .52);
		glVertex2f(-.8, .54);
        glEnd();

        glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
		glVertex2f(-.8, .54);
		glVertex2f(-.8, .52);
		glVertex2f(-.76, .56);
        glEnd();

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

