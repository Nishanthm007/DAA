#include <stdio.h>
#include <stdlib.h>
void bfs(int a[10][10],int n,int v[10],int src)
{
    int q[10],r=-1,f=-1,i,delnode;
    v[src]=1;
    q[++r]=src;
    while(f<=r)
    {
        delnode=q[f++];
        for(i=1;i<=n;i++)
        {
            if(a[delnode][i]==1 && v[i]==0)
            {
                q[++r]=i;
                v[i]=1;
            }
        }
    }
}

int main()
{
    int n,a[10][10],i,j,v[10],count=0;
    printf("read number of nodes\n");
    scanf("%d",&n);
    printf("read adjecency matrix\n");
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=n;j++)
         {
             scanf("%d",&a[i][j]);
         }

    }
    for(i=1;i<=n;i++)
        v[i]=0;
    for(i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
            bfs(a,n,v,i);
            count++;
        }

    }
    if(count==1)
        printf("\n graph is connected, 1 component");
    else
        printf("graph is not connected, %d component",count);
    return 0;
}
