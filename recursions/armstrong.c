 #include <stdio.h>
 #include <math.h>
 int countDigits(int n) {
 if (n == 0) 
 return 0;
 return 1 + countDigits(n / 10);
 }
 
 int armstrongSum(int n, int power) {
 if (n == 0) 
 return 0;
 return pow(n % 10, power) + armstrongSum(n / 10, power);
 }
 int isArmstrong(int n) {
 int digits = countDigits(n);
 return armstrongSum(n, digits) == n;
 }
 int main() {
 int n;
 printf("Enter a number: ");
 scanf("%d", &n);
 if (isArmstrong(n))
 printf("%d is an Armstrong number", n);
 else 
 printf("%d is not an Armstrong number", n);
 return 0;
 }