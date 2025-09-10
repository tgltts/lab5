#include <stdio.h>
int dobro(int *a, int *b){
  *a = (*a) * 2;
  *b = (*b) * 2;
  return *a + *b;
}

int main(){
  int a,b;
  int soma;

  printf("Digite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  soma = dobro(&a, &b);
  printf("o valor da soma do dobro é %d", soma);
  return 0;
}
