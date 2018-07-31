/*Cree un programa que lea los elementos de una matriz de 4 X 5 y genere un vector de largo 4 en el
que cada elemento contenga la sumatoria de los elementos de cada fila. El programa debe mostrar la
matriz original y el vector en este formato (evidentemente, los valores deben ser los que correspondan
a lo introducido por el usuario)*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenar_matriz( int matriz[4][5] ){
	srand(time(NULL));
	int i, j,num;
	for(i=0; i<4;i++){
		for (j=0; j<5; j++){
			num = 1+(rand()%10);
			
			//~ printf("ingrese un numero para la posicion [%d][%d]:",i,j); 
			//~ scanf("%d", &num);
			matriz[i][j]= num;
			
		}
	}

}

void suma(int matriz[4][5], int vector[4]){
	int i,j,suma=0;
	for (i=0;i<4;i++){
		for (j=0;j<5;j++){
			suma=suma+matriz[i][j];
		}
		vector[i]=suma;
		suma=0;
	}
	
	for(i=0;i<4;i++){
		printf("\n");
		printf("La suma de la fila %d es: [%d]\n",i,vector[i]);
	}
}	
void imprimir_matriz( int matriz[4][5]){
	int i, j;
	for(i=0; i<4;i++){
		for (j=0; j<5; j++){
			
			printf("\t[%d]", matriz[i][j]);
		}
		printf("\n");
	}
}
int main (){
	int matriz[4][5];
	int vector[4];
	llenar_matriz(matriz);
	printf("Matriz: \n");
	imprimir_matriz(matriz);
	suma(matriz,vector);
	return 0;
}
