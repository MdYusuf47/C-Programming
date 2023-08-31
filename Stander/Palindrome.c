#include<stdio.h>

int main()
{
    int n,rev=0,x;
    printf("enter number");
    scanf("%d",&n);
    x=n;
    while(n>0){
        rev=(rev*10)+n%10;
        n=n/10;
    }
    if(x == rev)
        printf("Palindrome");
    else
        printf("Not plaindrome");
    return 0;
}