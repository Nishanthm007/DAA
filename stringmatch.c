#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
int count;
int sm(char T[20], char P[10])
{
    int m,n,i,j;
    n=strlen(T);
    m=strlen(P);
    for(i=0;i<=n-m;i++)
    {
        j=0;

        while(j<m && P[j]==T[i+j])
        {
            count++;
            j=j+1;
        }
        count++;
        if(j == m)
            return (i+1);
    }
    return -1;
}
int main()
{
    int T[20],P[10],i,flag;
    printf("enter the text\n");
    scanf("%s",&T);
    printf("enter the pattern\n");
    scanf("%s",&P);
    flag=sm(T,P);
    if(flag == -1)
        printf("pattern not found \n");
    else
        printf("pattern found at position %d", (flag));
    printf("count=%d\n",count);
    return 0;
}
