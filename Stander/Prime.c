#include<stdio.h>


int main()
{
    int i=0,n,temp=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++){
        if(n%i == 0)
        {
            temp=1;
            break;
        }
    }
    if(temp==1)
        printf("Not prime number");
    else
        printf("Prime number");
    return 0;
}