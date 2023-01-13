#include <stdio.h>
int main()
{
	int n,i=1,s=0;
scanf("%d",&n);
for (;i<n;i++)
	{
		if(n%i==0)
		s=s+i;
	}


if(s==n)
	printf("Perfect");
else
	printf(" not Perfect");
}


