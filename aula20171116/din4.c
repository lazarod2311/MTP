#include <stdio.h>
#include <stdlib.h>
struct {
	int *x;
	int *y;
} ponto;
struct {
	int v;
	int cx;
	int cy;
} poligono;
int main () {
	int i, j=0, n, m; 
	float a = 0 ,cx ,cy;
	printf ("Digite quantos poligonos deseja entrar: ");
	scanf("%d",&m);
	for (j = 0; j<m; j++) {
		n=0;
		poligono.cx=0;
		poligono.cy=0;
   printf("Digite a quantidade de vertices do seu poligono (%d): ",j+1);
   scanf("%d" ,&poligono.v);
   ponto.x = calloc(poligono.v,sizeof(int));
   ponto.y = calloc(poligono.v,sizeof(int));
   printf ("Digite as coordenadas X dos vertices de seu poligono (%d): ",j+1);
    for(i=0;i<poligono.v;i++){
    	scanf ("%d",&ponto.x[i]);
	}
   printf ("Digite as coordenadas Y dos vertices de seu poligono (%d): ",j+1);
    for(i=0;i<poligono.v;i++){
    	scanf ("%d",&ponto.y[i]);
	}	
	for(i=0;i<poligono.v-1;i++){
    	n += ((ponto.x[i]*ponto.y[i+1])-(ponto.y[i]*ponto.x[i+1]));
	}	
	for(i=0;i<poligono.v;i++){
    	poligono.cx += ponto.x[i];
	}	
	for(i=0;i<poligono.v;i++){
    	poligono.cy += ponto.y[i];
	}	
	a = n/2;
	cx = poligono.cx/poligono.v;
	cy = poligono.cy/poligono.v;
	printf ("Area (%d) = %g\n" ,j+1 ,a);
	printf ("Centroide (%d) = (%g,%g)\n" ,j+1 ,cx ,cy);
	printf ("Pontos poligono (%d): ", j+1);
	for(i=0;i<poligono.v;i++){
    printf ("(%d,%d);" ,ponto.x[i] ,ponto.y[i]);
	}	
	printf("\n\n");
}
   return 0;
}