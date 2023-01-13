#include <stdio.h>
int main()
{
	int i,n;
    printf("enter no of elements in array");
    scanf("%d",&n);
    int A[n]; 
     printf("enter elements "); 
    for (i=0;i<n;i++)
   {
	scanf("%d",&A[i]);
}
    for (i=0;i<n;i++)
    printf(" array is\n%d\n",A[i]);
}
