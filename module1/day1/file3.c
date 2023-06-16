#include<stdio.h>

int Marks(int Roll_No, char Name[], int Physics, int Math, int Chemistry);

int main() {
    int Roll_No;
    char Name[50];
    int Physics;
    int Math;
    int Chemistry;

    printf("Enter Roll_No: ");
    scanf("%d", &Roll_No);

    printf("Enter Name: ");
    scanf(" %[^\n]s", Name);

    printf("Enter Physics marks: ");
    scanf("%d", &Physics);

    printf("Enter Math marks: ");
    scanf("%d", &Math);

    printf("Enter Chemistry marks: ");
    scanf("%d", &Chemistry);

    Marks(Roll_No, Name, Physics, Math, Chemistry);

    return 0;
}

int Marks(int Roll_No, char Name[], int Physics, int Math, int Chemistry) {
    int total = Physics + Math + Chemistry;
    float Percentage = (float)total / 300 * 100;

    printf("\n---------- Summary ----------\n");
    printf("Roll_No: %d\n", Roll_No);
    printf("Name: %s\n", Name);
    printf("Physics Marks: %d\n", Physics);
    printf("Math Marks: %d\n", Math);
    printf("Chemistry Marks: %d\n", Chemistry);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", Percentage);

    return 0;
}