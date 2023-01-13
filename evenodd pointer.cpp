#include <stdio.h>
int main()
{
	int A,*Pa=&A;
	scanf("%d",Pa);
	if (*Pa%2==0)
	printf("even");
	else
	printf("odd");
}

