#include <stdio.h>

int bit_operations(int number, int operation_type);

int main() {
    int number, operation_type;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &number);

    printf("Enter the operation type (1: Set 1st bit, 2: Clear 31st bit, 3: Toggle 16th bit): ");
    scanf("%d", &operation_type);

    int answer = bit_operations(number, operation_type);

    printf("Result: %d\n", answer);

    return 0;
}

int bit_operations(int number, int operation_type) {
    switch (operation_type)
    {
        case 1:
            number |= 1;  
            break;
        case 2:
            number &= ~(1 << 31);  
            break;
        case 3:
            number ^= 1 << 16;  
            break;
        default:
            printf("Error: Invalid operation type\n");
            return -1;
    }

    return number;
}