#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter string:");
    gets(str);
    printf("String reverse:%s",strrev(str));
}
//!Reverse string

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100];
//     int i;
//     printf("Enter string:");
//     gets(str);
//     int len=strlen(str);
//     printf("After reversing string:");
//     for(i=len-1;i>=0;i--)
//     {
//         printf("%c",str[i]);
//     }
//     return 0;
// }