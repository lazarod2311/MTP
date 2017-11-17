#include <stdio.h>
#include <stdlib.h>

int main () {
   char *string;
   int i, j;
   string = malloc(1);
   printf("Digite ';' para finalizar a entrada do texto.\n");
   printf("Seu texto: ");
   for (i=0;;i++){
   	string = realloc(string,strlen(string)+1);
   	string[i]=getchar();
   	if (string[i] == ';')
   	   break;
   	   string[i+1] = '\0';
   }
   j = strlen(string);
   for (i=0;i<j;i++) {
   	string[i] = toupper(string[i]);
   }
   printf ("%s",string);
   return 0;
}