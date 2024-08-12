#include "cola.h"


void Cola::DibujarCola(float Angulo, float x, float y, float z, int n) {


	glPushMatrix();
	glTranslatef(x, y, z);


	


	glRotatef((GLfloat)Angulo, 0.2, 0.4, 1.0);

	glTranslatef(0.5, 0.0, 0.0); glPushMatrix();

	glScalef(2.0, 0.4, 1.0);

	glutSolidCube(1.0);


	glPopMatrix();


	for (int i = 0; i< n; i++){

		glTranslatef(1.0, 0.0, 0.5);

		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);

		glTranslatef(1.0, 0.0, 0.0);

		glPushMatrix();

		glScalef(2.0, 0.4, 1.0);

		glutSolidCube(1.0);
		glutSolidRhombicDodecahedron();
		glutSolidSphere(4, 4, 4);

		glPopMatrix();
	}


	glPopMatrix();


}