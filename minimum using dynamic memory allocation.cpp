
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,min;
	printf("enter number of elements");
	scanf("%d",&n);
	int *p=(int*)malloc(n*sizeof(int));
	if (p==NULL)
	{
		printf("block not allocated");
		exit (0);
	}
	printf("enter elements");
	min = *p;
	for (i=0;i<n;i++)
	{
		scanf("%d",p+i);
		if (*(p+i)<min)
		min=*(p+i);
	}
	printf("minimum number is %d",min);
}
