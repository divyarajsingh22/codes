#include <stdio.h>
int main()
{
int i,j,m,n,p,q;
	printf("enter 1st row size and column size");
	scanf("%d %d",&m,&n);
	printf("enter 2nd row size and column size");
	scanf("%d %d",&p,&q);
	int a[m][n],b[p][q];
	if (m==p&&n==q)
	{
	
	printf("enter elements of 1st matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
	printf("enter elements of 2nd matrix\n");
    for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
    printf(" new matrix after adding is\n");
	for(i=0;i<=m-1;i++)
	{
		for (j=0;j<=n-1;j++)
	{    printf("%d\t",a[i][j]+b[i][j]);
	}
	printf("\n");
    }
}
else printf("cant be added");
}

