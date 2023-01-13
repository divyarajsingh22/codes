#include <stdio.h>

int main()
{
    int a[40] = {};
    int i,n;
    for(i=1; i<=10; i++)
    {
        scanf("%d",&n);
        if(n>=61)
        {
            a[n-61]++;
        }
    }
    for(i=0; i<=10; i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
