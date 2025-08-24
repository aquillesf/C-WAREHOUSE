//questão 16 do livro "treinamento em linguagem C" da autora Victorine Viviane Mizrahi

#include <stdio.h>
#include <conio.h>

int main(void){

    char c;
    int i = 0;
    char texto[1024];
    while(1){
        c = getch();

        if (c >= 'a' && c <= 'z'){
            c -= 32;
        };

        texto[i++] = c;


        if (c == 27){
            printf("%s", texto);
            break;
        };
    };

};