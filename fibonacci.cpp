#include <stdio.h>
int main()
{int a=0,b=1,c,n;
scanf("%d",&n);
printf("%d %d",a,b);
while(n-2)
{
	c=a+b;
	printf("%d\n",c);
	a=b;
	b=c;
	n=n-1;
}
}
