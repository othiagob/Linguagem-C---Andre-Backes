#include <stdio.h>

void soma_mais_um(int n) {
    n = n + 1;
    printf("Dentro da função: %d\n", n);
}

int main() {
    int numeroDigitado;
    printf("Digite um numero inteiro: ");
    scanf("%d\n", &numeroDigitado);
    printf("Antes da função ser chamada dentro do main: %d\n", numeroDigitado);
    soma_mais_um(numeroDigitado);
    printf(
        "Depois de chamar a função e colocar o numero digitado dentro dela: "
        "%d\n",
        numeroDigitado);

    return 0;
}
