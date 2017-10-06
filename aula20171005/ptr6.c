#include <stdio.h>
#include <stdlib.h>

int main () {
    char s[16] = {'0'};
    int *p ,i;
    p = &s;
    fgets (s,16,stdin);
    for (i=0; i<4;i++){
    	printf ("%d " ,*p);
    	p++;
	}
	p = &s;
	printf ("; ");
    for (i=0; i<4;i++){
    	printf ("%x " ,*p);
    	p++;
	}
return 0;
}