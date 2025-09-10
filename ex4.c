#include <stdio.h>

void maior_elemento(int arr[], int *maior, int *contagem) {
    int i;
    *maior = arr[0];
    *contagem = 1;

    for (i = 1; i < 9; i++) {  // 9 é o tamanho fixo do array
        if (arr[i] > *maior) {
            *maior = arr[i];
            *contagem = 1; 
        } else if (arr[i] == *maior) {
            (*contagem)++;  
        }
    }
}

int main() {
    int array[9] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int maior, vezes;

    maior_elemento(array, &maior, &vezes);

    printf("O maior elemento é %d e ele ocorre %d vezes.\n", maior, vezes);

    return 0;
}
