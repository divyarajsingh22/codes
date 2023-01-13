
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,E=0,O=0;
	printf("enter number of elements");
	scanf("%d",&n);
	int *p=(int*)malloc(n*sizeof(int));
	if (p==NULL)
	{
		printf("block not allocated");
		exit (0);
	}
	printf("enter elements");
	for (i=0;i<n;i++)
	{
     	scanf("%d",p+i);
     	if (*(p+i)%2==0)
     	E++;
     	else 
     	O++;
    }
printf("Even=%d\n Odd=%d\n",E,O);
free(p);
}
