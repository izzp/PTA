#include "stdio.h"
int main()
{
	int x,y,s1,s2,s;
	scanf("%d%d",&x,&y);
	s1=100*y/2;
	s2=100*(100-x)/2;
	s=5000-s1-s2;
	printf("%d",s);
	return 0;
 } 
