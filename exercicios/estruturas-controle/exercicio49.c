#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Digite uma string: ");
    fgets(str1, 100, stdin);
    strcpy(str2, str1);
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}
