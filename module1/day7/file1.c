#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
     float marks;
};

void parseString(const char* inputString, struct Student* students, int numStudents) {
    char* token = strtok((char*)inputString, " ");
    int index = 0;

    while (token != NULL && index < numStudents) {
        students[index].rollno = atoi(token);

        token = strtok(NULL, " ");
        if (token != NULL) {
            strncpy(students[index].name, token, sizeof(students[index].name) - 1);
            students[index].name[sizeof(students[index].name) - 1] = '\0';

            token = strtok(NULL, " ");
            if (token != NULL) {
                students[index].marks = atof(token);
            }
        }

        index++;
    }
}

int main() {
    const char* inputString = "1001 Aron 100.00";

    // Count the number of spaces in the input string to determine the number of students
    int numStudents = 1;
    for (int i = 0; i < strlen(inputString); i++) {
        if (inputString[i] == ' ') {
            numStudents++;
        }
    } 
    // Create an array of structures dynamically based on the number of students
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    // Parse the input string and initialize the array of structures
    parseString(inputString, students, numStudents);

    // Print the initialized array of structures
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

     // Free the dynamically allocated memory
    free(students);

    return 0;
}