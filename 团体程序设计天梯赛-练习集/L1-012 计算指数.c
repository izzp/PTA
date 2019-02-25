#include <stdio.h>
int main()
{
	int n,i;
	int sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum*=2;
	printf("2^%d = %d",n,sum);
	return 0;
}
