#include<stdio.h>

int main()
{
    int n,org,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    org=n;
    while (n>0)
    {
        sum=sum+(n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if(org==sum)
        printf("Armstong number:");
    else
        printf("Not Armstong number:");
    return 0;    
}