#include <stdio.h>

int main()
{
    int i,n,ele,pos;
    printf("Enter Array size :- \n");
    scanf("%d",&n);
    int A[n];
    printf("Enter Array elements :- \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter position of element which you want to delete :- \n");
    scanf("%d",&pos);
    printf("Element %d deleted \n",A[pos-1]);
    for(i=pos-1; i<=n-2; i++)
    {
        A[i] = A[i+1];
    }
    n--;
    for(i=0; i<n; i++)
    {
        printf("%d\t",A[i]);
    }

    return 0;
}
