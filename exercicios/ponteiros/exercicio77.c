#include <stdio.h>

int main() {
    char letra = 'a';
    char* ptrChar;
    char** ptrPtrChar;
    char*** ptrPtr;

    ptrChar    = &letra;
    ptrPtrChar = &ptrChar;
    ptrPtr     = &ptrPtrChar;

    printf("%c\n", letra);
    printf("%c\n", *ptrChar);
    printf("%c\n", **ptrPtrChar);
    printf("%c\n", ***ptrPtr);

    return 0;
}
