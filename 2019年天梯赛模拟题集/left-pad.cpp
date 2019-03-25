#include <stdio.h>  
#include <string.h>  
int main()  
{  
    int N,i,lenth;  
    char c;  
    char a[40000];  
    scanf("%d %c",&N,&c);  
    getchar();  
    gets(a);  
    lenth = strlen(a);  
        for(i=0;i<N-lenth;i++)  
        {  
            putchar(c);  
        }  
        puts(a);  

    return 0;  
} 
