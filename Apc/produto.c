#include"../Include/produto.h"

typedef struct produto{
char tipo[50];
char nome[50];
float preco;
int data_fabricacao;
char data_validade[11];
Departamento** departamento;
int estoque;
struct Produto* prox;
}Produto;

Produto* cria_prod(char tipo[50], char nome_produto[50], float preco,char fabric[11], char valid[11], int estoq, Departamento* depart){
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
p->prox = NULL;
return p;
}

void imprime_produto(Produto* prod){
    Produto* p;
    for(p=prod; p!=NULL; p = p->prox){
        printf("Tipo: %s\n", p->tipo);
        printf("Nome do produto:%s\n", p->nome);
        printf("Preco:%f\n", p->preco);
        printf("Data de fabricacao: %d/%d/%d", p->data_fabricacao);
        printf("Data de validade: %s/%s", p->data_validade);
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

Produto* insere_ordenado(Produto* produto, char* n){
Produto* novo;
Produto* ant = NULL;
Produto* p = produto; 

while(p != NULL && strcmp(p->nome,n) < 0){
    ant = p;
    p = p->prox;
}
novo = (Produto*)malloc(sizeof(Produto));
strcpy(novo->nome,n);
if (ant == NULL){
    novo->prox = produto;
    produto = novo;
}
else{
    novo->prox = ant->prox;
    ant->prox = novo;
}
return produto;
}

Produto** ler_arquivo(Produto** produto, int* tam){
Produto* lista_produto;
char linha[601];
int cont = 0;

 FILE* arquivo = fopen("produtos.txt", "r");
 if(arquivo == NULL){
    printf("Erro ao abrir o arquivo produtos.txt!\n");
    exit(1);
 }

while(fscanf(arquivo, sizeof(linha), arquivo)!= EOF){
    sscanf(linha, "Tipo: %[^\n]",lista_produto->tipo);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Nome do produto: %[^\n]", lista_produto->nome);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Preco: %f", arquivo);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Data de fabricacao: %[^\n]", arquivo);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Data de validade: %[^\n]", arquivo);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Departamento: %[^\n]", arquivo);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Estoque: %d", arquivo);
    fgets(linha, 600, arquivo);
}

lista_produto = insere_ordenado(lista_produto,linha);
cont++;
*produto = lista_produto;
*tam = cont;
fclose(arquivo);
return lista_produto;
}

Produto* grava_arquivo(Produto**produto, int tam){
    int cont;
    Produto* p;
    FILE* arquivo = fopen("produtos.txt", "w");
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo!\n");
        exit(1);
    }
for(p = produto; p!= NULL; p = p->prox){
        fprintf(arquivo, "Tipo: %s\n", p->tipo);
        fprintf(arquivo, "Nome do produto: %s\n", p->nome);
        fprintf(arquivo, "Preco: %f\n", p->preco);
        fprintf(arquivo, "Data de fabricação: %s\n", p->data_fabricacao);
        fprintf(arquivo, "Data de validade: %s\n", p->data_validade);
        fprintf(arquivo, "Departamento: %s\n", p->departamento);
        fprintf(arquivo, "Quantidade em estoque: %d\n", p->estoque);
        fprintf(arquivo, "\n");
    }  
    fclose(arquivo);
}

void libera_lista(Produto*l){
    Produto* p = l;
    Produto* t;
    while(p != NULL){
        t = p->prox;
        free(p);
        p = t;
    }
}
