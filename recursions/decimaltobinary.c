 #include <stdio.h>
 void decimalToBinary(int n) {
    if (n == 0) 
        return;
    decimalToBinary(n / 2);
    printf("Binary: %d", n % 2);
 }
 int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);  
    if (n == 0)
        printf("Binary: 0");
    else
        decimalToBinary(n);
 return 0;
 }