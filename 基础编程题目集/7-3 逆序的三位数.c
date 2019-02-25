#include <stdio.h>
int main()
{
	int i,a,b[3];
	scanf("%d",&a);
	for(i=0;i<3;i++)
	{
		b[i]=a%10;
		a=a/10;
		if(b[i]==0)
			continue;
		printf("%d",b[i]);
	}
	return 0;
} 
