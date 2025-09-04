//1. Escreva um programa que declare um inteiro, um float e um char, e ponteiros para inteiro, flaot, e char. Associe as variaveis aos ponteiros (use &).
//Modifique os valores de cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a modificacao


#include <stdio.h>

int main() {
    int A = 69;
    float B = 1.3;
    char C = 'K';
    
    int *pontA = &A;
    float *pontB = &B;
    char *pontC = &C;
    
    printf("ANTES:\n");
    printf("%d\n", A);
    printf("%f\n", B);
    printf("%c\n\n", C);
    
    *pontA = 24;
    *pontB = 1.9;
    *pontC = 'Z';
    
    printf("DEPOIS:\n");
    printf("%d\n", A);
    printf("%f\n", B);
    printf("%c\n", C);
    
}
