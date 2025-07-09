#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para converter HH:MM para minutos totais
int tempoParaMinutos(const char *tempoStr) {
  int horas, minutos;
  sscanf(tempoStr, "%d:%d", &horas, &minutos);
  return horas * 60 + minutos;
}

// Função para converter minutos totais para HH:MM
void minutosParaTempo(int minutosTotais, char *buffer) {
  int horas = minutosTotais / 60;
  int minutos = minutosTotais % 60;
  sprintf(buffer, "%02d:%02d", horas, minutos);
}

int main() {
  char tempo1Str[6]; // HH:MM\0
  char tempo2Str[6];
  char operacao;
  char resultadoStr[6];
  int tempo1Minutos, tempo2Minutos, resultadoMinutos;

  printf("--- Calculadora de Horas ---\n");
  printf("Formato: HH:MM\n");
  printf("Exemplo: 04:17 - 01:35\n");
  printf("Digite o primeiro tempo (HH:MM): ");
  scanf("%s", tempo1Str);

  printf("Digite a operação (+ ou -): ");
  scanf(" %c",
        &operacao); // Espaço antes de %c para consumir o newline anterior

  printf("Digite o segundo tempo (HH:MM): ");
  scanf("%s", tempo2Str);

  tempo1Minutos = tempoParaMinutos(tempo1Str);
  tempo2Minutos = tempoParaMinutos(tempo2Str);

  if (operacao == '+') {
    resultadoMinutos = tempo1Minutos + tempo2Minutos;
  } else if (operacao == '-') {
    resultadoMinutos = tempo1Minutos - tempo2Minutos;
  } else {
    printf("Operação inválida. Use '+' ou '-'.\n");
    return 1; // Saída com erro
  }

  // Lida com resultados negativos (como em "devendo horas")
  if (resultadoMinutos < 0) {
    printf("Resultado: -");
    resultadoMinutos =
        abs(resultadoMinutos); // Converte para positivo para formatar
  } else {
    printf("Resultado: ");
  }

  minutosParaTempo(resultadoMinutos, resultadoStr);
  printf("%s\n", resultadoStr);

  return 0; // Saída bem-sucedida
}
