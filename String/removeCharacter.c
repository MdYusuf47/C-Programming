#include<stdio.h>
#include<string.h>

void removeCharacter(char*str,char charRemove)
{
    int i,j;
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==charRemove)
        {
            for(j=i;j<len-1;j++)
            {
                str[j]=str[j+1];
            }
            len--;
            j--;
        }
    }
    str[len]='\0';
}

int main()
{
   char str[100],ch;
   printf("Enter string:");
   gets(str);
   printf("Enter character you want to remove:");
   scanf(" %c", &ch);
   removeCharacter(str,ch);
   printf("After removing %c:%s",ch,str);
    return 0;
}