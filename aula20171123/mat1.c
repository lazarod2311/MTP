#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, C, Adj;
	int lin, col;
	printf("Entre com a ordem de sua matriz: ");
	scanf("%d", &lin); 
	col = lin;
	A = criarMatriz(lin, col);
	preencherMatriz(A);
	C = comatriz(A);
	Adj = adjunta(C);
	imprimirMatriz(Adj);
	return 0;
}