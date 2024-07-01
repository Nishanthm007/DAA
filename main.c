#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void bs(int A[size],int n)
{
    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            count++;
            if (A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
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
    bs(A,n);
    printf("the sorted elements are\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    printf("count=\n", count);
    return 0;
}
