#include<stdio.h>
int main()
{
    int n=5;
    
    void *p=&n;
    printf("%d\n",n);
    printf("%d\n",&n);
    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d\n",*(int*)p);//needs typecasting so that program understands how many bits to derefernce
    *(int*)p= *(int*)p+1;
    printf("%d\n",*(int*)p);
    

}
