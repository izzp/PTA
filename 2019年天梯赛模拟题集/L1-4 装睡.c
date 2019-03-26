#include <stdio.h>
struct Sleep
{
	char name[3];
	int hx; 
	int	mb;
}s[10];
int main()
{
	int N,i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%s %d %d",s[i].name,&s[i].hx,&s[i].mb);
	for(i=0;i<N;i++)
		if((s[i].hx>=15&&s[i].hx<=20)&&(s[i].mb>=50&&s[i].mb<=70))
			continue;
		else
			printf("%s\n",s[i].name);
	return 0;	
} 
