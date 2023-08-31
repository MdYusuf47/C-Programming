// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #define MAX 100
// void nonDuplicate(int *arr,int size){
//     int i,j=0;
//     int ar[MAX] = {0};
//     for(i=0;i<size;i++){
//         ar[arr[i]]++;
//         if(ar[arr[i]]==1){
//             printf("%d\n",arr[i]);
//         }
//     }
// }
// void main(){
//     int size,i,*arr;
//     printf("enter the array size: \n");
//     scanf("%d", &size);
//     arr=(int*)malloc(sizeof(int)*size);
//     printf("enter the array elements \n");
//     for(i=0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("After removing duplicate elements:\n");
//     nonDuplicate(arr, size);
//     getch();    
// } 
//?Another way we can write this code

#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter number at index %d: ", i);
        scanf("%d", &a[i]);
    }

     //! Remove duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                for (k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    //! Print the result
    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}