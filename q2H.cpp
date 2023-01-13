#include <stdio.h>
int main()
{
	int m,n,i,j,sum=0;
	printf("enter row size and column size");
	scanf("%d %d",&m,&n);
	int a[m][n];
	printf("enter elements");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		sum+=a[i][j];
    }
   printf(" sum is %d\n average is  %d",sum,sum/(m*n));
}
}
