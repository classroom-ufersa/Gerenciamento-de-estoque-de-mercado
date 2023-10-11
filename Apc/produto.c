#include"C:\Users\miche\projeto gerenciamento de mercado\Gerenciamento-de-estoque-de-mercado\Include\produto.h"

typedef struct data{
int dia;
int mes;
int ano;
}Data;

typedef struct produto{
char tipo[50];
char nome[50];
float preco;
Data data_fabricacao;
Data data_validade;
Departamento* departamento;
int estoque;
}Produto;
/*struct para a lista*/
typedef struct listaProduto{
Produto* info;
struct listaProduto* prox;
struct listaProduto* ant;
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
ListaProduto* novo = (ListaProduto*)malloc(sizeof(ListaProduto));{
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
*/

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

void preenche_produto(void){
Produto produto;
printf("Tipo do produto:\n");
scanf(" %[^\n]", produto.tipo);
capitalizeString(produto.tipo);
printf("Nome do produto:\n");
scanf(" %[^\n]", produto.nome);
capitalizeString(produto.nome);
printf("Preco:\n");
scanf("%f",&produto.preco);
printf("Data de fabricacao (dia mes ano):\n");
scanf("%d %d %d", &produto.data_fabricacao.dia, &produto.data_fabricacao.mes,&produto.data_fabricacao.ano);
printf("Data de validade (dia mes ano):\n");
scanf("%d %d", &produto.data_validade.mes,&produto.data_validade.ano);
preencherDepartamento(&produto.departamento);
printf("Quantidade de estoque:\n");
scanf("%d",&produto.estoque);

}

void add_lista_arquivo(ListaProduto* produto){
  FILE* arquivo = fopen("produtos.txt", "w");
  if (arquivo == NULL){
    printf("erro ao criar arquivo!\n");
    exit(1);
  }
  ListaProduto* novo = produto;

    while(novo != NULL){
    Produto* prod = novo->info;
        fprintf(arquivo, "Tipo: %s\n", prod->tipo);
        fprintf(arquivo, "Nome do produto:\n", prod->nome);
        fprintf(arquivo, "Preco: %.2f\n", prod->preco);
        fprintf(arquivo, "Data de fabricacao: %d/%d/%d\n", prod->data_fabricacao.dia, prod->data_fabricacao.mes, prod->data_fabricacao.ano);
        fprintf(arquivo, "Data de validade: %d/%d\n", prod->data_validade.mes, prod->data_validade.ano);
        fprintf(arquivo, "Departamento: %s\n", prod->departamento);
        fprintf(arquivo, "Quantidade em estoque: %d\n", prod->estoque);
        novo = novo->prox;
    }
    fclose(arquivo);
    
    ListaProduto* ordena(ListaProduto* p, Produto produto);{

}
    ListaProduto* ordenalista(ListaProduto* p, Produto* produto){
>>>>>>> d0abdb6da0e5224a60f99fbb4c26f31cc6561266
        ListaProduto*novo = (ListaProduto*)malloc(sizeof(ListaProduto));
        if(novo == NULL){
            printf("Erro ao alocar memoria!\n");
            exit(1);
        }
        novo->info = produto;
        ListaProduto* ant = NULL;
        ListaProduto* aux = p;

        while(aux != NULL && aux->info->nome < produto->nome){
            ant = aux;
            aux = aux->prox;
        }
      if(ant == NULL){
        novo->prox = p;
        novo->ant = NULL;
        p->ant = novo;
      }
      else{
        novo->prox = ant->prox;
        novo->ant = ant;
        ant->prox = novo;
        if(aux != NULL){
            aux->ant = novo;
        }
        return p;
      }
        }

void imprime_lista(ListaProduto* prod){
    ListaProduto*p;
    for(p=prod; p!=NULL; p=p->prox){
        printf("Tipo: %s\n", p->info->tipo);
        printf("Nome do produto:%s\n", p->info->nome);
        printf("Preco:%s\n", p->info->preco);
        printf("Data de fabricacao", p->info->data_fabricacao);
        printf("Data de validade:%s\n", p->info->data_validade);
        printf("Departamento", p->info->departamento);
        printf("Quantidade em estoque", p->info->estoque);
    }
}
ListaProduto* busca(ListaProduto* prod, char nomeProd[]){
   ListaProduto* p;
   for(p = prod; p != NULL; p = p->prox){
    if(strcmp(p->info->nome, nomeProd)==0){
        return p;
    }
   } 
    return NULL;
}

ListaProduto* retira(ListaProduto*l, char nome_produto[]){
    ListaProduto* p = busca(l,nome_produto);

    if(p->prox != NULL){//verifica se tem um nó seguinte
        p->prox->ant = p->ant;
    }
    if(l == NULL){//verifica se a lista está vazia
        return l;
    }
    if(p == l){//verifica se o nó a ser retirado é p primeiro da lista
        l = p->prox;
    }
    else{
        p->ant->prox = p->prox;
    }
    return l;
}
