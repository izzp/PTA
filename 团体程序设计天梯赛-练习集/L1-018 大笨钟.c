#include <stdio.h>
int main()
{
	int hh,mm,i;
	scanf("%d:%d",&hh,&mm);
	if(hh>12)
	{
		if(mm==0)
			for(i=0;i<hh-12;i++)
			{
				printf("Dang");
			}	
		else
			for(i=0;i<hh-12+1;i++)
			{
				printf("Dang");
			}
	}	
	else
		printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
	return 0;
}
