#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define TAMANHO 100000

int main(){

    int *vetor = (int *)malloc(TAMANHO * sizeof(int));
    int vetor [TAMANHO];

    for(int i = 0; i<TAMANHO; i++){
        vetor[i] = rand ();
    }
    printf("\n");
    int valor;
    printf("Entre com um numero para buscar: ");
    scanf("%i", &valor);

    clock_t inicio = clock();
    int achou = quick_select(vetor, 0, TAMANHO - 1, valor);
    clock_t termino = clock();

    float duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;
    printf("A busca pelo valor %i resultou em %i\n", valor, achou);
    printf("Levou %f segundos para buscar\n", duracao);
    return 0;
}