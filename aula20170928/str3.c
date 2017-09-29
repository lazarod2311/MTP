#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char frase [10000];
	int tam, i;
	fgets (frase,10000,stdin);
	tam = strlen(frase) - 1;
	for (i=0; i<tam; i++) {
		if (frase [i] < 110 && frase [i] > 96 || frase [i] < 78 && frase [i] > 64){
		frase [i] = frase [i] + 13;
	    }
	    else
	    if (frase [i] > 110 && frase [i] < 123 || frase [i] > 78 && frase [i] < 91) {
	    frase [i] = frase [i] - 13;	
		}
	}
	printf ("%s",frase);
	return 0;
}