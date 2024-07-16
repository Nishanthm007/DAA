#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int main()
{
    int i,A[MAX],n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=1;i<=n;i++)
        scanf("%d",&A[i]);
    heapify(A,n);
    heapsort(A,n);
    printf("the sorted elements are\n");
    for(i=1;i<=n;i++)
        printf("%d\t",A[i]);
    return 0;
}

void heapify(int A[MAX],int n)
{
    int i,j,k,v,flag;
    for(i=n/2;i>=1;i--)
    {
        k=i;
        v=A[k];
        flag=0;
        while(!flag && 2*k<=n)
        {
            j=2*k;
            if(j<n)
            {
                if(A[j]<A[j+1])
                    j=j+1;
            }
            if(v>=A[j])
                flag=1;
            else
            {
                A[k]=A[j];
                k=j;
            }
        }
        A[k]=v;
    }

}
void heapsort(int A[MAX],int n)
{
    int i,temp;
    for(i=n;i>1;i--)
    {
        temp=A[1];
        A[1]=A[i];
        A[i]=temp;
        heapify(A,i-1);
    }
}
