#include <stdio.h>
int main()
{
	int n,r,reverse,c;
scanf("%d",&n);
c=n;
for (reverse=0;n!=0;n/=10)
	{
		r=n%10;
		reverse=reverse*10+r;
	}
if (reverse==c)
printf("Palindrome.");
else
printf("Not Palindrome.");
}



