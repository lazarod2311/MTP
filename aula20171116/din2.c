#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void transposta (int ** valores ,int n, int m) {
	int i, j;
	int **matriz;
	matriz = calloc(m,sizeof(int*));
	for (i=0; i<m; i++) 
		matriz [i] = calloc(n,sizeof(int));
    for (i=0; i<m; i++) {
	for (j=0; j<n; j++){
		matriz [i][j] = valores [j][i];
	}
}
    imprime (matriz,m,n);
}
void imprime (int **valores, int n, int m) {
	int i, j;
	for (i=0; i<n; i++) {
		printf ("{");
	for (j=0; j<m; j++) {
		printf ("%d%c",valores[i][j],(j == m-1)? '},':',');
	}
}
}

int main () {
	int **valores; 
	int n , m, j, i;
	printf ("Qual a ordem de sua matriz?");
	scanf("%d %d" ,&n ,&m);
	valores = calloc(n,sizeof(int*));
	for (j=0; j<n; j++) 
		valores [j] = calloc(m,sizeof(int));
	for (j=0; j<n; j++) {
		for (i=0; i<m; i++) {
		    printf ("elemento [%d][%d]" ,j+1,i+1);
			scanf ("%d",&valores[j][i]);
		}
	}
	transposta (valores,n,m);
	return 0;
}