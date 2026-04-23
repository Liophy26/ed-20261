#ifndef CONTA_C
#define CONTA_H

typedef struct Conta_t {
    int numero;
    float saldo;
} Conta;

Conta *conta_criar();
void conta_depositar(Conta *conta, float deposito);
void conta_sacar(Conta *conta, float saque);
float conta_ver_saldo(Conta *conta);
void conta_destruir(Conta *conta);

#endif
//Definir o tipo Conta e declarar os protótipos das funções conta_criar, conta_depositar,
// conta_sacar, conta_ver_saldo e conta_destruir;