#include <stdio.h>

struct minhaStruct {
    int meuNumero;
    char minhaLetra;
    
};

int main() {
    struct minhaStruct struct1;
    struct1.meuNumero = 41;
    struct1.minhaLetra = 'a';
    printf("meu numero da struct: %d\n",  struct1.meuNumero);
    printf("minha letra da struct: %c\n",  struct1.minhaLetra);
    
    return 0;
}
