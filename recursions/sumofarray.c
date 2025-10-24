 #include <stdio.h>
 int arraySum(int arr[], int index, int n) 
 {
    if (index == n) 
        return 0;
    return arr[index] + arraySum(arr, index + 1, n);
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
    int sum = arraySum(arr, 0, n);
    printf("Sum of array elements: %d", sum);
    return 0;
     }