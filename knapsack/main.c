#include <stdio.h>
#include <stdlib.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int n,w[10],v[10],W,i,j,V[10][10],x[10]={0};
    printf("read the number of objects\n");
    scanf("%d",&n);
    printf("read the weights of the objects\n");
    for(i=1;i<=n;i++)
        scanf("%d",&w[i]);
    printf("read the profits of the objects\n");
    for(i=1;i<=n;i++)
        scanf("%d",&v[i]);
    printf("\n read knapsack capacity:");
    scanf("%d",&W);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=W;j++)
        {
            if(i==0 || j==0)
                V[i][j]=0;
            else if(j<w[i])
                V[i][j]=V[i-1][j];
            else
                V[i][j]=max(V[i-1][j],V[i-1][j-w[i]]+v[i]);
                printf("%d\t",V[i][j]);
        }
        printf("\n");
    }
    printf("\n max profit is %d",V[n][W]);
    i=n;
    j= W;
    while(i!=0 && j!=0)
    {
        if(V[i][j]!=V[i-1][j])
        {
            x[i]=1;
            j=j-w[i];
        }
        i=i-1;
    }
    printf("objects that are included are\n");
    for(i=1;i<=n;i++)
    {
            if(x[i]==1)
            {
                 printf("\n %d objects are included",i);
            }
    }

    return 0;
}
