#include <stdio.h>

int findLargestNumber(int num);

int main() {
    int num;
     printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);
    printf("Largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}

int findLargestNumber(int num) {
    int largestNum = 0;

    // Convert the number to a string for easier manipulation
    char strNum[5];
    sprintf(strNum, "%d", num);

    // Iterate through all possible positions to delete a digit
    for (int i = 0; i < 4; i++) {
        // Create a temporary number string without the digit at position i
        char tempNum[4];
        int index = 0;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                tempNum[index++] = strNum[j];
            }
             }
        tempNum[index] = '\0';

        // Convert the temporary number string back to an integer
        int tempInt;
        sscanf(tempNum, "%d", &tempInt);

        // Update the largest number if necessary
        if (tempInt > largestNum) {
            largestNum = tempInt;
        }
    }

    return largestNum;
}