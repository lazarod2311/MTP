#include <stdio.h>
#include <stdlib.h>

int main () {
	char s[16] = {'0'} ,*p;
    int vet[4] ={0} ,i ,j ,l=0;
    p = &vet;
    for (i=0; i<4; i++){
    	scanf("%d" ,&vet[i]);
	}
	for (j=0; j<16; j++){
		s[l] = *p;
		p++;
		l++;
	}
	printf("%s" ,s);
return 0;
}