#include <stdio.h>
int main()
{
	int n,c=0,i;
scanf("%d",&n);
for (i=2;i<=n/2;i++)
	{
		if (n%1==0)
		c++;
	}
	if (c==0)
printf("prime");
else printf(" not prime");
}


