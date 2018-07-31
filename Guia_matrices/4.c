/*Dada una matriz cuadrada A, un programa que permita detectar si dicha matriz es simétrica 3 . Se
considera que una matriz es simétrica si A[i,j] = A[j,i] y esto se cumple para todo i distinto de j. La
simetrı́a es respecto a la diagonal principal.*/
#include <stdio.h>
#include <stdlib.h>
void llenar_matriz(int n, int matriz[n][n] ){
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
void verificar_simetria(int n, int matriz[n][n]){
	int i, j, aux=0;
	for(i=0; i<n;i++){
		aux=0;
		
		for (j=0; j<n; j++){
			if (i!=j){
				if (matriz[i][j]==matriz[j][i]){
					
				}
				else {
					aux = 3;
					

				}
			}
		}
		printf("\n");
	}
	if (aux==0){
		
		printf("La matriz es simetrica");
	}
	
	else{
	printf("La matriz no es simetrica");
	}
}

int main(){
	int n;
	printf("ingrese la dimension de la matriz: ");
	scanf("%d",&n);
	int matriz[n][n];
	llenar_matriz(n, matriz);
	imprimir_matriz(n, matriz);
	verificar_simetria(n, matriz);
return 0;
}

