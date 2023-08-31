#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter string:");
    gets(str);
    // printf("Length of string is %d:",strlen(str));
    i=0;
    while (str[i]!='\0')
    {
        i++;
    }
    printf("Total character is %d",i);
    return 0;
}