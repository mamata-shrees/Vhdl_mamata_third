#include <stdio.h>

void binary(int n) {
    for (int i = 31; i >= 0; i--) 
        printf("%d", (n >> i) & 1);
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("\nBinary of %d: ", a);
    binary(a);

    int result = ~a;
    printf("\nBitwise NOT: ");
    binary(result);
    printf("\nDecimal result: %d\n", result);

    return 0;
}

