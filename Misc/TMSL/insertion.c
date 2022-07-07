#include<stdio.h>
void display(int arr[], int size){
    for(int i=0; i<=size; i++){
        printf("%d", arr[i]);
    }
}
void insertion(int arr[], int size, int element, int ind){
    for(int i=size-1; i>=ind; i--){
        arr[i+1]=arr[i];
    }
    arr[ind]=element;
    size+=1;
}
void insertion(int arr[], int size, int element, int ind);
void main()
{
    int size, element, ind;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the index to be inserted in: ");
    scanf("%d", &ind);
    insertion(arr, size, element, ind);
    display(arr, size);
}
    