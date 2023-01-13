#include <stdio.h>
#include <math.h>
int main()

{
	int n,c=0,i;
scanf("%d",&n);
for (i=2;i<=sqrt(n);i++)
	{
		if (n%1==0)
		c++;
	}
	if (c==0)
printf("prime");
else printf(" not prime");
}


