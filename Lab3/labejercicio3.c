//a) iniciar programa.
//b) ingresar variables.
//c) hacer un ecuacion para saber la dosis que se debe administrar.
//d) imprimir dosis.
//e) fin del programa. 
# include <stdio.h>
	int main(){
		float dosisdiaria, gotas, gotaspequeno, kilos;
		
			printf("dosis diaria qu1 edeberia tomar: \n");
			printf("peso en kilos: \n");
			scanf("%f", &kilos);
		
			dosisdiaria=kilos*0.2;

			gotas= dosisdiaria*2500/ 500;
			gotaspequeno = gotas/3;
		printf("si el niño tiene mas de un año su dosis en gotas es: %.1f\n", gotas);
		printf("si el niño tiene menos de un año su dosis en gotas es: %.1f\n",gotaspequeno);
		
		return 0;
	}
		
