#include <stdio.h>
int main()
{
	int N,i,j;	
	char C;	
	scanf("%d %c",&N,&C);
	for(i=0;i<N*0.5;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%c",C);
		}
		printf("\n");
	}	
	return 0;
} 
