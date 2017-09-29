#include <stdio.h>


int main () {
	int vet[10], m=9, i, j, l, aux;
	for (l=0; l<10; l++) {
    scanf ("%d" ,&vet[l]);
    }
      for (i=0; i<5; i++) {
      	aux=vet[i];
      	vet[i] = vet[m];
      	vet[m]=aux;
      	m--;
	  }
	    for (j=0; j<10; j++){
	    printf (" %d" ,vet[j]);	
		}
	return 0;	
}