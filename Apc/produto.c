#include"C:/Users/andre/Gerenciamento-de-estoque-de-mercado/Include/produto.h"

typedef struct data{
int dia;
int mes;
int ano;
}Data;

typedef struct produto{
char tipo[50];
float preco;
Data data_fabricacao;
Data data_validade;
Departamento* departamento;
int estoque;
}Produto;
/*struct para a lista*/
typedef struct listaProduto{
Produto* info;
struct lista* prox;
struct lista* ant;
}ListaProduto;

ListaProduto* cria_lista(void){
return NULL;
}

ListaProduto* list_insere(ListaProduto* l, Produto* produto){
ListaProduto* p = (ListaProduto*)malloc(sizeof(ListaProduto));
if(p == NULL){
    printf("erro");
}
p->info = produto;
p->prox = l;
p->ant = NULL;

if(l != NULL){
    l->ant = p;
}
return p;
}
/*
ListaProduto* novo = (ListaProduto*)malloc(sizeof(ListaProduto));
if(novo ==  NULL){
    printf("Erro ao alocar memoria!\n");
    exit(1);
}

novo->info = (Produto*)malloc(sizeof(Produto));
if(novo->info ==  NULL){
    printf("Erro ao alocar memoria!\n");
    exit(1);
}

*novo->info = *produto;
novo->prox = NULL;
novo->ant = p;

p->prox = novo;
return l;
}*/

void preenche_produto(Produto* produto){
    printf("Tipo do produto:\n");
    scanf(" %[^\n]", produto->tipo);
    capitalizeString(produto->tipo);
    printf("Preco:\n");
    scanf("%f", &produto->preco);
    printf("Data de fabricacao (dia mes ano):\n");
    scanf("%d %d %d", &produto->data_fabricacao.dia, &produto->data_fabricacao.mes, &produto->data_fabricacao.ano);
    printf("Data de validade (mes ano):\n");
    scanf("%d %d", &produto->data_validade.mes, &produto->data_validade.ano);
    preencherDepartamento(&produto->departamento);
    printf("Quantidade de estoque:\n");
    scanf("%d", &produto->estoque);
}
void add_lista_arquivo(ListaProduto* produto){
  FILE* arquivo = fopen("produtos.txt", "a");
  if (arquivo == NULL){
    printf("erro ao criar arquivo!\n");
    exit(1);
  }
  ListaProduto* novo = produto;

    while(novo != NULL){
    Produto* prod = novo->info;
        fprintf(arquivo, "Tipo: %s\n", prod->tipo);
        fprintf(arquivo, "Preco: %.2f\n", prod->preco);
        fprintf(arquivo, "Data de fabricacao: %d/%d/%d\n", prod->data_fabricacao.dia, prod->data_fabricacao.mes, prod->data_fabricacao.ano);
        fprintf(arquivo, "Data de validade: %d/%d\n", prod->data_validade.mes, prod->data_validade.ano);
        fprintf(arquivo, "Departamento: %s\n", prod->departamento);
        fprintf(arquivo, "Quantidade em estoque: %d\n", prod->estoque);
        novo = novo->prox;
    }
    fclose(arquivo);
    
    ListaProduto* ordena(ListaProduto* p, Produto produto){
        ListaProduto*novo = (ListaProduto*)malloc(sizeof(ListaProduto));
        if(novo == NULL){
            printf("Erro ao alocar memoria!\n");
            exit(1);
        }
    }
}

