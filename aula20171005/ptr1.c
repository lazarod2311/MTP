#include <stdio.h>
#include <stdlib.h>

int main () {
	unsigned int v=0xFACA8421;
	int *pont ,i;
	unsigned char *p;
	pont = &v;
	printf ("%u %d" ,v ,pont);
    p=pont;
    for (i=0; i<4; i++) {
    printf ("\n%hhu" ,*p);
    p++;
    }
	return 0;
}