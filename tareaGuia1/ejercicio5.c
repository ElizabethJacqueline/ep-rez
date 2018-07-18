#include <stdio.h>
int main() {
	
	float peso1, peso2, longitud1, longitud2;
	printf("ingrese peso en libras: ");
	scanf("%f",&peso1);
	peso2= peso1*0.45;
	printf ("%f kilos", peso2);
	printf("ingrese longitud en pies: ");
	scanf("%f",&longitud1);
	longitud2= longitud1*0.3048;
	printf("%f metros", longitud2);	
	return 0;
}
