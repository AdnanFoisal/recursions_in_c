 #include <stdio.h>
 #include <string.h>
 void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
 }
 void generatePermutations(char str[], int start, int end) {
    if (start == end)
     {
        printf("%s\n", str);
        return;
     }
    for (int i = start; i <= end; i++)
     {
        swap(&str[start], &str[i]);
        generatePermutations(str, start + 1, end);
        swap(&str[start], &str[i]);
     }
 }
 int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int len = strlen(str);
    
    printf("All permutations of %s \n:", str);
    generatePermutations(str, 0, len - 1);
    
    return 0;
 }