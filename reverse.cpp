#include <stdio.h>
int main()
{
	int n,r,reverse;
scanf("%d",&n);
for (reverse=0;n!=0;n/=10)
	{
		r=n%10;
		reverse=reverse*10+r;
	}
printf("%d",reverse);

}


