#include <stdio.h>
int main ()
{
	float base, altura, perimetro, superficie;
	printf("ingresar base: ");
	scanf("%f",& base);
	printf("ingresar altura: ");
	scanf("%f",& altura);
	
	perimetro = 2*(base*altura);
	superficie = base*altura;
	printf("la superficie es: %f", superficie);
	printf("el perimetro es: %f", perimetro);
	
	return 0;
}
