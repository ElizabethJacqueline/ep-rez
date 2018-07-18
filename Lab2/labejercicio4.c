//a) iniciar programa.
//b) ingrese variables.
//c) hacer un ciclo de los partidos jugados.
//d) dar valores cuando se gana, pierde o empate.
//e) imprimir el total de puentos obtenidos.
//f) fin del programa.

# include <stdio.h>
	int main () {
	int i=0, equipo1, equipo2, puntos=0;
		
	while (i<5){
		printf("partido %d\n",i+1);
		printf("ingrese goles de tu equipo: ");
		scanf("%d",& equipo1);
		printf("ingrese goles del equipo contrario: " );
		scanf("%d",& equipo2);
	
		if (equipo1 > equipo2){
			printf ("gana el equipo 1\n");
			puntos= puntos + 3;
		}
		else if (equipo1== equipo2){
			printf("empate\n");
			puntos= puntos + 1;
		}
		else{
			printf("perdio\n");
		}
		i++;
	}
	printf("puntos obtenidos: %d", puntos);
	return 0;
}

