#include <stdio.h>
#include <math.h>

int main()
{
int n,d=0,m,s=0;
scanf("%d",&n);
while(n>0)
{
	d++;
	n=n/10;
}printf("number of digits are %d",d);
m=n;
{
	while(m>0)
{
	s=s+pow(m%10,d);
	m=m/10;
	
}if (n==s)
printf("armstrong");
else printf(" not armstrong");

}
}
