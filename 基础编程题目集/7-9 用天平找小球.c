#include <stdio.h>
int main()
{
	int A,B,C;
	char D;
	scanf("%d%d%d",&A,&B,&C);
	if(A==B)
		D='C';
	else if(A==C)
		D='B';
	else
		D='A';
	printf("%c",D);
	return 0;
}
