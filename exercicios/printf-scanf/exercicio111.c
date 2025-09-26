#include <stdio.h>
#include <stdlib.h>

int main(){
  char texto[20];
  printf("Digite algum texto com no maximo 20 caracteres: ");
  scanf("%s", texto);
  printf("--------- ABAIXO ESTÁ O TEXTO QUE DIGITOU --------- \n");
  printf("%s \n", texto);

  return 0;
}
