#include <stdio.h>
#include <stdlib.h>

struct cadastro {char nome[20], rua[20]; int idade;};

int main(){
  FILE *f = fopen("arquivo.txt", "wb");
  if(f == NULL){
    printf("Erro na abertura\n");
    exit(1);
  }
  struct cadastro c, cad[4] = {
    "Ricardo", "Rua 1",31,
    "Carlos", "Rua 2", 32,
    "Ana", "Rua 3", 33,
    "Bianca","Rua 4", 34,
  };
  fwrite(cad, sizeof(struct cadastro),4,f);
  fclose(f);
  f = fopen("arquivo.txt", "rb");
  if(f == NULL){
    printf("Erro na abertura do arquivo.\n");
    exit(1);
  }
  fseek(f,2*sizeof(struct cadastro), SEEK_SET);
  fread(&c, sizeof(struct cadastro), 2, f);
  printf("%s\n%s\n%d\n", c.nome, c.rua, c.idade);
  fclose(f);

  return 0;
}
