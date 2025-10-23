// Write a C program to search an element in an array
#include<stdio.h>
int main(){
    int search, i;
    int arr[] = {343,566,7,8,74};
    int n = sizeof(arr)/ sizeof(arr[0]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (i = 0; i<n; i++){
        if (arr[i] == search){
            printf("%d found at position %d\n", search, i+1);
            return 0;
        }
    }
    printf("%d not found in array\n", search);
    return 0;

}