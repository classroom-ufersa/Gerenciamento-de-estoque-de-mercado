#include"../include/produto.h"
#include"../include/departamento.h"


typedef struct departamento{
    char nome[20];
    Produto* produto;
    Produto* p;
    char porte[8];
    struct departamento* prox;
}Departamento;

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

<<<<<<< HEAD
Departamento* criaDepartamento(char nome[],char porte[]){
Departamento* d = (Departamento*)malloc(sizeof(Departamento));
if(d == NULL){
    printf("erro ao alocar memoria!\n");
}
strcpy(d->nome,nome);
strcpy(d->porte, porte);
d->produto = NULL;

return d;
}


=======
>>>>>>> 2ac1d3b86cda8bb25d7116f784661851a6719878
Departamento *criarDepartamento(char nome_dep[],char porte[]) {
    // Aloca dinamicamente a memória para uma estrutura Departamento
    Departamento *novoDepartamento = (Departamento *)malloc(sizeof(Departamento));

    // Verifica se a alocação foi bem-sucedida
    if (novoDepartamento == NULL) {
        fprintf(stderr, "Erro ao alocar memória!\n");
        exit(1);
    }

    strcpy(novoDepartamento->nome, nome_dep);
    strcpy(novoDepartamento->porte, porte);
    novoDepartamento->produto = NULL;
  
    return novoDepartamento;
}

void liberarDepartamento(Departamento *departamento) {
    // Libera a memória alocada para o Departamento
    free(departamento);
}

Departamento* busca_departamento(Departamento* departamento, char nomeDep[]){
   Departamento* d;
   for(d = departamento; d != NULL; d = d->prox){
    if(strcmp(d->nome, nomeDep)==0){
        return d;
    }
   } 
    return NULL;
}
void preencherDepartamento(Departamento *departamento) {
    printf("Nome do departamento: ");
    scanf(" %[^\n]", departamento->nome);
    capitalizeString(departamento->nome);

    printf("Produto: ");
    scanf(" %[^\n]", departamento->produto);
    //capitalizeString(departamento->produto);

    // Loop para verificar as condições corretas
    while (strcmp(departamento->porte, "GRANDE") != 0 &&
           strcmp(departamento->porte, "MEDIO") != 0 &&
           strcmp(departamento->porte, "PEQUENO") != 0) {
        printf("Informe o porte do produto (GRANDE, MEDIO ou PEQUENO): ");
        scanf(" %[^\n]", departamento->porte);
        capitalizeString(departamento->porte);


    }
}

void criarArquivo(Departamento *departamento, int n)
{
    // Abre o arquivo em modo leitura para verificar o cabeçalho
    FILE *arquivoVerificacao = fopen("departamento.txt", "r");

    // Verifica se o cabeçalho já existe
    int cabecalhoExiste = 0;
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivoVerificacao) != NULL)
    {
        if (strstr(linha, "Funcionarios cadastrados") != NULL)
        {
            cabecalhoExiste = 1;
            break;
        }
    }

    fclose(arquivoVerificacao);
}

/*void EstoquePDepartamento(Departamento *departamento, int numDepartamento)
{
    printf("Consultar Quantidade por Departamento:\n");
    for (int i = 0; i < numDepartamento; i++) {
        Departamento *departamento = &departamento[i];

        printf("Departamento: %s\n", departamento->p->nome);
        printf("Quantidade de Produtos: %d\n", departamento->p->estoque);
    }
}*/

