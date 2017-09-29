#include <stdio.h>


int main () {
	int vet[10], soma, prod, i, l;
	for (l=0; l<10; l++) {
    scanf ("%d" ,&vet[l]);
    }
      for (i=0; i<10; i++) {
      	soma = soma + vet[i];
      	prod = prod * vet[i];
	  }
	    printf ("%d; %d" ,soma ,prod);	
	return 0;	
}