#include"C:\Users\miche\projeto gerenciamento de mercado\Gerenciamento-de-estoque-de-mercado\Include\produto.h"

typedef struct produto{
char tipo[50];
char nome[50];
float preco;
char data_fabricacao[11];
char data_validade[11];
Departamento** departamento;
int estoque;
struct Produto* prox;
}Produto;

Produto* cria_prod(Produto* produto, char tipo[50], char nome_produto[50], float preco,char fabric[11], char valid[11], int estoq, Departamento** depart){
Produto* p = (Produto*)malloc(sizeof(Produto));
if(p == NULL){
    printf("Erro ao alocar memoria1\n");
    exit(1);
}
strcpy(p->tipo,tipo);
strcpy(p->nome,nome_produto);
p->preco = preco;
strcpy(p->data_fabricacao,fabric);
strcpy(p->data_validade,valid);
p->estoque = estoq;
p->departamento = depart;
p->prox = produto;
return p;
}

    ListaProduto* ordenalista(ListaProduto* p, Produto* produto){
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

void imprime_produto(Produto* prod){
    Produto*p;
    for(p=prod; p!=NULL; p=p->prox){
        printf("Tipo: %s\n", p->tipo);
        printf("Nome do produto:%s\n", p->nome);
        printf("Preco:%f\n", p->preco);
        printf("Data de fabricacao: %d/%d/%d", p->data_fabricacao);
        printf("Data de validade:%d/%d\n", p->data_validade);
        printf("Departamento", p->departamento);
        printf("Quantidade em estoque", p->estoque);
    }
}
    Produto* busca(Produto* prod, char nomeProd[]){
   Produto* p;
   for(p = prod; p != NULL; p = p->prox){
    if(strcmp(p->nome, nomeProd)==0){
        return p;
    }
   } 
    return NULL;
}

    Produto* retira(Produto*l, char nome_produto[]){
    Produto*ant = NULL;
    Produto* p = l;

    while(p->nome!=nome_produto){
        if(p == NULL){
            return l;//não achou e retorna a lista original
        }
    ant = p;
    p = p->prox;
    if(ant == NULL){//verifica se o nó a ser retirado é p primeiro da lista
        l = p->prox;
    }
    else{
        ant->prox = p->prox;
    }
    free(p);
    return l;
    }
}
