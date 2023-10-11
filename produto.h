#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"departamento.h"
/**struct de data*/
typedef struct data;

/*struct de produto*/
typedef struct produto;
/*struct para a lista*/
typedef struct listaProduto;
/*função que cria uma lista*/
ListaProduto* cria_lista;
/*função para inserir os itens da lista*/
ListaProduto* list_insere(ListaProduto* l, Produto* produto);
/*função que preenche os dados dos produtos*/
void preenche_produto(void);
/*função para adicionar os arquivos da lista em um arquivo*/
void add_lista_arquivo(ListaProduto* produto);
