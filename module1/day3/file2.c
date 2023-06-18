#include <stdio.h>

void printBits(int num);

int main() {
    int num;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Bits of the number: ");
    printBits(num);

    return 0;
    }

void printBits(int num) {
    unsigned int mask = 1 << 31;  // Start with the leftmost bit
     for (int i = 0; i < 32; i++) {
        // Check if the current bit is set or not
        if ((num & mask) != 0) {
            printf("1");
        } else {
            printf("0");
        }

          // Shift the mask to the right
        mask >>= 1;
    }

    printf("\n");
}
