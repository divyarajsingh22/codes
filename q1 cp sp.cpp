#include <stdio.h>
int main()
{
    int cp,sp,tax;
    printf("enter original price and tax rate");
    scanf("%d%d",&cp,&tax);
    sp=cp+(cp*tax/100);
    printf("the final price is %d",sp);
    

    return 0;
}
