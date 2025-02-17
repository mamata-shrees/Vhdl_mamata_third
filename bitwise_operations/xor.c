#include <stdio.h>

void binary(int n) {
    for (int i = 31; i >= 0; i--) 
        printf("%d", (n >> i) & 1);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBinary of %d: ", a);
    binary(a);
    printf("\nBinary of %d: ", b);
    binary(b);

    int result = a ^ b;
    printf("\nBitwise XOR: ");
    binary(result);
    printf("\nDecimal result: %d\n", result);

    return 0;
}

