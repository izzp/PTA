#include "stdio.h"
int main()
{
	float A,B;
	scanf("%f %f",&A,&B);
	if(B>0)
		printf("%.0f/%.0f=%.2f",A,B,A/B);
	 if(B==0)
		printf("%.0f/%.0f=Error",A,B);
	 if(B<0)
		printf("%.0f/(%.0f)=%.2f",A,B,A/B);
	return 0;
}
