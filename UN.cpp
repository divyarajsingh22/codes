#include <stdio.h>
int main()
{
	int a,b,c,term,i;
scanf("%d",&term);
a=0;
b=1;
c=0;
for(i=1;i<=term;i++)
{
	printf("%d",c);
	a=b;
	b=c;
	c=a+b;
}
		
	
}
