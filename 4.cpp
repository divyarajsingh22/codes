#include <stdio.h>
#include <math.h>

int main()
{
int n,s=0,r,f,m;
scanf("%d",&n);
while(n>0)
{
	r=n%10;
	f=1;
	while(r>0)
	{
		f=f*r;
		r=r-1;
		
	}s=s+f;
	n=n/10;
	
}
if (m==s)
printf("robinson");
else
printf(" not robinson");
}
