#include <stdio.h>

void frac(float num, int* inteiro, float* frac);{
*inteiro = (int)num;
*frac = num - *inteiro;
}

int main() { 
  float num,frac;
  int inteiro;

  printf("Número: \n");
  scanf("%f", &num);

  frac(float num, &inteiro, &frac);

  printf("A parte inteira %d\n", inteiro);
  printf("A parte fracionário %f\n", frac);

  return 0;
  }
