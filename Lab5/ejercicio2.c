
//inicio del programa.
// calcular la raı́z digital de X número sumando los dı́gitos que lo componen.
//repitir el proceso sobre el nuevo número hasta que el resultado obtenido tiene un sólo dı́gito.
// Este último número es la raı́z digital del número X.
//fin del programa. 
#include <stdio.h>


int descomponer (int numero){
	int resto, suma=0;
	while (numero > 0){
		resto = numero%10;
		suma+= resto;
		numero = numero / 10;
	}
	return suma;
}



int main(){
	
	int buscar=0, num;
	printf("ingrese un numero: \n");
	scanf ("%d", &buscar);	
	num = descomponer(buscar);
	while (num>9){
		num = descomponer(num);
	}
	printf ("%d", num);
	return 0;
}
