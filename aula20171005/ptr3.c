#include <stdio.h>
#include <stdlib.h>

int main () {
	int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF}, i, j=0, l=0, m=0, n=0;
	unsigned char *p1, *p2;
	p1 = &vetor[0];
	p2 = &vetor[5] + 1;
	m=p1;
	n=p2 - p1;
	for (i=0; i<n; i++){
		p1=m;
		if(*p1!=0){
			l++;
			m++;	
		}
		else {
			m++;
		}
		j++;
	}
	printf ("bits investigados: %d; \nbits contados: %d;",j ,l);
	return 0;
}