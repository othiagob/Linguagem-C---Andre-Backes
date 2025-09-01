#include <stdio.h>
#include <stdlib.h>

int main(){
  int status;
  status = remove("ArqGrav.txt");
  if(status != 0){
    printf("Erro na remoção do arquivo!\n");
    exit(1);
  } else {
    printf("Sucesso na remoção do arquivo!\n");
  }

  return 0;

}
