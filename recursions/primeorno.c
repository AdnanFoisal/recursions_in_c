#include <stdio.h>
#include <math.h>

int isPrime(int n, int i) {
    if (n <= 1) return 0;  // Not prime
    if (n <= 3) return 1;  // 2 and 3 are prime
    if (i > sqrt(n)) return 1;  // No divisors found
    if (n % i == 0) return 0;   // Divisor found
    return isPrime(n, i + 1);   // Check next number
}
 int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n); 
    if (isPrime(n,2)) 
        printf("%d is prime", n);
     else 
        printf("%d is not prime", n);
    return 0;
 }