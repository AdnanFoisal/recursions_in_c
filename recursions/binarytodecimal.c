#include <stdio.h>
 int binaryToDecimal(long long binary, int power) {
 if (binary == 0) 
 return 0;
 return (binary % 10) * (1 << power) + binaryToDecimal(binary / 10, power + 1);
 }
 int main()
  {
 long long binary;
 printf("Enter a binary number: ");
 scanf("%lld", &binary);
 int decimal = binaryToDecimal(binary, 0);
 printf("Decimal: %d", decimal);
 return 0;
 }