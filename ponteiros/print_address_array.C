//Crie um programa que contenha um array de float contendo 10 elementos.
//Imprima o endereco de cada posicao desse array.

#include <stdio.h>
int main(){
    float meu_array[10] = {3.14, 1.3, 41.0, 77.0, 67.0, 22.0, 69.0, 89.0, 02.0, 67.0};
    for(int i = 0; i < 10; i++){
      printf("%p\n", &meu_array[i]);
    }
    return 0;
}

