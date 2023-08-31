#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array reverse order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}