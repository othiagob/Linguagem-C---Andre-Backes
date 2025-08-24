#include <stdio.h>

int main() {
  char str1[20] = "Hello World";
  char str2[20];

  for (int i = 0; str1[i] != '\0'; i++) {
    str2[i] = str1[i];
    str2[i] = '\0';
  }

  printf("%c %c", str1[20], str2[20]);

  return 0;
}
