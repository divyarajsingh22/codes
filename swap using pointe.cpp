#include<stdio.h>

 void swap (int *a,int *b)
 {
 *a=*a+*b;
 *b=*a-*b;
 *a=*a-*b;
 printf(" after swapping numbers are  %d %d \n",*a,*b);	
 }
int main()
{
int a,b;
scanf("%d %d",&a,&b);
swap(&a,&b);
printf(" after swap in main %d %d",a,b);
}
