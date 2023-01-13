#include<stdio.h>

 void multiply (int *n)
 {
 *n=*n*10;
 printf(" after multiply in fn %d\n",*n);	
 }
int main()
{
int n;
scanf("%d",&n);
multiply(&n);
printf(" after multiply in main %d",n);
}
