#include "stdio.h"
int main()
{
	int A,B,i,j=0,Sum=0;
	scanf("%d %d",&A,&B);
	for(i=A;i<=B;i++)
	{
		printf("%5d",i);
		j++;
		Sum+=i;	
		if(j%5==0&&j!=(B-A+1))
		{
			printf("\n");
		}		
	}
	printf("\nSum = %d",Sum);
	return 0;
}
