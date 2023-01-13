#include <stdio.h>
int main()
{
	int i,j,rows,a;
	scanf("%d",&rows);
	for(i=1; i<=rows; i++);
	{
		for(j=i; j<=rows; j++)
		{
			if (j%2==0)
			{
				a=0;
			}
			else
			{
				a=1;
			}
			printf("%d",a);
		}
		printf("\n");
	}	
}

		
	

