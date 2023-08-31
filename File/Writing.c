#include <stdio.h>
 
int main()
{
    FILE *ptr;
    ptr = fopen("example.txt", "w");
    char str[128] = "MD YUSUF!";
    fprintf(ptr, "%s", str);
}
