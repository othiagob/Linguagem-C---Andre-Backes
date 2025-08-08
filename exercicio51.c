#include <stdio.h>

void imprime(int n){
  int i;
  for(i = 0; i <= n; i++){
  printf("Linha %d \n", i);
  }
}


int main(){
 imprime(5); 
}
