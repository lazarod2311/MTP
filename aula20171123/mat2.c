#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A;
	int lin, col;
	printf("Entre com a ordem de sua matriz: ");
	scanf("%d", &lin); 
	col = lin;
	A = criarMatriz(lin, col);
	preencherMatriz(A);
	printf ("O determinante de sua matriz e: %g" ,determinante(A));
	return 0;
}