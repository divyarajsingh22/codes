#include<stdio.h>

int findmax(int*A, int n)
{
	int i;
	int max= *A;
for (i=1;i<n;i++)
    {
	if (*(A+i)>max)
	max=*(A+i);
    }
	return max;
}
int main()
{
	int max,i;
	int A[100],n;
	printf("enter number of  array elements");
	scanf("%d",&n);
	printf("enter array elements");
	for (i=0;i<n;i++)
{
	scanf("%d",&A[i]);
}
	max=findmax(A,n);
	printf("%d",max);
}
