#include <stdio.h>

int main()
{
	int ndias,segundos;
	
	printf("ingrese número de días: ");
	scanf("%d", &ndias);
	
	segundos = 86400 * ndias;
	
	printf ("%d tiene esos", segundos);
	return 0; 
	}
