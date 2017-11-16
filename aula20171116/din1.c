#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float media (int * valores ,int n) {
	int i;
	float media = 0.0f;
	for (i=0; i<n; i++){
		media += valores[i];
	}
	media /= n;
	return media; 
}
float desvio (int * valores, int n ,float m) {
	float x=0, var, desv;
	int i;
	for (i=0; i<n; i++) {
		x += (valores[i] - m)*(valores[i] - m);
	}
	var = x/(n-1);
	desv = sqrt(var);
	return desv;
}
int main () {
	int *valores; 
	int n ,j=0;
	float m, d;
	printf ("Quantos numeros deseja entrar?");
	scanf("%d" ,&n);
	valores = calloc(n,sizeof(int));
	printf("Quais sao os numeros?");
	for (j=0; j<n; j++) {
		scanf ("%d" ,&valores[j]);
	}
	m = media (valores,n);
	d = desvio (valores,n,m);
	printf ("%g , %g" ,m ,d);
	return 0;
}