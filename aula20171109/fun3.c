#include<stdio.h>
int retorno (int veta[], int vetb[], int vetc[], int n, int m) {
	int i,j,k=0;
	for (i=0; i<n; i++)
	 for (j=0; j<m; j++) {
	 	if (veta[i] == vetb[j]) {
	 		vetc [k] = veta[i];
	 		k++;
		 }
	 }
	 return k;
}
int main () {
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);
    int l;
    int vetc[20];
	  for (l=0; l<retorno (A,B,vetc,n,m); l++){
	   printf ("%d",vetc[l]); 
	   if (l < (retorno (A,B,vetc,n,m)-1)) 
	   printf (",");
    }
  return 0;
}