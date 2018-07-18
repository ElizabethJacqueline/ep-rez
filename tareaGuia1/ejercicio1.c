#include <stdio.h>
int main() {
	float calificacion1,calificacion2,calificacion3,suma,promedio;
	int matricula;
	printf("ingrese matricula: ");
	scanf("%d", &matricula);
	printf("ingrese calificacion1: ");
	scanf("%f",&calificacion1);
	printf("ingrese calificacion2: ");
	scanf("%f",&calificacion2);
	printf("ingrese calificacio3: ");
	scanf("%f",&calificacion3);
	suma= calificacion1+calificacion2+calificacion3;
	promedio= suma/3;
	printf("El promedio es: %f\n",promedio);
	printf("la matricula es: %d", matricula);
	return 0;
}
	

