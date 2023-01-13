
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,max;
	printf("enter number of elements");
	scanf("%d",&n);
	int *p=(int*)malloc(n*sizeof(int));
	if (p==NULL)
	{
		printf("block not allocated");
		exit (0);
	}
	printf("enter elements");
	max= *p;
	for (i=0;i<n;i++)
	{
		scanf("%d",p+i);
		if (*(p+i+1)>max)
		max=*(p+i);
	}
	printf("max number is %d",max);
}
