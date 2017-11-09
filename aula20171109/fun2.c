#include<stdio.h>
void retorno (int n1, int n2, int *n3, int *n4) {
	if (n2 > n1) {
	 *n3 = 0;
	 *n4 = n1;
    }
	else
	 *n3 = n1/n2;
	 *n4 = n1 - (*n3*n2);
}
int main () {
	int num1, num2, num3, num4 = 0;
	  scanf ("%d""%d",&num1,&num2);
	  retorno (num1,num2,&num3,&num4);
	  printf ("%d"",""%d",num3 ,num4); 
  return 0;
}