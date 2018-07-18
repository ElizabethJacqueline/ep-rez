#include <stdio.h>
int main()
{
	
	int sueldo, ventas;
	float porcentaje, sueldo_total;
	printf(" ingrese sueldo base: ");
	scanf ("%d", &sueldo);
	printf("total de ventas: ");
	scanf("%d", &ventas);
	porcentaje = (ventas * 7)/100; 
	sueldo_total = sueldo + porcentaje;
	printf("porcentaje de las ventas: %.1f\n", porcentaje);
	printf("el sueldo total a recibir es: %.1f\n", sueldo_total);
	
	return 0;
}
	
	
