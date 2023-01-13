#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter marks in Maths physics chemistry respectively");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=65&&b>=55&&c>=50&&a+b+c>=180)
	printf("eligible");
	else printf("not eligible");
	
}
