#include <stdio.h>
#include <stdio.h>
#include <math.h>


void calc_esfera(float R, float *area, float *volume){
  *area = 4 * M_PI * R * R;
  *volume = (4.0f / 3.0f) * M_PI * R * R * R;
}

int main() {
  float raio, area, volume;
  printf("Digite o valor do raio:");
  scanf("%f",&raio);
  
  

  calc_esfera(raio,&area,&volume);

  printf("O valor da area é de:%f\n",area);
  printf("O valor do volume é de: %f\n",volume);

  return 0;
}

  
