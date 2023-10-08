#include"departamento.c"

typedef struct
{
    char tipo[50];
    char nome[50];
    float preco;
    char data_fabricacao[11]; // formato: dd/mm/yyyy
    char data_validade[11]; // formato: dd/mm/yyyy
    char departamento[50];
    int estoque;
}produto;

typedef struct 
{
   char nome[50];
    char porte[20];
    struct Produto *produto;
    int numProdutos; 
}Departamento;

int main(void)
{
    int opcao;
    int numDepartamento;
    struct Departamento * departamento = NULL;
    
}
