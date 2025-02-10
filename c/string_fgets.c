#include <stdio.h>
int main() {
    char name[50];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);  // Reads the full line

    printf("Hello, %s", name);
    return 0;
}
