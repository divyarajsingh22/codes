#include <stdio.h>
#include <math.h>
int main()

{
	int i,N,smax,max;
	printf("enter size of array");
	scanf("%d",&N);
	int A[N];
	printf("enter the elements");
	for (i=0;i<N;i++)
	{
		scanf("%d",&A[N]);
	}
		if (N==1)
		printf("max is %d and second max is %d",A[0],A[0]);
		else 
		{
		    if (A[0]>A[1])
			max=A[0],smax=A[1];
			else 
			max=A[1],smax=A[0];
			for (i=2;i<=N-1;i++)
			{
				if (A[i]>max)
					{
					smax=max;
					max=A[i];
					}
				else if
				(A[i]>smax)
				smax=A[i];
		}
	}
	printf("second max number is %d ",smax);
}
		
 
