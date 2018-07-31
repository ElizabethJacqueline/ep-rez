
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void ordenamientoseleccion(char a[], int n){ //procedimiento en el cual  se utilizará 
	//un metodo de ordenamiento, específicante el metodo de ordenamiento por selección.
	//este metodo de ordenamiento se utilizará para ordenar la secuencia, de forma alfabetica.
	int indice_menor, i, j; //variables que se utilizarán.
	for (i=0; i< n-1; i++){//ciclo con el cual se recorrerá la secuencia, para determinar cual letra va primer, este terminará cuando i sea menor a la cantidad de datos menos 1.
	indice_menor= i; // se iguala la variable indice_menor a i.
	
	for (j= i+1; j<n; j++)
		if(a[j] < a[indice_menor])// esta condición nos dice que cuando el arreglo a[j] sea menor que a[indice_menor], indice_menor tomará el valor de j.
		indice_menor= j;
		if (i != indice_menor){// esta condición lo que nos permite es decir que pasará cuano i sea distinto a indice_menor.
			int aux= a[i];// se añade una variable aux,para otorgarle el valor de a[i].
			a[i]= a[indice_menor];// cuando el arreglo a tenga como parámetro a i esto va a ser igual a tener a con parámetro indice_menor.
			a[indice_menor]= aux;//por último se iguala el arreglo a, que en su interior contiene a indice_menor con aux. 
		}	
	}	
}

int main () {				
	char seq [1000]="gtgggggggtttatgcctttagaacagcagactactgataactccaatcctgggttgaaaatgccaagggcgccagagagccaaacgatgagcgttggaccacaaacgataaaaactcactttctccgtggggtgaaagcgattctttctggcccgtatccgccagcacttaaagttgcattcggcgcggccctaccgctgctaattggggtaattgtcctaggattgtacgtaacgcttggcgggcacagccgcaagaaagcccacgcagccgcgatagatgctttggtcgagaagcacgaagcatgctacaaggtccaagcaaagattgcacacggcaggcttgccttacagtccgctgtggtgtctgttgcggatgccagcatgcaacaactccagttcgtgcagcaaggaattctcatgtgtgtcggagagctcgacgatatgcagaagttccggacccgactggataatgaaatcagtgccatcaaccagcgaattcccagcattgtcgaggaggtaagaaaacacaccgacgatgcgcttgagtggaatcttgctagaaccaagaacattttagagggcactgaagagcgcctgaaggatatgggcaatgagttggtgcgctacctagacgatgctcgcgccctcattgaaaatgcacgtatagctgcaggatcaatgcaacacctcgttggtgatgaggtgagaaagcagcttgctgaggttctagtaaaagttgcagaagtaagtaatggctttattgcgcttaagaagagtgtatctggctatttggaaaaaagcagtggacttgttgctagggaagttagggcaatcctggatgaccgcatgcgaagcctgcggaccatgtacaaaatgtgggatgcagaacaaaactccgtagtcagcgtgtgtaccacgctccaaaaggcaagcatggaggctgccgcggtagcaagt";
	// arreglo que contiene la cadena de nucleótido (cadena entregada por el ejercicio)
	printf("SECUENCIA ORIGINAL: %s\n\n", seq);// se imprime la secuencia original.
	ordenamientoseleccion(seq, strlen(seq));// se llama al procedimiento encargado de oredenar las letras de forma alfabetica.
	printf("SECUENCIA ORDENADA: %s\n", seq); // se imprime la secuencia ya ordenada.
	return 0;
}
