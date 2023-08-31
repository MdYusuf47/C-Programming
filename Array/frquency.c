#include<stdio.h>
int main()
{
    int a[10],i,freq=0,key;
    for(i=0;i<10;i++)
    {
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }
    printf("Enter number to find frequency:");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(a[i]==key)
        freq++;
    }
    printf("frequency of %d is %d",key,freq);
    return 0;
}