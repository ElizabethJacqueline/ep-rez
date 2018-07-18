
//a) inicio programa.
//b) ingresar variables.
//c) crear un ciclo que tenga las variables.
//d) obtener resultados 
//e) fin del programa. 
# include <stdio.h>
	int main(){
	int stop;
	int i, l;
		
	while (stop <1 || stop > 9){
		printf("ingrese stop:  \n");
		scanf ("%d", & stop); 
	}
		
	for (i=1; i <= stop; i++){
		for(l=1; l<=i; l++){
			printf("%d",l); 
		}
		for(l=i-1; l>=1; l--){
			printf("%d",l); 
		}	
	printf("\n");
	}
	return 0;
}

