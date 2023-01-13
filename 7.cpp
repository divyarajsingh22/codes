#include <stdio.h>

int main()
{
    int i,n,x=0,y=0;
	printf("enter total states : ");
	scanf("%d",&n);
	int T[n],B[n];
	printf("enter statewise votes for Trump : \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&T[i]);
	}
	printf("enter statewise votes for Biden: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&B[i]);
	}
	for(i=0; i<n; i++)
	{
		if(T[i]>B[i])
		{
			x++;
		}
		else
		{
			y++;
		}
		
	}
	x>y ? printf("TRUMP is winner") : printf("BIDEN is winner");
	

    return 0;
}
