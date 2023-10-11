#include"departamento.h"
/**struct de data*/
typedef struct data{
int dia;
int mes;
int ano;
}Data;
/*struct de produto*/
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

ListaProduto* cria_lista;
ListaProduto* list_insere(ListaProduto* l, Produto* produto);
void preenche_produto(void);
void add_lista_arquivo(ListaProduto* produto);
ListaProduto* ordenalista(ListaProduto* p, Produto* produto);
void imprime_lista(ListaProduto* prod);
ListaProduto* busca(ListaProduto* prod, char nomeProd[]);