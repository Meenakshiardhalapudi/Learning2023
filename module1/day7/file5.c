#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    // Add other fields as needed
} Student;

Student students[MAX_STUDENTS]; // Global array of structures

// Function to search for a student by name
int searchStudentByName(const char* name) {
    int i;
    for (i = 0; i < MAX_STUDENTS; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i; // Found the student at index i
        }
    }
    return -1; // Student not found
}

int main() {
    // Populate the array of structures with some data
    strcpy(students[0].name, "John");
    students[0].age = 20;

    strcpy(students[1].name, "Alice");
    students[1].age = 22;

    strcpy(students[2].name, "Bob");
    students[2].age = 21;

    // Search for a student by name
    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

 int index = searchStudentByName(searchName);
    if (index != -1) {
        printf("Student found at index %d\n", index);
        printf("Name: %s\n", students[index].name);
        printf("Age: %d\n", students[index].age);
        // Print other fields as needed
    } else {
        printf("Student not found\n");
    }

    return 0;
}