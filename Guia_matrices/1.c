/*Escriba un programa que cree una matriz cuadrada A de NxN, luego rellénela de ceros e imprı́mala en
pantalla.*/

#include <stdio.h>
#include <stdlib.h>

void llenar_matriz(int n, int matriz[n][n] ){
	
	int i=0, j=0;
	for(i=0; i<n;i++){
		for (j=0; j<n; j++){
			matriz[i][j] = 0;
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
int main(){
	int n;
	printf("Ingrese un numero para el tamaño de la matriz");
	scanf("%d",&n);
	int matriz[n][n];
	llenar_matriz(n, matriz);
	imprimir_matriz(n, matriz);
return 0;
}
