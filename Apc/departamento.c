#include"../Include/departamento.h"
#include"../Include/produto.h"


typedef struct departamento{
    char nome[20];
    Produto** produto;
    char porte[8];
    int codigo;
    struct Departamento* prox;
}Departamento;

Departamento* cria_departamento(char nome[50],char porte[50], int codigo, Produto* produto){
Departamento* d = (Departamento*)malloc(sizeof(Departamento));
if(d == NULL){
    printf("erro ao alocar memoria!\n");
}


}
void capitalizeString(char *str)
{
    if (str[0] != '\0')
    {
        str[0] = toupper(str[0]);
        for (int i = 1; str[i] != '\0'; i++)
        {
            str[i] = tolower(str[i]);
        }
    }
}

Departamento *criarDepartamento() {
    // Aloca dinamicamente a memória para uma estrutura Departamento
    Departamento *novoDepartamento = (Departamento *)malloc(sizeof(Departamento));

    // Verifica se a alocação foi bem-sucedida
    if (novoDepartamento == NULL) {
        fprintf(stderr, "Erro ao alocar memória!\n");
        exit(1);
    }

    return novoDepartamento;
}

void liberarDepartamento(Departamento *departamento) {
    // Libera a memória alocada para o Departamento
    free(departamento);
}

void preencherDepartamento(Departamento *departamento) {
    printf("Nome do departamento: ");
    scanf(" %[^\n]", departamento->nome);
    capitalizeString(departamento->nome);

    printf("Informe o codigo do departamento:\n");
    scanf("%d", departamento->codigo);

    printf("Produto: ");
    scanf(" %[^\n]", departamento->produto);
    capitalizeString(departamento->produto);

    // Loop para verificar as condições corretas
    while (strcmp(departamento->porte, "GRANDE") != 0 &&
           strcmp(departamento->porte, "MEDIO") != 0 &&
           strcmp(departamento->porte, "PEQUENO") != 0) {
        printf("Informe o porte do produto (GRANDE, MEDIO ou PEQUENO): ");
        scanf(" %[^\n]", departamento->porte);
        capitalizeString(departamento->porte);
    }
}

