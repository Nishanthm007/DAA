#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void is(int A[size],int n)
{
    int i,j,item;
    for(i=1;i<=n-1;i++)
    {
        item = A[i];
        j=i-1;
        while(j>=0 && A[j]>item)
        {
            count++;
            A[j+1]=A[j];
            j=j-1;
        }
        count++;
        A[j+1]=item;
    }
}
int main()
{
    int i,A[size],n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    is(A,n);
    printf("the sorted elements are\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    printf("count=%d",count);
    return 0;
}
