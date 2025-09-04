//Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
//apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

#include <stdio.h>
int main(){
    int meu_array[5] = {};
    int *p = meu_array, i = 0, num;
    
    while(i <= 4){
        p = meu_array + i;
        scanf("%d", &num);
        *p = num * 2;
        i++;
    }

    //printar lista pra ver se deu certo
    for(i = 0; i<=4; i++){
        printf("%d ", meu_array[i]);
    }
    return 0;
}

