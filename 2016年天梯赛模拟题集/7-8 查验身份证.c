#include <stdio.h>
int main()
{
	int N;
	char s[101][19];
	int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char c[]={'1','0','X','9','8','7','6','5','4','3','2'};
	long int sum=0;
	int k=0,i,j;
	scanf("%d",&N); 	
	for(i=0;i<N;i++) 		
	{
		sum=0;
		scanf("%s",s[i]);
		for(j=0;j<17;j++)
		{
			sum+=a[j]*(s[i][j]-'0');	
		}		
		if(c[sum%11]==s[i][17])	
			k++; 	
		else
		{
			printf("%s",s[i]);
			if(i!=N-1)
				printf("\n");
		}					
	}
	if(k==N)
		printf("All passed");
	return 0; 
}
