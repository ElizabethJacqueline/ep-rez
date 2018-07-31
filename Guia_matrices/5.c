/*Dada una matriz A (MxN) de tipo entero, construya un programa para calcular la Traspuesta de dicha
matriz. La traspuesta de una matriz se obtiene al escribir las filas de la matriz A como columnas.*/
#include <stdio.h>
#include <stdlib.h>
void llenar_matriz(int n,int m, int matriz[n][m] ){
	int i, j,num;
	for(i=0; i<n;i++){
		for (j=0; j<m; j++){
			
			printf("ingrese un numero para la posicion [%d][%d]:",i,j); 
			scanf("%d", &num);
			matriz[i][j]= num;
			
		}
	}

}
void traspuesta(int n,int m, int matriz[n][m]){
	int i, j;
	printf("Imprime traspuesta\n");
	for(i=0; i<m;i++){
		for (j=0; j<n; j++){
			printf("\t%d", matriz[j][i]);
		}
		printf("\n");
	}
	
}
	
void imprimir_matriz(int n,int m, int matriz[n][m]){
	int i, j;
	for(i=0; i<n;i++){
		for (j=0; j<m; j++){
			printf("\t%d", matriz[i][j]);
		}
		printf("\n");
	}
	
}

int main(){
	int n, m;
	printf("ingrese largo de la matriz: ");
	scanf("%d",&m);
	printf("ingrese alto de la matriz: ");
	scanf("%d",&n);
	int matriz[n][n];
	llenar_matriz(n,m, matriz);
	imprimir_matriz(n,m,matriz);
	traspuesta(n,m,matriz);

return 0;
}


