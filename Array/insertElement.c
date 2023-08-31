#include <stdio.h>
void main()
{
    int loc, i, n, value;
    printf("enter number of elements you want in Array\n");
    scanf("%d", &n);
    int arr[n];
   for(i = 0; i < n; i++)
    {
        printf("give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("give a number to insert \n");
    scanf("%d", &value);
    printf("enter the location to insert an new element\n");
    scanf("%d", &loc);
    for (i = n - 1; i >= loc - 1; i--){
        arr[i+1] = arr[i];
    }
    arr[loc-1] = value;
    printf("After Insertion new Array is \n");
    for (i = 0; i <= n; i++)
        printf("%d\n", arr[i]);
}