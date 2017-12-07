#include<stdio.h>
#include<string.h>
struct cliente {
	char nome [200]; 
	char rg[10]; 
	char cpf[11];
	int idade;
	char usuario [200];
	char senha [200];
	float saldo;
	float *inserir;
	int *vezes;
}Cliente;
int j, l, p;
void criar_conta(int i) {
	Cliente c[i];
	printf ("Insira os seguintes dados:\n");
	printf ("1 - Nome: ");
	gets(c[i-1].nome);
	printf ("\n2 - Idade: ");
	scanf ("%d" ,&c[i-1].idade);
	printf ("\n3 - RG: ");
	gets(c[i-1].rg);
	printf ("\n4 - CPF: ");
	gets(c[i-1].cpf);
	printf ("\n5 - Usuario: ");
	gets(c[i-1].usuario);
	printf ("\n6 - Senha: ");
	gets(c[i-1].senha);
	if (c[i-1].idade < 18) {
		printf ("Cadastro rejeitado!!");
		break;
	}
	getch();
}
void mostrar_conta() {
	char Cpf[10];
	int i, k;
	Cliente *c1 = adquirir_estrut();
	printf ("Digite seu CPF: ");
	gets(Cpf);
	for (i=0; i<j; i++){
	if (strcmp(c1[i].cpf,Cpf) == 0){
		k = i;
	} 
	}
	printf ("Nome: %s" ,c1[k].nome);
	printf ("\nIdade: %d" ,c1[k].idade);
	printf ("\nRG: %s" ,c1[k].rg);
	printf ("\nCPF: %s" ,c1[k].cpf);
	getch();
}
void mostrar_saldo() {
	char Cpf[10];
	int i, k;
	Cliente *c1 = adquirir_estrut();
	printf ("Digite seu CPF: ");
	gets(Cpf);
	for (i=0; i<j; i++){
	if (strcmp(c1[i].cpf,Cpf) == 0){
		k = i;
	} 
	}
	printf ("Saldo: %f" ,c1[k].saldo);
	getch();
}
void inserir_dinheiro() {
	char Cpf[10];
	int i=0, k, m, v=1, t=1, o;
	Cliente *c1 = adquirir_estrut();
	printf ("Digite seu CPF: ");
	gets(Cpf);
	for (i=0; i<j; i++){
	if (strcmp(c1[i].cpf,Cpf) == 0){
		k = i;
	} 
	}
	c1[k].inserir = malloc(1);
	c1[k].vezes_inserir = malloc(1);
	printf ("Insira o saldo: ");
	do {
		v++;
		scanf ("%f",&c1[k].inserir[i]);
		c1[k].vezes_inserir[i] = v;
		printf ("Deseja realizar outra operacao? Digite 1 para sim ou 2 para nao.");
		scanf ("%d" ,&m);
		if (m == 1) {
			printf ("Para realizar operacao de mesmo valor pressione 1, ou 2 para valor diferente: ");
			scanf ("%d" ,&opt);
		}
		if (opt == 1){
			v++;
			c1[k].vezes_inserir[i] = v;
		}
		if (opt == 2){
			i++;
			c1[k].inserir = realloc(c1[k].inserir,(t+1)*sizeof(float));
			t++;
			v = 1;
			scanf ("%f" ,&c1[k].inserir[i]);
			c1[k].vezes_inserir[i] = v;
		}
	}while (m!=2);
	getch();
}
