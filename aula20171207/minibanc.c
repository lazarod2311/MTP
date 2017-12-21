#include<stdio.h>
#include"funcoes.h"
int main () {
	char cpf[10];
	int opt;
	printf ("Selecione: ");
	do {
	printf ("\n1 - Criar conta.\n2 - Mostrar conta.\n3 - Mostrar saldo.\n4 - Inserir dinheiro.\n5 - Retirar dinheiro.\n6 - Extrato.\n");
	printf("7 - Remover conta.\n8 - Sair\n\nDigite: ");
	scanf ("%d%*c" ,&opt);
	switch(opt) {
		case 1:
			criar_conta();
			break;
		case 2:
			mostrar_conta(cpf);
			break;
		case 3:
			mostrar_saldo(cpf);
			break;
		case 4:
			inserir_dinheiro(cpf);
			break;
		case 5:
			retirar (cpf);
			break;
		case 6:
			extrato (cpf);
			break;
		case 7:
			remover ();
			break;
		default:
		exit(0);	
	}
	}while(opt != 8);
}
