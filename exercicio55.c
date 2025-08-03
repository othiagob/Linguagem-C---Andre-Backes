#include <stdio.h>

enum semana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main(){
enum semana s1, s2, s3;
 s1 = Segunda;
  s2 = Terca;
  s3 = s1 + s2;

  printf("Domingo = %d\n", Domingo);
  printf("S1 = %d\n", s1);
  printf("S2 = %d\n", s2);
  printf("S3 = %d\n", s3);

  return 0;

}
