#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;  // Check if the least significant bit is set
        num >>= 1;        // Right shift the number to process the next bit
    }
     return count;
}

int totalSetBitsInArray(int arr[], int size) {
    int totalBits = 0;
    for (int i = 0; i < size; i++) 
    {
        totalBits += countSetBits(arr[i]);
    }
    return totalBits;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int totalBits = totalSetBitsInArray(arr, size);
     printf("Total number of set bits in the array: %d\n", totalBits);
    
    return 0;
}