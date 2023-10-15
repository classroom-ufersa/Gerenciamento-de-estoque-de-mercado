#include"departamento.h"
#include"produto.h"

typedef struct produto{
char tipo[50];
char nome[50];
float preco;
char data_fabricacao[11];
char data_validade[11];
Departamento* departamento;
int estoque;
}Produto;

Produto* cria_prod(char tipo[], char nome_produto[], float preco,char fabric[], char valid[], int estoq){
Produto* p = (Produto*)malloc(sizeof(Produto));
if(p == NULL){
    printf("Erro ao alocar memoria1\n");
    exit(1);
    }
}

void editar_produto(Produto* prod){
char op;

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
scanf(" %[^\n]", prod->data_fabricacao);
break;

case '5':
printf("Data de validade:\n");
scanf(" %[^\n]", prod->data_validade);
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
