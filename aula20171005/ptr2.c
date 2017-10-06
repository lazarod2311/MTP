#include <stdio.h>
#include <stdlib.h>

int main () {
	int vetor[] = {0,1,2,4,8,16,1025}, i, j=0, l=0;
	unsigned char *p1, *p2;
	p1 = &vetor[0];
	p2 = &vetor[6] + 1;
	for (i=p1; i<p2; i++){
		if(*p1==0){
			l++;
			p1++;
		}
		else {
			p1++;
		}
		j++;
	}
	printf ("bits investigados: %d; \nbits contados: %d;",j ,l);
	return 0;
}