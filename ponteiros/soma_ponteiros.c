//Crie um programa que contenha uma funcao que permita passar por parametro dois
//numeros inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e
//armazenar o resultado na variavel A. Esta funcao nao devera possuir retorno, mas devera
//modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal.

#include <stdio.h>

int soma_guardar_A();

int main(){
    int A = 18, B = 23;
    printf("esses são os valores de A e B antes da função: %d, %d\n", A, B);
    soma_guardar_A(&A, &B);
    printf("esses são os valores de A e B depois da função: %d, %d\n", A, B);
    return 0;
}

int soma_guardar_A(int *A, int *B){
    int soma = *A + *B;
    *A = soma;
    return 0;
}
    
