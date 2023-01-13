#include <stdio.h>
int main()
{
int a,b,p=1;
scanf("%d %d",&a,&b);
while (b>0)
{
	p=p*a;
	b--;
 } 
 printf("%d",p);
}
