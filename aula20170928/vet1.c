#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int vet[10000], intei, b=0, i=0, j=0;
	float media;
    scanf ("%d" ,&intei);
    srand (time(NULL));
      for (i=0; i<10000; i++) {
      	vet[i] = rand() % intei+1;
	  }
	    for (j=0; j<10000; j++){
	    b=b+vet[j];	
		}
	media = b/10000;
	printf ("em torno de %.1f" ,media);
	return 0;	
}
