// inicio del programa. 
//crear un programa que permita leer un número natural de 4 cifras.
// crear una función numero mayor (int numero), que calcula el mayor número que se puede formar con las cifras
//del número ingresado, y la función numero menor(int numero) que calcule el menor número que se
// entregar los numeros 
// fin del programa.
#include <stdio.h>

int numero_mayor(int numero){
	
	int
	return mayor;
	}

int numero_menor (int numero){
	
	int a;
	int b;
	int c;
	int d;
	
	a=numero%10;
	numero=numero/10;
	b=numero%10;
	numero=numero/10;
	c=numero%10;
	numero=numero/10;
	d=numero%10;
	numero=numero/10;
	
	if (a<b && b<c && c<d){
		printf ("el numero mayor será: %d%d%d%d", a,b,c,d);
	}
	else (a<b && b<d && d<c){
		printf ("el numero mayor será: %d%d%d%d", a,b,d,c);
	}
	else (a<c && c<d && b<d){
		printf ("el numero mayor será: %d%d%d%d", a,c,b,d);
	}
	else (a<d && d<b && b<c){
	printf ("el numero mayor será: %d%d%d%d", a,b,c,d);
	}
	else (){
		printf ("el numero mayor será: %d%d%d%d", a,b,c,d);
	}
	
	return menor:
	}


int 
protocolo (){
	int numero;
	printf("ingrese un numero de 4 cifras, no debe de contener digitos iguales: ");
	scanf("%d", &numero);
	
	while (numero<1000 || numero>10000){
		printf("ingrese un numero: ");
		scanf("%d", &numero);
	}
	return numero;
}	

int main(){
	int numero;
	numero=protocolo();
	printf("%d", numero);
	
	numero_mayor(int numero);
	numero_menor(int numero);
	
	return 0;
}
