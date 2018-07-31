/*Cree una matriz cuadrada A de NxN, luego pida al usuario rellenarla. Al final del proceso, entregue al
un resumen con: La matriz, la sumatoria de los valores de sus filas y luego la sumatoria de los valores
de toda la matriz.*/
#include <stdio.h>
#include <stdlib.h>

void llenar_matriz(int n, int matriz[n][n] ){//nombre del procedimiento, con el cual se llenará la matriz.
	int i, j,num;
	for(i=0; i<n;i++){
		for (j=0; j<n; j++){
			
			printf("ingrese un numero para la posicion [%d][%d]:",i,j); 
			scanf("%d", &num);
			matriz[i][j]= num;
			
		}
	}

}
	
void imprimir_matriz(int n, int matriz[n][n]){
	int i, j;
	for(i=0; i<n;i++){
		for (j=0; j<n; j++){
			printf("\t%d", matriz[i][j]);
		}
		printf("\n");
	}
	
}
void sumatoria_filas(int n, int matriz[n][n]){
	int i, j, suma=0, suma_total=0;
	for(i=0; i<n;i++){
		suma=0;
		for (j=0; j<n; j++){
			suma = suma + matriz[i][j];
			suma_total = suma_total + matriz[i][j];
		}
			printf("la suma de la fila [%d] : %d\n",i, suma);
	}
	printf("la suma de la matriz es : %d", suma_total);
}

int main(){
	int n;
	printf("ingrese la dimension de la matriz: ");
	scanf("%d",&n);
	int matriz[n][n];
	llenar_matriz(n, matriz);
	imprimir_matriz(n, matriz);
	sumatoria_filas(n, matriz);
	
return 0;
}
