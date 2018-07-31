#include <stdio.h>
#include <string.h>

void subsecuencia(char seq[1000],char subseq[10]){ // nombre del procedimento, en donde se llevará a cabo lo que pide el ejercicio, es decir: Ingresar una sub-secuencia, la cual se va a comparar con la secuencia original.
	int i, k, flag, cont=0, lenSeq, lenSubSeq;// variables que se utilizarán en el proceso.

	printf ("Ingrese sub-secuencia: ");
	scanf ("%s", subseq); // se ingresará la sub-secuencia.
	lenSeq = strlen(seq); // se iguala la variable lenseq con strlen(seq), lo cual nos permite saber el largo que tiene la secuencia.
	lenSubSeq = strlen(subseq);//esta vez la variable lensubseq, se iguala a strlen(subseq), lo cual nos permite saber el lardo de la subseceuncia.
	
	for (i=0; i < lenSeq; i++){// ciclo con el cual se recorrerá la secuencia y sub-secuencia , con el objetivo de encontrar coincidencias.
		for (k=0, flag=1; k < lenSubSeq; k++){// ciclo con el cual se recorrerá la sub-secuencia , con el objetivo de encontrar coincidencias.
			if (seq[i+k] != subseq[k]){ // condicion que permite si la sub-secuencia está relacionada con la secuencia original, osea saber si hay coincidencia. 
				flag=0; // bandera que permitirá saber cuando existe una coincidencia.(si esta marca 0, esto quiere decirn que no hay coincidencia)
			}
		}
		if (flag==1){ // si existe una coincidencia flag será == a 1.
			cont++;// el contador va sumando a medida que se encuentran las coincidencas.
		}
	}
	printf ("La sub-secuencia %s se ha encontrado %d vece(s) dentro del genoma. ", subseq, cont);
	// esto nos permitirá visualizar si existe una coincidencia. En el caso de existir, 
	//nos dirá cuantas veces está la sub-secuencia(la entregada por el usuario) 
	//presente en la secuencia original(la que entrega el ejercicio). 
}



int main (void){
	char seq [1000]="gtgggggggtttatgcctttagaacagcagactactgataactccaatcctgggttgaaaatgccaagggcgccagagagccaaacgatgagcgttggaccacaaacgataaaaactcactttctccgtggggtgaaagcgattctttctggcccgtatccgccagcacttaaagttgcattcggcgcggccctaccgctgctaattggggtaattgtcctaggattgtacgtaacgcttggcgggcacagccgcaagaaagcccacgcagccgcgatagatgctttggtcgagaagcacgaagcatgctacaaggtccaagcaaagattgcacacggcaggcttgccttacagtccgctgtggtgtctgttgcggatgccagcatgcaacaactccagttcgtgcagcaaggaattctcatgtgtgtcggagagctcgacgatatgcagaagttccggacccgactggataatgaaatcagtgccatcaaccagcgaattcccagcattgtcgaggaggtaagaaaacacaccgacgatgcgcttgagtggaatcttgctagaaccaagaacattttagagggcactgaagagcgcctgaaggatatgggcaatgagttggtgcgctacctagacgatgctcgcgccctcattgaaaatgcacgtatagctgcaggatcaatgcaacacctcgttggtgatgaggtgagaaagcagcttgctgaggttctagtaaaagttgcagaagtaagtaatggctttattgcgcttaagaagagtgtatctggctatttggaaaaaagcagtggacttgttgctagggaagttagggcaatcctggatgaccgcatgcgaagcctgcggaccatgtacaaaatgtgggatgcagaacaaaactccgtagtcagcgtgtgtaccacgctccaaaaggcaagcatggaggctgccgcggtagcaagt";
	char subseq[10]; // se entregan las variables que están en juego : secuencia y sub-secuencia. 
	printf(" %s", seq);// se imprime la secuencia.
	printf("\n");// se coloca un espacio entre los datos, para que estos no este todos juntos. 
	subsecuencia(seq, subseq);// se llama al procedimiento donde se realizó toda la operación, para saber si hay o no coincidencias. 
	return 0; 
}


