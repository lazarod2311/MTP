#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char frase [10000];
	int tam, i;
	fgets (frase,10000,stdin);
	tam = strlen(frase) - 1;
	for (i=0; i<tam; i++) {
		if (frase [i] == 'a' || frase [i] == 'A' ){
		frase [i] = '4';
	    }
	    else
	    if (frase [i] == 'e' || frase [i] == 'E') {
	    frase [i] = '3';	
		}
		else
	    if (frase [i] == 'i' || frase [i] == 'I') {
	    frase [i] = '1';	
		}
		else
	    if (frase [i] == 'o' || frase [i] == 'O') {
	    frase [i] = '0';	
		}
		else
	    if (frase [i] == 's' || frase [i] == 'S') {
	    frase [i] = '5';	
		}
		else
	    if (frase [i] == 'g' || frase [i] == 'G') {
	    frase [i] = '9';	
		}
	}
	printf ("%s",frase);
	return 0;
}