#include <stdio.h>

int main()
{
    int i,A[100000],n,ele;
    printf("Enter size of array : \n");
    scanf("%d",&n);
    printf("Enter array elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter element need to be searched : \n");
    scanf("%d",&ele);
    for(i=0; i<n; i++)
    {
        if(A[i]==ele)
        {
            printf("Element %d found at position %d \n ",ele,i+1);
        }
       
    }
    if(A[i]!=ele)
    {
        printf("Element not found");
    }
    

    return 0;
}
