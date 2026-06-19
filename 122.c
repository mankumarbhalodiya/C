#include <stdio.h>
void reverseArray(int arr[], int n);
void displayArray(int arr[], int n);
int main()
{
    int arr[100], n;
    printf("Enter the number of elements in the array :");
    scanf("%d", &n);
    printf("Enter the elements :\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, n);
    printf("Array after reversing :");
    displayArray(arr, n);

    return 0;
}
void reverseArray(int arr[], int n)
{
    int start = 0, end = n-1;
    while(start<end)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]= temp;

        start++;
        end--;
    }

}
void displayArray(int arr[], int n)
{
    for(int i = 0; i<n;i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
