#include"../include/departamento.h"
#include"../include/produto.h"

typedef struct produto{
char tipo[50];
char nome[50];
float preco;
char data_fabricacao[11];
char data_validade[11];
Departamento* departamento;
int estoque;
struct produto* prox;
}Produto;

Produto* cria_prod(char tipo[], char nome_produto[], float preco,char fabric[], char valid[], int estoq){
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
p->departamento = NULL;
p->prox = NULL;
return p;
}

void imprime_produto(Produto* prod){
    Produto* p;
    for(p=prod; p!=NULL; p = p->prox){
        printf("Tipo: %s\n", p->tipo);
        printf("Nome do produto:%s\n", p->nome);
        printf("Preco:%f\n", p->preco);
        printf("Data de fabricacao: %s\n", p->data_fabricacao);
        printf("Data de validade: %s\n", p->data_validade);
        printf("Departamento: %s\n", p->departamento);
        printf("Quantidade em estoque: %d\n", p->estoque);
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
    }
    free(p);
    return l;
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

Produto* novo_prod = (Produto*)malloc(sizeof(Produto));
while(fscanf(arquivo, sizeof(linha), arquivo)!= EOF){
    sscanf(linha, "Tipo: %[^\n]",novo_prod->tipo);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Nome do produto: %[^\n]", novo_prod->nome);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Preco: %f", novo_prod->preco);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Data de fabricacao: %[^\n]", novo_prod->data_fabricacao);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Data de validade: %[^\n]", novo_prod->data_validade);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Departamento: %[^\n]", novo_prod->departamento);
    fgets(linha, 600, arquivo);

    sscanf(linha, "Estoque: %d", novo_prod->estoque);
    fgets(linha, 600, arquivo);

lista_produto = insere_ordenado(lista_produto,novo_prod);
cont++;
}
*produto = lista_produto;
*tam = cont;
fclose(arquivo);

return lista_produto;
}

void grava_arquivo(Produto**produto){
    Produto* p;
    FILE* arquivo = fopen("produtos.txt", "w");
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo!\n");
        exit(1);
    }
for(p = *produto; p!= NULL; p = p->prox){
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

char le_op(int menor_valor, int maior_valor){
int op;
char nome[50];

while (1){
    printf("Informe a sua opcao:\n");
    scanf(" %[^\n]", nome);
    op = nome[0];

if( op >= menor_valor && op <=maior_valor && strlen(nome)==1){
    limparBuffer();
    break;
}
else{
    printf("A opcao que voce deu e invalida!\n informe uma dentro so intervalo %d - %d", menor_valor, maior_valor);
    limparBuffer();
}
}
return op;
}

void limparBuffer(void){
int valor_lido;
do{
    valor_lido = getchar();
}while ((valor_lido != '\n') && (valor_lido != EOF));
}

void editar_produto(Produto* prod){
char op =  le_op('1','7');

printf("Informe qual oprcao deseja editar:\n");
printf("1- Tipo\n");
printf("2- Nome do produto\n");
printf("3-Preco\n");
printf("4-Data de fabricacao");
printf("5- Data de validade\n");
printf("60- Departamento\n");
printf("Quantidade em estoque");
le_op('1','4');

switch(op){
case '1':
printf("Tipo:\n");
scanf(" %[^\n]", prod->tipo);
break;

case '2':
printf("Nome:\n");
scanf(" %[^\n]", prod->nome);
break;

case '3':
printf("Preco:\n");
scanf("%f",&prod->preco);
break;

case '4':
printf("Data de fabricacao:\n");
fgets(prod->data_fabricacao,sizeof(prod->data_fabricacao),stdin);
break;

case '5':
printf("Data de validade:\n");
fgets(prod->data_validade,sizeof(prod->data_validade),stdin);
break;

case '6':
printf("Departamento:\n");
scanf(" %[^\n]", prod->departamento);
break;

case '7':
printf("Estoque:\n");
scanf("%d", prod->estoque);
break;

default:
printf("A opcao informada e invalida!\n tente outra\n");
break;
}
}