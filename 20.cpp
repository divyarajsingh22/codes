#include <stdio.h>

int main()
{
    int i,n,ele,j;
    printf("Enter Array size :- \n");
    scanf("%d",&n);
    int A[n];
    printf("Enter Array elements :- \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter element which you want to delete :- \n");
    scanf("%d",&ele);
    for(i=0; i<n; i++)
    {
        if(A[i]== ele)
        {
            for(j=i; j<=n-2; j++)
            {
                A[j] = A[j+1];
            }
            n--;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t",A[i]);
    }

    return 0;
}
