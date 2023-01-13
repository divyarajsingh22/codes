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
 printf("Array elements are:\n");  
    for (i=n-1;i>=0;i--)
    printf("%d\n",A[i]);
}
