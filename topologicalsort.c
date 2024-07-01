#include <stdio.h>
#include <stdlib.h>
int topo[10],k;
void dfs(int a[10][10],int n,int v[10],int src)
{
    int i;
    v[src]=1;
    for(i=1;i<=n;i++)
    {
        if(a[src][i]==1 && v[i]==0)
            dfs(a,n,v,i);
    }
    topo[++k]=src;
}

int main()
{
    int n,a[10][10],i,j,v[10];
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
            dfs(a,n,v,i);
        }

    }
    printf("topological ordering is:\n");
    for(i=k;i>=1;i--)
    printf("%d\t",topo[i]);
    return 0;
}
