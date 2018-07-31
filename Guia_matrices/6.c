/*En una estación meteorológica registramos la temperatura (en grados centı́grados) cada hora durante
una semana. Almacenamos el resultado en una matriz de 7 X 24 (cada fila de la matriz contiene las 24
mediciones de un dı́a). Diseña un programa que lea los datos por teclado y muestre:
La máxima y mı́nima temperaturas de la semana. La máxima y mı́nima temperaturas de cada dı́a.La temperatura media de la semana.
La temperatura media de cada dı́a.El número de dı́as en los que la temperatura media fue superior a 30 grados.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void llenar_matriz(int dia ,int hora, int matriz[dia][hora] ){
	srand(time(NULL));
	int i, j,num;
	for(i=0; i<dia;i++){
		for (j=0; j<hora; j++){
			//num = 1;
			num = 1+(rand()%32); //para obtener las temperaturas de forma aleatoria.
			//~ printf("Ingrese una temperatura en grados °C para el dia %d a la hora %d: ",i+1,j+1);
			//~ scanf("%d",&num);
			matriz[i][j]=num;
			
		}
	}

}
void grados_dia(int dia ,int hora, int matriz[dia][hora]){
	int i, j, mayor, menor;
	
	for(i=0; i<dia;i++){
		mayor=0;
		menor=100;
		for (j=0; j<hora; j++){
			if (menor< matriz[i][j]){
			}
			else{
				menor= matriz[i][j];
			}
			if (mayor> matriz[i][j]){
			}
			else{
				mayor= matriz[i][j];
			}
		}
		printf("la temperatura maxima de dia %d es:  %d°\n", i+1, mayor);
		printf("la temperatura minima de dia %d es:  %d°\n", i+1, menor);
	} 
	printf("\n");
	
}
void grados_semana(int dia,int hora, int matriz[dia][hora]){
	int i, j, mayor=0, menor=100;
	
	for(i=0; i<dia;i++){
		for (j=0; j<hora; j++){
			if (menor< matriz[i][j]){
			}
			else{
				menor= matriz[i][j];
			}
			if (mayor> matriz[i][j]){
			}
			else{
				mayor= matriz[i][j];
			}
		}
	} 
	printf("la temperatura maxima de la semana es:  %d°\n", mayor);
	printf("la temperatura minima de la semana es:  %d°\n", menor);
}
	
void imprimir_matriz(int dia,int hora, int matriz[dia][hora]){
	int i, j;
	for(i=0; i<dia;i++){
		for (j=0; j<hora; j++){
			printf("\t%d", matriz[i][j]);
		}
		printf("\n");
	}
	
}
void media_dia(int dia,int hora, int matriz[dia][hora]){
	int i, j, suma=0;
	
	printf("\n");
	
	for(i=0; i<dia;i++){
		
		for (j=0; j<hora; j++){
			suma= (suma + matriz[i][j]);
		}
		suma = suma/24;
		
		
		printf("La media del dia %d es: %d°\n",i+1,suma);
		suma=0;
	}

}
void media_semana(int dia,int hora, int matriz[dia][hora]){
	int i, j, suma_total=0, media_semanal=0;

	printf("\n");
	
	for(i=0; i<dia;i++){
		for (j=0; j<hora; j++){
			suma_total= suma_total + matriz[i][j];
			//printf("valor %d \n",matriz[i][j]);
		}
	}
	media_semanal = suma_total/168;
	printf ("La media de la semana es: %d", media_semanal);
}

void media_superior(int dia,int hora, int matriz[dia][hora]){
	int i, j, suma=0, contador_dias=0, media=0 ;
	
	printf("\n");
	
	for(i=0; i<dia;i++){
		for (j=0; j<hora; j++){
			suma= (suma + matriz[i][j]);
			
		}
		media= suma/24;
		
		if (media>30){
			contador_dias=contador_dias+1;
		}
		suma=0;
	}
	printf("Los días en que la media es superior a 30°: %d\n", contador_dias);
	
}


int main(){
	int dia= 7, hora= 24;
	
	int matriz[dia][hora];
	llenar_matriz(dia,hora, matriz);
	imprimir_matriz(dia,hora,matriz);
	grados_dia(dia,hora,matriz);
	grados_semana(dia,hora, matriz);
	media_dia(dia,hora, matriz);
	media_semana(dia,hora,matriz);
	media_superior(dia,hora, matriz);
return 0;
}


