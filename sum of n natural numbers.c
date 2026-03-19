#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a given number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf( " enter a given number.\n");
        return 1; 
    }


    for (i = 1; i <= n; ++i) {
        sum += i; 
    }

    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}