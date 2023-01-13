#include <stdio.h>
int main()
{
	int A,B,S,*Pa=&A,*Pb=&B,*Ps=&S;
	scanf("%d%d",Pa,Pb);
	*Ps=*Pa+*Pb;
	printf("%d",*Ps);
}
    

