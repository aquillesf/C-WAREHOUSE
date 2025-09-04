//Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes
//2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na
//segunda variavel. Escreva o conteudo das 2 variaveis na tela

#include <stdio.h>

int maior_menor();

int main(){
    return maior_menor(14, 87);
}

int maior_menor(int A, int B){
    int *pontA = &A;
    int *pontB = &B;
    int maior = 0;
    int menor = 0;
    
    if(*pontA > *pontB){
        maior = *pontA;
        menor = *pontB;
    } else {
        maior = *pontB;
        menor = *pontA;
    }
    return printf("A primeira variável A é: %d\nE a segunda variável B é: %d\n", maior, menor);
}
