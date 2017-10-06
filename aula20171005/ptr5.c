#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int vetor[1000], i, j, m, o=0;
	unsigned char *p, n;
	p = &vetor[0];
	srand(time(NULL));
	for(i=0; i<1000; i++){
		vetor[i]=rand();
	}
	m = sizeof(vetor);
	printf ("Escolha um numero entre 0 e 255:");
	scanf ("%u" ,&n);
	for (j=0; j<m; j++){
		if (*p==n){
			printf ("\n%x : %d" ,p ,*p);
			o++;
		}
		p++;
	}
	printf ("\nNumero de bits que contem seu numero: %d \nSeu numero: %d \nEnd inicial do vetor: %x \nEnd final do vetor: %x" ,o ,n ,p, p+m);
	return 0;
}