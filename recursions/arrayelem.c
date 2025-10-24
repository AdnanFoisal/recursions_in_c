 #include <stdio.h>
 void printArray(int arr[], int index, int n) {
 if (index == n) 
 return; 
 printf("%d ", arr[index]);
 printArray(arr, index + 1, n); 
 }
 int main() 
 {
 int n;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter %d elements: ", n);
 for (int i = 0; i < n; i++)
  {
     scanf("%d", &arr[i]);
  }
    printf("Array elements: ");
    printArray(arr, 0, n);
    return 0;
 }