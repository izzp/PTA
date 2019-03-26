#include <stdio.h>
int main()
{
	char str[]={"I Love GPLT"};
	int i;
	for(i=0;i<11;i++)
	{
		printf("%c",str[i]);
		if(i!=10)
		{
			printf("\n");
		}			
	}
	return 0;
}
