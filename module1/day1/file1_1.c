#include <stdio.h>

void biggest(int a, int b);

int main() {
    int a;
    int b;
    
    printf("Enter a and b values: ");
    scanf("%d %d", &a, &b);
    
    biggest(a, b);
    
    return 0;
}

void biggest(int a, int b) {
    a > b ? printf("a has the biggest value\n") : (b > a ? printf("b has the biggest value\n") : printf("Both a and b are equal\n"));
}