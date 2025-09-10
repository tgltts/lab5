#include <stdio.h>

void encontra_min_max(int V[], int N, int *min, int *max) {
    *min = V[0];
    *max = V[0];
    
    for (int i = 1; i < N; i++) {
        if (V[i] < *min) {
            *min = V[i];
        }
        if (V[i] > *max) {
            *max = V[i];
        }
    }
}

int main() {
    int array[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int minimo, maximo;

    encontra_min_max(array, tamanho, &minimo, &maximo);

    printf("O valor mínimo do array é: %d\n", minimo);
    printf("O valor máximo do array é: %d\n", maximo);

    return 0;
}
