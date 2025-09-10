#include <stdio.h>

void limpar_buffer();

typedef struct Funcionario {
    char nome[50];
    char sobrenome[50];
    char cargo[50];
    int ID;
} Funcionario;

int main() {
    Funcionario funcionarios[100];
    int quantidade = 0;
    char ch, input;
    printf("olá! seja bem vindo ao registrador de usuários totalmente escrito em C!\n");
    while((ch = getchar()) != EOF){
        printf("você deseja?\n");
        printf("1 - Adicionar Funcionário\n");
        printf("2 - Remover Funcionário\n");
        printf("2 - Listar Funcionários\n");
        input = getchar();
        
        if(input == '1'){
            limpar_buffer();
            printf("\n\n");
            printf("Insira o nome do funcionário: ");
            fgets(funcionarios[quantidade].nome, sizeof(funcionarios[quantidade].nome), stdin);
            printf("\n");
            printf("Insira o sobrenome do funcionário: ");
            fgets(funcionarios[quantidade].sobrenome, sizeof(funcionarios[quantidade].sobrenome), stdin);
            printf("\n");
            printf("Insira o cargo do funcionário:");
            fgets(funcionarios[quantidade].cargo, sizeof(funcionarios[quantidade].cargo), stdin);
            printf("\n");
            funcionarios[quantidade].ID = quantidade;
            quantidade ++; 
        }
        if(input == '2'){
            limpar_buffer(); 
        }
        if(input == '3'){
            limpar_buffer();        
        }
    }
    return 0;
}
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};





