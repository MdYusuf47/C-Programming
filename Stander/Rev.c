#include<stdio.h>
//Reverse number
int main()
{
    int rev,i,n;
    rev=0;
    printf("Enter number:");
    scanf("%d",&n);
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}