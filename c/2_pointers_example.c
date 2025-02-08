#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;  // ptr stores the address of num

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Pointer ptr stores: %p\n", ptr);
    printf("Value at ptr (dereferencing): %d\n", *ptr);

    return 0;
}
