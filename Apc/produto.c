#include"produto.h"

ListaProduto* cria_lista(void){
return NULL;
}

ListaProduto* list_insere(ListaProduto* l, Produto* produto){
ListaProduto* p = l;

while(p->prox != NULL){
p = p->prox;
}

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
}

void preenche_produto(Produto*produto){
printf("Tipo do produto:\n");
scanf(" %[^\n]", produto->tipo);
printf("Preco:\n");
scanf("%f",&produto->preco);
printf("Data de fabricacao (dia mes ano):\n");
scanf("%d %d %d", produto->data_fabricacao.dia, produto->data_fabricacao.mes,produto->data_fabricacao.ano);
printf("Data de validade (dia mes ano):\n");
scanf("%d %d", produto->data_validade.mes,produto->data_validade.ano);
preencherDepartamento(&produto->departamento);
printf("Quantidade de estoque:\n");
scanf("%d",&produto->estoque);
}
