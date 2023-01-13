#include <stdio.h>
#include <math.h>
int main()

{
	int N,i,average,SD,sum=0;
	printf("enter size of array");
	scanf("%d",&N);
	int A[N];
	printf("enter %d elements");
	for (i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
		sum=A[i]+sum;
	}
	average=(float)sum/N;
	for(i=0;i<N;i++)
     sum+=pow((A[i]-average),2);
     printf("standard deviation is %f",sqrt(sum/N));
 }
