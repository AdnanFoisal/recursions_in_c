#include <stdio.h>
 void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) 
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    // Move n-1 disks from 'from' to 'aux' using 'to'
    towerOfHanoi(n - 1, from, aux, to);
    // Move the largest disk from 'from' to 'to'
    printf("Move disk %d from %c to %c\n", n, from, to);
    // Move n-1 disks from 'aux' to 'to' using 'from'
    towerOfHanoi(n - 1, aux, to, from);
 }
 int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    printf("Solution for Tower of Hanoi with %d disks:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
 }