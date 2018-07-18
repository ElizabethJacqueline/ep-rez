 #include <stdio.h>
int main()
{
	float litros, galones;
	int precio = 820;
	
	printf("ingrese cuantos galones se vendieron: ");
	scanf("%f", &galones);
	litros = 3.785 * galones * precio;

	printf ("el valor que cancelar es: $ %.1f", litros);
	
	return 0;
}
	
