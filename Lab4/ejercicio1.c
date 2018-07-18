// iniciar programa.
// funcion que permita obtener el inverso del numero
// variables: resto, x, numero_inicial
// llamar funcion
// fin del programa 

# include <stdio.h>

void 
	inverso(int numero_inicial){
		int x=1;
		int resto;
		while(x==1){
			if (numero_inicial<=9){
				x=0;
			}
			resto= numero_inicial%10;
			printf("%d", resto);
			numero_inicial= numero_inicial-resto;
			numero_inicial= numero_inicial/10;
		}
	}
			
int main (){
	int numero_inicial;
	printf("ingrese numero: ");
	scanf("%d", & numero_inicial);
	inverso(numero_inicial);
return 0; 
}
