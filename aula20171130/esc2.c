#include <stdio.h>
#include <stdlib.h>
struct {
	int *x;
	int *y;
} ponto;
int main () {
   FILE *coord;
   char nome[256];
   int i, k;
	printf("Digite quantos pontos deseja entrar:");
	scanf ("%d",&i);
	ponto.x = calloc(i,sizeof(int));
	ponto.y = calloc(i,sizeof(int));
	printf("Digite as coordenadas x:");
   for (k=0; k<i; k++) {
   	scanf("%d",&ponto.x[k]);
	}
	printf("Digite as coordenadas y:");
   for (k=0; k<i; k++) {
   	scanf("%d",&ponto.y[k]);
	}
	printf("Digite o nome do arquivo:");
	scanf("%s",&nome);
	coord = fopen(nome,"wb");
   for (k=0; k<i; k++) {
	fwrite(&ponto.x[k],sizeof(int),i,coord);
	fwrite(&ponto.y[k],sizeof(int),i,coord);
	}
	fclose(coord);
   return 0;
}
