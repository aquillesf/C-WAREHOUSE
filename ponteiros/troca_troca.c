//Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas
//2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas
//variaveis A e B por exemplo e, apos a execucao da funcao, A conter o valor de B e B
//ter o valor de A.

#include <stdio.h>

int troca_troca();

int main() {
    troca_troca(13, 22);
    return 0;
}

int troca_troca(int A, int B){
    printf("Valor de A atual: %d\n", A);
    printf("Valor de B atual: %d\n", B);
    int *pontA = &A;
    int *pontB = &B;
    int temp = A;
    *pontA = B;
    *pontB = temp;
    
    return printf("valor de A depois da troca: %d\nvalor de B depois da troca: %d\n", A, B);
}
