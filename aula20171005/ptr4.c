#include <stdio.h>
#include <stdlib.h>

int main () {
	float a, b, s;
	int *p1, *p2, *p3;
	scanf ("%f %f",&a ,&b);
	s = a+b;
	p1 = &a;
	p2 = &b;
	p3 = &s;
	printf ("0x%d %.1f; 0x%d %.1f; 0x%d %.1f;",p1 ,a ,p2 ,b ,p3 ,s);
	return 0;
}