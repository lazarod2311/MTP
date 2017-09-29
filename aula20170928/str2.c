#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char frase [10000];
	int tam, i, v=0, c=0, e=0, d=0;
	fgets (frase,10000,stdin);
	strupr(frase);
	tam = strlen(frase) - 1;
	for (i=0; i<tam; i++) {
		if (frase [i] == 'A' || frase [i] == 'E' || frase [i] == 'I' || frase [i] == 'O' || frase [i] == 'U') {
			v++;
		}
		else
		if (frase [i] >='0' && frase [i] <='9') {
			d++;
		}
		else 
		if (frase [i] == ' ') {
			e++;
		}
		else {
			if (frase [i] >='A' && frase [i] <='Z')
			c++;
		}
    }
    printf ("V:%d;C:%d;D:%d;E:%d",v ,c ,d ,e);
	return 0;
}