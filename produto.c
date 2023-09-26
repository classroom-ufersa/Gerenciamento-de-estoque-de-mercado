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
}Produto;

void preenche_produto(Produto*produto){
printf("Tipo do produto:\n");
scanf(" %[^\n]", produto->tipo);
printf("Preco:\n");
scanf("%f",&produto->preco);
printf("Data de fabricacao (dia mes ano):\n");
scanf("%hd %hd %d", &produto->data_fabricacao.dia, &produto->data_fabricacao.mes, &produto->data_fabricacao.ano);
printf("Data de validade (dia mes ano):\n");
scanf("%hd %hd %d", &produto->data_validade.dia, &produto->data_validade.mes, &produto->data_validade.ano);
preencher(&produto->departamento);
printf("Quantidade de estoque:\n");
scanf("%d",&produto->estoque);
}
