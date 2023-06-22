#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void sortArray(struct Student arr[], int size) {
    int i, j;
    struct Student temp;
     for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i].marks < arr[j].marks) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int i;
    struct Student students[5] = {
        {"John", 85},
        {"Emma", 92},
        {"Michael", 78},
        {"Sophia", 95},
        {"William", 88}
    };
    int size = sizeof(students) / sizeof(students[0]);

    printf("Before sorting:\n");
    for (i = 0; i < size; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    sortArray(students, size);

    printf("\nAfter sorting:\n");
    for (i = 0; i < size; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}