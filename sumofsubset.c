#include<stdio.h>
#include<stdlib.h>
static int b=1;
int w[10],x[10],d;
void sumofsubset(int s, int k,int r)
{
    int i;
    x[k]=1;
    if(w[k]+s==d)
    {
        printf("\n solution %d=\t",b++);
        for(i=1;i<=k;i++)
        {
            if(x[i]==1)
                printf("%d\t",w[i]);
        }
        printf("\n");
    }
    else if(s+w[k]+w[k+1]<=d)
        sumofsubset(s+w[k],k+1,r-w[k]);
        if(s+r-w[k]>=d && s+w[k+1]<=d)
        {
            x[k]=0;
            sumofsubset(s,k+1,r-w[k]);
        }
}
int main()
{
    int i,n,sum=0;
    printf("\n Read number of elements: ");
    scanf("%d",&n);
    printf("\n Read elements in increasing order: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&w[i]);
        sum=sum+w[i];
    }
    printf("Read value for d: ");
    scanf("%d",&d);
    sumofsubset(0,1,sum);
    if(b==1)
    {
        printf("\n No solution ");
        exit(0);
    }
    return 0;
}