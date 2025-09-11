// Online C compiler to run C program online
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
    printf("Olá! seja bem vindo ao registrador de usuários totalmente escrito em C!\n\n");
    printf("Aperte Enter para começar...\n");
    while((ch = getchar()) != EOF){
        printf("você deseja?\n");
        printf("1 - Adicionar Funcionário\n");
        printf("2 - Remover Funcionário\n");
        printf("3 - Listar Funcionários\n");
        input = getchar();
        
        if(input == '1'){
            printf("\n\n");
            printf("Insira o nome do funcionário: ");
            fgets(funcionarios[quantidade].nome, sizeof(funcionarios[quantidade].nome), stdin);
            limpar_buffer();
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
            int ID_deletar;
            printf("Insira o ID do funcionário que deseja deletar: ");
            scanf("%d", &ID_deletar);
            limpar_buffer();
        
            int encontrado = 0;
            for(int i = 0; i < quantidade; i++){
                if(funcionarios[i].ID == ID_deletar){
                    encontrado = 1;
                    for(int j = i; j < quantidade - 1; j++){
                        funcionarios[j] = funcionarios[j + 1];
                        funcionarios[j].ID = j;
                    }
                    quantidade--;
                    printf("Funcionário com ID %d deletado.\n", ID_deletar);
                    break;
                }
            }
        
            if(!encontrado){
                printf("Funcionário com ID %d não encontrado.\n", ID_deletar);
            }
        }

        if(input == '3'){
            limpar_buffer();
            for(int i = 0; i <= quantidade; i++){
                printf("========================================\n");
                printf("ID do funcionário %d: %d\n", i, funcionarios[i].ID);
                printf("Nome do funcionário %d: %s\n", i, funcionarios[i].nome);
                printf("Sobrenome do funcionário %d: %s\n", i, funcionarios[i].sobrenome);
                printf("Cargo do funcionário %d: %s\n", i, funcionarios[i].cargo);
                printf("========================================\n");
            }
        }
    }
    return 0;
}

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};
