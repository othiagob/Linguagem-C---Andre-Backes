#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp;
  fp = fopen("exemplo.bin","wb");
  if(fp == NULL){
    printf("Erro na abertura do arquivo. Fim do programa!\n");
    exit(1);
  }
  fclose(fp);


  return 0;
}
