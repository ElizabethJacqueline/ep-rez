// crear funcion que permita saber la cantidad de personas que pueden estar infectadas
// definir variables 
// crear funcion que permita saber el porcentaje de error 
// crear funcion que permita saber el porcentaje de personas que estan infectadas 
// dar inicio al programa
// llamar las funciones
// fin del programa   





#include <stdio.h>

 float posibilidad_de_estar_infectado(){
	 float total_personas=100000.0;
	 float error;
	 error= total_personas*0.01;
	 
	 return error;
 }
 
 float personas_tal_ves_infectadas(){
	 float total_de_error;
	 total_de_error= 0.5*posibilidad_de_estar_infectado();
	 
	 return total_de_error;
}

 float cantidad_de_personas(){
	 float tal_ves_estan_infectados;
	 tal_ves_estan_infectados=1+ personas_tal_ves_infectadas();
	 
	 return tal_ves_estan_infectados;
 }
 float porcentaje_de_personas_infectadas(){
	 float porcentaje;
	 porcentaje= 100000.0/(100.0*cantidad_de_personas());
	 return porcentaje;
 }
 void imprimir_el_porcentaje(float porcentaje){
	printf ("el porcentaje final es aproximadamente: %f", porcentaje);
}
 int main(){
	float ppi;
	posibilidad_de_estar_infectado();
	personas_tal_ves_infectadas();
	cantidad_de_personas();
	ppi= porcentaje_de_personas_infectadas();
	imprimir_el_porcentaje(ppi);
	return 0;
}
