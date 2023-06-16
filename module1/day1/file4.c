#include <stdio.h>

int main() {
    float operand1, operand2, answer;
    char operator;

    printf("Enter Number1: ");
    scanf("%f", &operand1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%f", &operand2);

    switch (operator) {
        case '+':
            answer = operand1 + operand2;
            printf("Result: %.2f\n",answer);
            break;
        case '-':
            answer = operand1 - operand2;
            printf("Result: %.2f\n", answer);
            break;
        case '*':
            answer = operand1 * operand2;
            printf("Result: %.2f\n", answer);
            break;
        case '/':
            if (operand2 != 0) {
                answer = operand1 / operand2;
                printf("Result: %.2f\n", answer);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}