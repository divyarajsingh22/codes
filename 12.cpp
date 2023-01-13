#include <stdio.h>

int main()
{
    int i,n,max,smax,min,smin;
	printf("enter array size : ");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements : \n ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
		
	}
	if(n==1)
	{
		printf("Max = %d , SMax = %d",A[0] , A[0]);
	}
	else
	{
		if(A[0]>A[1])
		{
			max = A[0] , smax = A[1];
		}
		else
		{
			max = A[1] , smax = A[0];
		}
		for(i=2; i<n; i++)
		{
			if(A[i]>max)
			{
				smax = max;
				max = A[i];
			}
			else if(A[i]>smax)
			{
				smax = A[i];
			}
		}
	}
	printf("%d\n",smax);
	if(n==1)
	{
		printf("min = %d , Smin = %d",A[0] , A[0]);
	}
	else
	{
		if(A[0]<A[1])
		{
			min = A[0] , smin = A[1];
		}
		else
		{
			min = A[1] , smin = A[0];
		}
		for(i=2; i<n; i++)
		{
			if(A[i]<min)
			{
				smin = min;
				min = A[i];
			}
			else if(A[i]<smin)
			{
				smin = A[i];
			}
		}
	}
	printf("%d\n",smin);


    return 0;
}
