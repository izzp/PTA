#include "stdio.h"
struct r
{
	int s;
	int t;
}p[30];
int main()
{
	int N,i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d %d",&p[i].s,&p[i].t);
	}
	for(i=0;i<N;i++)
	{
		int bz;
		bz=(p[i].s-100)*1.8;
		if(abs(p[i].t-bz)<bz*0.1)
			printf("You are wan mei!\n");
		else if(abs(p[i].t-bz)>=bz*0.1&&p[i].t>bz)
			printf("You are tai pang le!\n");			
		else
			printf("You are tai shou le!\n");			
	}
	return 0;
}
