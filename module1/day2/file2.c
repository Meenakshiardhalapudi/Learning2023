#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    unsigned char* p = (unsigned char*)a;
    unsigned char* q = (unsigned char*)b;

    for (size_t i = 0; i < size; i++) {
        unsigned char temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}

int main() {
    int a, b;
    double x, y;
    char c1, c2;

printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter two doubles: ");
    scanf("%lf %lf", &x, &y);

 printf("Enter two characters: ");
    scanf(" %c %c", &c1, &c2);

    printf("\nBefore swap:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("x = %.2f, y = %.2f\n", x, y);
    printf("c1 = %c, c2 = %c\n", c1, c2);

    swap(&a, &b, sizeof(int));
    swap(&x, &y, sizeof(double));
    swap(&c1, &c2, sizeof(char));

    printf("\nAfter swap:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("x = %.2f, y = %.2f\n", x, y);
    printf("c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
