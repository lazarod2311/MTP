#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int vet[1000], intei, maior, menor, i, j;
    scanf ("%d" ,&intei);
    srand (time(NULL));
      for (i=0; i<intei; i++) {
      	vet[i] = rand() % 10;
	    }
	    maior = vet [0];
	    menor = vet [0];
	    for (j=0; j<intei; j++) {
	      if (vet [j] > maior) {
	      	maior = vet [j];
		  }
		  if (vet[j] < menor) {
		  	menor = vet [j];
		  }
		}
	printf ("min=%d; max=%d" ,menor ,maior);
	return 0;	
}