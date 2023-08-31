#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter 1st number: ");
    scanf("%d",&x);
    printf("Enter 2nd number: ");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("1st number %d\n",x);
    printf("2st number %d\n",y);
    return 0;
}