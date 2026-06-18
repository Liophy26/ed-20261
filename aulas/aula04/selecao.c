#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define TAMANHO 10

int busca_sequencial(int v[], int n, int valor){
    for(int i = 0; i < n; i++){ // 0 (n)
        if (v[i] == valor){
            return i;
        }
    }
    return -1;
}

int quick_select(int v[], int inicio, int fim, int valor){
    if (inicio == fim){
        return -1;
    }

    int pivo = particionar_vetor(v, inicio, fim);

    int pivo = particionar_vetor (v, inicio, fim);

    if (v[pivo] == valor){
        return pivo;
    } else if(v[pivo] < valor){
        quick_select(v, inicio, pivo -1, valor);
    } else {
        quick_select(v, pivo + 1, fim, valor);
    }
}