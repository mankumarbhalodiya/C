#include <stdio.h>
void DeleteElement (int arr[], int *n, int pos); // using a pointer to the variable holding size to the array using pointer allows us to modifiy the orginal size in main
void displayArray(int arr[], int n);
int main()
{
    int arr[100], n, pos;
    printf("Enter the number of elements in the array :");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(int i = 0; i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position you want to delete the element form :");
    scanf("%d", &pos);
    DeleteElement(arr, &n, pos);
    printf("Array after deletion :\n");
    displayArray(arr, n);
    return 0;
}
void DeleteElement (int arr[], int *n, int pos)
{
    if (pos<0 || pos>=*n)
    {
        printf("Invalid position \n");
        return;
    }
    for (int i = pos; i< *n-1; i++)
    {
        arr[i]= arr[i+1]; // shifts all the elements to left
        (*n)--;
    }
}
void displayArray(int arr[], int n)
{
    for (int i =0;i<n;i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}