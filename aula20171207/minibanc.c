#include<stdio.h>
#include"funcoes.h"
int main () {
	int opt;
	printf ("1 - Criar conta.\n2 - Mostrar conta.\n3 - Mostrar saldo.\n4 - Inserir dinheiro.\n5 - Retirar dinheiro.\n6 - Extrato.\n");
	printf("7 - Remover conta.\n8 - Sair\nDigite:");
	scanf ("%d" ,&opt);
	do {
	switch(opt) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		default:	
	}
	}while(opt != 8);
}
