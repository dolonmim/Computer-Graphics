#include<cstdio>

#include <GL/gl.h>


#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat m = 0.0f;


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}





GLfloat position = 0.0f;
GLfloat speed = 0.03f;


//multiple display
void dis();
void display();

void update5(int value) {






	glutTimerFunc(2500,update5,0);
	glutPostRedisplay();
}



void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}


void disback(int val)
{
    //glutDisplayFunc(display);
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed += 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;
			}
	glutPostRedisplay();}







void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed = 0.0f;
    break;
case 'r':
    speed = 0.1f;
    break;
glutPostRedisplay();
	}
}





void morning() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);





	glColor3f(.2, .7, 0.9);//sky
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




        glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

        glColor3f(0.7, 0.4, 0.3); //boat
        glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
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

	   glPopMatrix();





	   //cloud

int c1;

	GLfloat x11=.12f; GLfloat y11=.76f; GLfloat radius11 =.08f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;


	glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11, y11); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c1 = 0; c1 <= triangleAmount11;c1++) {
			glVertex2f(
		            x11 + (radius11 * cos(c1 *  twicePi / triangleAmount11)),
			    y11 + (radius11 * sin(c1 * twicePi / triangleAmount11))
			);
		}
	glEnd();


	int c2;

	GLfloat x12=.2f; GLfloat y12=.8f; GLfloat radius12 =.08f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x12, y12); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c2 = 0; c2 <= triangleAmount12;c2++) {
			glVertex2f(
		            x12 + (radius12 * cos(c2 *  twicePi / triangleAmount12)),
			    y12 + (radius12 * sin(c2 * twicePi / triangleAmount12))
			);
		}
	glEnd();



	int c3;

	GLfloat x13=.28f; GLfloat y13=.76f; GLfloat radius13 =.08f;
	int triangleAmount13 = 20;

	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x13, y13); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c3 = 0; c3 <= triangleAmount13;c3++) {
			glVertex2f(
		            x13 + (radius13 * cos(c3 *  twicePi / triangleAmount13)),
			    y13 + (radius13 * sin(c3 * twicePi / triangleAmount13))
			);
		}
	glEnd();

	glPopMatrix();





glColor3f(0.3, 0.0, 0.0); //wheel mill
	glBegin(GL_QUADS);

	glVertex2f(-0.4,.56);
	glVertex2f(-0.4,0.36);
	glVertex2f(-0.36,0.36);
	glVertex2f(-0.36,0.56);
	glEnd();



	 glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axis


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.0);
	glVertex2f(-0.12,-0.08);
	glVertex2f(-0.08,-0.12);

	glEnd();

	glPopMatrix();


    m+=0.2f;

    glLoadIdentity();




	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axis


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.0);
	glVertex2f(-0.04,0.12);
	glVertex2f(-0.08,0.08);

	glEnd();

	glPopMatrix();


    m+=0.2f;

    glLoadIdentity();




	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axisglColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.12,0.1);
    glVertex2f(0.0,0.0);
	glVertex2f(0.12,0.04);


	glEnd();

	glPopMatrix();


    m+=0.2f;

    glLoadIdentity();




glFlush();
}
void demo_morning(int val)
{

 glutDisplayFunc(morning);


}




void night()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);





	glColor3f(0.0, 0.0, 0.0);//sky
	glBegin(GL_POLYGON);
	glVertex2f(-1,1);
	glVertex2f(-1,.35);
	glVertex2f(1,.35);
	glVertex2f(1,1);
	glEnd();

	//moon
	int j;
        GLfloat x5=0.56f; GLfloat y5=0.68f; GLfloat radius5 =.1f;
	    int triangleAmount5 = 20;
        GLfloat twicePi5 = 2.0f * PI;


        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
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





	   //cloud

int c1;

	GLfloat x11=.12f; GLfloat y11=.76f; GLfloat radius11 =.08f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;


	glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11, y11); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c1 = 0; c1 <= triangleAmount11;c1++) {
			glVertex2f(
		            x11 + (radius11 * cos(c1 *  twicePi / triangleAmount11)),
			    y11 + (radius11 * sin(c1 * twicePi / triangleAmount11))
			);
		}
	glEnd();


	int c2;

	GLfloat x12=.2f; GLfloat y12=.8f; GLfloat radius12 =.08f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x12, y12); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c2 = 0; c2 <= triangleAmount12;c2++) {
			glVertex2f(
		            x12 + (radius12 * cos(c2 *  twicePi / triangleAmount12)),
			    y12 + (radius12 * sin(c2 * twicePi / triangleAmount12))
			);
		}
	glEnd();



	int c3;

	GLfloat x13=.28f; GLfloat y13=.76f; GLfloat radius13 =.08f;
	int triangleAmount13 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x13, y13); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c3 = 0; c3 <= triangleAmount13;c3++) {
			glVertex2f(
		            x13 + (radius13 * cos(c3 *  twicePi / triangleAmount13)),
			    y13 + (radius13 * sin(c3 * twicePi / triangleAmount13))
			);
		}
	glEnd();

	glPopMatrix();


glColor3f(0.3, 0.0, 0.0); //wheel mill
	glBegin(GL_QUADS);

	glVertex2f(-0.4,.56);
	glVertex2f(-0.4,0.36);
	glVertex2f(-0.36,0.36);
	glVertex2f(-0.36,0.56);
	glEnd();



	 glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axis


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.0);
	glVertex2f(-0.12,-0.08);
	glVertex2f(-0.08,-0.12);

	glEnd();

	glPopMatrix();


    m+=0.2f;

    glLoadIdentity();




	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axis


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.0);
	glVertex2f(-0.04,0.12);
	glVertex2f(-0.08,0.08);

	glEnd();

	glPopMatrix();


    m+=0.2f;

    glLoadIdentity();




	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axisglColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.12,0.1);
    glVertex2f(0.0,0.0);
	glVertex2f(0.12,0.04);


	glEnd();

	glPopMatrix();


    m+=0.2f;

    glLoadIdentity();




glFlush();
glutTimerFunc(2500,demo_morning,0);
}
void night_demo(int val) {

 glutDisplayFunc(night);


}








void day() {
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
        GLfloat x5=0.64f; GLfloat y5=0.72f; GLfloat radius5 =.1f;
	    int triangleAmount5 = 20;
        GLfloat twicePi5 = 2.0f * PI;


        glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.9, 0.7, 0.3);
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








        glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

        glColor3f(0.7, 0.4, 0.3); //boat
        glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
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

	   glPopMatrix();





	   //cloud

int c1;

	GLfloat x11=.12f; GLfloat y11=.76f; GLfloat radius11 =.08f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;


	glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11, y11); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c1 = 0; c1 <= triangleAmount11;c1++) {
			glVertex2f(
		            x11 + (radius11 * cos(c1 *  twicePi / triangleAmount11)),
			    y11 + (radius11 * sin(c1 * twicePi / triangleAmount11))
			);
		}
	glEnd();


	int c2;

	GLfloat x12=.2f; GLfloat y12=.8f; GLfloat radius12 =.08f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x12, y12); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c2 = 0; c2 <= triangleAmount12;c2++) {
			glVertex2f(
		            x12 + (radius12 * cos(c2 *  twicePi / triangleAmount12)),
			    y12 + (radius12 * sin(c2 * twicePi / triangleAmount12))
			);
		}
	glEnd();



	int c3;

	GLfloat x13=.28f; GLfloat y13=.76f; GLfloat radius13 =.08f;
	int triangleAmount13 = 20;

	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x13, y13); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c3 = 0; c3 <= triangleAmount13;c3++) {
			glVertex2f(
		            x13 + (radius13 * cos(c3 *  twicePi / triangleAmount13)),
			    y13 + (radius13 * sin(c3 * twicePi / triangleAmount13))
			);
		}
	glEnd();

	glPopMatrix();





glColor3f(0.3, 0.0, 0.0); //wheel mill
	glBegin(GL_QUADS);

	glVertex2f(-0.4,.56);
	glVertex2f(-0.4,0.36);
	glVertex2f(-0.36,0.36);
	glVertex2f(-0.36,0.56);
	glEnd();



	 glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axis


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.0);
	glVertex2f(-0.12,-0.08);
	glVertex2f(-0.08,-0.12);

	glEnd();

	glPopMatrix();


    m+=0.2f;

    glLoadIdentity();




	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axis


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.0);
	glVertex2f(-0.04,0.12);
	glVertex2f(-0.08,0.08);

	glEnd();

	glPopMatrix();


    m+=0.2f;

    glLoadIdentity();




	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axisglColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.12,0.1);
    glVertex2f(0.0,0.0);
	glVertex2f(0.12,0.04);


	glEnd();

	glPopMatrix();


    m+=0.2f;

    glLoadIdentity();


glutTimerFunc(2500,night_demo,0);

glFlush();
}






void evening() {
	glClearColor(0.2f, 0.7f, 0.8f, 1.0f);
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
        GLfloat x5=0.64f; GLfloat y5=0.72f; GLfloat radius5 =.1f;
	    int triangleAmount5 = 20;
        GLfloat twicePi5 = 2.0f * PI;


        glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.9, 0.7, 0.3);
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








        glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

        glColor3f(0.7, 0.4, 0.3); //boat
        glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
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

	   glPopMatrix();





	   //cloud

int c1;

	GLfloat x11=.12f; GLfloat y11=.76f; GLfloat radius11 =.08f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;


	glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11, y11); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c1 = 0; c1 <= triangleAmount11;c1++) {
			glVertex2f(
		            x11 + (radius11 * cos(c1 *  twicePi / triangleAmount11)),
			    y11 + (radius11 * sin(c1 * twicePi / triangleAmount11))
			);
		}
	glEnd();


	int c2;

	GLfloat x12=.2f; GLfloat y12=.8f; GLfloat radius12 =.08f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x12, y12); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c2 = 0; c2 <= triangleAmount12;c2++) {
			glVertex2f(
		            x12 + (radius12 * cos(c2 *  twicePi / triangleAmount12)),
			    y12 + (radius12 * sin(c2 * twicePi / triangleAmount12))
			);
		}
	glEnd();



	int c3;

	GLfloat x13=.28f; GLfloat y13=.76f; GLfloat radius13 =.08f;
	int triangleAmount13 = 20;

	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x13, y13); // center of circle
		glColor3f(1.0,1.0,1.0);
		for(c3 = 0; c3 <= triangleAmount13;c3++) {
			glVertex2f(
		            x13 + (radius13 * cos(c3 *  twicePi / triangleAmount13)),
			    y13 + (radius13 * sin(c3 * twicePi / triangleAmount13))
			);
		}
	glEnd();

	glPopMatrix();





glColor3f(0.3, 0.0, 0.0); //wheel mill
	glBegin(GL_QUADS);

	glVertex2f(-0.4,.56);
	glVertex2f(-0.4,0.36);
	glVertex2f(-0.36,0.36);
	glVertex2f(-0.36,0.56);
	glEnd();



	 glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axis


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.0);
	glVertex2f(-0.12,-0.08);
	glVertex2f(-0.08,-0.12);

	glEnd();

	glPopMatrix();


    m+=0.2f;

    glLoadIdentity();




	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axis


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.0);
	glVertex2f(-0.04,0.12);
	glVertex2f(-0.08,0.08);

	glEnd();

	glPopMatrix();


    m+=0.2f;

    glLoadIdentity();




	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.4,.56,0);

    glRotatef(m,0,0,.2);//i=how many degree you want to rotate around an axisglColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.12,0.1);
    glVertex2f(0.0,0.0);
	glVertex2f(0.12,0.04);


	glEnd();


glFlush();
}





void handleKeypress(unsigned char key, int q) {

	switch (key) {

case 'z':


   glutDisplayFunc(evening);
   glutPostRedisplay();

    break;



	}
}






int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("My Village");
	glutInitWindowSize(320, 320);

	 glutInitWindowPosition(50, 50);

	 glutDisplayFunc(day);

	 glutTimerFunc(100, update, 0);

    glutIdleFunc(Idle);

    //mouse keyboard
       init();
   glutKeyboardFunc(handleKeypress);

   glutMouseFunc(handleMouse);

   //multiple display
  glutTimerFunc(2500, update5, 0);



	glutMainLoop();
	return 0;
}

