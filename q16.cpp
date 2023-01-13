#include <stdio.h>
#include <math.h>
int main()
{
	int u,v,a,s,t;
	u=0;
	t=3;
	a=4;
	v=u+a*t;
	s=u*t+1.0/2*(a*t*t);
	printf("final velocity is %d, it travelled %d",v,s);
	
	return 0;
	
}
