#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    //Ligou o cronometro
    clock_t tempo_incial = clock();
    long int soma = 10+20;  //0(1)
    //Desligou o cronometro
    clock_t tempo_final = clock();

    float duracao = (float) (tempo_final - tempo_incial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.1f seg\n", duracao);

    tempo_incial = clock();

    for(long int j=0; j<10000000000; j ++){
        soma = soma+1;
    }

    tempo_final = clock();

    duracao = (float) (tempo_final - tempo_incial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.5f seg\n", duracao);

    return 0;
}