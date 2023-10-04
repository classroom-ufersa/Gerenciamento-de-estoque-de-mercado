#include"produto.h"
#include"departamento.h"

typedef struct{
int ano;
short mes;
short dia;
}Data;

typedef struct{
char tipo[50];
float preco;
Data data_fabricacao;
Data data_validade;
Departamento departamento;
int estoque;
struct produto* prox;
struct produto* ant;
}Produto;

typedef struct lista{
Produto* inicio;
Produto* fim;
}Lista;

void inicializa_lista(Lista*lista){
lista->inicio = NULL;
lista->fim = NULL;
}

void preenche_produto(Produto*produto){
printf("Tipo do produto:\n");
scanf(" %[^\n]", produto->tipo);
printf("Preco:\n");
scanf("%f",&produto->preco);
printf("Data de fabricacao (dia mes ano):\n");
scanf("%hd %hd %d", &produto->data_fabricacao.dia, &produto->data_fabricacao.mes, &produto->data_fabricacao.ano);
printf("Data de validade (dia mes ano):\n");
scanf("%hd %d", &produto->data_validade.mes, &produto->data_validade.ano);
preencherDepartamento(&produto->departamento);
printf("Quantidade de estoque:\n");
scanf("%d",&produto->estoque);
}