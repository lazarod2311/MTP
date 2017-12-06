#include <stdio.h>
#include <stdlib.h>

	int main () {
	   FILE *x;
	   char *string ,*ch;
	   int i, j, l, m;
	   string = malloc(1);
	   scanf ("%d" ,&m);
	   if (m == 1) {
	   printf("Digite ';' para finalizar a entrada do texto.\n");
	   printf("Seu texto: ");
	   x = fopen("meuarquivo.txt","w");
	   for (i=0;;i++){
	   	string = realloc(string,strlen(string)+1);
	   	string[i]=getchar();
		fputc(string[i],x);
	   	if (string[i] == ';')
	   	   break;
	   	   string[i] = 32;
	   	   string[i+1] = '\0';
	   	   l = i;
		}
	   j = strlen(string);
	   for (i=0;i<j;i++) {
	   	string[i] = toupper(string[i]);
		}
	   printf ("%s",string);
	   ch = malloc(i);
		}
	   if (m == 2) {
	   x = fopen("meuarquivo.txt","r+");
	   while( (ch=fgetc(x))!= EOF ){
			putchar(ch);
		}
		for (i=0;;i++){
	   	string = realloc(string,strlen(string)+1);
	   	string[i]=getchar();
		fputc(string[i],x);
	   	if (string[i] == ';')
	   	   break;
	   	   string[i] = 32;
	   	   string[i+1] = '\0';
	   	   l = i;
		}
		}
	   return 0;
	}
