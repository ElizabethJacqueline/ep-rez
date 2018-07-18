#include <stdio.h>

int main() {
	float c1, c2, h;
	
	printf("ingresar c1: ");
	scanf("%f", &c1);
	printf("ingresar c2: ");
	scanf("%f", &c2);
	
	h = (c1*c1) + (c2*c2);
	h = (h*h);

	printf("La hipotenusa al cuadrado es: %.1f \n", h);
	
	return 0;
}
