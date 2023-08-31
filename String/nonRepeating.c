#include <stdio.h>
int main()
{
    //Initializing variables.
    char str[100];
    int i;
    int freq[256] = {0};
    printf("C Program to find all non repeating character\n");
    printf("Enter the string: ");
    gets(str);
    //Here we are calculating the frequency of all characters
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    printf("Character which has no repetitions are \n");
    for(i = 0; i < 256; i++)
    {
        //Here is the check to print only character
        //which has came only once
        if(freq[i] == 1)
        {
            printf("%c ", i);
        }
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char c[150];
//   int i, j = 0, n, t = 0;
//   printf("Enter a string : ");
//   gets(c);
//   printf("non repeating characters in string:");

//   for (i = 0; c[i]; i++)
//   {
//     t = 0;
//     for (j = 0; c[j]; j++)
//     {
//       if (c[i] == c[j])
//         t++;
//       if (t > 1)
//         break;
//     }
//     if (t == 1)
//     {
//       printf("%c  ", c[i]);
//     }
//   }

//   return 0;
// }