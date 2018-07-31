#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//~ Construya un programa en C que intercambie los renglones de una arreglo bidimensional. Los
//~ elementos del renglón 1 deben intercambiarse con el del renglón N, los del renglón 2 con los del renglón
//~ N-1, y ası́ sucesivamente.
void llenar_matriz(int n, int matriz[n][n] ){
	srand(time(NULL));
	int i, j,num;
	for(i=0; i<n;i++){
		for (j=0; j<n; j++){
			num = 1+(rand()%20);
			matriz[i][j]=num;
		}
	}
	for(i=0; i<n;i++){
		for (j=0; j<n; j++){
			printf("[%d]", matriz[i][j]);
		}
		printf("\n");
	}
	int cont;
	printf("Matriz cambiada\n");
	for(i=n;i>0;i--){
		cont=i-1;
		for(j=0;j<n;j++){
			printf("[%d]",matriz[cont][j]);
		}	
		printf("\n");
	}
	//El for de arriba se ocupa para imprimir la matriz de la forma en que se solicita, al terminar la impresion tira un error 
	// de punteros el cual no se porque se inicia ya que el ejercicio si funciona.
	// colocando un n mayor a 4 no funciona.
}
int main (void){
	int n;
	int matriz[n][n];
	printf("Ingrese el tamaño de la matriz: \n");
	scanf("%d",&n);
	llenar_matriz(n,matriz);
	printf("\n");
	return 0;
}
