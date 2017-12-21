#ifndef FUNCOES_H
#define FUNCOES_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
typedef struct cliente {
	char nome [200]; 
	char rg[10]; 
	char cpf[11];
	int idade;
	char usuario [200];
	char senha [4];
	float saldo;
	float inserir[400];
	int vezes_inserir[400];
	float retirar[400];
	int vezes_r[400];
	int tam_inseriu;
	int tam_retirou;
}Cliente;
int j, l, p;
void criar_conta() {
	FILE *arq;
	Cliente c;
	printf ("Insira os seguintes dados:\n");
	printf ("\n1 - Nome: ");
	fgets(c.nome,200,stdin);
	printf ("2 - Idade: ");
	scanf ("%d" ,&c.idade);
	if (c.idade < 18) {
		printf ("Cadastro rejeitado!!");
	}
	printf ("3 - RG: ");
	scanf ("%s" ,&c.rg);
	printf ("4 - CPF: ");
	scanf ("%s" ,&c.cpf);
	printf ("5 - Usuario: ");
	scanf ("%s" ,&c.usuario);
	printf ("6 - Senha de quatro digitos: ");
	scanf ("%s" ,&c.senha);
	c.saldo = 0;
	c.tam_inseriu = 0;
	c.tam_retirou = 0;
	arq = fopen (c.cpf, "wb");
	fwrite(&c, sizeof(Cliente), 1, arq);
	fclose (arq);
}
void mostrar_conta(char Cpf[]) {
	char senha[4];
	Cliente c;
	int i, k;
	FILE *arq;
	printf ("\nDigite seu CPF: ");
	scanf ("%s" ,Cpf);
	arq = fopen(Cpf, "rb");
	if (arq == NULL) {
	printf ("\nUsuario nao cadastrado!!\n");
	return;
	}
	fread(&c, sizeof(Cliente), 1, arq);
	fclose (arq);
	printf ("\nDigite sua senha: ");
	senha[0] = getch(); 
	printf ("*"); 
	senha[1] = getch(); 
	printf ("*"); 
	senha[2] = getch(); 
	printf ("*"); 
	senha[3] = getch();  
	printf ("*\n"); 
	if((senha[0] == c.senha[0]) && (senha[1] == c.senha[1]) && (senha[2] == c.senha[2]) && (senha[3] == c.senha[3]))  {
	printf ("\nNome: %s" ,&c.nome);
	printf ("Idade: %d" ,c.idade);
	printf ("\nRG: %s" ,c.rg);
	printf ("\nCPF: %s" ,c.cpf);
	printf ("\nNome de usuario: %s\n" ,c.usuario);
	}
	else 
	printf ("\nSenha incorreta!!\n");
}
void mostrar_saldo(char Cpf[]) {
	char senha[4];
	FILE *arq;
	Cliente c;
	int i, k;
	if (Cpf[0] == '\0') {
	printf ("\nDigite seu CPF: ");
	scanf ("%s" ,Cpf);
	}
	arq = fopen(Cpf, "rb");
	if (arq == NULL) {
	printf ("\nUsuario nao cadastrado!!\n");
	return;
	}
	fread(&c, sizeof(Cliente), 1, arq);
	fclose (arq);
	printf ("\nDigite sua senha: ");
	senha[0] = getch(); 
	printf ("*"); 
	senha[1] = getch(); 
	printf ("*"); 
	senha[2] = getch(); 
	printf ("*"); 
	senha[3] = getch();  
	printf ("*\n"); 
	if((senha[0] == c.senha[0]) && (senha[1] == c.senha[1]) && (senha[2] == c.senha[2]) && (senha[3] == c.senha[3]))  {
	printf ("\nSaldo: R$ %g\n\n" ,c.saldo);
	}
	else 
	printf ("\nSenha incorreta!!\n");
}
void inserir_dinheiro(char Cpf[]) {
	char senha[4];
	float inserir;
	FILE *arq;
	int i=0, k, m, v=0, t=1, opt;
	Cliente c;
	if (Cpf[0] == '\0') {
	printf ("\nDigite seu CPF: ");
	scanf ("%s" ,Cpf);
	}
	arq = fopen(Cpf, "rb");
	if (arq == NULL) {
	printf ("\nUsuario nao cadastrado!!\n");
	return;
	}
	fread(&c, sizeof(Cliente), 1, arq);
	fclose (arq);
	printf ("\nDigite sua senha: ");
	senha[0] = getch(); 
	printf ("*"); 
	senha[1] = getch(); 
	printf ("*"); 
	senha[2] = getch(); 
	printf ("*"); 
	senha[3] = getch();  
	printf ("*\n"); 
	if((senha[0] == c.senha[0]) && (senha[1] == c.senha[1]) && (senha[2] == c.senha[2]) && (senha[3] == c.senha[3]))  {
	
	do {
	printf ("\nInsira o saldo: ");
	scanf ("%f",&inserir);
		for (i=0;i<c.tam_inseriu;i++) {
			if (inserir == c.inserir[i]) {
			c.vezes_inserir[i] ++;
			v = 10;
			}
		}
			if (v != 10){
				k = c.tam_inseriu;
				c.inserir[k] = inserir;
				c.tam_inseriu ++;
				c.vezes_inserir[k]=1;
				v = 0;
			}
		c.saldo = c.saldo + inserir;
		printf ("Deseja realizar outra operacao? Digite 1 para sim ou 2 para nao: ");
		scanf ("%d" ,&m);
	}while (m!=2);
		arq = fopen(Cpf, "wb");
		fwrite(&c, sizeof(Cliente), 1, arq);
		fclose (arq);
	}
	else 
	printf ("\nSenha incorreta!!\n");
}
void retirar (char Cpf[]) {
	char senha[4];
	float retirar;
	FILE *arq;
	int i=0, k, m, v=0, t=1, opt;
	Cliente c;
	if (Cpf[0] == '\0') {
	printf ("\nDigite seu CPF: ");
	scanf ("%s" ,Cpf);
	}
	arq = fopen(Cpf, "rb");
	if (arq == NULL) {
	printf ("\nUsuario nao cadastrado!!\n");
	return;
	}
	fread(&c, sizeof(Cliente), 1, arq);
	fclose (arq);
	printf ("\nDigite sua senha: ");
	senha[0] = getch(); 
	printf ("*"); 
	senha[1] = getch(); 
	printf ("*"); 
	senha[2] = getch(); 
	printf ("*"); 
	senha[3] = getch();  
	printf ("*\n"); 
	if((senha[0] == c.senha[0]) && (senha[1] == c.senha[1]) && (senha[2] == c.senha[2]) && (senha[3] == c.senha[3]))  {
	do {
	printf ("\nRetira o saldo: ");
	scanf ("%f",&retirar);
		for (i=0;i<c.tam_retirou;i++) {
			if (retirar == c.retirar[i]) {
			c.vezes_r[i] ++;
			v = 10;
			}
		}
			if (v != 10){
				k = c.tam_retirou;
				c.retirar[k] = retirar;
				c.tam_retirou ++;
				c.vezes_r[k]=1;
				v = 0;
			}
		c.saldo = c.saldo - retirar;
		printf ("\nDeseja realizar outra operacao? Digite 1 para sim ou 2 para nao: ");
		scanf ("%d" ,&m);
	}while (m!=2);
		arq = fopen(Cpf, "wb");
		fwrite(&c, sizeof(Cliente), 1, arq);
		fclose (arq);
	}
	else 
	printf ("\nSenha incorreta!!\n");
	
}
void extrato (char Cpf[]) {
	char senha[4];
	FILE *arq;
	int i=0, k, m, v=1, t=1, o;
	Cliente c;
	if (Cpf[0] == '\0') {
	printf ("\nDigite seu CPF: ");
	scanf ("%s" ,Cpf);
	}
	arq = fopen(Cpf, "rb");
	if (arq == NULL) {
	printf ("\nUsuario nao cadastrado!!\n");
	return;
	}
	fread(&c, sizeof(Cliente), 1, arq);
	fclose (arq);
	printf ("\nDigite sua senha: ");
	senha[0] = getch(); 
	printf ("*"); 
	senha[1] = getch(); 
	printf ("*"); 
	senha[2] = getch(); 
	printf ("*"); 
	senha[3] = getch();  
	printf ("*\n"); 
	if((senha[0] == c.senha[0]) && (senha[1] == c.senha[1]) && (senha[2] == c.senha[2]) && (senha[3] == c.senha[3]))  {
	printf ("\n\nInseriu:\tVezes: \n");
	for (i=0;i<c.tam_inseriu;i++) {
		printf ("R$ %.2f\t%d\n" ,c.inserir[i] ,c.vezes_inserir[i]);
	}
	printf ("\nretirou:\tVezes: \n");
	for (i=0;i<c.tam_retirou;i++) {
		printf ("R$ %.2f\t%d\n" ,c.retirar[i] ,c.vezes_r[i]);
	}
	printf ("\nSaldo: R$ %.2f\n" ,c.saldo);
	}
	else 
	printf ("\nSenha incorreta!!\n");
}
void remover () {
	char Cpf[10], senha[4];
	FILE *arq;
	Cliente c;
	printf ("\nDigite seu CPF: ");
	scanf ("%s" ,Cpf);
	arq = fopen(Cpf, "rb");
	if (arq == NULL) {
	printf ("\nUsuario nao cadastrado!!\n");
	return;
	}
	fread(&c, sizeof(Cliente), 1, arq);
	fclose (arq);
	printf ("\nDigite sua senha: ");
	senha[0] = getch(); 
	printf ("*"); 
	senha[1] = getch(); 
	printf ("*"); 
	senha[2] = getch(); 
	printf ("*"); 
	senha[3] = getch();  
	printf ("*\n"); 
	if((senha[0] == c.senha[0]) && (senha[1] == c.senha[1]) && (senha[2] == c.senha[2]) && (senha[3] == c.senha[3]))  {
	remove (Cpf);
	}
	else 
	printf ("\nSenha incorreta!!\n");
}
#endif
