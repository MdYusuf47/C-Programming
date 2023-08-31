#include<stdio.h>

int main()
{
    int n,fac;
    printf("Enter number:");
    scanf("%d",&n);
    fac=1;
    while(n>0){
        fac=fac*n;
        n=n-1;
    }
    printf("%d",fac);
    return 0;
}