#include<stdio.h>

int main()
{
    int n,x,y,z;
    x=0,y=1,z=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while (z<=n)
    {
        printf("%d ",z);
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
}