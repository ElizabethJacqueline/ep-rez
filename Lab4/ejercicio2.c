
// crear una funcion que nos diga cuantos huevos come cada uno.
// definir las variables: huevos por persona , huevos, personas.
// crear una funcion que nos diga cuantos huevos puso juanito.
// definir las variables: juanito=3, resto_juanito.
// crear una funcion que nos diga cuantos huevos puso manuel.
// definir las variables: manuel=5.0, resto_manuel.
// crear una funcion que nos la suma de los restos.
// definir la variable resto.
// crear las funciones que permitan saber cuanto dinero se le debe pagar a juanito y manuel.
// iniciar programa.
// llamar las funciones 
// fin del programa 

#include <stdio.h>

float huevos_que_come_cada_persona(){
	int huevos=8.0; int personas=3.0; float huevos_por_persona;
	huevos_por_persona=huevos/personas;
	
	return huevos_por_persona;
}

float resto1(){
	int juanito=3.0; float resto_juanito;
	resto_juanito=juanito-huevos_que_come_cada_persona();
	return resto_juanito;
}

float resto2(){
	int manuel=5.0; float resto_manuel;
	resto_manuel=manuel-huevos_que_come_cada_persona();
	return resto_manuel;
}

float suma_restos(){
	float restos; 
	restos=resto1()+resto2();
	return restos;
}

float dinero1(){
	int dinero_antonio=80.0; float dinero_juanito;
	dinero_juanito=(dinero_antonio*resto1())/suma_restos();
	return dinero_juanito;
}

float dinero2(){
	int dinero_antonio=80.0; float dinero_manuel;
	dinero_manuel=(dinero_antonio*resto2())/suma_restos();
	return dinero_manuel;
}

void  imprimir_dinero(float dinero_manuel, float dinero_juanito){
	printf ("el dinero a pagar a Juan es: %.1f \n", dinero_juanito);
	printf ("el dinero a pagar a Manuel es: %.1f \n", dinero_manuel);
}

int main (){
	float x,y;
	huevos_que_come_cada_persona();
	resto1();
	resto2();
	suma_restos();
	x=dinero1();
	y=dinero2();
	imprimir_dinero(x,y);
	return 0;
}
