
// inicio del programa. 


// crear una funcion donde el usuario pueda escoger una de las dos opciones (A o
//B) 
// el programa por el azar determinará el número mayor y sabremos si ganamos o perdemos. 
//Si los dos números fueran iguales se deberá repetirse el juego hasta que sean distintos (un ciclo). 
//Una vez que el usuario haya introducido su apuesta, el programa mostrará el valor aleatorio generado para A y B y dirá si hemos ganado la apuesta (apostamos al número más alto) o perdido. Por último el programa deberá
// además hay que llevar un contador de ganadas y perdidas, para saber cuántas partidas hemos ganado y perdido hasta el momento. Tras una jugada, nos preguntará si queremos jugar otra vez.
// entregar la cantidad de partidas ganadas 
// fin del programa. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numaleatorio (){
	int numero;
	numero = rand()%100;
	return numero;
}

int main ()
{
	int a,b;
	char opcion;
	char fin='S';
	int ganador;
	int perdedor;
	ganador=0;
	perdedor=0;
	srand (time(NULL));
	
	while (fin=='S'){
		printf("A o B\n");
		scanf(" %c", &opcion);
		a=numaleatorio();
		b=numaleatorio();
		printf ("el numero generado para a es: %d\n",a);
		printf ("el numero generado para b es: %d\n",b);
		if (opcion=='a' && a>b){
			ganador++;
		
			printf("HAS GANADO\n");
		}
			else if (opcion== 'b'&& b>a){
				ganador++;
			
			printf("HAS GANADO\n");
			
		}
		else {
			perdedor++;
			printf("HAS PERDIDO\n");
		
		printf ("Quieres probar otra vez? (S/N): \n");
		scanf (" %c",&fin);
		while(getchar()!='\n');
	
	}
	printf("HAS GANADO ESTE NUMERO DE VECES: %d",ganador);
}
	
	
	return 0 ;
}
