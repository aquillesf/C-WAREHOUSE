#include <stdio.h>

int main (void){
    int myNumbers[15] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 12, 23, 40, 60, 80, 100};
    int number, start, end, half, actual_number;
    start = 0;
    end = 14;
    scanf("%d", &number);

    while (start <= end){
        half = (start + end) / 2;

        if (myNumbers[half] == number){
            printf("número achado");
            return 0;
        };

        if (myNumbers[half] < number){
            start = half + 1;
        } else { 
            end = half - 1;
        }
    
    };

    printf("Número não encontrado.\n");
    return 0;

};
