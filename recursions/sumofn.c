 #include <stdio.h>
 
 int sumNatural(int n) {
 if (n <= 0) 
 return 0;
 
 return n + sumNatural(n - 1);
 }
 int main() {
 int n, sum;
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 sum = sumNatural(n);
 printf("Sum of numbers from 1 to %d is: %d", n, sum);
 return 0;
 }