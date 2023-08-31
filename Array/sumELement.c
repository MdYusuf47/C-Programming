#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter element:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of array element is %d:",sum);
    return 0;
}