
#include <stdio.h>

int main()
{
	float kilometros, precio_por_kilometro, valor_a_pagar;
	printf("ingrese numero de kilometros del viaje: ");
	scanf("%f", &kilometros);
	printf("precio por kilometro: ");
	scanf("%f", &precio_por_kilometro);
	valor_a_pagar = kilometros * precio_por_kilometro;
	printf("total a pagares: %.1f", valor_a_pagar);
	
	return 0;
}

