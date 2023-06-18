#include <stdio.h>

unsigned long long getExponent(double x) {
    unsigned long long* ptr = (unsigned long long*)&x;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    return exponent;
}
void printExponentHex(unsigned long long exponent) {
    printf("Exponent in hexadecimal: 0x%llX\n", exponent);
}
void printExponentBinary(unsigned long long exponent) {
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
     double x = 0.7;
    unsigned long long exponent = getExponent(x);
    printExponentHex(exponent);
    printExponentBinary(exponent);
    return 0;
}