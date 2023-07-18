#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
#include <stdlib.h>

float sun = 102;
GLfloat i = 0.0f;
//plane
GLfloat position = 0.0f;
GLfloat speed = 0.075f;
//car 1
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.029f;

//car 1.1
GLfloat position6 = 0.0f;
GLfloat speed6 = 0.05f;

//car 2
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.04f;

//car 2.2
GLfloat position7 = 0.0f;
GLfloat speed7 = 0.05f;


//cloud
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.02f;

//Bird
GLfloat position5 = 0.0f;
GLfloat speed5 = 0.025f;

//Rain
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.05f;

float red=0.25;
float green=0.80;
float blue =1;
GLfloat z = 0.0f;

void update(int value) {

  if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update1(int value) {

  if(position1 >1.75)
        position1 = -1.25f;

    position1 += speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update2(int value) {

  if(position2 <-1.25)
        position2 = 1.5f;

    position2 -= speed2;

	glutPostRedisplay();

	glutTimerFunc(100, update2, 0);
}

void update3(int value) {

  if(position3 <-0.25)
        position3 = 00.05f;

    position3 -= speed3;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

void update4(int value) {

  if(position4 >1.0)
        position4 = -1.0f;

    position4 += speed4;

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}

void update5(int value) {

  if(position5 <-1.0)
        position5 = 1.0f;

    position5 -= speed5;

	glutPostRedisplay();


	glutTimerFunc(100, update5, 0);
}

void update6(int value) {

  if(position6 >1.75)
        position6 = -1.25f;

    position6 += speed6;

	glutPostRedisplay();


	glutTimerFunc(100, update6, 0);
}

void update7(int value) {

  if(position7 <-01.250)
        position7 = 1.6f;

    position7 -= speed7;

	glutPostRedisplay();

	glutTimerFunc(100, update7, 0);
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed2 += 0.025f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed2 -= 0.025f;
			}
	glutPostRedisplay();
	}


void SpecialInput(int key, int x, int y)
{
switch(key)
{
 case GLUT_KEY_UP:
    speed=.15;
    break;
 case GLUT_KEY_DOWN:
    speed=.05;
    break;
 case GLUT_KEY_LEFT:
    speed1=.05;
    break;
 case GLUT_KEY_RIGHT:
    speed1=.15;
    break;}
 glutPostRedisplay();
}




void triangle(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2,GLfloat x3, float tred,float tgreen, float tblue)
{
    glBegin(GL_POLYGON);
    glColor3ub(tred,tgreen,tblue);
        glVertex2f(x1, y1);
        glVertex2f(x2, y1);

        glVertex2f(x2, y1);
        glVertex2f(x3, y2);
     glEnd();
}

void triangle1(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2,GLfloat x3, GLfloat y3,float tred,float tgreen, float tblue)
{
    glBegin(GL_POLYGON);
    glColor3ub(tred,tgreen,tblue);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);

        glVertex2f(x2, y2);
        glVertex2f(x3, y3);
     glEnd();
}


void square(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2,float sred,float sgreen, float sblue)
{
    glBegin(GL_POLYGON);
    glColor3ub(sred,sgreen,sblue);

        glVertex2f(x1,y1);
        glVertex2f(x2,y1);

        glVertex2f(x2,y1);
        glVertex2f(x2,y2);

        glVertex2f(x2,y2);
        glVertex2f(x1,y2);

    glEnd();
}

void square1(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2,GLfloat x3,GLfloat y3,GLfloat x4,GLfloat y4,float sred,float sgreen, float sblue)
{
    glBegin(GL_POLYGON);
    glColor3ub(sred,sgreen,sblue);

        glVertex2f(x1,y1);
        glVertex2f(x2,y2);

        glVertex2f(x2,y2);
        glVertex2f(x3,y3);

        glVertex2f(x3,y3);
        glVertex2f(x4,y4);

    glEnd();
}

void pentagon(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2,GLfloat x3,GLfloat y3,float sred,float sgreen, float sblue)
{
    glBegin(GL_POLYGON);
    glColor3ub(sred,sgreen,sblue);

        glVertex2f(x1,y1);
        glVertex2f(x2,y1);

        glVertex2f(x2,y1);
        glVertex2f(x2,y2);

        glVertex2f(x2,y2);
        glVertex2f(x3,y3);

        glVertex2f(x3,y3);
        glVertex2f(x1,y2);

    glEnd();
}

void pentagon1(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2,GLfloat x3,GLfloat y3,GLfloat x4,GLfloat y4,GLfloat x5,GLfloat y5,float sred,float sgreen, float sblue)
{
    glBegin(GL_POLYGON);
    glColor3ub(sred,sgreen,sblue);

        glVertex2f(x1,y1);
        glVertex2f(x2,y2);

        glVertex2f(x2,y2);
        glVertex2f(x2,y3);

        glVertex2f(x3,y3);
        glVertex2f(x4,y4);

        glVertex2f(x4,y4);
        glVertex2f(x5,y5);

    glEnd();
}

void circle(GLfloat x1,GLfloat y1, GLfloat radius1,float cred,float cgreen, float cblue)
{

    int j;

	//GLfloat x1=0.75f; GLfloat y1=.45f; GLfloat radius1 =.04f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(cred, cgreen, cblue);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

}
void myDisplay1(void)

{
  glClearColor(red, green, blue, 1.0);

 // glClear(GL_COLOR_BUFFER_BIT);

}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void myDisplay(void)

{

     myDisplay1();
    //glClearColor(0.25, .80, 1, 1.0); // sets background color to sky
     glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);


     glClear(GL_COLOR_BUFFER_BIT); // clears the screen

//Sun
    circle(1.3f,.70f,.05f,255,sun,0);

//cloud
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
//cloud 1
    //m
    circle(0.72f,.68f,.03f, 255, 255, 204);
   //l
    circle(0.69f,.68f,.02f, 255, 255, 204);
    //r
    circle(0.75f,.68f,.02f, 255, 255, 204);

//cloud 2
    //m
    circle(0.80f,.73f,.03f, 255, 255, 204);
   //l
    circle(0.77f,.73f,.02f, 255, 255, 204);
    //r
    circle(0.83f,.73f,.02f, 255, 255, 204);

////cloud 2
    //m
    circle(0.90f,.70f,.03f, 255, 255, 204);
   //l
    circle(0.86f,.69f,.02f, 255, 255, 204);
    //r
    circle(0.93f,.70f,.02f, 255, 255, 204);

glPopMatrix();

//Bird
glPushMatrix();
    glTranslatef(position5,0.0f, 0.0f);
    //Bird1
    triangle1(.64f,.71f,.68f,.71f,.65f,.72f,102, 102, 51);
    triangle1(.65f,.71f,.69f,.72f,.67f,.73f,102, 102, 51);
    //Bird2
    triangle1(.65f,.68f,.69f,.68f,.66f,.69f,102, 102, 51);
    triangle1(.66f,.68f,.70f,.69f,.68f,.70f,102, 102, 51);
    //Bird3
    triangle1(.68f,.70f,.72f,.70f,.69f,.71f,102, 102, 51);
    triangle1(.69f,.70f,.73f,.71f,.71f,.72f,102, 102, 51);
    glPopMatrix();

//1st base wind wheel
    pentagon(.12f,.25f,.14f,.33f,.13f,.34f,150, 95, 75);


//flag
glBegin(GL_QUADS);
	glColor3ub(21, 28, 38);
	glVertex2f(0.855,0.25);
	glVertex2f(0.855,0.445);
	glVertex2f(0.86,0.445);
	glVertex2f(0.86,0.25);
	glEnd();
glBegin(GL_QUADS);
	glColor3ub(51, 130, 72);
	glVertex2f(0.86,.44);
	glVertex2f(.965,.44);
	glVertex2f(.965,.375);
	glVertex2f(.86,.375);
	glEnd();

	circle(0.906f,.4075f,.019f, 219, 9, 54);


//Tree1_behind_minar
    glTranslatef(-.2,0,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();

glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree2
    glTranslatef(.812,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree3
    glTranslatef(.65,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Tree_asmall_B_minar_left
    glTranslatef(-.09,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree_asmall_B_minar
    glTranslatef(.05,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Tree4_Behind_minar
    glTranslatef(-.54,0,0);
	//glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Buildings

	glTranslatef(.9,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(116, 168, 158);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();

glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

glTranslatef(1.06,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(180, 204, 133);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

glTranslatef(1.22,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(158, 90, 145);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Shahid Minar
//background circle
    circle(0.5f,.45f,.08f, 255,51,0);
//podium1
    square(0.16f,0.25f,.84f,0.26f,153, 102, 51);
//podium2
    square(0.18f,0.27f,.82f,0.28f,153, 102, 51);
//podium3
    square(0.20f,0.29f,.80f,0.30f, 255, 51, 0);

//dead left minar
    square1(0.24f,0.34f,0.28f,0.33f,0.28f,0.34f,0.24f,0.35f, 204, 153, 102);
    square1(0.24f,0.34f+0.06f,0.28f,0.33f+0.06f,0.28f,0.34f+0.06f,0.24f,0.35f+0.06f, 204, 153, 102);
    square1(0.24f,0.34f+0.12f,0.28f,0.33f+0.12f,0.28f,0.34f+0.12f,0.24f,0.35f+0.12f, 204, 153, 102);

    square1(0.23f,0.3f,0.24f,0.3f,0.24f,0.49f,0.23f,0.50f, 255, 255, 255);
    square1(0.24f,0.49f,0.28f,0.48f,0.29f,0.49f,0.23f,0.50f, 255, 255, 255);
    square1(0.28f,0.3f,0.29f,0.3f,0.29f,0.49f,0.28f,0.48f, 255, 255, 255);

// left minar
    square1(0.33f,0.35f,0.39f,0.34f,0.39f,0.35f,0.33f,0.36f, 204, 153, 102);
    square1(0.33f,0.35f+0.05,0.39f,0.34f+0.05,0.39f,0.35f+0.05,0.33f,0.36f+0.05, 204, 153, 102);
    square1(0.33f,0.35f+0.1,0.39f,0.34f+0.1,0.39f,0.35f+0.1,0.33f,0.36f+0.1, 204, 153, 102);

    square1(0.32f,0.30f,0.33f,0.30f,0.33f,0.52f,0.32f,0.53f, 255, 255, 255);
    square1(0.39f,0.30f,0.4f,0.30f,0.4f,0.52f,0.39f,0.51f, 255, 255, 255);
    square1(0.33f,0.52f,0.39f,0.51f,0.4f,0.52f,0.32f,0.53f, 255, 255, 255);

// right minar
    square1(0.33f+.28,0.34f,0.39f+.28,0.35f,0.39f+.28,0.36f,0.33f+.28,0.35f, 204, 153, 102);
    square1(0.33f+.28,0.34f+0.05,0.39f+.28,0.35f+0.05,0.39f+.28,0.36f+0.05,0.33f+.28,0.35f+0.05, 204, 153, 102);
    square1(0.33f+.28,0.34f+0.1,0.39f+.28,0.35f+0.1,0.39f+.28,0.36f+0.1,0.33f+.28,0.35f+0.1, 204, 153, 102);

    square1(0.32f+.28,0.30f,0.33f+.28,0.30f,0.33f+.28,0.51f,0.32f+.28,0.52f, 255, 255, 255);
    square1(0.39f+.28,0.30f,0.4f+.28,0.30f,0.4f+.28,0.53f,0.39f+.28,0.52f, 255, 255, 255);
    square1(.61f,.51f,.67,.52f,.68f,.53,.6f,.52f, 255, 255, 255);

//dead right minar
    square1(0.24f+.48,0.33f,0.28f+.48,0.34f,0.28f+.48,0.35f,0.24f+.48,0.34f, 204, 153, 102);
    square1(0.24f+.48,0.34f+0.05f,0.28f+.48,0.33f+0.07f,0.28f+.48,0.34f+0.07f,0.24f+.48,0.35f+0.05f, 204, 153, 102);
    square1(0.24f+.48,0.34f+0.11f,0.28f+.48,0.33f+0.13f,0.28f+.48,0.34f+0.13f,0.24f+.48,0.35f+0.11f, 204, 153, 102);

    square1(.76f,0.3f,0.77f,0.3f,0.77f,0.5f,0.76f,0.49f, 255, 255, 255);
    square1(.71f,0.3f,0.72f,0.3f,0.72f,0.48f,0.71f,0.49f, 255, 255, 255);
    square1(.72f,0.48f,0.76f,0.49f,0.77f,0.5f,0.71f,0.49f, 255, 255, 255);

//Middle minar

    square(0.44f,0.37f,.56f,.38f, 204, 153, 102);
    square(0.44f,0.37f+0.075,.56f,.38f+0.075, 204, 153, 102);
    square(0.44f,0.37f+0.14,.56f,.38f+0.14, 204, 153, 102);
    square(0.44f,0.37f+0.21,.56f,.38f+0.21, 204, 153, 102);

    square(0.44f,0.3f,.45f,.55f, 255, 255, 255);
    square(0.44f+0.055,0.3f,.45f+0.055,.55f, 255, 255, 255);
    square(0.44f+0.11,0.3f,.45f+0.11,.55f, 255, 255, 255);
    square1(.44f,0.55f,0.45f,0.55f,0.43f,0.62f,0.42f,0.63f, 255, 255, 255);
    square1(.495f,0.55f,0.505f,0.55f,0.5025f,0.62f,0.4975f,0.62f, 255, 255, 255);
    square1(.55f,0.55f,0.56f,0.55f,0.58f,0.63f,0.57f,0.62f, 255, 255, 255);
    square1(.43f,0.62f,0.57f,0.62f,0.58f,0.63f,0.42f,0.63f, 255, 255, 255);


//Road Upper Grass
    square(0.00f,0.23f,1.5f,0.25f, 102, 255, 102);
//Road lower Grass
    square(0.00f,0.00f,1.5f,0.03f, 102, 255, 102);
//road
    square(0.00f,0.03f,1.5f,0.23f, 153, 153, 102);
//road divider 1
    square(0.20f,0.12f,.3f,0.14f, 255, 255, 255);
//road divider 2
    square(0.50f,0.12f,.6f,0.14f, 255, 255, 255);
//road divider 3
    square(0.80f,0.12f,.9f,0.14f, 255, 255, 255);
//road divider 4
    square(1.10f,0.12f,1.2f,0.14f, 255, 255, 255);
//road divider 5
    square(1.40f,0.12f,1.5f,0.14f, 255, 255, 255);


//plane
glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    pentagon1(1.f,0.67f,1.16f,0.67f,1.18f,0.69f,1.02f,.72f,1.0f,0.7f,153, 255, 102);
    square1(1.14f,0.67f,1.2f,0.67f,1.23f,0.71f,1.2f,0.71f,153, 255, 102);
    square1(1.01f,0.67f,1.1f,0.67f,1.18f,0.76f,1.14f,0.76f,153, 255, 102);
glPopMatrix();

//car1
glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

    square(0.3f,0.2f,0.5,0.23f,255, 255, 102);
    square(0.37f,0.23f,0.43,0.26f,255, 255, 102);
    circle(0.35f,0.20,0.0175,0,0,0);
    circle(0.45f,0.20,0.0175,0,0,0);
    triangle1(0.43f,0.23f,0.48f,0.23f,0.43f,0.26f,255, 255, 102);
    triangle1(0.32f,0.23f,0.37f,0.23f,0.37f,0.26f,255, 255, 102);
glPopMatrix();

//car1.1
glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);

    square(0.3f+0.02f,0.2f-0.02f,0.5+0.02f,0.23f-0.02f,0, 204, 102);
    square(0.37f+0.02f,0.23f-0.02f,0.43f+0.02f,0.26f-0.02f,0, 204, 102);
    circle(0.35f+0.02f,0.20-0.02f,0.0175,0,0,0);
    circle(0.45f+0.02f,0.20-0.02f,0.0175,0,0,0);
    triangle1(0.43f+0.02f,0.23f-0.02f,0.48f+0.02f,0.23f-0.02f,0.43f+0.02f,0.26f-0.02f,0, 204, 102);
    triangle1(0.32f+0.02f,0.23f-0.02f,0.37f+0.02f,0.23f-0.02f,0.37f+0.02f,0.26f-0.02f,0, 204, 102);
glPopMatrix();


//car2
glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);

    square(0.01f,0.08f,0.26,0.12f,255, 51, 0);
    square(0.1f,0.12f,0.17,0.16f,255, 51, 0);
    circle(0.07f,0.08,0.02,0,0,0);
    circle(0.19f,0.08,0.02,0,0,0);
    triangle1(0.05f,0.12f,0.1f,0.12,0.1f,0.16f,255, 51, 0);
    triangle1(0.17f,0.12f,0.23f,0.12,0.17f,0.16f,255, 51, 0);
glPopMatrix();


//car2.2
glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);

    square(0.01f+0.02f,0.08f-0.02f,0.26+0.02f-0.02f,0.12f,153, 102, 255);
    square(0.1f+0.02f,0.12f-0.02f,0.17+0.02f,0.16f-0.02f,153, 102, 255);
    circle(0.07f+0.02f,0.08-0.02f,0.02,0,0,0);
    circle(0.19f+0.02f,0.08-0.02f,0.02,0,0,0);
    triangle1(0.05f+0.02f,0.12f-0.02f,0.1f+0.02f,0.12-0.02f,0.1f+0.02f,0.16f-0.02f,153, 102, 255);
    triangle1(0.17f+0.02f,0.12f-0.02f,0.23f+0.02f,0.12-0.02f,0.17f+0.02f,0.16f-0.02f,153, 102, 255);
glPopMatrix();


//road side grass

 pentagon(0.05f,0.02f,0.10f,0.04f,0.075f,0.05f, 0, 153, 51);
 pentagon(0.05f+0.15,0.02f,0.10f+0.15,0.04f,0.075f+0.15,0.05f, 0, 153, 51);
 pentagon(0.05f+0.3,0.02f,0.10f+0.3,0.04f,0.075f+0.3,0.05f, 0, 153, 51);
 pentagon(0.05f+0.45,0.02f,0.10f+0.45,0.04f,0.075f+0.45,0.05f, 0, 153, 51);
 pentagon(0.05f+0.6,0.02f,0.10f+0.6,0.04f,0.075f+00.6,0.05f, 0, 153, 51);
 pentagon(0.05f+0.75,0.02f,0.10f+0.75,0.04f,0.075f+00.75,0.05f, 0, 153, 51);
 pentagon(0.05f+0.75,0.02f,0.10f+0.75,0.04f,0.075f+00.75,0.05f, 0, 153, 51);
 pentagon(0.05f+0.9,0.02f,0.10f+0.9,0.04f,0.075f+00.9,0.05f, 0, 153, 51);
 pentagon(0.05f+1.05,0.02f,0.10f+1.05,0.04f,0.075f+01.05,0.05f, 0, 153, 51);
 pentagon(0.05f+1.20,0.02f,0.10f+1.2,0.04f,0.075f+01.2,0.05f, 0, 153, 51);
 pentagon(0.05f+1.35,0.02f,0.10f+1.35,0.04f,0.075f+01.35,0.05f, 0, 153, 51);

//road side light
circle(0.15f,0.07f,0.02,179, 217, 255);
circle(0.15f+0.3,0.07f,0.02,179, 217, 255);
circle(0.15f+0.6,0.07f,0.02,179, 217, 255);
circle(0.15f+0.9,0.07f,0.02,179, 217, 255);
circle(0.15f+01.2,0.07f,0.02,179, 217, 255);

square(0.13f,0.04f,0.17,0.05f,102, 102, 51);
square(0.13f+.3,0.04f,0.17+.3,0.05f,102, 102, 51);
square(0.13f+.6,0.04f,0.17+.6,0.05f,102, 102, 51);
square(0.13f+.9,0.04f,0.17+.9,0.05f,102, 102, 51);
square(0.13f+1.2,0.04f,0.17+1.2,0.05f,102, 102, 51);

square(0.14f,0.02f,0.16f,0.04f,102, 102, 51);
square(0.14f+0.3,0.02f,0.16f+0.3,0.04f,102, 102, 51);
square(0.14f+0.6,0.02f,0.16f+0.6,0.04f,102, 102, 51);
square(0.14f+0.9,0.02f,0.16f+0.9,0.04f,102, 102, 51);
square(0.14f+01.2,0.02f,0.16f+01.2,0.04f,102, 102, 51);


//1st Wind wheel
glPushMatrix();
	glTranslatef(.13,.34,0);
    glRotatef(z,0.0,0.0,1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.08f, 0.02f);
    glVertex2f( 0.07f, 0.06f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.08f, 0.03f);
    glVertex2f( -0.06f, 0.06f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.02f, -0.09f);
    glVertex2f( 0.02f, -0.09f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
    z+=0.05f;
 glEnd();
//glEnd();
//glEnd();



    glLoadIdentity();

    glLoadIdentity();





  glFlush(); // sends all output to display;


}
void night ()

{

     myDisplay1();
    //glClearColor(0.25, .80, 1, 1.0); // sets background color to sky
     glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);


     glClear(GL_COLOR_BUFFER_BIT); // clears the screen

//Sun
    circle(1.3f,.70f,.05f,255,sun,0);

//cloud
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
//cloud 1
    //m
    circle(0.72f,.68f,.03f, 255, 255, 204);
   //l
    circle(0.69f,.68f,.02f, 255, 255, 204);
    //r
    circle(0.75f,.68f,.02f, 255, 255, 204);

//cloud 2
    //m
    circle(0.80f,.73f,.03f, 255, 255, 204);
   //l
    circle(0.77f,.73f,.02f, 255, 255, 204);
    //r
    circle(0.83f,.73f,.02f, 255, 255, 204);

////cloud 2
    //m
    circle(0.90f,.70f,.03f, 255, 255, 204);
   //l
    circle(0.86f,.69f,.02f, 255, 255, 204);
    //r
    circle(0.93f,.70f,.02f, 255, 255, 204);

glPopMatrix();


//1st base wind wheel
    pentagon(.12f,.25f,.14f,.33f,.13f,.34f,150, 95, 75);


//flag
glBegin(GL_QUADS);
	glColor3ub(21, 28, 38);
	glVertex2f(0.855,0.25);
	glVertex2f(0.855,0.445);
	glVertex2f(0.86,0.445);
	glVertex2f(0.86,0.25);
	glEnd();
glBegin(GL_QUADS);
	glColor3ub(51, 130, 72);
	glVertex2f(0.86,.44);
	glVertex2f(.965,.44);
	glVertex2f(.965,.375);
	glVertex2f(.86,.375);
	glEnd();

	circle(0.906f,.4075f,.019f, 219, 9, 54);


//Tree1_behind_minar
    glTranslatef(-.2,0,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();

glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree2
    glTranslatef(.812,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree3
    glTranslatef(.65,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Tree_asmall_B_minar_left
    glTranslatef(-.09,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree_asmall_B_minar
    glTranslatef(.05,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Tree4_Behind_minar
    glTranslatef(-.54,0,0);
	//glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Buildings

	glTranslatef(.9,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(116, 168, 158);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();

glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

glTranslatef(1.06,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(180, 204, 133);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

glTranslatef(1.22,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(158, 90, 145);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Shahid Minar
//background circle
    circle(0.5f,.45f,.08f, 255,51,0);
//podium1
    square(0.16f,0.25f,.84f,0.26f,153, 102, 51);
//podium2
    square(0.18f,0.27f,.82f,0.28f,153, 102, 51);
//podium3
    square(0.20f,0.29f,.80f,0.30f, 255, 51, 0);

//dead left minar
    square1(0.24f,0.34f,0.28f,0.33f,0.28f,0.34f,0.24f,0.35f, 204, 153, 102);
    square1(0.24f,0.34f+0.06f,0.28f,0.33f+0.06f,0.28f,0.34f+0.06f,0.24f,0.35f+0.06f, 204, 153, 102);
    square1(0.24f,0.34f+0.12f,0.28f,0.33f+0.12f,0.28f,0.34f+0.12f,0.24f,0.35f+0.12f, 204, 153, 102);

    square1(0.23f,0.3f,0.24f,0.3f,0.24f,0.49f,0.23f,0.50f, 255, 255, 255);
    square1(0.24f,0.49f,0.28f,0.48f,0.29f,0.49f,0.23f,0.50f, 255, 255, 255);
    square1(0.28f,0.3f,0.29f,0.3f,0.29f,0.49f,0.28f,0.48f, 255, 255, 255);

// left minar
    square1(0.33f,0.35f,0.39f,0.34f,0.39f,0.35f,0.33f,0.36f, 204, 153, 102);
    square1(0.33f,0.35f+0.05,0.39f,0.34f+0.05,0.39f,0.35f+0.05,0.33f,0.36f+0.05, 204, 153, 102);
    square1(0.33f,0.35f+0.1,0.39f,0.34f+0.1,0.39f,0.35f+0.1,0.33f,0.36f+0.1, 204, 153, 102);

    square1(0.32f,0.30f,0.33f,0.30f,0.33f,0.52f,0.32f,0.53f, 255, 255, 255);
    square1(0.39f,0.30f,0.4f,0.30f,0.4f,0.52f,0.39f,0.51f, 255, 255, 255);
    square1(0.33f,0.52f,0.39f,0.51f,0.4f,0.52f,0.32f,0.53f, 255, 255, 255);

// right minar
    square1(0.33f+.28,0.34f,0.39f+.28,0.35f,0.39f+.28,0.36f,0.33f+.28,0.35f, 204, 153, 102);
    square1(0.33f+.28,0.34f+0.05,0.39f+.28,0.35f+0.05,0.39f+.28,0.36f+0.05,0.33f+.28,0.35f+0.05, 204, 153, 102);
    square1(0.33f+.28,0.34f+0.1,0.39f+.28,0.35f+0.1,0.39f+.28,0.36f+0.1,0.33f+.28,0.35f+0.1, 204, 153, 102);

    square1(0.32f+.28,0.30f,0.33f+.28,0.30f,0.33f+.28,0.51f,0.32f+.28,0.52f, 255, 255, 255);
    square1(0.39f+.28,0.30f,0.4f+.28,0.30f,0.4f+.28,0.53f,0.39f+.28,0.52f, 255, 255, 255);
    square1(.61f,.51f,.67,.52f,.68f,.53,.6f,.52f, 255, 255, 255);

//dead right minar
    square1(0.24f+.48,0.33f,0.28f+.48,0.34f,0.28f+.48,0.35f,0.24f+.48,0.34f, 204, 153, 102);
    square1(0.24f+.48,0.34f+0.05f,0.28f+.48,0.33f+0.07f,0.28f+.48,0.34f+0.07f,0.24f+.48,0.35f+0.05f, 204, 153, 102);
    square1(0.24f+.48,0.34f+0.11f,0.28f+.48,0.33f+0.13f,0.28f+.48,0.34f+0.13f,0.24f+.48,0.35f+0.11f, 204, 153, 102);

    square1(.76f,0.3f,0.77f,0.3f,0.77f,0.5f,0.76f,0.49f, 255, 255, 255);
    square1(.71f,0.3f,0.72f,0.3f,0.72f,0.48f,0.71f,0.49f, 255, 255, 255);
    square1(.72f,0.48f,0.76f,0.49f,0.77f,0.5f,0.71f,0.49f, 255, 255, 255);

//Middle minar

    square(0.44f,0.37f,.56f,.38f, 204, 153, 102);
    square(0.44f,0.37f+0.075,.56f,.38f+0.075, 204, 153, 102);
    square(0.44f,0.37f+0.14,.56f,.38f+0.14, 204, 153, 102);
    square(0.44f,0.37f+0.21,.56f,.38f+0.21, 204, 153, 102);

    square(0.44f,0.3f,.45f,.55f, 255, 255, 255);
    square(0.44f+0.055,0.3f,.45f+0.055,.55f, 255, 255, 255);
    square(0.44f+0.11,0.3f,.45f+0.11,.55f, 255, 255, 255);
    square1(.44f,0.55f,0.45f,0.55f,0.43f,0.62f,0.42f,0.63f, 255, 255, 255);
    square1(.495f,0.55f,0.505f,0.55f,0.5025f,0.62f,0.4975f,0.62f, 255, 255, 255);
    square1(.55f,0.55f,0.56f,0.55f,0.58f,0.63f,0.57f,0.62f, 255, 255, 255);
    square1(.43f,0.62f,0.57f,0.62f,0.58f,0.63f,0.42f,0.63f, 255, 255, 255);

//Road Upper Grass
    square(0.00f,0.23f,1.5f,0.25f, 102, 255, 102);
//Road lower Grass
    square(0.00f,0.00f,1.5f,0.03f, 102, 255, 102);
//road
    square(0.00f,0.03f,1.5f,0.23f, 153, 153, 102);
//road divider 1
    square(0.20f,0.12f,.3f,0.14f, 255, 255, 255);
//road divider 2
    square(0.50f,0.12f,.6f,0.14f, 255, 255, 255);
//road divider 3
    square(0.80f,0.12f,.9f,0.14f, 255, 255, 255);
//road divider 4
    square(1.10f,0.12f,1.2f,0.14f, 255, 255, 255);
//road divider 5
    square(1.40f,0.12f,1.5f,0.14f, 255, 255, 255);


//plane
glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    pentagon1(1.f,0.67f,1.16f,0.67f,1.18f,0.69f,1.02f,.72f,1.0f,0.7f,255, 255, 255);
    square1(1.14f,0.67f,1.2f,0.67f,1.23f,0.71f,1.2f,0.71f,255, 255, 255);
    square1(1.01f,0.67f,1.1f,0.67f,1.18f,0.76f,1.14f,0.76f,255, 255, 255);
glPopMatrix();

//car1
glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

    square(0.3f,0.2f,0.5,0.23f,255, 255, 102);
    square(0.37f,0.23f,0.43,0.26f,255, 255, 102);
    circle(0.35f,0.20,0.0175,0,0,0);
    circle(0.45f,0.20,0.0175,0,0,0);
    triangle1(0.43f,0.23f,0.48f,0.23f,0.43f,0.26f,255, 255, 102);
    triangle1(0.32f,0.23f,0.37f,0.23f,0.37f,0.26f,255, 255, 102);
glPopMatrix();




//car2
glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);

    square(0.01f,0.08f,0.26,0.12f,255, 51, 0);
    square(0.1f,0.12f,0.17,0.16f,255, 51, 0);
    circle(0.07f,0.08,0.02,0,0,0);
    circle(0.19f,0.08,0.02,0,0,0);
    triangle1(0.05f,0.12f,0.1f,0.12,0.1f,0.16f,255, 51, 0);
    triangle1(0.17f,0.12f,0.23f,0.12,0.17f,0.16f,255, 51, 0);
glPopMatrix();


//road side grass

 pentagon(0.05f,0.02f,0.10f,0.04f,0.075f,0.05f, 0, 153, 51);
 pentagon(0.05f+0.15,0.02f,0.10f+0.15,0.04f,0.075f+0.15,0.05f, 0, 153, 51);
 pentagon(0.05f+0.3,0.02f,0.10f+0.3,0.04f,0.075f+0.3,0.05f, 0, 153, 51);
 pentagon(0.05f+0.45,0.02f,0.10f+0.45,0.04f,0.075f+0.45,0.05f, 0, 153, 51);
 pentagon(0.05f+0.6,0.02f,0.10f+0.6,0.04f,0.075f+00.6,0.05f, 0, 153, 51);
 pentagon(0.05f+0.75,0.02f,0.10f+0.75,0.04f,0.075f+00.75,0.05f, 0, 153, 51);
 pentagon(0.05f+0.75,0.02f,0.10f+0.75,0.04f,0.075f+00.75,0.05f, 0, 153, 51);
 pentagon(0.05f+0.9,0.02f,0.10f+0.9,0.04f,0.075f+00.9,0.05f, 0, 153, 51);
 pentagon(0.05f+1.05,0.02f,0.10f+1.05,0.04f,0.075f+01.05,0.05f, 0, 153, 51);
 pentagon(0.05f+1.20,0.02f,0.10f+1.2,0.04f,0.075f+01.2,0.05f, 0, 153, 51);
 pentagon(0.05f+1.35,0.02f,0.10f+1.35,0.04f,0.075f+01.35,0.05f, 0, 153, 51);

//road side light
circle(0.15f,0.07f,0.02,255, 255, 0);
circle(0.15f+0.3,0.07f,0.02,255, 255, 0);
circle(0.15f+0.6,0.07f,0.02,255, 255, 0);
circle(0.15f+0.9,0.07f,0.02,255, 255, 0);
circle(0.15f+01.2,0.07f,0.02,255, 255, 0);

square(0.13f,0.04f,0.17,0.05f,102, 102, 51);
square(0.13f+.3,0.04f,0.17+.3,0.05f,102, 102, 51);
square(0.13f+.6,0.04f,0.17+.6,0.05f,102, 102, 51);
square(0.13f+.9,0.04f,0.17+.9,0.05f,102, 102, 51);
square(0.13f+1.2,0.04f,0.17+1.2,0.05f,102, 102, 51);

square(0.14f,0.02f,0.16f,0.04f,102, 102, 51);
square(0.14f+0.3,0.02f,0.16f+0.3,0.04f,102, 102, 51);
square(0.14f+0.6,0.02f,0.16f+0.6,0.04f,102, 102, 51);
square(0.14f+0.9,0.02f,0.16f+0.9,0.04f,102, 102, 51);
square(0.14f+01.2,0.02f,0.16f+01.2,0.04f,102, 102, 51);






//1st Wind wheel
glPushMatrix();
	glTranslatef(.13,.34,0);
    glRotatef(z,0.0,0.0,1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.08f, 0.02f);
    glVertex2f( 0.07f, 0.06f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.08f, 0.03f);
    glVertex2f( -0.06f, 0.06f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.02f, -0.09f);
    glVertex2f( 0.02f, -0.09f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
    z+=0.05f;
 glEnd();
//glEnd();
//glEnd();



    glLoadIdentity();

    glLoadIdentity();





  glFlush(); // sends all output to display;


}

void Rain()
{

     myDisplay1();
    //glClearColor(0.25, .80, 1, 1.0); // sets background color to sky
     glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);


     glClear(GL_COLOR_BUFFER_BIT); // clears the screen

//Sun
    circle(1.3f,.70f,.05f,255,sun,0);

//cloud
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
//cloud 1
    //m
    circle(0.72f,.68f,.03f, 225, 225, 208);
   //l
    circle(0.69f,.68f,.02f, 225, 225, 208);
    //r
    circle(0.75f,.68f,.02f, 225, 225, 208);

//cloud 2
    //m
    circle(0.80f,.73f,.03f, 225, 225, 208);
   //l
    circle(0.77f,.73f,.02f, 225, 225, 208);
    //r
    circle(0.83f,.73f,.02f, 225, 225, 208);

////cloud 2
    //m
    circle(0.90f,.70f,.03f, 225, 225, 208);
   //l
    circle(0.86f,.69f,.02f, 225, 225, 208);
    //r
    circle(0.93f,.70f,.02f, 225, 225, 208);

glPopMatrix();

//flag
glBegin(GL_QUADS);
	glColor3ub(21, 28, 38);
	glVertex2f(0.855,0.25);
	glVertex2f(0.855,0.445);
	glVertex2f(0.86,0.445);
	glVertex2f(0.86,0.25);
	glEnd();
glBegin(GL_QUADS);
	glColor3ub(51, 130, 72);
	glVertex2f(0.86,.44);
	glVertex2f(.965,.44);
	glVertex2f(.965,.375);
	glVertex2f(.86,.375);
	glEnd();

	circle(0.906f,.4075f,.019f, 219, 9, 54);


//Tree1_behind_minar
    glTranslatef(-.2,0,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();

glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree2
    glTranslatef(.812,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree3
    glTranslatef(.65,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree_asmall_B_minar_left
    glTranslatef(-.09,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree_asmall_B_minar
    glTranslatef(.05,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Tree4_Behind_minar
    glTranslatef(-.54,0,0);
	//glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Buildings

	glTranslatef(.9,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(116, 168, 158);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();

glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

glTranslatef(1.06,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(180, 204, 133);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

glTranslatef(1.22,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(158, 90, 145);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);


//Shahid Minar
//background circle
    circle(0.5f,.45f,.08f, 255,51,0);
//podium1
    square(0.16f,0.25f,.84f,0.26f,153, 102, 51);
//podium2
    square(0.18f,0.27f,.82f,0.28f,153, 102, 51);
//podium3
    square(0.20f,0.29f,.80f,0.30f, 255, 51, 0);
//1st base wind wheel
    pentagon(.12f,.25f,.14f,.33f,.13f,.34f,150, 95, 75);

//dead left minar
    square1(0.24f,0.34f,0.28f,0.33f,0.28f,0.34f,0.24f,0.35f, 204, 153, 102);
    square1(0.24f,0.34f+0.06f,0.28f,0.33f+0.06f,0.28f,0.34f+0.06f,0.24f,0.35f+0.06f, 204, 153, 102);
    square1(0.24f,0.34f+0.12f,0.28f,0.33f+0.12f,0.28f,0.34f+0.12f,0.24f,0.35f+0.12f, 204, 153, 102);

    square1(0.23f,0.3f,0.24f,0.3f,0.24f,0.49f,0.23f,0.50f, 255, 255, 255);
    square1(0.24f,0.49f,0.28f,0.48f,0.29f,0.49f,0.23f,0.50f, 255, 255, 255);
    square1(0.28f,0.3f,0.29f,0.3f,0.29f,0.49f,0.28f,0.48f, 255, 255, 255);

// left minar
    square1(0.33f,0.35f,0.39f,0.34f,0.39f,0.35f,0.33f,0.36f, 204, 153, 102);
    square1(0.33f,0.35f+0.05,0.39f,0.34f+0.05,0.39f,0.35f+0.05,0.33f,0.36f+0.05, 204, 153, 102);
    square1(0.33f,0.35f+0.1,0.39f,0.34f+0.1,0.39f,0.35f+0.1,0.33f,0.36f+0.1, 204, 153, 102);

    square1(0.32f,0.30f,0.33f,0.30f,0.33f,0.52f,0.32f,0.53f, 255, 255, 255);
    square1(0.39f,0.30f,0.4f,0.30f,0.4f,0.52f,0.39f,0.51f, 255, 255, 255);
    square1(0.33f,0.52f,0.39f,0.51f,0.4f,0.52f,0.32f,0.53f, 255, 255, 255);

// right minar
    square1(0.33f+.28,0.34f,0.39f+.28,0.35f,0.39f+.28,0.36f,0.33f+.28,0.35f, 204, 153, 102);
    square1(0.33f+.28,0.34f+0.05,0.39f+.28,0.35f+0.05,0.39f+.28,0.36f+0.05,0.33f+.28,0.35f+0.05, 204, 153, 102);
    square1(0.33f+.28,0.34f+0.1,0.39f+.28,0.35f+0.1,0.39f+.28,0.36f+0.1,0.33f+.28,0.35f+0.1, 204, 153, 102);

    square1(0.32f+.28,0.30f,0.33f+.28,0.30f,0.33f+.28,0.51f,0.32f+.28,0.52f, 255, 255, 255);
    square1(0.39f+.28,0.30f,0.4f+.28,0.30f,0.4f+.28,0.53f,0.39f+.28,0.52f, 255, 255, 255);
    square1(.61f,.51f,.67,.52f,.68f,.53,.6f,.52f, 255, 255, 255);

//dead right minar
    square1(0.24f+.48,0.33f,0.28f+.48,0.34f,0.28f+.48,0.35f,0.24f+.48,0.34f, 204, 153, 102);
    square1(0.24f+.48,0.34f+0.05f,0.28f+.48,0.33f+0.07f,0.28f+.48,0.34f+0.07f,0.24f+.48,0.35f+0.05f, 204, 153, 102);
    square1(0.24f+.48,0.34f+0.11f,0.28f+.48,0.33f+0.13f,0.28f+.48,0.34f+0.13f,0.24f+.48,0.35f+0.11f, 204, 153, 102);

    square1(.76f,0.3f,0.77f,0.3f,0.77f,0.5f,0.76f,0.49f, 255, 255, 255);
    square1(.71f,0.3f,0.72f,0.3f,0.72f,0.48f,0.71f,0.49f, 255, 255, 255);
    square1(.72f,0.48f,0.76f,0.49f,0.77f,0.5f,0.71f,0.49f, 255, 255, 255);

//Middle minar

    square(0.44f,0.37f,.56f,.38f, 204, 153, 102);
    square(0.44f,0.37f+0.075,.56f,.38f+0.075, 204, 153, 102);
    square(0.44f,0.37f+0.14,.56f,.38f+0.14, 204, 153, 102);
    square(0.44f,0.37f+0.21,.56f,.38f+0.21, 204, 153, 102);

    square(0.44f,0.3f,.45f,.55f, 255, 255, 255);
    square(0.44f+0.055,0.3f,.45f+0.055,.55f, 255, 255, 255);
    square(0.44f+0.11,0.3f,.45f+0.11,.55f, 255, 255, 255);
    square1(.44f,0.55f,0.45f,0.55f,0.43f,0.62f,0.42f,0.63f, 255, 255, 255);
    square1(.495f,0.55f,0.505f,0.55f,0.5025f,0.62f,0.4975f,0.62f, 255, 255, 255);
    square1(.55f,0.55f,0.56f,0.55f,0.58f,0.63f,0.57f,0.62f, 255, 255, 255);
    square1(.43f,0.62f,0.57f,0.62f,0.58f,0.63f,0.42f,0.63f, 255, 255, 255);


//Road Upper Grass
    square(0.00f,0.23f,1.5f,0.25f, 102, 255, 102);
//Road lower Grass
    square(0.00f,0.00f,1.5f,0.03f, 102, 255, 102);
//road
    square(0.00f,0.03f,1.5f,0.23f, 153, 153, 102);
//road divider 1
    square(0.20f,0.12f,.3f,0.14f, 255, 255, 255);
//road divider 2
    square(0.50f,0.12f,.6f,0.14f, 255, 255, 255);
//road divider 3
    square(0.80f,0.12f,.9f,0.14f, 255, 255, 255);
//road divider 4
    square(1.10f,0.12f,1.2f,0.14f, 255, 255, 255);
//road divider 5
    square(1.40f,0.12f,1.5f,0.14f, 255, 255, 255);






//car1
glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

    square(0.3f,0.2f,0.5,0.23f,255, 255, 102);
    square(0.37f,0.23f,0.43,0.26f,255, 255, 102);
    circle(0.35f,0.20,0.0175,0,0,0);
    circle(0.45f,0.20,0.0175,0,0,0);
    triangle1(0.43f,0.23f,0.48f,0.23f,0.43f,0.26f,255, 255, 102);
    triangle1(0.32f,0.23f,0.37f,0.23f,0.37f,0.26f,255, 255, 102);
glPopMatrix();


//car2
glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);

    square(0.01f,0.08f,0.26,0.12f,255, 51, 0);
    square(0.1f,0.12f,0.17,0.16f,255, 51, 0);
    circle(0.07f,0.08,0.02,0,0,0);
    circle(0.19f,0.08,0.02,0,0,0);
    triangle1(0.05f,0.12f,0.1f,0.12,0.1f,0.16f,255, 51, 0);
    triangle1(0.17f,0.12f,0.23f,0.12,0.17f,0.16f,255, 51, 0);
glPopMatrix();

//road side grass

 pentagon(0.05f,0.02f,0.10f,0.04f,0.075f,0.05f, 0, 153, 51);
 pentagon(0.05f+0.15,0.02f,0.10f+0.15,0.04f,0.075f+0.15,0.05f, 0, 153, 51);
 pentagon(0.05f+0.3,0.02f,0.10f+0.3,0.04f,0.075f+0.3,0.05f, 0, 153, 51);
 pentagon(0.05f+0.45,0.02f,0.10f+0.45,0.04f,0.075f+0.45,0.05f, 0, 153, 51);
 pentagon(0.05f+0.6,0.02f,0.10f+0.6,0.04f,0.075f+00.6,0.05f, 0, 153, 51);
 pentagon(0.05f+0.75,0.02f,0.10f+0.75,0.04f,0.075f+00.75,0.05f, 0, 153, 51);
 pentagon(0.05f+0.75,0.02f,0.10f+0.75,0.04f,0.075f+00.75,0.05f, 0, 153, 51);
 pentagon(0.05f+0.9,0.02f,0.10f+0.9,0.04f,0.075f+00.9,0.05f, 0, 153, 51);
 pentagon(0.05f+1.05,0.02f,0.10f+1.05,0.04f,0.075f+01.05,0.05f, 0, 153, 51);
 pentagon(0.05f+1.20,0.02f,0.10f+1.2,0.04f,0.075f+01.2,0.05f, 0, 153, 51);
 pentagon(0.05f+1.35,0.02f,0.10f+1.35,0.04f,0.075f+01.35,0.05f, 0, 153, 51);

//road side light
circle(0.15f,0.07f,0.02,230, 230, 0);
circle(0.15f+0.3,0.07f,0.02,230, 230, 0);
circle(0.15f+0.6,0.07f,0.02,230, 230, 0);
circle(0.15f+0.9,0.07f,0.02,230, 230, 0);
circle(0.15f+01.2,0.07f,0.02,230, 230, 0);

square(0.13f,0.04f,0.17,0.05f,102, 102, 51);
square(0.13f+.3,0.04f,0.17+.3,0.05f,102, 102, 51);
square(0.13f+.6,0.04f,0.17+.6,0.05f,102, 102, 51);
square(0.13f+.9,0.04f,0.17+.9,0.05f,102, 102, 51);
square(0.13f+1.2,0.04f,0.17+1.2,0.05f,102, 102, 51);

square(0.14f,0.02f,0.16f,0.04f,102, 102, 51);
square(0.14f+0.3,0.02f,0.16f+0.3,0.04f,102, 102, 51);
square(0.14f+0.6,0.02f,0.16f+0.6,0.04f,102, 102, 51);
square(0.14f+0.9,0.02f,0.16f+0.9,0.04f,102, 102, 51);
square(0.14f+01.2,0.02f,0.16f+01.2,0.04f,102, 102, 51);


//Rain
    glPushMatrix();
	glTranslatef(0,position3,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.12,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();

    glTranslatef(-.025,-.06,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.025,-.06,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.025,-.06,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.025,-.06,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.025,-.06,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.025,-.06,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.025,-.06,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();
    glTranslatef(-.06,0,0);
    glBegin(GL_LINES);
    glColor3ub(232, 232, 232);
    glVertex2f(0.1,0.78);
    glVertex2f(0.11,0.76);
    glEnd();


    glPopMatrix();



//1st Wind wheel
glPushMatrix();
	glTranslatef(.13,.34,0);
    glRotatef(z,0.0,0.0,1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.08f, 0.02f);
    glVertex2f( 0.07f, 0.06f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.08f, 0.03f);
    glVertex2f( -0.06f, 0.06f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.02f, -0.09f);
    glVertex2f( 0.02f, -0.09f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
    z+=0.05f;
 glEnd();
//glEnd();
//glEnd();



    glLoadIdentity();

    glLoadIdentity();





  glFlush(); // sends all output to display;


}

void evening ()

{

     myDisplay1();
    //glClearColor(0.25, .80, 1, 1.0); // sets background color to sky
     glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);


     glClear(GL_COLOR_BUFFER_BIT); // clears the screen

//Sun
    circle(1.3f,.70f,.05f,255,sun,0);

//cloud
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
//cloud 1
    //m
    circle(0.72f,.68f,.03f, 255, 255, 204);
   //l
    circle(0.69f,.68f,.02f, 255, 255, 204);
    //r
    circle(0.75f,.68f,.02f, 255, 255, 204);

//cloud 2
    //m
    circle(0.80f,.73f,.03f, 255, 255, 204);
   //l
    circle(0.77f,.73f,.02f, 255, 255, 204);
    //r
    circle(0.83f,.73f,.02f, 255, 255, 204);

////cloud 2
    //m
    circle(0.90f,.70f,.03f, 255, 255, 204);
   //l
    circle(0.86f,.69f,.02f, 255, 255, 204);
    //r
    circle(0.93f,.70f,.02f, 255, 255, 204);

glPopMatrix();

//Bird
glPushMatrix();
    glTranslatef(position5,0.0f, 0.0f);
    //Bird1
    triangle1(.64f,.71f,.68f,.71f,.65f,.72f,102, 102, 51);
    triangle1(.65f,.71f,.69f,.72f,.67f,.73f,102, 102, 51);
    //Bird2
    triangle1(.65f,.68f,.69f,.68f,.66f,.69f,102, 102, 51);
    triangle1(.66f,.68f,.70f,.69f,.68f,.70f,102, 102, 51);
    //Bird3
    triangle1(.68f,.70f,.72f,.70f,.69f,.71f,102, 102, 51);
    triangle1(.69f,.70f,.73f,.71f,.71f,.72f,102, 102, 51);
    glPopMatrix();


//flag
glBegin(GL_QUADS);
	glColor3ub(21, 28, 38);
	glVertex2f(0.855,0.25);
	glVertex2f(0.855,0.445);
	glVertex2f(0.86,0.445);
	glVertex2f(0.86,0.25);
	glEnd();
glBegin(GL_QUADS);
	glColor3ub(51, 130, 72);
	glVertex2f(0.86,.44);
	glVertex2f(.965,.44);
	glVertex2f(.965,.375);
	glVertex2f(.86,.375);
	glEnd();

	circle(0.906f,.4075f,.019f, 219, 9, 54);


//Tree1_behind_minar
    glTranslatef(-.2,0,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();

glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree2
    glTranslatef(.812,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree3
    glTranslatef(.65,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Tree_asmall_B_minar_left
    glTranslatef(-.09,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);
//Tree_asmall_B_minar
    glTranslatef(.05,.1,0);
	glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Tree4_Behind_minar
    glTranslatef(-.54,0,0);
	//glScalef(.6,.6,0);
    glBegin(GL_QUADS);
	glColor3ub(96, 52, 6);
	glVertex2f(0.86,0.25);
	glVertex2f(0.86,0.35);
	glVertex2f(0.87,0.35);
	glVertex2f(0.87,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.32);
	glVertex2f(.865,0.40);
	glVertex2f(0.9,0.32);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.34);
	glVertex2f(.865,0.42);
	glVertex2f(0.9,0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(63, 186, 92);
	glVertex2f(.83,.36);
	glVertex2f(.865,0.44);
	glVertex2f(0.9,0.36);
    glEnd();
    glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Buildings

	glTranslatef(.9,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(116, 168, 158);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();

glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

glTranslatef(1.06,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(180, 204, 133);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

glTranslatef(1.22,0.32,0);
	glScalef(.27,.27,0);
    glBegin(GL_QUADS);
	glColor3ub(158, 90, 145);
	glVertex2f(.5,.9);
	glVertex2f(.5,-.3);
	glVertex2f(.9,-.3);
	glVertex2f(.9,.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.6,-.17);
	glVertex2f(.6,-.3);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.17);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(96, 52, 6);
	glVertex2f(.6,-.17);
	glVertex2f(.7,-.1);
	glVertex2f(.8,-.17);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.85);
	glVertex2f(.55,.75);
	glVertex2f(.67,.75);
	glVertex2f(.67,.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.85);
	glVertex2f(.73,.75);
	glVertex2f(.85,.75);
	glVertex2f(.85,.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.65);
	glVertex2f(.55,.55);
	glVertex2f(.67,.55);
	glVertex2f(.67,.65);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.65);
	glVertex2f(.73,.55);
	glVertex2f(.85,.55);
	glVertex2f(.85,.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.45);
	glVertex2f(.55,.35);
	glVertex2f(.67,.35);
	glVertex2f(.67,.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.45);
	glVertex2f(.73,.35);
	glVertex2f(.85,.35);
	glVertex2f(.85,.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.25);
	glVertex2f(.55,.15);
	glVertex2f(.67,.15);
	glVertex2f(.67,.25);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.25);
	glVertex2f(.73,.15);
	glVertex2f(.85,.15);
	glVertex2f(.85,.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.55,.05);
	glVertex2f(.55,-.05);
	glVertex2f(.67,-.05);
	glVertex2f(.67,.05);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.73,.05);
	glVertex2f(.73,-.05);
	glVertex2f(.85,-.05);
	glVertex2f(.85,.05);
	glEnd();
	glLoadIdentity();
glOrtho(0.0, 1.5, 0.0, 0.80, -10.0, 10.0);

//Shahid Minar
//background circle
    circle(0.5f,.45f,.08f, 255,51,0);
//podium1
    square(0.16f,0.25f,.84f,0.26f,153, 102, 51);
//podium2
    square(0.18f,0.27f,.82f,0.28f,153, 102, 51);
//podium3
    square(0.20f,0.29f,.80f,0.30f, 255, 51, 0);

//dead left minar
    square1(0.24f,0.34f,0.28f,0.33f,0.28f,0.34f,0.24f,0.35f, 204, 153, 102);
    square1(0.24f,0.34f+0.06f,0.28f,0.33f+0.06f,0.28f,0.34f+0.06f,0.24f,0.35f+0.06f, 204, 153, 102);
    square1(0.24f,0.34f+0.12f,0.28f,0.33f+0.12f,0.28f,0.34f+0.12f,0.24f,0.35f+0.12f, 204, 153, 102);

    square1(0.23f,0.3f,0.24f,0.3f,0.24f,0.49f,0.23f,0.50f, 255, 255, 255);
    square1(0.24f,0.49f,0.28f,0.48f,0.29f,0.49f,0.23f,0.50f, 255, 255, 255);
    square1(0.28f,0.3f,0.29f,0.3f,0.29f,0.49f,0.28f,0.48f, 255, 255, 255);

// left minar
    square1(0.33f,0.35f,0.39f,0.34f,0.39f,0.35f,0.33f,0.36f, 204, 153, 102);
    square1(0.33f,0.35f+0.05,0.39f,0.34f+0.05,0.39f,0.35f+0.05,0.33f,0.36f+0.05, 204, 153, 102);
    square1(0.33f,0.35f+0.1,0.39f,0.34f+0.1,0.39f,0.35f+0.1,0.33f,0.36f+0.1, 204, 153, 102);

    square1(0.32f,0.30f,0.33f,0.30f,0.33f,0.52f,0.32f,0.53f, 255, 255, 255);
    square1(0.39f,0.30f,0.4f,0.30f,0.4f,0.52f,0.39f,0.51f, 255, 255, 255);
    square1(0.33f,0.52f,0.39f,0.51f,0.4f,0.52f,0.32f,0.53f, 255, 255, 255);

// right minar
    square1(0.33f+.28,0.34f,0.39f+.28,0.35f,0.39f+.28,0.36f,0.33f+.28,0.35f, 204, 153, 102);
    square1(0.33f+.28,0.34f+0.05,0.39f+.28,0.35f+0.05,0.39f+.28,0.36f+0.05,0.33f+.28,0.35f+0.05, 204, 153, 102);
    square1(0.33f+.28,0.34f+0.1,0.39f+.28,0.35f+0.1,0.39f+.28,0.36f+0.1,0.33f+.28,0.35f+0.1, 204, 153, 102);

    square1(0.32f+.28,0.30f,0.33f+.28,0.30f,0.33f+.28,0.51f,0.32f+.28,0.52f, 255, 255, 255);
    square1(0.39f+.28,0.30f,0.4f+.28,0.30f,0.4f+.28,0.53f,0.39f+.28,0.52f, 255, 255, 255);
    square1(.61f,.51f,.67,.52f,.68f,.53,.6f,.52f, 255, 255, 255);

//dead right minar
    square1(0.24f+.48,0.33f,0.28f+.48,0.34f,0.28f+.48,0.35f,0.24f+.48,0.34f, 204, 153, 102);
    square1(0.24f+.48,0.34f+0.05f,0.28f+.48,0.33f+0.07f,0.28f+.48,0.34f+0.07f,0.24f+.48,0.35f+0.05f, 204, 153, 102);
    square1(0.24f+.48,0.34f+0.11f,0.28f+.48,0.33f+0.13f,0.28f+.48,0.34f+0.13f,0.24f+.48,0.35f+0.11f, 204, 153, 102);

    square1(.76f,0.3f,0.77f,0.3f,0.77f,0.5f,0.76f,0.49f, 255, 255, 255);
    square1(.71f,0.3f,0.72f,0.3f,0.72f,0.48f,0.71f,0.49f, 255, 255, 255);
    square1(.72f,0.48f,0.76f,0.49f,0.77f,0.5f,0.71f,0.49f, 255, 255, 255);

//Middle minar

    square(0.44f,0.37f,.56f,.38f, 204, 153, 102);
    square(0.44f,0.37f+0.075,.56f,.38f+0.075, 204, 153, 102);
    square(0.44f,0.37f+0.14,.56f,.38f+0.14, 204, 153, 102);
    square(0.44f,0.37f+0.21,.56f,.38f+0.21, 204, 153, 102);

    square(0.44f,0.3f,.45f,.55f, 255, 255, 255);
    square(0.44f+0.055,0.3f,.45f+0.055,.55f, 255, 255, 255);
    square(0.44f+0.11,0.3f,.45f+0.11,.55f, 255, 255, 255);
    square1(.44f,0.55f,0.45f,0.55f,0.43f,0.62f,0.42f,0.63f, 255, 255, 255);
    square1(.495f,0.55f,0.505f,0.55f,0.5025f,0.62f,0.4975f,0.62f, 255, 255, 255);
    square1(.55f,0.55f,0.56f,0.55f,0.58f,0.63f,0.57f,0.62f, 255, 255, 255);
    square1(.43f,0.62f,0.57f,0.62f,0.58f,0.63f,0.42f,0.63f, 255, 255, 255);


//Road Upper Grass
    square(0.00f,0.23f,1.5f,0.25f, 102, 255, 102);
//Road lower Grass
    square(0.00f,0.00f,1.5f,0.03f, 102, 255, 102);
//road
    square(0.00f,0.03f,1.5f,0.23f, 153, 153, 102);
//road divider 1
    square(0.20f,0.12f,.3f,0.14f, 255, 255, 255);
//road divider 2
    square(0.50f,0.12f,.6f,0.14f, 255, 255, 255);
//road divider 3
    square(0.80f,0.12f,.9f,0.14f, 255, 255, 255);
//road divider 4
    square(1.10f,0.12f,1.2f,0.14f, 255, 255, 255);
//road divider 5
    square(1.40f,0.12f,1.5f,0.14f, 255, 255, 255);
//1st base wind wheel
    pentagon(.12f,.25f,.14f,.33f,.13f,.34f,150, 95, 75);



//car1
glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

    square(0.3f,0.2f,0.5,0.23f,255, 255, 102);
    square(0.37f,0.23f,0.43,0.26f,255, 255, 102);
    circle(0.35f,0.20,0.0175,0,0,0);
    circle(0.45f,0.20,0.0175,0,0,0);
    triangle1(0.43f,0.23f,0.48f,0.23f,0.43f,0.26f,255, 255, 102);
    triangle1(0.32f,0.23f,0.37f,0.23f,0.37f,0.26f,255, 255, 102);
glPopMatrix();

//car1.1
glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);

    square(0.3f+0.02f,0.2f-0.02f,0.5+0.02f,0.23f-0.02f,0, 204, 102);
    square(0.37f+0.02f,0.23f-0.02f,0.43f+0.02f,0.26f-0.02f,0, 204, 102);
    circle(0.35f+0.02f,0.20-0.02f,0.0175,0,0,0);
    circle(0.45f+0.02f,0.20-0.02f,0.0175,0,0,0);
    triangle1(0.43f+0.02f,0.23f-0.02f,0.48f+0.02f,0.23f-0.02f,0.43f+0.02f,0.26f-0.02f,0, 204, 102);
    triangle1(0.32f+0.02f,0.23f-0.02f,0.37f+0.02f,0.23f-0.02f,0.37f+0.02f,0.26f-0.02f,0, 204, 102);
glPopMatrix();


//car2
glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);

    square(0.01f,0.08f,0.26,0.12f,255, 51, 0);
    square(0.1f,0.12f,0.17,0.16f,255, 51, 0);
    circle(0.07f,0.08,0.02,0,0,0);
    circle(0.19f,0.08,0.02,0,0,0);
    triangle1(0.05f,0.12f,0.1f,0.12,0.1f,0.16f,255, 51, 0);
    triangle1(0.17f,0.12f,0.23f,0.12,0.17f,0.16f,255, 51, 0);
glPopMatrix();

//road side grass

 pentagon(0.05f,0.02f,0.10f,0.04f,0.075f,0.05f, 0, 153, 51);
 pentagon(0.05f+0.15,0.02f,0.10f+0.15,0.04f,0.075f+0.15,0.05f, 0, 153, 51);
 pentagon(0.05f+0.3,0.02f,0.10f+0.3,0.04f,0.075f+0.3,0.05f, 0, 153, 51);
 pentagon(0.05f+0.45,0.02f,0.10f+0.45,0.04f,0.075f+0.45,0.05f, 0, 153, 51);
 pentagon(0.05f+0.6,0.02f,0.10f+0.6,0.04f,0.075f+00.6,0.05f, 0, 153, 51);
 pentagon(0.05f+0.75,0.02f,0.10f+0.75,0.04f,0.075f+00.75,0.05f, 0, 153, 51);
 pentagon(0.05f+0.75,0.02f,0.10f+0.75,0.04f,0.075f+00.75,0.05f, 0, 153, 51);
 pentagon(0.05f+0.9,0.02f,0.10f+0.9,0.04f,0.075f+00.9,0.05f, 0, 153, 51);
 pentagon(0.05f+1.05,0.02f,0.10f+1.05,0.04f,0.075f+01.05,0.05f, 0, 153, 51);
 pentagon(0.05f+1.20,0.02f,0.10f+1.2,0.04f,0.075f+01.2,0.05f, 0, 153, 51);
 pentagon(0.05f+1.35,0.02f,0.10f+1.35,0.04f,0.075f+01.35,0.05f, 0, 153, 51);

//road side light
circle(0.15f,0.07f,0.02,230, 230, 0);
circle(0.15f+0.3,0.07f,0.02,230, 230, 0);
circle(0.15f+0.6,0.07f,0.02,230, 230, 0);
circle(0.15f+0.9,0.07f,0.02,230, 230, 0);
circle(0.15f+01.2,0.07f,0.02,230, 230, 0);

square(0.13f,0.04f,0.17,0.05f,102, 102, 51);
square(0.13f+.3,0.04f,0.17+.3,0.05f,102, 102, 51);
square(0.13f+.6,0.04f,0.17+.6,0.05f,102, 102, 51);
square(0.13f+.9,0.04f,0.17+.9,0.05f,102, 102, 51);
square(0.13f+1.2,0.04f,0.17+1.2,0.05f,102, 102, 51);

square(0.14f,0.02f,0.16f,0.04f,102, 102, 51);
square(0.14f+0.3,0.02f,0.16f+0.3,0.04f,102, 102, 51);
square(0.14f+0.6,0.02f,0.16f+0.6,0.04f,102, 102, 51);
square(0.14f+0.9,0.02f,0.16f+0.9,0.04f,102, 102, 51);
square(0.14f+01.2,0.02f,0.16f+01.2,0.04f,102, 102, 51);



//1st Wind wheel
glPushMatrix();
	glTranslatef(.13,.34,0);
    glRotatef(z,0.0,0.0,1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.08f, 0.02f);
    glVertex2f( 0.07f, 0.06f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.08f, 0.03f);
    glVertex2f( -0.06f, 0.06f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 240, 225);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.02f, -0.09f);
    glVertex2f( 0.02f, -0.09f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
    z+=0.05f;
 glEnd();
//glEnd();
//glEnd();



    glLoadIdentity();

    glLoadIdentity();





  glFlush(); // sends all output to display;


}

void handleKeypress1(unsigned char key, int x, int y) {
	switch (key) {

case 'n':
    red = 0.20f;
    green = 0.0f;
    blue = 0.10f;
    sun = 204;
    glutDisplayFunc(night);
    break;

case 'e':
    red = 0.50f;
    green = 0.60f;
    blue = 0.90;
    sun = 160;
    glutDisplayFunc(evening);
    break;

case 'd':
    red = 0.25f;
    green = 0.80f;
    blue = 1;
    sun = 102;
    glutDisplayFunc(myDisplay);
    break;

case 'c':
    speed1 = 0.0f;
    break;
case 'v':
    speed1 = 0.05f;
    break;
case 'r':

    sun = 140;

    glutDisplayFunc(Rain);
    break;
case 'o':
    glutDisplayFunc(myDisplay);
    break;

glutPostRedisplay();
	}
}


int main (int argc, char **argv)
{

     glutInit (&argc, argv); // to initialize the toolkit;

     glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); // sets the display mode

     glutInitWindowSize (1000, 700); // sets the window size

     glutInitWindowPosition (10, 10); // sets the starting position for the window

     glutCreateWindow ("Shaheed Minar"); // creates the window and sets the title

 // Register display callback handler for window re-paint
     glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.

     glutDisplayFunc (myDisplay);
     glutKeyboardFunc(handleKeypress1);
     glutMouseFunc(handleMouse);
     glutSpecialFunc(SpecialInput);
     glutTimerFunc(100, update, 0);
     glutTimerFunc(100, update1, 0);
     glutTimerFunc(100, update2, 0);
     glutTimerFunc(100, update3, 0);
     glutTimerFunc(100, update4, 0);
     glutTimerFunc(100, update5, 0);
     glutTimerFunc(100, update6, 0);
     glutTimerFunc(100, update7, 0);

     glutMainLoop(); // go into a loop until event occurs
     return 0;
}
