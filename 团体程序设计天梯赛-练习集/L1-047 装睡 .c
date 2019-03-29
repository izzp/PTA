#include "stdio.h"
struct s
{
	char name[3];
	int hx;
	int mb;
}p[20];
int main()
{
	int N,i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s %d %d",&p[i].name,&p[i].hx,&p[i].mb);
	 } 
	 for(i=0;i<N;i++)
	 {
	 	if(p[i].hx>20||p[i].hx<15||p[i].mb>70||p[i].mb<50)
	 	{
	 		printf("%s\n",p[i].name);
		 }
	 }
}
