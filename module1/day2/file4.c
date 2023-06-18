#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
         }
    return count;
}

int totalSetBitsInArray(int arr[], int size) {
    int totalBits = 0;
     for (int i = 0; i < size; i++)
        totalBits += countSetBits(arr[i]);
    return totalBits;
}
int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int totalBits = totalSetBitsInArray(arr, size);
    
    printf("Total number of set bits in the array: %d\n", totalBits);
    
    return 0;
}