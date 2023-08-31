#include<stdio.h>

int main()
{
    int i,n,sum=0,missing;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int a[n-1];
    printf("Enter value:\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    missing=(n*(n+1))/2 - sum;
    printf("Missing value is: %d\n",missing);
    return 0;
}