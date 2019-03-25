#include "stdio.h"
#include "bits/stdc++.h"
using namespace std; 
int main()
	{
	    int n,s[100];
	    cin>>n;
	    for(int i=0;i<n;i++)
		{
	        char a,b;
	        for(int j=0;j<8;j++)
			{
	            scanf("%c-%c",&a,&b);
	            if(a=='A'&&b=='T') 
					s[i]=1;
	            else if(a=='B'&&b=='T') 
					s[i]=2;
	            else if(a=='C'&&b=='T')
					 s[i]=3;
	            else if(a=='D'&&b=='T') 
					 s[i]=4;
	        }
	    }
	    for(int i=0;i<n;i++)
			cout<<s[i];
	    return 0;
    } 

