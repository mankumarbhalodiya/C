#include<stdio.h>
void swapArrays(int *arr1, int *arr2, int size)
{
    for(int i = 0; i<size;i++){
    int temp = *(arr1+i);
    *(arr1+i)= *(arr2+i);
    *(arr2+i)= temp;
    }
}
int main()
{
 int size;
 printf("Enter size of array:");
 scanf("%d", &size);
 int arr1[size], arr2[size];
 printf("Enter elements of first array:");
 for(int i =0; i<size;i++)
 {
    scanf("%d", &arr1[i]);
 }
  printf("Enter elements of second array:");
 for(int i =0; i<size;i++)
 {
    scanf("%d", &arr2[i]);
 }
 swapArrays(arr1, arr2, size);
 printf("The first array");
 for(int i =0;i<size;i++)
 {
    printf("%d \t", arr1[i]);
 }
 
 printf("The second array");
 for(int i =0;i<size;i++)
 {
    printf("%d \t", arr2[i]);
 }
 

    return 0;
}