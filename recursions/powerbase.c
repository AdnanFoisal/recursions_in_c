 #include <stdio.h>

 long long power(int base, int exp) {
 if (exp == 0) 
 return 1;
 
 if (exp < 0) 
 return 0; 
 return base * power(base, exp - 1);
 }
 int main() {
 int base, exponent;
 printf("Enter base: ");
 scanf("%d", &base);
 printf("Enter exponent: ");
 scanf("%d", &exponent);
 printf("%d^%d = %lld", base, exponent, power(base, exponent));
 return 0;
 }