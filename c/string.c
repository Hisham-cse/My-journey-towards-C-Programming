#include <stdio.h>


int main() {


char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Character array
char str3[] = {'H', 'e', 'l', 'l', 'o'}; // Character array
char str2[] = "Hello";  // String (Automatically includes '\0')
printf("%s\n", str1);
printf("%s\n", str2);
printf("%s\n", str3);
}