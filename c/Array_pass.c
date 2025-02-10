// #include <stdio.h>

// void printArray(int *arr, int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int myArray[] = {1, 2, 3, 4, 5};
//     int size = sizeof(myArray) / sizeof(myArray[0]);
    
//     // Passing the array to the function
//     printArray(myArray, size);
    
//     return 0;
// }


#include <stdio.h>

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);  // Passing array to function
    return 0;
}
