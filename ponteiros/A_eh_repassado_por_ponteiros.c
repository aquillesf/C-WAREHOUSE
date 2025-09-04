//Considere a seguinte declaracao: int A, *B, **C, ***D; Escreva um programa que leia a
//variavel e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas
//os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o quadruplo
#include <stdio.h>

int main(){
    int A = 41, *B, **C, ***D;
    B = &A;
    C = &B;
    D = &C;
    *B = *B * 2;
    printf("Valor de A no ponteiro *B: %d\n", *B);
    **C = **C * 3;
    printf("Valor de *B no ponteiro **C: %d\n", **C);
    ***D = ***D * 4;
    printf("Valor de **C no ponteiro ***D: %d\n", ***D);
}
