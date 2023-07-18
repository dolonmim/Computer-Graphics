#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 130.0, 0.0, 100.0);
}

void village()
{
    float theta;
    int i, k;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

glColor3f(1, 1, 0.4);//akash
	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(0,200);
	glVertex2d(200,200);
	glVertex2d(200,0);
	glEnd();
	glColor3f(0.6, 1.0, 0.4);//mati
	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(0,56);
	glVertex2d(130,56);
	glVertex2d(130,0);
	glEnd();

	//----- pichoner-jhop
	int x=2,y=56;
 for(k=0;k<21;k++){
  glColor3f(0.1, 0.6, 0.0);
	glBegin(GL_POLYGON);
	for(i=0;i<180;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x+2*cos(theta),y+2*sin(theta));
	}
	glEnd();
	x = x+4;
}
x=113;
for(k=0;k<21;k++){
  glColor3f(0.1, 0.6, 0.0);
	glBegin(GL_POLYGON);
	for(i=0;i<180;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x+2*cos(theta),y+2*sin(theta));
	}
	glEnd();
	x = x+4;
}
//------------------
	glColor3f(0.6, 0.9, 1.0);//nodi
	glBegin(GL_POLYGON);
	glVertex2d(111,0);
	glVertex2d(113,34);
	glVertex2d(108,51);
	glVertex2d(111,56);
	glVertex2d(84,56);
	glVertex2d(86,49);
	glVertex2d(84,43);
	glVertex2d(88,43);
	glVertex2d(90,21);
	glVertex2d(80,0);
	glEnd();
	//--------------------------------------bari ghor
	glColor3f(1, 0.3, 1);
	glBegin(GL_QUADS);
		glVertex2i(46, 57);
		glVertex2i(42, 57);
		glVertex2i(43, 48);
		glVertex2i(47, 58);
	glEnd();
glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
		glVertex2i(47, 60);
		glVertex2i(47, 58);
		glVertex2i(49, 59.5);
		glVertex2i(49, 61);
	glEnd();
glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
		glVertex2i(47, 60);
		glVertex2i(45, 61);
		glVertex2i(43, 60);
		glVertex2i(43, 58);
		glVertex2i(47, 58);
	glEnd();
glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
		glVertex2i(46, 57);
		glVertex2i(45, 56);
		glVertex2i(43, 56);
		glVertex2i(43, 57);
	glEnd();
glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2i(44, 60);
		glVertex2i(46, 60);
		glVertex2i(46, 59);
		glVertex2i(44, 59);
	glEnd();
glColor3f(0.6, 0.3, 0);
	glBegin(GL_POLYGON);
		glVertex2i(45, 61);
		glVertex2i(47.2, 59.9);
		glVertex2i(49.4, 61.3);
		glVertex2i(48, 62);
	glEnd();
	glColor3f(0.6, 0.3, 0);
	glBegin(GL_TRIANGLES);
		glVertex2i(42, 60);
		glVertex2i(43, 60);
		glVertex2i(45, 61);
	glEnd();
glColor3f(0.3, 0, 0);
	glBegin(GL_TRIANGLES);
		glVertex2i(34.5, 54);
		glVertex2i(37, 52);
		glVertex2i(38, 55);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
		glVertex2i(50, 60);
		glVertex2i(45, 55);
		glVertex2i(45, 49);
		glVertex2i(54, 49);
		glVertex2i(54, 55);
	glEnd();
glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2i(48, 57);
		glVertex2i(48, 56);
		glVertex2i(51, 56);
		glVertex2i(51, 57);
	glEnd();
glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2i(48, 53);
		glVertex2i(48, 49);
		glVertex2i(51, 49);
		glVertex2i(51, 53);
	glEnd();
glColor3f(0.9, 0.4, 0.2);
	glBegin(GL_QUADS);
		glVertex2i(50, 60);
		glVertex2i(45, 55);
		glVertex2i(44, 55);
		glVertex2i(49.7, 60.5);
	glEnd();
glColor3f(0.9, 0.4, 0.2);
	glBegin(GL_POLYGON);
		glVertex2i(49.7, 60.5);
		glVertex2i(50, 60);
		glVertex2i(54.5, 54.5);
		glVertex2i(61.5, 59.5);
		glVertex2i(58, 66);
	glEnd();
glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
		glVertex2i(54, 55);
		glVertex2i(54, 49);
		glVertex2i(61, 53);
		glVertex2i(61, 59);
		glVertex2i(54.5, 54.5);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2i(55, 54);
		glVertex2i(57, 55);
		glVertex2i(57, 53);
		glVertex2i(55, 52);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2i(58, 54);
		glVertex2i(58, 56);
		glVertex2i(60, 57);
		glVertex2i(60, 55);
	glEnd();
glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
		glVertex2i(40, 56);
		glVertex2i(43, 54);
		glVertex2i(43, 48);
		glVertex2i(37, 48);
		glVertex2i(37, 54);
	glEnd();
	glColor3f(0.2, 0.0, 1.0);
	glBegin(GL_TRIANGLES);
		glVertex2i(37, 54);
		glVertex2i(40, 56);
		glVertex2i(36, 54);
	glEnd();
glColor3f(0.2, 0, 1);
	glBegin(GL_POLYGON);
		glVertex2i(40, 56);
		glVertex2i(45, 56);
		glVertex2i(44, 55);
		glVertex2i(45, 55);
		glVertex2i(45, 54);
		glVertex2i(43.3, 53.7);
	glEnd();
glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
		glVertex2i(43, 54);
		glVertex2i(43, 48);
		glVertex2i(45, 49);
		glVertex2i(45, 54);
		glVertex2i(43.3, 53.7);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2i(45, 51);
		glVertex2i(45, 52);
		glVertex2i(43.5, 52);
		glVertex2i(43.5, 51);
	glEnd();
glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
		glVertex2i(38, 48);
		glVertex2i(38, 51);
		glVertex2i(39, 52);
		glVertex2i(40, 52);
		glVertex2i(41, 51);
		glVertex2i(41, 48);
	glEnd();
glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
		glVertex2i(37, 52);
		glVertex2i(34.5, 54);
		glVertex2i(32, 52);
		glVertex2i(32, 48);
		glVertex2i(37, 48);
	glEnd();
	glColor3f(0.3, 0, 0);
	glBegin(GL_TRIANGLES);
		glVertex2i(34.5, 54);
		glVertex2i(32, 52);
		glVertex2i(31, 52);
	glEnd();
glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2i(35, 53);
		glVertex2i(35, 52.2);
		glVertex2i(33.7, 52.2);
		glVertex2i(33.7, 53);
	glEnd();
glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2i(34, 48);
		glVertex2i(34, 50);
		glVertex2i(35, 50);
		glVertex2i(35, 48);
	glEnd();
//------- daner gach
glColor3f(0.6, 0.5, 0.2);
	glBegin(GL_POLYGON);
		glVertex2i(69, 62);
		glVertex2i(70, 58);
		glVertex2i(70, 54);
		glVertex2i(69, 50);
		glVertex2i(69, 46);
		glVertex2i(70, 43);
		glVertex2i(68, 43);
		glVertex2i(67, 47);
		glVertex2i(67, 49);
		glVertex2i(69, 57);
		glVertex2i(67.7, 63);
	glEnd();

	glColor3f(0.6, 0.5, 0.2);
	glBegin(GL_QUADS);
		glVertex2i(69, 62);
		glVertex2i(71, 67);
		glVertex2i(70, 67);
		glVertex2i(69, 63);
	glEnd();

glColor3f(0.6, 0.5, 0.2);
	glBegin(GL_POLYGON);
		glVertex2i(69, 62);
		glVertex2i(69, 63);
		glVertex2i(66, 67);
		glVertex2i(65, 67);
		glVertex2i(67.7, 63);
	glEnd();

glColor3f(0.1, 0.7, 0.2);
	glBegin(GL_POLYGON);
		glVertex2i(68, 43);
		glVertex2i(66, 46);
		glVertex2i(66.5, 44);
		glVertex2i(65, 45);
		glVertex2i(66, 43);
	glEnd();

glColor3f(0.1, 0.7, 0.2);
	glBegin(GL_POLYGON);
		glVertex2i(69, 43);
		glVertex2i(70, 46);
		glVertex2i(70, 44);
		glVertex2i(71, 47);
		glVertex2i(71, 43);
	glEnd();
//pata
glColor3f(0.1, 0.7, 0.2);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(73+6*cos(theta),70+6*sin(theta));
	}
	glEnd();
	glColor3f(0.1, 0.7, 0.2);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(63+6*cos(theta),70+6*sin(theta));
	}
	glEnd();

//--bamer gach
glColor3f(0.5, 0.2, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(28, 54);
		glVertex2i(27, 51.5);
		glVertex2i(28, 48);
		glVertex2i(29, 48);
		glVertex2i(29, 51.5);
		glVertex2i(30, 54);
		glVertex2i(31, 57);
		glVertex2i(31, 58);
		glVertex2i(29, 55);

	glEnd();

glColor3f(0.5, 0.2, 0.2);
	glBegin(GL_POLYGON);
		glVertex2i(28, 54);
		glVertex2i(28, 55);
		glVertex2i(25, 58);
		glVertex2i(26, 58);
		glVertex2i(29, 55);
	glEnd();

glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
		glVertex2i(29, 48);
		glVertex2i(30, 49);
		glVertex2i(31, 48);
		glVertex2i(31, 47);
		glVertex2i(25, 47);
		glVertex2i(25, 48);
		glVertex2i(26, 49);
		glVertex2i(27, 48);
	glEnd();
//pata
glColor3f(0.1, 0.7, 0.2);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(24+6*cos(theta),60+6*sin(theta));
	}
	glEnd();
glColor3f(0.1, 0.7, 0.2);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(31+6*cos(theta),63+6*sin(theta));
	}
	glEnd();

//--------------khorer gada
glColor3f(0.9, 0.9, 0);
	glBegin(GL_POLYGON);
		glVertex2i(73, 51);
		glVertex2i(73, 54);
		glVertex2i(74, 57);
		glVertex2i(76, 59);
		glVertex2i(79, 59);
		glVertex2i(81, 57);
		glVertex2i(82, 54);
		glVertex2i(82, 51);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2i(77, 59);
		glVertex2i(77, 61);
		glVertex2i(78, 61);
		glVertex2i(78, 59);
	glEnd();

glColor3f(0.4, 0.7, 0.1);
	glBegin(GL_POLYGON);
		glVertex2i(73, 51);
		glVertex2i(71, 53);
		glVertex2i(71.5, 52);
		glVertex2i(70, 53);
		glVertex2i(72, 51);
	glEnd();
//---------------------------------shurjo

glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	for(i=0;i<180;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(96+7*cos(theta),56+7*sin(theta));
	}
	glEnd();
glColor3f(1,0.4,0);
	glBegin(GL_POLYGON);
	for(i=0;i<180;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(96+6*cos(theta),56+6*sin(theta));
	}
	glEnd();
glColor3f(1,0.4,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(96+6*cos(theta),54.5+0.5*sin(theta));
	}
	glEnd();
glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	for(i=180;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(96+6*cos(theta),53.5+1*sin(theta));
	}
	glEnd();
glColor3f(1, 0, 0);
	glBegin(GL_LINES);
		glVertex2i(96, 64);
		glVertex2i(96, 70);
		glVertex2i(90, 62);
		glVertex2i(87, 66);
		glVertex2i(100, 62);
		glVertex2i(103, 66);
	glEnd();
//------------------nouka
glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
		glVertex2i(101, 38);
		glVertex2i(94, 38);
		glVertex2i(94, 39);
		glVertex2i(101, 39);
	glEnd();
 glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	    glVertex2i(92, 41);
		glVertex2i(94, 38);
		glVertex2i(94, 39);
	glEnd();
glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	    glVertex2i(103, 41);
		glVertex2i(101, 38);
		glVertex2i(101, 39);
	glEnd();
glColor3f(1, 0.6, 0);
	glBegin(GL_POLYGON);
		glVertex2i(100, 39);
		glVertex2i(99, 40);
		glVertex2i(96, 40);
		glVertex2i(95, 39);
	glEnd();
glColor3f(0.7, 0.4, 0.0);
	glBegin(GL_POLYGON);
	for(i=290;i<440;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(100+5*cos(theta),44.5+5*sin(theta));
	}
	glEnd();
glColor3f(0.6, 0.9, 1.0);
	glBegin(GL_POLYGON);
	for(i=290;i<440;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(99+4*cos(theta),44.5+4.5*sin(theta));
	}
	glEnd();
glColor3f(0, 0, 0);
	glBegin(GL_LINES);
		glVertex2i(101, 49);
		glVertex2i(93, 40);
	glEnd();

//-----megh
glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(35+7*cos(theta),80+5*sin(theta));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(43+7*cos(theta),78+5*sin(theta));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(50+7*cos(theta),80+5*sin(theta));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(27+7*cos(theta),80+5*sin(theta));
	}
	glEnd();

//--------------------------------- pakhi
glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);//bam
		glVertex2i(19, 70);
		glVertex2i(20, 71);
		glVertex2i(21, 71);
		glVertex2i(23, 69);
		glVertex2i(21, 70.5);
		glVertex2i(20, 70.5);
		glVertex2i(19, 69.5);
		glVertex2i(18, 70.5);
		glVertex2i(17, 70.5);
		glVertex2i(16, 69);
		glVertex2i(17, 71);
		glVertex2i(18, 71);
	glEnd();
glColor3f(0, 0, 0);

//dan
glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);//dan
		glVertex2i(110, 70);
		glVertex2i(111, 71);
		glVertex2i(112, 71);
		glVertex2i(114, 69);
		glVertex2i(112, 70.5);
		glVertex2i(111, 70.5);
		glVertex2i(110, 69.5);
		glVertex2i(109, 70.5);
		glVertex2i(108, 70.5);
		glVertex2i(107, 69);
		glVertex2i(108, 71);
		glVertex2i(109, 71);
	glEnd();
glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);//danup
		glVertex2i(105, 80);
		glVertex2i(106, 81);
		glVertex2i(107, 81);
		glVertex2i(109, 79);
		glVertex2i(107, 80.5);
		glVertex2i(106, 80.5);
		glVertex2i(105, 79.5);
		glVertex2i(104, 80.5);
		glVertex2i(103, 80.5);
		glVertex2i(102, 79);
		glVertex2i(103, 81);
		glVertex2i(104, 81);
	glEnd();
//--------------dhan barir pashe
x=0,y=53;
 for(k=0;k<9;k++){
  glColor3f(1, 1, 0.0);
	glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x+1, y);
		glVertex2i(x-2, y+5);
	glEnd();
  glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x-1, y);
		glVertex2i(x+2, y+7);
	glEnd();
	x = x+2;
}
x=0,y=51;
 for(k=0;k<9;k++){
  glColor3f(1, 1, 0.0);
	glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x+1, y);
		glVertex2i(x-2, y+5);
	glEnd();
  glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x-1, y);
		glVertex2i(x+2, y+7);
	glEnd();
	x = x+2;
}
//----dhan nodir pore
x=112,y=53;
 for(k=0;k<9;k++){
  glColor3f(1, 1, 0.0);
	glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x+1, y);
		glVertex2i(x-2, y+5);
	glEnd();
  glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x-1, y);
		glVertex2i(x+2, y+7);
	glEnd();
	x = x+2;
}
x=112,y=51;
 for(k=0;k<9;k++){
  glColor3f(1, 1, 0.0);
	glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x+1, y);
		glVertex2i(x-2, y+5);
	glEnd();
  glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x-1, y);
		glVertex2i(x+2, y+7);
	glEnd();
	x = x+2;
}

x=113,y=49;
 for(k=0;k<9;k++){
  glColor3f(1, 1, 0.0);
	glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x+1, y);
		glVertex2i(x-2, y+5);
	glEnd();
  glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x-1, y);
		glVertex2i(x+2, y+7);
	glEnd();
	x = x+2;
}
x=114,y=47;
 for(k=0;k<9;k++){
  glColor3f(1, 1, 0.0);
	glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x+1, y);
		glVertex2i(x-2, y+5);
	glEnd();
  glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x-1, y);
		glVertex2i(x+2, y+7);
	glEnd();
	x = x+2;
}
//---------------------bagan
x=4,y=36;
 for(k=0;k<5;k++){
  glColor3f(0.1, 0.6, 0.0);
	glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x+1, y);
		glVertex2i(x-2, y+10);
	glEnd();
  glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x-1, y);
		glVertex2i(x+2, y+14);
	glEnd();
	x = x+4;
}
x=5,y=33;
 for(k=0;k<4;k++){
  glColor3f(0.1, 0.6, 0.0);
	glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x+1, y);
		glVertex2i(x-2, y+10);
	glEnd();
  glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x-1, y);
		glVertex2i(x+2, y+14);
	glEnd();
	x = x+4;
}
x=4,y=43;
int m=6, n=45;
 for(k=0;k<3;k++){
  glColor3f(1, 0, 0.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x+1.5*cos(theta),y+1.5*sin(theta));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(m+1.5*cos(theta), n+1.5*sin(theta));
	}
	glEnd();
	x = x+5;m= m+6;
}
x=3.5,y=32;
 for(k=0;k<5;k++){
  glColor3f(0.1, 0.6, 0.0);
	glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x+1, y);
		glVertex2i(x-2, y+10);
	glEnd();
  glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
		glVertex2i(x-1, y);
		glVertex2i(x+2, y+14);
	glEnd();
	x = x+4;
}





	glFlush();
	}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(750, 450);					// Set window size
	glutCreateWindow("My Village");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(village);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}


