#include <stdio.h>
int main()
{
	int N,i,a[1000];
	int odd=0,even=0;//odd:ÆæÊı  even:Å¼Êı 
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("%d %d",odd,even);
	return 0;
}
