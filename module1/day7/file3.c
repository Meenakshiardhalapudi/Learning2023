#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void displayMembers(struct Person members[], int numMembers) {
    for (int i = 0; i < numMembers; i++) {
        printf("Member %d:\n", i + 1);
        printf("Name: %s\n", members[i].name);
        printf("Age: %d\n", members[i].age);
        printf("\n");
    }
}

int main() {
    // Example usage
     struct Person members[] = {
        {"John Doe", 25},
        {"Jane Smith", 30},
        {"David Johnson", 40}
    };
    int numMembers = sizeof(members) / sizeof(members[0]);

    displayMembers(members, numMembers);

    return 0;
}