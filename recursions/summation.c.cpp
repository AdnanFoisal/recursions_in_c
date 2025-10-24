 #include <stdio.h&gt;
 // User-defined function to print natural numbers
 void printNatural(int n) {
 if (n &gt; 0) {
 printNatural(n - 1);
 printf("%d ", n);
 }
 }
 int main() {
 int n;
 printf("Enter the number of natural numbers to print: ");
 scanf("%d", &amp;n);
 printf("The first %d natural numbers are: ", n);
printNatural(n);
 printf("\n");
 return 0;
 }