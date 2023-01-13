#include <stdio.h>
int main()
{
	int pay,salary;
	printf("enter basic pay");
	scanf("%d",&pay);
	salary=pay+(pay*15/100)-(pay*20/100);
	printf("salary after 15%hra and 20%TA is %d",salary);
	
	return 0;
	
}
