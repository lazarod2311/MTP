#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, C, Adj, Inv;
	int lin, col, i, j;
	printf("Entre com a ordem de sua matriz: ");
	scanf("%d", &lin); 
	col = lin;
	A = criarMatriz(lin, col);
	preencherMatriz(A);
	C = comatriz(A);
	Adj = adjunta(C);
	Inv = inversa(A,Adj);
	for(i = 0; i < Inv.lin; i++) {
		for(j = 0; j < Inv.col; j++)
			printf("%.2lg\t", Inv.m[i][j]);
		printf("\n");
	}
	return 0;
}