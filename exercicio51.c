#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
  char nome[50];
  int idade;
  char rua[100];
  int numero;
};


int main(){
  struct cadastro c;
  strcpy(c.nome, "Thiago");
  c.idade = 33;
  strcpy(c.rua,"Luiz Muzambinho, 1649 - Nova Brasilia");
  c.numero = 1649;
  printf("Olá, seja bem vindo: %s\n", c.nome);

}
