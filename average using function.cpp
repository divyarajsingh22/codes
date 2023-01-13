#include<stdio.h>

float findaverage(int*A, int n)
{
	int s=0,i;
	for (i=0;i<n;i++)
	s=s+ *(A+i);//s=s+A[i];
	return (float)s/n;
}
int main()
{
	float avg;
    int A[]={ 4,1,6,7,8};
    int n= sizeof(A)/sizeof(A[0]);
    avg=findaverage(A,n);
    printf("%f",avg);
}
