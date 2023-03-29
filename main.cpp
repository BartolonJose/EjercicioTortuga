#include<gl/glut.h>
void IniciarConfiguracion() {
	glClearColor(1, 0, 1, 1);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 800, 0, 600, 1, -1);
}

void DibujarTriangulos() {
	glClear(GL_COLOR_BUFFER_BIT);


	//pies
	glColor3f(0.51, 0.23, 0.18);
	glBegin(GL_POLYGON);
	glVertex2i(130, 40);
	glVertex2i(120, 58);
	glVertex2i(140, 90);
	glVertex2i(170, 70);
	glVertex2i(150, 40);	
	glEnd();
	
	glColor3f(0.51, 0.23, 0.18);
	glBegin(GL_POLYGON);
	glVertex2i(230, 70);
	glVertex2i(260, 90);
	glVertex2i(280, 58);
	glVertex2i(270, 40);
	glVertex2i(250, 40);	
	glEnd();
	//fin pies
	//cabezA
	
	glColor3f(0.51, 0.23, 0.18);
	glBegin(GL_POLYGON);
	glVertex2i(180, 237);
	glVertex2i(180, 281);
	glVertex2i(200, 290);
	glVertex2i(220, 281);
	glVertex2i(220, 237);
		glVertex2i(200, 250);	
	
	glEnd();
	//FIN CABEZA
	
	
	//ALA IZQ
	
	glColor3f(0.28, 0.13, 0.09);
	glBegin(GL_POLYGON);
	glVertex2i(48, 196);
	glVertex2i(60, 228);
	glVertex2i(100, 252);
	glVertex2i(80, 210);
	glEnd();
	
	glColor3f(0.40, 0.19, 0.14);
	glBegin(GL_POLYGON);
	glVertex2i(80, 210);
	glVertex2i(100, 252);
	glVertex2i(140, 210);
	glEnd();
	
	glColor3f(0.51, 0.23, 0.18);
	glBegin(GL_POLYGON);
	glVertex2i(100, 252);
	glVertex2i(140, 210);
	glVertex2i(168, 228);
	glVertex2i(155, 251);
	glEnd();
	//FIN ala
	//ALA DER
	
	glColor3f(0.51, 0.23, 0.18);
	glBegin(GL_POLYGON);
	glVertex2i(232, 227);
	glVertex2i(244, 251);
	glVertex2i(300, 252);
	glVertex2i(260, 210);
	glEnd();
	
	glColor3f(0.40, 0.19, 0.14);
	glBegin(GL_POLYGON);
	glVertex2i(260, 210);
	glVertex2i(300, 252);
	glVertex2i(320, 210);
	glEnd();
	
	glColor3f(0.28, 0.13, 0.09);
	glBegin(GL_POLYGON);
	glVertex2i(320, 210);
	glVertex2i(300, 252);
	glVertex2i(340, 228);
	glVertex2i(360, 195);
	glEnd();
	//FIN ala
	//CAPARAZON 
	glColor3f(0.51, 0.23, 0.18);
	glBegin(GL_POLYGON);
	glVertex2i(200, 50);
	glVertex2i(170, 70);
	glVertex2i(180, 90);
	glVertex2i(220, 90);
	glVertex2i(230, 70);
	glEnd();
	
	glColor3f(0.51, 0.36, 0.32);
	glBegin(GL_POLYGON);
	glVertex2i(140, 90);
	glVertex2i(160, 120);
	glVertex2i(180, 90);
	glVertex2i(170, 70);
	glEnd();
	
	glColor3f(0.51, 0.36, 0.32);
	glBegin(GL_POLYGON);
	glVertex2i(230, 70);
	glVertex2i(220, 90);
	glVertex2i(240, 120);
	glVertex2i(260, 89);
	glEnd();

	glColor3f(0.51, 0.23, 0.18);
	glBegin(GL_POLYGON);
	glVertex2i(180, 90);
	glVertex2i(160, 120);
	glVertex2i(240, 120);
	glVertex2i(220, 90);
	glEnd();
	
	glColor3f(0.92, 0.55, 0.47);
	glBegin(GL_POLYGON);
	glVertex2i(160, 120);
	glVertex2i(150, 140);
	glVertex2i(160, 160);
	glVertex2i(240, 160);
	glVertex2i(250, 140);
	glVertex2i(240, 120);
	glEnd();
	
	glColor3f(0.93, 0.47, 0.37);
	glBegin(GL_POLYGON);
	glVertex2i(160, 160);
	glVertex2i(156, 184);
	glVertex2i(173, 200);
	glVertex2i(227, 200);
	glVertex2i(244, 184);
	glVertex2i(240, 160);
	glEnd();
	
	glColor3f(0.93, 0.47, 0.37);
	glBegin(GL_POLYGON);
	glVertex2i(172, 200);
	glVertex2i(164, 225);
	glVertex2i(200, 250);
	glVertex2i(235, 226);
	glVertex2i(227, 200);
	glEnd();
	
	glColor3f(0.80, 0.28, 0.16);
	glBegin(GL_POLYGON);
	glVertex2i(140, 90);
	glVertex2i(120, 150);
	glVertex2i(150, 140);
	glVertex2i(160, 120);
	glEnd();
	
	glColor3f(0.91, 0.25, 0.10);
	glBegin(GL_POLYGON);
	glVertex2i(120, 150);
	glVertex2i(140, 210);
	glVertex2i(156, 184);
	glVertex2i(160, 160);
	glVertex2i(150, 140);
	glEnd();
	
	glColor3f(0.83, 0.27, 0.14);
	glBegin(GL_POLYGON);
	glVertex2i(140, 210);
	glVertex2i(164, 226);
	glVertex2i(173, 201);
	glVertex2i(156, 185);
	glEnd();
	
	
	
	//
	
	
	glColor3f(0.51, 0.36, 0.32);
	glBegin(GL_POLYGON);
	glVertex2i(230, 70);
	glVertex2i(220, 90);
	glVertex2i(240, 120);
	glVertex2i(260, 90);
	glEnd();
	
	glColor3f(0.80, 0.28, 0.16);
	glBegin(GL_POLYGON);
	glVertex2i(240, 120);
	glVertex2i(250, 140);
	glVertex2i(280, 150);
	glVertex2i(260, 90);
	glEnd();

	glColor3f(0.91, 0.25, 0.10);
	glBegin(GL_POLYGON);
	glVertex2i(250, 140);
	glVertex2i(240, 160);
	glVertex2i(244, 183);
	glVertex2i(260, 210);
	glVertex2i(280, 150);

	glEnd();
	
	glColor3f(0.83, 0.27, 0.14);
	glBegin(GL_POLYGON);
	glVertex2i(244, 183);
	glVertex2i(227, 200);
	glVertex2i(235, 226);
	glVertex2i(260, 209);
	glEnd();
	//FIN CAPARAZON
	glFlush();
}

int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Demo Tortuga");
	glutDisplayFunc(DibujarTriangulos);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}
