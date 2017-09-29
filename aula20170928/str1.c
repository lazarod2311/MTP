#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char frase [10000], bd[7] = "BOM DIA", tchau[5] = "TCHAU";
	int tam, i, j=0, k=0;
	fgets (frase,10000,stdin);
	strupr(frase);
	tam = strlen(frase) - 1;
	for (i=0; i<tam; i++) {
		if (frase [i] == bd[i]) {
			j++;
		}
		if (frase [i] == tchau[i]) {
			k++;
		}
	}
	if (j==7) {
		printf ("%d; Bom dia para voce tambem" ,tam);
	}
	if (k==5) {
		printf ("%d; Saindo? Que pena..." ,tam);
	}
	if (j!=7 && k!=5) {
	   printf ("%d; Voce quis dizer: %s?" ,tam ,frase);
    }
	return 0;
}