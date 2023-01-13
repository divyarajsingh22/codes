#include <stdio.h>
int main()
{
	int d,b=0,p=1,r;
	scanf("%d",&d);
	while (d!=0)
	{ r=d%2;
	b=b+r*p;
	p=p*10;
	d=d/2;
	
	}
	printf("%d",b);
}


