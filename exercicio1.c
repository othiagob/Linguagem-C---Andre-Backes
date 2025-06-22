#include <stdio.h>

int main() {
    char caractere;
    int inteiro;
    float real;
    
    // Lendo as variáveis
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    
    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);
    
    printf("Digite um número real: ");
    scanf("%f", &real);
    
    // Imprimindo as variáveis separadas por espaços
    printf("%c %d %f\n", caractere, inteiro, real);
    
    // Imprimindo as variáveis separadas por tabulação horizontal
    printf("%c\t%d\t%f\n", caractere, inteiro, real);
    
    // Imprimindo as variáveis uma em cada linha
    printf("%c\n%d\n%f\n", caractere, inteiro, real);
    
    return 0;
}

