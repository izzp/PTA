#include "stdio.h"
int main()
{
	int N,i,a[1001],j=0,o=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			o++;
		else j++;
	}
	printf("%d %d",j,o);
}
