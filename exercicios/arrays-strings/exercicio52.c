#include <stdio.h>

int soma(int x, int y) { return x + y; }

int main() {
    int a, b, c;
    printf("Digite o numero A: ");
    scanf("%d", &a);
    printf("Digite o numero B: ");
    scanf("%d", &b);
    printf("Soma é: %d\n", soma(a, b));

    return 0;
}
