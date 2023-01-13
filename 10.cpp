#include <stdio.h>

int main()
{
    int i,n,max,min,maxpos,minpos,t;
    printf("Enter Array size : \n");
    scanf("%d",&n);
    int A[n];
    printf("Enter Array elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    max = A[0];
    for(i=0; i<n; i++)
    {
        if(A[i]>max)
        {
            max = A[i];
            maxpos = i;
        }
    }
    printf("Largest element is : %d \n",max);
    min = A[0];
    for(i=0; i<n; i++)
    {
        if(A[i]<min)
        {
            min = A[i];
            minpos = i;
        }
    }
    printf("Smallest element is : %d \n",min);
    t = A[maxpos];
    A[maxpos] = A[minpos];
    A[minpos] = t;
    printf("New Array elements are : \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",A[i]);
    }


    return 0;
}
