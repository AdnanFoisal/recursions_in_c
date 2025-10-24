 #include <stdio.h>
 int reverseNumber(int n, int rev)
  {
    if (n == 0) 
        return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
 }
 int main() {
    int n, reversed;
    printf("Enter a number: ");
    scanf("%d", &n);
    reversed = reverseNumber(n, 0); 
    printf("Reversed number: %d", reversed);
    return 0;
 }