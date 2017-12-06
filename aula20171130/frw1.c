#include<stdio.h>
#include<stdlib.h>
 int main () {
 	char nome [256];
 	int idade,optn;
 	float altura;
 	FILE *x;
 	printf ("Digite 1 para informar os dados ou 2 para ver os dados;");
 	scanf("%d",&optn);
 	if (optn == 1){
 	printf ("Qual seu nome, sua idade e sua altura??");
 	gets(nome);
	x= fopen("info.txt","w");
 	scanf("%d%g",&idade,&altura);
 	fprintf(x,"%s\n%d\n%g",nome,idade,altura);
 	}
 	if (optn == 2) {
 	x= fopen("info.txt","r");
 	fgets(nome,256,x);
 	while (!feof(x)) {
 	fscanf(x,"\n%d%g",&idade,&altura);
 	}	
 	printf ("Nome: %sIdade: %d\nAltura: %g",nome,idade,altura);
 	}	
 	return 0;
 }