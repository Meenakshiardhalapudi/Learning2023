#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5  // Adjust this value to the desired array size

struct Employee {
    int id;
    char name[50];
    float salary;
};
void initializeEmployees(struct Employee employees[], int size) {
    for (int i = 0; i < size; i++) {
        employees[i].id = i + 1;
        printf("Enter name for employee %d: ", i + 1);
        fgets(employees[i].name, sizeof(employees[i].name), stdin);

        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);
        getchar();  // Consume the newline character

 printf("\n");
    }
}

int main() {
    struct Employee employees[ARRAY_SIZE];
    initializeEmployees(employees, ARRAY_SIZE);

    // Print the initialized employees
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Employee %d:\n", employees[i].id);
        printf("Name: %s", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}