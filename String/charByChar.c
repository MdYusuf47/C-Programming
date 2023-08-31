#include<stdio.h>
int main()
{
    char a[50];
    int i;
    printf("Enter a string:");
    gets(a);
    i=0;
    while (a[i]!='\0')
    {
        printf("%c\n",a[i]);
        i++;
    }
    return 0;
}