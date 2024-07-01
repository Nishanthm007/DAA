#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
int par(int a[size],int l,int r)
{
    int i,j,pivot,temp;
    pivot = a[l];
    i=i+l;
    j=r;
    while(1)
    {
        while(pivot>=a[i] && i<=r)
        {
            i++;
            count++;
        }

        while(pivot < a[j])
        {
            j--;
            count++;
        }
        count++;
        if(i<j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else
        {
            temp = a[j];
            a[j] = a[l];
            a[l] = temp;
            return j;
        }
    }
}
void quicksort(int a[size],int l,int r)
{
    int s;
    if(l<r)
    {
        s=par(a,l,r);
        quicksort(a,l,s-1);
        quicksort(a,s+1,r);
    }
}
int main()
{
    int i,a[size],n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    printf("the sorted elements are\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("count=%d",count);
    return 0;
}
