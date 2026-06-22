#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int fatorial(int n){
    int fat = 1;
    if(n < 0){
        printf("Numero invalido");
    } else{
    for(int i = 1; i < n+1; i++){
        fat = fat * i;
    }
}
    return fat;
}

int fatorial_recursividade(int j){
    if(j > 1){
        return j*fatorial_recursividade(j-1);
    } else if(j == 0 || j == 1){
        return 1;
    } else{
        printf("Não foi possivel de resolver");
        return -1;
    }
}

int main(){
    
    clock_t tempo_inicial = clock();
    
    printf("/// LACO FOR ///\n");
    
    long int f = fatorial(5);
    printf("\nfatorial de 5 e = %i\n", f);
    clock_t tempo_final = clock();
    float duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    f = fatorial(6);
    printf("fatorial de 6 e = %i\n", f);
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    f = fatorial(7);
    printf("fatorial de 7 e = %i\n", f);
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    f = fatorial(8);
    printf("fatorial de 8 e = %i\n", f);
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    f = fatorial(9);
    printf("fatorial de 9 e = %i\n", f);
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    f = fatorial(10);
    printf("fatorial de 10 e = %i\n", f);
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    f = fatorial(11);
    printf("fatorial de 11 e = %i\n", f);
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    f = fatorial(12);
    printf("fatorial de 12 e = %i\n", f);
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    f = fatorial(13);
    printf("fatorial de 13 e = %i\n", f);
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    f = fatorial(14);
    printf("fatorial de 14 e = %i\n", f);
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    f = fatorial(15);
    printf("fatorial de 15 e = %i\n", f);
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);
    
    printf("\n/// RECURSIVIDADE ///\n ");

    tempo_inicial = clock();
    printf("o fatorial de 5 eh: %i\n", fatorial_recursividade(5));
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    printf("o fatorial de 6 eh: %i\n", fatorial_recursividade(6));
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    printf("o fatorial de 7 eh: %i\n", fatorial_recursividade(7));
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    printf("o fatorial de 8 eh: %i\n", fatorial_recursividade(8));
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    printf("o fatorial de 9 eh: %i\n", fatorial_recursividade(9));
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    printf("o fatorial de 10 eh: %i\n", fatorial_recursividade(10));
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    printf("o fatorial de 11 eh: %i\n", fatorial_recursividade(11));
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    printf("o fatorial de 12 eh: %i\n", fatorial_recursividade(12));
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    printf("o fatorial de 13 eh: %i\n", fatorial_recursividade(13));
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    printf("o fatorial de 14 eh: %i\n", fatorial_recursividade(14));
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);

    tempo_inicial = clock();
    printf("o fatorial de 15 eh: %i\n", fatorial_recursividade(15));
    tempo_final = clock();
    duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f seg\n", duracao);
    return 0;
}