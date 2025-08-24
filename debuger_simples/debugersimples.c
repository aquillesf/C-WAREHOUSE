#include <stdio.h>
#define SIM 1
#define NAO 0

int main(void){

    int c, chaves, colchetes, parenteses;

    chaves = 0; 
    colchetes = 0;
    parenteses = 0;

    while ((c = getchar()) !=  EOF){
        if (c == '{'){
            chaves += 1;
        }

        if (c == '['){
            colchetes += 1;
        }

        if (c == '(') {
            parenteses += 1;
        }

    }

    printf("%d, %d, %d", chaves - 1 , colchetes - 1, parenteses - 1);

}