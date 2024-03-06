#include <stdio.h>

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    printf("SOMA: %d\n", SOMA);

    return 0;
}


/* O código dado faz um "loop" enquanto a variável K for menor que INDICE. A cada vez que passa pelo loop, K aumenta em 1 e é somado a SOMA. No final, SOMA será a soma dos números de 1 a 13, que é 91.

Isso pode ser simplificado usando uma fórmula matemática para a soma de uma sequência de números consecutivos: SOMA = (n * (n + 1)) / 2, onde n é o último número da sequência. Para n = 13, a soma é:

SOMA = (13 * (13 + 1)) / 2
SOMA = (13 * 14) / 2
SOMA = 182 / 2
SOMA = 91

Portanto, ao final do código, SOMA será 91. */