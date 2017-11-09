#include<stdio.h>
void soma (int n1, int n2, int den1, int den2, int *num3, int *den3) {
	*den3 = den1*den2;
	*num3 = (den2*n1) + (den1*n2);
}
int main () {
	int num1, num2, den1, den2, num3, den3;
	  scanf ("%d""%d",&num1,&den1);
	  scanf ("%d""%d",&num2,&den2);
	  soma (num1,num2,den1,den2,&num3,&den3);
	if (den1 == 0 || den2 == 0) {
	  printf ("erro!");	
	}
	else {
	  printf ("%d""/""%d",num3 ,den3); 
    }
  return 0;
}