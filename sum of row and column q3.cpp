#include <stdio.h>
int main()
{



int i,j,m,n,csum,rsum;
	printf("enter row size and column size");
	scanf("%d %d",&m,&n);
	int a[m][n];
	printf("enter elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<m;i++)
	{
		int rsum=0,csum=0;
		for(j=0;j<n;j++)
		{
			rsum=rsum+a[i][j];
			csum=csum+a[j][i];
		}
		printf("\nrow sum=%d\ncolumn sum=%d",rsum,csum);
	}
	
}

