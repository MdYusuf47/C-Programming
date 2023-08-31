#include <stdio.h>
#include <stdlib.h>
void main()
{
    int loc, i, size, value;
    printf("enter number of elements you want in Array\n");
    scanf("%d", &size);
    int arr[size];
    for(i = 0; i < size; i++)
    {
        printf("give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the index to delete a element\n");
    scanf("%d", &loc);
    if(loc<=size-1){
        for (i = loc; i <size-1; i++){
            arr[i] = arr[i+1];
        }
        size--;
    }else{
        printf("index not available");
    }
    printf("After deletion Array is \n");
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);
}