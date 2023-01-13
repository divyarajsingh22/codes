#include<stdio.h>
int main()
{
int n,f, *pn=&n, *pf=&f;
scanf("%d",&n) ;// 5
*pf=1;
while(*pn>0)
{

*pf = *pf * *pn;
(*pn)--;
}
printf("%d",*pf);

}
