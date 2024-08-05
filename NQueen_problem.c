#include<stdio.h>
#include<stdlib.h>
int x[10];
static int c=1;
void print(int n)
{
    int i,j;
    printf("solution %d\n",c++);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i]==j)
                printf("Q\t");
            else
                printf("-\t");
        }
        printf("\n");
    }
}
int place(int k,int i)
{
    int j;
    for(j=1;j<k;j++)
    {
        if(x[j]==i || abs(x[j]-i) == abs(j-k))
        return 0;
    }
    return 1;
}
void nqueen(int k,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                printf("\n");
                print(n);
            }
            else
                nqueen(k+1,n);
        }
    }
}
int main()
{
    int n;
    printf("\n read number of queens");
    scanf("%d",&n);
    nqueen(1,n);
    if(c==1)
    {
        printf("\n no solutions");
    }
    return 0;
}