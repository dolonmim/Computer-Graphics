#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-1.0f, 0.0f);
	glVertex2f(+1.0f, 0.0f);
	glVertex2f(0.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);


	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.9f, 0.9f, 0.4f);

	glVertex2f(0.35f, 0.6f);
	glVertex2f(0.2f, 0.1f);
	glVertex2f(0.2f, 0.1f);
	glVertex2f(0.6f, 0.1f);
	glVertex2f(0.6f, 0.1f);
	glVertex2f(0.35f, 0.6f);





	glEnd();

	glBegin(GL_QUADS);
	 glColor3f(0.0f, 0.2f, 0.1f);
        glVertex2f(0.4f, -0.2f);              // Top Left
        glVertex2f( 0.4f, -0.4f);              // Top Right
        glVertex2f( 0.6f,-0.4f);              // Bottom Right
        glVertex2f(0.6f,-0.2f);              // Bottom Left

	glEnd();

	glBegin(GL_TRIANGLES);
	     glColor3f(0.9f, 0.5f, 0.8f);                     // Drawing Using Triangles
      glVertex2f( -0.35f, 0.6f);              // Top
                   // Bottom Left
      glVertex2f( -0.6f,0.2f);
      glVertex2f(-0.2f,0.2f);              // Bottom Right
glEnd();


glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.5f, 0.0f); // Red

	glVertex2f(-0.3f, -0.2f);    // x, y
	glVertex2f(-0.4f, -0.2f);    // x, y
	glVertex2f(-0.6f, -0.3f);    // x, y
	glVertex2f(-0.6f, -0.6f);    // x, y
	glVertex2f(-0.4f, -0.8f);
	glVertex2f(-0.3f, -0.8f);
	glVertex2f(-0.1f, -0.6f);
	glVertex2f(-0.1f, -0.3f);




	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
