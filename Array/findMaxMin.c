#include<stdio.h>
int main()
{
    int a[10],i,max;
    for(i=0;i<10;i++)
    {
        printf("Enter number");
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>max) // for min if(a[i]<min)
        {
            max=a[i];
        }
    }
    printf("Max number is = %d",max);
    return 0;
}