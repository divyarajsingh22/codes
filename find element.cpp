#include <stdio.h>
int main()
{
	int i,A[10000],n,ele;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
    printf("enter element to be searched");
    scanf("%d",&ele);
    for(i=0;i<n-1;i++)
    {
    	if (A[i]==ele)
    	{
    		printf("element %d found at %d position",ele,i+1);
    		return 0;
		}
	}
	printf("not found");
}
