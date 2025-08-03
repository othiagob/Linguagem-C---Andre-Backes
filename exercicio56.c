#include <stdio.h>

int Square(int a) { return (a * a); }

int main() {
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    n2 = Square(n1);
    printf("O quadrado vale: %d\n", n2);

    return 0;
}
