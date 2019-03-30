#include "stdio.h"
#include <math.h>
int main()
{
	int N,a[11],i,j,k,l=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		l=0;
		if(a[i]==1)
		{
			printf("No\n");
			break; 
		}
		k=(int)sqrt(a[i]);
		for(j=2;j<=k;j++)
		{
			if(a[i]%j==0)
			{
				l=1;
				break;
			}
				
		}
		if(l==1)
		{
			printf("No\n");
		}
		else
			printf("Yes\n");
	}
	return 0;
}
