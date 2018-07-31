//~ Escriba un programa con una función con la que se pueda buscar una subsecuencia determinada en
//~ una gran secuencia de ADN, entregada por el usuario.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cambiar_mayuscula(char seq[1000], int lenseq){ // procedimiento, en el cual se llevará a cabo la operación que se piede(imprimir la cadena en letras mayúsculas)
	int i; // variable que se utilizará para marcar el inicio y fin del ciclo que viene a continuación.
		
	for (i=0; i<lenseq; i++){	//ciclo con el cual se harán las comparaciones necesarias para poder imprimir las letras minúsculas en mayúsculas.		
		if (seq[i]=='a'){ //cuando se tenga una letra a minúscula, de acuerdo a esta condición, se imprimirá una letra A mayúscula.(esto para todas las letras precentes en la cadena a,c,g,t)
			seq[i]='A';
		}
		else if (seq[i]=='t'){
			seq[i]='T';
		}
		else if (seq[i]=='c'){
			seq[i]='C';
		}
		else if (seq[i]=='g'){
			seq[i]='G';
		} 
	}
	printf("\n");
}	 	
		
int main (void){
	char seq [1000]="gtgggggggtttatgcctttagaacagcagactactgataactccaatcctgggttgaaaatgccaagggcgccagagagccaaacgatgagcgttggaccacaaacgataaaaactcactttctccgtggggtgaaagcgattctttctggcccgtatccgccagcacttaaagttgcattcggcgcggccctaccgctgctaattggggtaattgtcctaggattgtacgtaacgcttggcgggcacagccgcaagaaagcccacgcagccgcgatagatgctttggtcgagaagcacgaagcatgctacaaggtccaagcaaagattgcacacggcaggcttgccttacagtccgctgtggtgtctgttgcggatgccagcatgcaacaactccagttcgtgcagcaaggaattctcatgtgtgtcggagagctcgacgatatgcagaagttccggacccgactggataatgaaatcagtgccatcaaccagcgaattcccagcattgtcgaggaggtaagaaaacacaccgacgatgcgcttgagtggaatcttgctagaaccaagaacattttagagggcactgaagagcgcctgaaggatatgggcaatgagttggtgcgctacctagacgatgctcgcgccctcattgaaaatgcacgtatagctgcaggatcaatgcaacacctcgttggtgatgaggtgagaaagcagcttgctgaggttctagtaaaagttgcagaagtaagtaatggctttattgcgcttaagaagagtgtatctggctatttggaaaaaagcagtggacttgttgctagggaagttagggcaatcctggatgaccgcatgcgaagcctgcggaccatgtacaaaatgtgggatgcagaacaaaactccgtagtcagcgtgtgtaccacgctccaaaaggcaagcatggaggctgccgcggtagcaagt";
	char subseq[10];
	
	printf ("Ingrese sub-secuencia: ");
	scanf ("%s", subseq);// el usuario ingresará una sub-secuencia, la cual será comparada con la original, para env¿contrar coincidencias.
	printf("\n");
	cambiar_mayuscula(seq, strlen(seq));// se llamará a procedimiento encargado de cambiar las letras minúsculas por mayúsculas.
	printf("SECUENCIA: %s\n", seq); // se imprimirá la secuencia original.
	cambiar_mayuscula(subseq, strlen(subseq));// se cambiarán las letras minúsculas por mayúsculas, al igual que con la secuencia original. se utiliza el mismo procedimiento que con la secuencia original debido a que tambien se quiere modificar las letras de la sub-secuencia ingresada por el usuario.
	printf ("SUB-SECUENCIA: %s\n", subseq);// se imprime la sub-seceuncia.
	
	return 0; 
}

	
