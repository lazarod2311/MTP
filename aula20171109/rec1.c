#include<stdio.h>
int retorno (int veta[], int n) {
	int c=0;
	if (n == 0) {
		return veta[n];
	}
	 c = veta[n];
	 return c+retorno(veta,n-1);
}
int main () {
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int N = sizeof(A)/sizeof(int);
	   printf ("%d",retorno(A,N-1)); 
  return 0;
}