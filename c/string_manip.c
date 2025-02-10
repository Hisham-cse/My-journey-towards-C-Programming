#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = " World";
    char str3[50];

    strcat(str1, str2);  // Concatenates str2 to str1
    strcpy(str3, str2);  // copies from str2 to str1

    printf("Copied String: %s\n", str3);
    printf("Concatenated String: %s\n", str1);
    printf("compare String: %d\n", strcmp(str1,str2));
    printf("String Length: %lu\n", strlen(str1));

    return 0;
}
