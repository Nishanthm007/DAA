#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void ss(int A[size],int n)
{
    int i,j,temp,min;
    for(i=0;i<=n-2;i++)
    {
        min = i;
        for(j=i+1;j=n-1;j++)
        {
            count++;
            if(A[j] < A[min])
            {
                min = j;
            }
        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
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
    ss(A,n);
    printf("the sorted elements are\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    printf("count=\n", count);
    return 0;
}
