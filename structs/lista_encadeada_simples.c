#include <stdlib.h> //importa a lib pra poder utilizar o null e tal
#include <stdio.h>

typedef struct element { //precisa ser typedef para definir os nós
    int value; //valor do elemento da lista encadeada
    struct element *prox; //aponta para o proximo elemento
} element;

int main() {
    element novo_elemento1; //declara primeiro elemento
    novo_elemento1.value = 13;
    novo_elemento1.prox = NULL;
    
    element novo_elemento2; //declara segundo
    novo_elemento2.value = 41;
    novo_elemento2.prox = NULL;
    
    novo_elemento1.prox = &novo_elemento2; //faz a ligação do primeiro elemento pro segundo
    
    return 0;
}
