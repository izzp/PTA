#include "stdio.h"
int main()
	{
	    int a,b,i,m;
	    scanf("%d %d",&a,&b);
	    int n=a*b;
		while(n/10!=0)
		{
			i=n%10;
			n=n/10;
			m=m*10+i;
		}
		if (n!=0)
			m=m*10+n;
		printf("%d",m);
	    return 0;
    } 
