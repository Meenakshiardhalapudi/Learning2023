#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

// Function to read a complex number
void readComplex(struct Complex *c) {
    printf("Enter real part: ");
    scanf("%f", &(c->real));
    printf("Enter imaginary part: ");
    scanf("%f", &(c->imaginary));
}

// Function to write a complex number
void writeComplex(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

int main() {
    struct Complex c1, c2, sum, product;

    // Reading complex numbers
    printf("Enter first complex number:\n");
    readComplex(&c1);
    printf("Enter second complex number:\n");
    readComplex(&c2);

    // Writing complex numbers
    printf("First complex number:\n");
    writeComplex(c1);
    printf("Second complex number:\n");
    writeComplex(c2);

    // Addition of complex numbers
    sum = addComplex(c1, c2);
    printf("Sum of the two complex numbers:\n");
    writeComplex(sum);

    // Multiplication of complex numbers
    product = multiplyComplex(c1, c2);
    printf("Product of the two complex numbers:\n");
    writeComplex(product);

    return 0;
}