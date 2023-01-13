#include <stdio.h>

int main()
{
    int i,j,n,t;
    printf("Enter size of Array :- \n");
    scanf("%d",&n);
    int A[n];
    printf("Enter %d elements :- \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Before Sorting :- \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",A[i]);
    }
    for(i=1; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(A[j]>A[j+1])
            {
            t = A[j];
            A[j] = A[j+1];
            A[j+1] = t;
            }
        }
    }
    printf("\n After Sorting :- \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}
