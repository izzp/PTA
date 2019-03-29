#include "stdio.h"
int main()
{
	int pa,pb,a[3],i,x1=0,x2=0;
	scanf("%d %d",&pa,&pb);
	for(i=0;i<3;i++)
		scanf("%d",&a[i]);
	for(i=0;i<3;i++)
	{
		if(a[i]==0)
			x1++;
		else if(a[i]==1)
			x2++;
	}
	if(pa>pb)
	{
		if(x1>=1)
			printf("The winner is a: %d + %d",pa,x1);
		else if(x2==3)
			printf("The winner is b: %d + %d",pb,x2);
	}
	else
	{
		if(x2>=1)
			printf("The winner is b: %d + %d",pb,x2);
		else if(x1==3)
			printf("The winner is a: %d + %d",pa,x1);
	}
	return 0;
 } 
