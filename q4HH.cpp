#include <stdio.h>
int main()
{
	int CP,SP,MP;
	printf("enter CP,SP,MP");
	scanf("%d %d %d",&CP,&SP,&MP);
	if (CP+MP>SP)
	printf("loss %d %d",CP+MP-SP,(CP+MP-SP)*100/(CP+MP));
	else if(CP+MP<SP) printf("profit %d %d",SP-(CP+MP),(SP-(CP+MP))*100/(CP+MP));
	else printf("no profit no loss");
	
}
